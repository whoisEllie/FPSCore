// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "CharacterCore/TPSCharacter.h"
#include "DrawDebugHelpers.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InventoryComponent.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/TimelineComponent.h"
#include "Engine/Engine.h"
#include "TimerManager.h"
#include "Engine/LocalPlayer.h"
#include "Math/UnrealMathUtility.h"
// ReSharper disable once CppUnusedIncludeDirective
#include "EnhancedInputSubsystems.h"
#include "GameFramework/Character.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"

// Sets default values
ATPSCharacter::ATPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    // Spawning the spring arm component
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    SpringArmComponent->bUsePawnControlRotation = true;
    SpringArmComponent->SetupAttachment(GetMesh());
    
    // Spawning the camera atop the FPS hands mesh
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
    if (SpringArmComponent)
    {
        CameraComponent->AttachToComponent(SpringArmComponent, FAttachmentTransformRules::KeepRelativeTransform);
    }
    LookOriginComponent = CameraComponent;
}

// Called when the game starts or when spawned
void ATPSCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    DefaultSpringArmOffset = SpringArmComponent->GetRelativeLocation().Z; // Setting the default location of the spring arm

}

void ATPSCharacter::Vault(FTransform TargetTransform)
{
    Super::Vault(TargetTransform);
    // Updating our target location and playing the vault timeline from start
    VaultStartLocation = GetActorTransform();
    VaultEndLocation = TargetTransform;
    UpdateMovementState(EMovementState::State_Vault);
    if (VaultMontage)
    {
        GetMesh()->GetAnimInstance()->Montage_Play(VaultMontage, 1.0f);
    }
    VaultTimeline.PlayFromStart();
}

void ATPSCharacter::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

    // Timeline tick
    VaultTimeline.TickTimeline(DeltaTime);

	// Crouching
	// Sets the new Target Half Height based on whether the player is crouching or standing
	const float TargetHalfHeight = (MovementState == EMovementState::State_Crouch || MovementState == EMovementState::State_Slide)? CrouchedCapsuleHalfHeight : DefaultCapsuleHalfHeight;
    const float SpringArmTargetOffset = (MovementState == EMovementState::State_Crouch || MovementState == EMovementState::State_Slide)? DefaultSpringArmOffset + CrouchedSpringArmHeightDelta : DefaultSpringArmOffset;
    // Interpolates between the current height and the target height
	const float NewHalfHeight = FMath::FInterpTo(GetCapsuleComponent()->GetScaledCapsuleHalfHeight(), TargetHalfHeight, DeltaTime, CrouchSpeed);
    const float NewLocation = FMath::FInterpTo(CurrentSpringArmOffset, SpringArmTargetOffset, DeltaTime, CrouchSpeed);
    CurrentSpringArmOffset = NewLocation;
	// Sets the half height of the capsule component to the new interpolated half height
	GetCapsuleComponent()->SetCapsuleHalfHeight(NewHalfHeight);
    FVector NewSpringArmLocation = SpringArmComponent->GetRelativeLocation();
    NewSpringArmLocation.Z = NewLocation;
    SpringArmComponent->SetRelativeLocation(NewSpringArmLocation);

    if (bRestrictSprintAngle)
    {
        const float CurrentRelativeMovementAngle = CheckRelativeMovementAngle(DeltaTime);
        
        // Sprinting
        if (CurrentRelativeMovementAngle > (SprintAngleLimit * (PI/180)) && MovementState == EMovementState::State_Sprint)
        {
            UpdateMovementState(EMovementState::State_Walk);
            bRestrictingSprint = true;
        }
        else if (CurrentRelativeMovementAngle < (SprintAngleLimit * (PI/180)) && bRestrictingSprint && bWantsToSprint && MovementState != EMovementState::State_Sprint)
        {
            UpdateMovementState(EMovementState::State_Sprint);
            bRestrictingSprint = false;
        }
    }
    
    
    // FOV adjustments
    if (MovementDataMap.Contains(EMovementState::State_Walk))
    {
        float TargetFOV = ((MovementState == EMovementState::State_Sprint || MovementState == EMovementState::State_Slide) && GetVelocity().Size() > MovementDataMap[EMovementState::State_Walk].MaxWalkSpeed)? BaseFOV + FOVOffset + SpeedFOVChange : BaseFOV + FOVOffset;
        if (InventoryComponent)
        {
            if (InventoryComponent->GetCurrentWeapon())
            {
                /*if (bIsAiming && InventoryComponent->GetCurrentWeapon()->GetStaticWeaponData()->bAimingFOV && !InventoryComponent->GetCurrentWeapon()->IsReloading())
                {
                    TargetFOV = BaseFOV + FOVOffset - InventoryComponent->GetCurrentWeapon()->GetStaticWeaponData()->AimingFOVChange;
                }*/
            }
        }
        
        //Interpolates between current fov and target fov
        const float InFieldOfView = FMath::FInterpTo(CameraComponent->FieldOfView, TargetFOV, DeltaTime, FOVChangeSpeed);
        // Sets the new camera FOV
        CameraComponent->SetFieldOfView(InFieldOfView);
    }
    else
    {
        UE_LOG(LogProfilingDebugging, Error, TEXT("Set up data in MovementDataMap!"))
    }

    // Continuous aiming check (so that you don't have to re-press the ADS button every time you jump/sprint/reload/etc)
    if (bWantsToAim == true && MovementState != EMovementState::State_Sprint && MovementState != EMovementState::State_Slide)
    {
        bIsAiming = true;
    }
    else
    {
        bIsAiming = false;
    }

    // Slide performed check, so that if the player is in the air and presses the slide key, they slide when they land
    if (GetCharacterMovement()->IsMovingOnGround() && !bPerformedSlide && bWantsToSlide)
    {
        if (bCanSlide)
        {
            StartSlide();
        }
        bWantsToSlide = false;
    }

    // Checks whether we can vault every frame
    CheckVault();

    // Checks the floor angle to determine whether we should keep sliding or not
    CheckGroundAngle(DeltaTime);
}
