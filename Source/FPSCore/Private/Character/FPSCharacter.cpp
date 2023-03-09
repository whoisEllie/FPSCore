// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "Character/FPSCharacter.h"
#include "DrawDebugHelpers.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "FPSCharacterController.h"
#include "WeaponBase.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InteractionComponent.h"
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
#include "GameFramework/InputSettings.h"
#include "GameFramework/SpringArmComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AFPSCharacter::AFPSCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
    
    // Spawning the spring arm component
    SpringArmComponent = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArmComp"));
    SpringArmComponent->bUsePawnControlRotation = true;
    SpringArmComponent->SetupAttachment(RootComponent);
    
    // Spawning the FPS hands mesh component and attaching it to the spring arm component
    HandsMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
    HandsMeshComp->CastShadow = false;
    HandsMeshComp->AttachToComponent(SpringArmComponent, FAttachmentTransformRules::KeepRelativeTransform);
    
    // Spawning the camera atop the FPS hands mesh
    CameraComponent = CreateDefaultSubobject<UCameraComponent>(TEXT("CameraComp"));
    if (HandsMeshComp)
    {
        CameraComponent->AttachToComponent(HandsMeshComp, FAttachmentTransformRules::KeepRelativeTransform, "CameraSocket");
    }
}

// Called when the game starts or when spawned
void AFPSCharacter::BeginPlay()
{
    Super::BeginPlay();
    
    DefaultSpringArmOffset = SpringArmComponent->GetRelativeLocation().Z; // Setting the default location of the spring arm

}

void AFPSCharacter::Tick(float DeltaSeconds)
{
}
