// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Camera/CameraShakeBase.h"
#include "Components/TimelineComponent.h"
#include "Engine/DataTable.h"
#include "GameFramework/Actor.h"
#include "WeaponCore/WeaponInterface.h"
#include "Weapon.generated.h"

class AWeapon;
class USkeletalMeshComponent;
class USkeletalMesh;
class UStaticMesh;
class UAnimMontage;
class UAnimationAsset;
class UAnimSequence;
class UNiagaraSystem;
class UBlendSpace;
class USoundCue;
class UPhysicalMaterial;
class UDataTable;
class AWeaponPickup;



UCLASS()
class FPSCORE_API AWeapon : public AActor, public IWeaponInterface
{
	GENERATED_BODY()

public:

	/** Returns the runtime weapon data of the weapon */
	FRuntimeWeaponData* GetRuntimeWeaponData() { return &GeneralWeaponData; }

	/** Update the weapon's runtime weapon data
	 *	@param NewWeaponData The weapons new runtime weapon data 
	 */
	void SetRuntimeWeaponData(const FRuntimeWeaponData NewWeaponData) { GeneralWeaponData = NewWeaponData; }

	/** Returns a reference to the static weapon data of the weapon */
	FStaticWeaponData* GetStaticWeaponData() { return &WeaponData; }

	/** Updates the weapon's static weapon data
	 *	@param NewWeaponData The weapon's new static weapon data
	 */
	void SetStaticWeaponData(const FStaticWeaponData NewWeaponData) { WeaponData = NewWeaponData; }
	
	/** Plays the reload animation and sets a timer based on the length of the reload montage */
	virtual bool Reload() override;

	/** Connects this weapon to the weapon interface */
	virtual void Attack() override;
	virtual void StopAttack() override;

	/** Spawns the weapons attachments and applies their data/modifications to the weapon's statistics */ 
	void SpawnAttachments();

	/** Whether the weapon can fire or not */
	bool CanFire() const { return bCanFire; }

	/** Update the weapon's ability to fire
	 *	@param bNewFire The new state of the weapon's ability to fire
	 */
	void SetCanFire(const bool bNewFire) { bCanFire = bNewFire; }

	/** Update the weapon's ability to reload 
	 *	@param bNewReload The new state of the weapon's ability to reload
	 */	
	void SetCanReload(const bool bNewReload) { bCanReload = bNewReload; }

	/** Whether the weapon is currently in it's reload state */
	bool IsReloading() const { return bIsReloading; }

	/** Update the weapon's recovery behaviour
	 *	@param bNewShouldRecover Whether the weapon should recover from recoil or not
	 */
	void SetShouldRecover(const bool bNewShouldRecover) { bShouldRecover = bNewShouldRecover; } 

	/** A reference to the recoil recovery timeline */
	FTimeline* GetRecoilRecoveryTimeline() { return &RecoilRecoveryTimeline; }

	/** A reference to the key name of the Weapon Data datatable */
	FString GetDataTableNameRef() const { return DataTableNameRef; }

	UFUNCTION(BlueprintCallable, Category = "Weapon Base")
	void SetShowDebug(const bool IsVisible)
	{
		bShowDebug = IsVisible;
	};
	
	/** Returns the character's set of animations */
	UFUNCTION(BlueprintPure, Category = "Weapon Base")
	FFPSHandsAnimSet GetWeaponAnimations() const
	{
		return WeaponData.HandsAnimSet;
	}

	UFUNCTION(BlueprintPure, Category = "Weapon Base")
	USkeletalMeshComponent* GetMainMeshComp() const
	{
		return MeshComp;
	}

	/** Returns the vertical camera offset for this weapon instance */
	UFUNCTION(BlueprintCallable, Category = "Weapon Base")
	float GetVerticalCameraOffset() const { return VerticalCameraOffset; }

protected:
		
	/** The main skeletal mesh - holds the weapon model */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MeshComp;

	/** The skeletal mesh used to hold the current barrel attachment */
	UPROPERTY(BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* BarrelAttachment;

	/** The skeletal mesh used to hold the current magazine attachment */
	UPROPERTY(BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* MagazineAttachment;

	/** The skeletal mesh used to hold the current sights attachment */
	UPROPERTY(BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* SightsAttachment;

	/** The skeletal mesh used to hold the current stock attachment */
	UPROPERTY(BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* StockAttachment;

	/** The skeletal mesh used to hold the current grip attachment */
	UPROPERTY(BlueprintReadOnly, Category = "Components")
	USkeletalMeshComponent* GripAttachment;
	
private:

#pragma region FUNCTIONS
	
	/** Sets default values for this actor's properties */
	AWeapon();
	
	/** Spawns the line trace that deals damage and applies sound/visual effects */
	void Fire();	

	/** Applies recoil to the player controller */
	void Recoil();

	/** Updates ammunition values (we do this after the animation has finished for cleaner UI updates and to prevent the player from being able to switch weapons to skip the reload animation) */
	void UpdateAmmo();

	/** Allows the player to fire again */
	void EnableFire();

	/** Sets the weapon to be allowed to fire */
	void ReadyToFire();

	/** Begins applying recoil to the weapon */
	void StartRecoil();

	/** Initiates the recoil function */
	void RecoilRecovery();

	/** Interpolates the player back to their initial view vector */
	UFUNCTION()
	void HandleRecoveryProgress(float Value) const;
	
	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;
	
	/** Called every frame */
	virtual void Tick(float DeltaTime) override;

#pragma endregion

#pragma region USER_VARIABLES
	
	/** The framerate that the scope widget renders at. Cannot be faster than the game framerate - if so it will render
	 *	at the game's framerate */
	UPROPERTY(EditDefaultsOnly, Category = "Temp")
	float ScopeFrameRate = 60.0f;

	/** Data table reference */
	UPROPERTY(EditDefaultsOnly, Category = "Data | Data Table")
	UDataTable* WeaponDataTable;

	/** The Key reference to the weapon data table */
	UPROPERTY(EditDefaultsOnly, Category = "Data | Data Table")
	FString DataTableNameRef;

	/** Debug boolean, toggle for debug strings and line traces to be shown */
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	bool bShowDebug = false;

	/** Whether to draw debugs that obstruct the screen (such as more informative weapon tracing information) */
	UPROPERTY(EditAnywhere, Category = "Debug")
	bool bDrawObstructiveDebugs = false;
	
	/** damage type (set in blueprints) */
	UPROPERTY(EditDefaultsOnly, Category = "Data | Damage")
	TSubclassOf<UDamageType> DamageType;

	/** The curve for recovery */ 
	UPROPERTY(EditDefaultsOnly, Category = "Data | Recoil Recovery")
	UCurveFloat* RecoveryCurve;

	/** The ejected casing particle effect to be played after each shot */
	UPROPERTY(EditDefaultsOnly, Category = "Particles")
	UNiagaraSystem* EjectedCasing;

#pragma endregion 

#pragma region INTERNAL_VARIABLES
	
	FRuntimeWeaponData GeneralWeaponData;

	/** Determines if the player can fire */
	bool bCanFire = true;

	/** Determines if the player can reload */
	bool bCanReload = true;
	
	/** Keeps track of whether the weapon is being reloaded */
	bool bIsReloading = false;

	/** Keeps track of whether the weapon has been recently fired - used to prevent rapid manual fire */
	bool bHasFiredRecently = false;

	/** Keeps track of whether the weapon has cycled a shot and is ready to fire a new one */
	bool bIsWeaponReadyToFire = true;

	/** The sum of the modifications the attachments make to damage */
	float DamageModifier;

	/** The sum of the modifications the attachments make to pitch */
	float WeaponPitchModifier;

	/** The sum of the modifications the attachments make to yaw */
	float WeaponYawModifier;

	/** Reference to the data stored in the weapon DataTable */
	FStaticWeaponData WeaponData;

	/** Reference to the data stored in the attachment DataTable */
	FAttachmentData* AttachmentData;
	
	/** The override for the weapon socket, in the case that we have a barrel attachment */
	FName SocketOverride;
	
	/** The override for the particle system socket, in the case that we have a barrel attachment */
	FName ParticleSocketOverride;
	
	/** Keeps track of the starting position of the line trace */
	FVector TraceStart;
	
	/** keeps track of the starting rotation of the line trace (required for calculating the trace end point) */
	FRotator TraceStartRotation;
	
	/** keeps track of the vector direction of the line trace (derived from rotation) */
	FVector TraceDirection;
	
	/** end point of the line trace */
	FVector TraceEnd;

	/** hit result variable set when a line trace is spawned */
	UPROPERTY()
	FHitResult Hit;

	/** internal variable used to keep track of the final damage value after modifications */
	float FinalDamage;
	
	/** The timer that handles automatic fire */
	FTimerHandle ShotDelay;
	
	/** The timer that is used when we need to wait for an animation to finish before being able to fire again */
	FTimerHandle AnimationWaitDelay;
	
	/** The timer used to keep track of how long a reloading animation takes and only assigning variables */ 
	FTimerHandle ReloadingDelay;

	/** The timer used to keep track of whether to  */
	FTimerHandle SpamFirePreventionDelay;
	
	/** The curve for vertical recoil (set from WeaponData) */
	UPROPERTY()
	UCurveFloat* VerticalRecoilCurve;

	/** The timeline for vertical recoil (generated from the curve) */
	FTimeline VerticalRecoilTimeline;

	/** The curve for horizontal recoil (set from WeaponData) */ 
	UPROPERTY()
	UCurveFloat* HorizontalRecoilCurve;

	/** The timeline for horizontal recoil (generated from the curve) */
	FTimeline HorizontalRecoilTimeline;

	/** The timeline for recover (set from the curve) */
	FTimeline RecoilRecoveryTimeline;
	
	/** A value to temporarily cache the player's control rotation so that we can return to it */
	FRotator ControlRotation;

	/** Keeping track of whether we should do a recoil recovery after finishing firing or not */
	bool bShouldRecover;

	/** Used in recoil to make sure the first shot has properly applied recoil */
	int ShotsFired;
	
	/** The base multiplier for vertical recoil, modified by attachments */
	float VerticalRecoilModifier = 1.0f;

	/** The base multiplier for horizontal recoil, modified by attachments */
	float HorizontalRecoilModifier = 1.0f;
	
	/** Animation */

	/** Value used to keep track of the length of animations for timers */
	float AnimTime;

	/** The offset given to the camera in order to align the gun sights */
	UPROPERTY()
	float VerticalCameraOffset;
	
	/** Local instances of animations for use in AnimBP (Set from WeaponData and/or Attachments) */

	UPROPERTY()
	UAnimMontage* WeaponEquip;
	
	UPROPERTY()
	UBlendSpace* WalkBlendSpace;
	
	UPROPERTY()
	UBlendSpace* ADSWalkBlendSpace;

	UPROPERTY()
	UAnimSequence* Anim_Idle;

	UPROPERTY()
	UAnimSequence* Anim_Sprint;

	UPROPERTY()
	UAnimSequence* Anim_ADS_Idle;

	UPROPERTY()
	UAnimSequence* Anim_Jump_Start;

	UPROPERTY()
	UAnimSequence* Anim_Jump_End;

	UPROPERTY()
	UAnimSequence* Anim_Fall;

	UPROPERTY()
	UAnimationAsset* EmptyWeaponReload;
	
	UPROPERTY()
	UAnimationAsset* WeaponReload;
	
	UPROPERTY()
	UAnimMontage* EmptyPlayerReload;
	
	UPROPERTY()
	UAnimMontage* PlayerReload;

#pragma endregion
};
