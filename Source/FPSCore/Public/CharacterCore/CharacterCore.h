// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "InputActionValue.h"
// ReSharper disable once CppUnusedIncludeDirective
#include "InputMappingContext.h" // Rider may mark this as unused, but this is incorrect and removal will cause issues
#include "WeaponBase.h"
#include "Components/InventoryComponent.h"
#include "Components/TimelineComponent.h"
#include "GameFramework/Character.h"
#include "CharacterCore.generated.h"

class UCameraComponent;
class USpringArmComponent;
class USkeletalMeshComponent;
class AWeaponBase;
class UAnimMontage;
class UCurveFloat;
class UBlendSpace;

/** Movement state enumerator holding all possible movement states */
UENUM(BlueprintType)
enum class EMovementState : uint8
{
	State_Walk      UMETA(DisplayName = "Walking"),
	State_Sprint    UMETA(DisplayName = "Sprinting"),
	State_Crouch    UMETA(DisplayName = "Crouching"),
	State_Slide		UMETA(DisplayName = "Sliding"),
	State_Vault	    UMETA(DisplayName = "Vaulting")
};

/** Variables associated with each movement state */
USTRUCT(BlueprintType)
struct FMovementVariables
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement Variables")
	bool bCanFire = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement Variables")
	bool bCanReload = true;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement Variables")
	float MaxAcceleration = 2048.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement Variables")
	float BreakingDecelerationWalking = 2048.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement Variables")
	float GroundFriction = 8.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Movement Variables")
	float MaxWalkSpeed;
};

UCLASS()
class FPSCORE_API ACharacterCore : public ACharacter
{
	GENERATED_BODY()

public:

	/** Returns the character's forward movement (from 0 to 1) */
	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	float GetForwardMovement() const { return ForwardMovement; }

	/** Returns the character's sideways movement (from 0 to 1) */
	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	float GetRightMovement() const { return RightMovement; }

	/** Returns the character's vertical mouse position (from 0 to 1) */
	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	float GetMouseY() const { return MouseY; }

	/** Returns the character's horizontal mouse position (from 0 to 1) */
	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	float GetMouseX() const { return MouseX; }

	/** Update the base FOV
	 * @param NewFOV The FOV to use as a new BaseFOV
	 */
	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	void SetBaseFOV(const float NewFOV) { BaseFOV = NewFOV; }

	/** Returns the current visibility of the crosshair */
	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	bool IsCrosshairVisible() const { return bShowCrosshair; }

	/** Update the visibility of the crosshair in HUD UI component
	 * @param bVisible The new visibility of the crosshair
	 */
	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	void SetCrosshairVisibility(const bool bVisible) { bShowCrosshair = bVisible; }

	/** Returns whether the player is currently aiming or not */
	UFUNCTION(BlueprintPure, Category = "FPS Character")
	bool IsPlayerAiming() const { return bIsAiming; }
	
	/** Returns the character's current movement state */
	UFUNCTION(BlueprintPure, Category = "FPS Character")
	EMovementState GetMovementState() const { return MovementState; }



	/** Returns the character's empty-handed walking blend space */
	UFUNCTION(BlueprintPure, Category = "FPS Character")
	UBlendSpace* GetEmptyWalkBlendSpace() const { return HandsAnimSet.BS_Walk; }

	/** Returns the character's empty-handed idle animation */
	UFUNCTION(BlueprintPure, Category = "FPS Character")
	UAnimSequence* GetEmptyIdleAnim() const { return HandsAnimSet.Anim_Idle; }

	/** Returns the character's set of animations */
	UFUNCTION(BlueprintPure, Category = "Weapon Base", meta=(DeprecatedFunction))
	FFPSHandsAnimSet GetWeaponAnimations() const
	{
		return GetPlayerAnimations();
	}
	
	/** Returns the character's set of animations */
	UFUNCTION(BlueprintPure, Category = "Weapon Base")
	FFPSHandsAnimSet GetPlayerAnimations() const
	{
		return HandsAnimSet;
	}

	/** Returns the character's current input mapping context */
	UFUNCTION(BlueprintPure, Category = "FPS Character")
	UInputMappingContext* GetBaseMappingContext() const { return BaseMappingContext; }

	/** Returns the Inventory Component */
	UInventoryComponent* GetInventoryComponent() const { return InventoryComponent; }

	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	void UpdateFOVOffset(const float NewOffset) { FOVOffset = NewOffset; }

	UFUNCTION(BlueprintCallable, Category = "FPS Character")
	void RuntimeUpdateMovementValues(const EMovementState MovementStateToUpdate, const FMovementVariables NewMovementVariables)
	{
		MovementDataMap[MovementStateToUpdate] = NewMovementVariables;
	}

	/** A global system that handles updates to the movement state and changes relevant values accordingly
	*	@param NewMovementState The new movement state of the player
	*/
	void UpdateMovementState(EMovementState NewMovementState);

	USkeletalMeshComponent* GetMainAnimationMesh() const { return AnimationMeshComponent; };

	USceneComponent* GetLookOriginComponent() const { return LookOriginComponent; }
	
protected:

	// Preset component slots

	// Used as a global mesh that can be customised - the mesh that animations are played on
	UPROPERTY()
	USkeletalMeshComponent* AnimationMeshComponent;

	// Used as the direction the player is looking in, i.e. the 'camera' - determines stuff like where shots and interaction traces come from
	UPROPERTY()
	USceneComponent* LookOriginComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Animations")
	FFPSHandsAnimSet HandsAnimSet;

	/** Hand montage, played during vault */
	UPROPERTY(EditDefaultsOnly, Category = "Animations")
	UAnimMontage* VaultMontage;

#pragma region FUNCTIONS

	/** Sets default values for this character's properties */
	ACharacterCore();

	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	virtual void PawnClientRestart() override;
	
	/** Alternative to the built in Crouch function
	 *  Handles crouch input and decides what action to perform based on the character's current state
	 */
	void ToggleCrouch();
	
	/** Transitions the character out of the crouched state
	 *	@param bToSprint Whether to transition into a sprint state
	 */
	void StopCrouch(bool bToSprint);;

	/** Exits the character from the slide state if they are sliding and updates bHoldingCrouch */
	void ReleaseCrouch();

	/** Starting to sprint */
	void StartSprint();

	/** Stopping to sprint */
	void StopSprint();

	/** Starting to slide */
	void StartSlide();

	/** Stopping to slide */
	void StopSlide();

	/** Function that runs on tick and checks if we should execute the Vault() functions */
	void CheckVault();
	
	/** Function that actually executes the Vault
	 * @param TargetTransform The location to which to interpolate the player
	 */
	virtual void Vault(FTransform TargetTransform);
	
	/** Checks the angle of the floor to determine slide behaviour */
	void CheckGroundAngle(float DeltaTime);

	/** Checks the relative angle that the player is moving in (forwards/backwards/left/right) to determine if they can sprint */
	float CheckRelativeMovementAngle(float DeltaTime) const;

	/** Trace above the player to make sure we have enough space to stand up */
	bool HasSpaceToStandUp();

	/** Ticks the timeline */
	UFUNCTION()
	void TimelineProgress(float Value);

	/** Move the character left/right and forward/back
	 *	@param Value The value passed in by the Input Component
	 */
	void Move(const FInputActionValue& Value);

	/** Look left/right and up/down
	 *	@param Value The value passed in by the Input Component
	 */
	void Look(const FInputActionValue& Value);

	/** Starts ADS */
	void StartAds();

	/** Ends ADS */
	void StopAds();
		
	/** Called every frame */
	virtual void Tick(float DeltaTime) override;

#pragma endregion 

#pragma region USER_VARIABLES
		
	/** Prints debug variables if true */
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	bool bDrawDebug;
	
	/** Sets the height of the player's capsule component when crouched */	
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Crouch")
	float CrouchedCapsuleHalfHeight = 58.0f;
	
	/** The rate at which the character crouches */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Crouch") 
	float CrouchSpeed = 10.0f;

	/** Whether crouching has to be held or can be toggled */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Crouch")
	bool bCrouchIsToggle = true;

	/** Whether to prevent the user from sprinting past a specific angle */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Sprint")
	bool bRestrictSprintAngle;
	
	/** The maximum angle at which the player can sprint before returning to a walk */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Sprint")
	float SprintAngleLimit = 180;

	/** Whether the character is allowed to slide */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Slide")
	bool bCanSlide = true;
	
	/** The time in seconds between the beginning of a slide and when it is ended */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Slide")
	float SlideTime = 1.0f;

	/** The angle that the floor has to be at in order for sliding to not be cancelled after SlideTime has passed */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Slide")
	float SlideContinueAngle = -15.0f;

	/** Whether the character is allowed to vault */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Vault")	
	bool bCanVault = true;
	
	/** The height of the highest surface that the player can mantle up onto */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Vault")
	float MaxMantleHeight = 200.0f;
	
	/** The amount of traces to draw for vault collision checks, to get distance in unreal units, multiply by 5 */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Vault")
	int VaultTraceAmount = 25.0f;

	/** The amount of unreal units that need to be free above an obstacle for the player to be able to vault over it */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Vault")
	float VaultSpaceHeight = 50.0f;

	/** Curve that controls motion during vault */
	UPROPERTY(EditAnywhere, Category = "Movement | Vault")
	UCurveFloat* VaultTimelineCurve;
	
	/** A map holding data for each movement state */
	UPROPERTY(EditDefaultsOnly, Category = "Movement | Data")
	TMap<EMovementState, FMovementVariables> MovementDataMap;
	
	/** The game's default FOV */
	UPROPERTY(EditDefaultsOnly, Category = "Camera | FOV")
	float BaseFOV = 77.0f;
	
	/** The speed at which FOV changes occur */
	UPROPERTY(EditDefaultsOnly, Category = "Camera | FOV")
	float FOVChangeSpeed = 6.0f;
	
	/** The increase in FOV during fast actions, such as sprinting and sliding */
	UPROPERTY(EditDefaultsOnly, Category = "Camera | FOV")
	float SpeedFOVChange = 5.0f;

#pragma endregion 

#pragma region INTERNAL_VARIABLES
	
	/** Enumerator holding the 5 possible movement states defined by EMovementState */
	UPROPERTY()
    EMovementState MovementState;
	
	/** The timeline for vaulting (generated from the curve) */
	UPROPERTY()
	FTimeline VaultTimeline;
	
	/** Hit results for various line traces */
	FHitResult FootstepHit;

	FHitResult StandUpHit;
	
	FHitResult VaultHit;

	FHitResult VaultHeightHit;

	FHitResult MantleHit;

	FHitResult AngleHit;
	
	/** Whether the player is holding down the aim down sights button */
	bool bWantsToAim;

	/** Whether the player is holding down the sprint key */
	bool bWantsToSprint;

	bool bRestrictingSprint = false;
	
	/** Whether we should display a crosshair or not */
	bool bShowCrosshair;
	
	/** Whether the player is actually aiming down sights */
	bool bIsAiming;
	
	/** Whether we are currently vaulting or not */
	bool bIsVaulting;
	
	/** Whether the player is holding the crouch button */
	bool bHoldingCrouch;
	
	/** Whether the character has performed a slide yet? */
	bool bPerformedSlide;
	
	/** Whether the player wants to slide (is holding the crouch/slide key, but not on the ground) */
	bool bWantsToSlide;
	
	/** Whether the character is sprinting */
	bool bIsSprinting;
	
	/** Whether the character is crouching */
	bool bIsCrouching;
	
	/** The start location of a vaulting or mantle */
	FTransform VaultStartLocation;

	/** The end location of a vault or mantle */
	FTransform VaultEndLocation;
	
	/** Set automatically, the base height of the capsule */
	float DefaultCapsuleHalfHeight;

	/** The current angle of the floor beneath the player */
	float FloorAngle;
	
	/** The forward movement value (used to drive animations) */
	float ForwardMovement;
	
	/** The right movement value (used to drive animations) */
	float RightMovement;

	/** The look up value (used to drive procedural weapon sway) */
	float MouseY;

	/** The right look value (used to drive procedural weapon sway) */
	float MouseX;
	
	/** The change in height of the spring arm that the camera + hands rest on when the player is crouched. This
	 *	is calculated automatically
	 *
	 *	In order to best line up with the crouched height, this should be equal to the
	 *	CrouchedCapsuleHalfHeight minus the capsule's default height. For example, if the default capsule half height
	 *	is 88.0f, and the crouched half height is 58.0f, then the crouched spring arm height delta should be -30
	 */
	float CrouchedSpringArmHeightDelta;


	
	/** The current offset of the spring arm */
	float CurrentSpringArmOffset = 0.0f;

	/** A user-driven FOV offset. This will apply an additional offset to the base FOV, whatever that may be. */
	float FOVOffset; 
	
	/** The target location of a vault or mantle */
	FTransform VaultTargetLocation;

	/** Timer manager for sliding */
	FTimerHandle SlideStop;

	/** A reference to the player's Inventory Component */ 
	UPROPERTY()
	UInventoryComponent* InventoryComponent;

#pragma endregion 

#pragma region INPUT

	/** Input actions */

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* MovementAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* LookAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* JumpAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* SprintAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* CrouchAction;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* FiringAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* PrimaryWeaponAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* SecondaryWeaponAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* ReloadAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* AimAction;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* InteractAction;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* ScrollAction;

	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* InspectWeaponAction;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input | Actions")
	UInputAction* PauseAction;

	/** Input Mappings */

	UPROPERTY(EditDefaultsOnly, Category = "Input | Mappings")
	UInputMappingContext* BaseMappingContext;
	
	UPROPERTY(EditDefaultsOnly, Category = "Input | Mappings")
	int32 BaseMappingPriority = 0;

	/** Called to bind functionality to input */
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

#pragma endregion
};
