// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "WeaponPickup.h"

/** Struct holding all required information about the weapon class. This data is set once at tbe beginning of this
 * actor's lifetime, and then remains unchanged for it's duration. It encapsulates all the data regarding the statistics
 * of this weapon, as well as data regarding it's appearance, such as animations and particle effects.
 */
USTRUCT(BlueprintType)
struct FRequiredWeaponData 
{

	GENERATED_BODY()
	
	/** The distance the shot will travel */
	UPROPERTY(EditDefaultsOnly)
	float LengthMultiplier;
		
	/** unmodified damage values of this weapon */
	UPROPERTY(EditDefaultsOnly)
	float BaseDamage;
	
	/** multiplier to be applied when the player hits an enemy's head bone */
	UPROPERTY(EditDefaultsOnly)
	float HeadshotMultiplier;

	/** The pitch variation applied to the bullet as it leaves the barrel */
	UPROPERTY(EditDefaultsOnly)
	float WeaponPitchVariation;
	
	/** The yaw variation applied to the bullet as it leaves the barrel */
	UPROPERTY(EditDefaultsOnly)
	float WeaponYawVariation;

	/** Firing Mechanisms */

	/** Determines if the weapon can have a round in the chamber or not */
	UPROPERTY(EditDefaultsOnly)
	bool bCanBeChambered;

	/** Whether the weapon is silenced or not */
	UPROPERTY(EditDefaultsOnly)
	bool bSilenced;

	/** We wait for the animation to finish before the player is allowed to fire again (for weapons where the character has to perform an action before being able to fire again) Requires fireMontage to be set */
	UPROPERTY(EditDefaultsOnly)
	bool bWaitForAnim;

	/** Whether to prevent players from spam-firing this weapon faster than the assigned Rate of Fire */
	UPROPERTY(EditDefaultsOnly)
	bool bPreventRapidManualFire;

	/** Whether this weapon is a shotgun or not */
	UPROPERTY(EditDefaultsOnly)
	bool bIsShotgun = false;

	/** Whether the player's FOV should change when aiming with this weapon */
	UPROPERTY(EditDefaultsOnly)
	bool bAimingFOV = false;

	/** The decrease in FOV of the camera to when aim down sights */
	UPROPERTY(EditDefaultsOnly)
	float AimingFOVChange;

	/** The Magnification of the scope */
	UPROPERTY(EditDefaultsOnly)
	float ScopeMagnification = 1.0f;

	/** The linear FOV at a magnification of 1x */
	UPROPERTY(EditDefaultsOnly)
	float UnmagnifiedLFoV = 200.0f;
	
	/** The name of the socket which denotes the end of the muzzle (used for gunfire) */
	UPROPERTY(EditDefaultsOnly)
	FName MuzzleLocation;

	/** The name of the socket at which to spawn particles for muzzle flash */
	UPROPERTY(EditDefaultsOnly)
	FName ParticleSpawnLocation;

	/** The clip capacity of the weapon (Spawned on the pickup) */
	UPROPERTY(EditDefaultsOnly)
	int ClipCapacity;

	/** The clip size of the weapon (Spawned on the pickup) */
	UPROPERTY(EditDefaultsOnly)
	int ClipSize;

	/** The rate of fire (In rounds per minute/RPM) of the weapon */
	UPROPERTY(EditDefaultsOnly)
	float FireRate;

	/** Whether this weapon supports automatic fire */
	UPROPERTY(EditDefaultsOnly)
	bool bAutomaticFire;
		
	/** The vertical recoil curve to be used with this weapon */
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* VerticalRecoilCurve;

	/** The horizontal recoil curve to be used with this weapon */
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* HorizontalRecoilCurve;

	/** The camera shake to be applied to the recoil from this weapon */
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCameraShakeBase> RecoilCameraShake;

	/** The amount of pellets fired */
	UPROPERTY(EditDefaultsOnly)
	int ShotgunPellets;

	/** The increase in shot variation when the player is not aiming down the sights */
	UPROPERTY(EditDefaultsOnly)
	float AccuracyDebuff = 1.25f;

	/** Metadata */

	/** The name of this weapon */
	UPROPERTY(EditDefaultsOnly, Category = "Viewport")
	FName WeaponName;

	/** A display image associated with this weapon */
	UPROPERTY(EditDefaultsOnly, Category = "Viewport")
	UTexture2D* WeaponIcon;
};

#include "CoreMinimal.h"

/**
 * 
 */
class FPSCORE_API WeaponData {};
