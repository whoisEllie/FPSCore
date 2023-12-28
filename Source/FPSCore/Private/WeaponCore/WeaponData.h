// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "WeaponCore/AmmoType.h"
#include "CoreMinimal.h"

USTRUCT(BlueprintType)
struct FGeneralData
{
	GENERATED_BODY()

	/** The modification to the weapon's base damage */
	UPROPERTY(EditDefaultsOnly)
	float DamageModifier;
	
	/** The modification to the pitch variation applied to the bullet as it leaves the barrel */
	UPROPERTY(EditDefaultsOnly)
	float WeaponPitchVariationModifier;
	
	/** The modification to the yaw variation applied to the bullet as it leaves the barrel */
	UPROPERTY(EditDefaultsOnly)
	float WeaponYawVariationModifier;
};

USTRUCT(BlueprintType)
struct FBarrelData
{
	GENERATED_BODY()
	
	/** Whether the weapon is silenced or not */
	UPROPERTY(EditDefaultsOnly)
	bool bSilenced;

	/** We wait for the animation to finish before the player is allowed to fire again (for weapons where the character has to perform an action before being able to fire again) Requires fireMontage to be set */
	UPROPERTY(EditDefaultsOnly)
	bool bWaitForAnim;

	/** Whether to prevent players from spam-firing this weapon faster than the assigned Rate of Fire */
	UPROPERTY(EditDefaultsOnly)
	bool bPreventRapidManualFire;

	/** The name of the socket which denotes the end of the muzzle (used for gunfire) */
	UPROPERTY(EditDefaultsOnly)
	FName MuzzleLocation;

	/** The name of the socket at which to spawn particles for muzzle flash */
	UPROPERTY(EditDefaultsOnly)
	FName ParticleSpawnLocation;

	/** The camera shake to be applied to the recoil from this weapon */
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCameraShakeBase> RecoilCameraShake;

};

USTRUCT()
struct FFiringMechanismData
{
	GENERATED_BODY()
	
	/** Determines if the weapon can have a round in the chamber or not */
	UPROPERTY(EditDefaultsOnly)
	bool bCanBeChambered;
	
	/** The rate of fire (In rounds per minute/RPM) of the weapon */
	UPROPERTY(EditDefaultsOnly)
	float FireRate;
	
	/** Whether this weapon supports automatic fire */
	UPROPERTY(EditDefaultsOnly)
	bool bAutomaticFire;
};

USTRUCT(BlueprintType)
struct FMagazineData
{
	GENERATED_BODY()

	/** The amount of ammunition stored in the magazine */
	int MagazineSize;
	
	/** The vertical recoil curve to be used with this weapon */
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* VerticalRecoilCurve;

	/** The horizontal recoil curve to be used with this weapon */
	UPROPERTY(EditDefaultsOnly)
	UCurveFloat* HorizontalRecoilCurve;

	/** The type of ammunition stored in the magazine */
	UAmmoType AmmoType;
	
	/** Unmodified damage values of this weapon */
	UPROPERTY(EditDefaultsOnly)
	float BaseDamage;
	
	/** Multiplier to be applied when the player hits an enemy's head bone */
	UPROPERTY(EditDefaultsOnly)
	float HeadshotMultiplier;
	
	/** Whether this weapon is a shotgun or not */
	UPROPERTY(EditDefaultsOnly)
	bool bIsShotgun = false;
	
	/** The amount of pellets fired */
	UPROPERTY(EditDefaultsOnly)
	int ShotgunPellets;
	
	/** The increase in shot variation when the player is not aiming down the sights */
	UPROPERTY(EditDefaultsOnly)
	float AccuracyDebuff = 1.25f;
};

USTRUCT(BlueprintType)
struct FSightData
{
	GENERATED_BODY()

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
};

USTRUCT(BlueprintType)
struct FWeaponMetadata
{
	GENERATED_BODY()
	
	/** The name of this weapon */
	UPROPERTY(EditDefaultsOnly, Category = "Viewport")
	FName WeaponName;

	/** A display image associated with this weapon */
	UPROPERTY(EditDefaultsOnly, Category = "Viewport")
	UTexture2D* WeaponIcon;
};

USTRUCT(BlueprintType)
struct FLineTraceData
{
	GENERATED_BODY()
	
	/** The distance the shot will travel */
	UPROPERTY(EditDefaultsOnly)
	float LengthMultiplier;
};

USTRUCT(BlueprintType)
struct FProjectileData
{
	GENERATED_BODY()	
};

USTRUCT(BlueprintType)
struct FLineTraceWeaponData
{
	GENERATED_BODY()

	FBarrelData Barrel;

	FFiringMechanismData FiringMechanism;

	FMagazineData Magazine;

	FSightData Sight;

	FLineTraceData LineTrace;

	FWeaponMetadata Metadata;
};

USTRUCT(BlueprintType)
struct FProjectileWeaponData 
{
	GENERATED_BODY()

	FBarrelData Barrel;

	FFiringMechanismData FiringMechanism;

	FMagazineData Magazine;

	FSightData Sight;

	FProjectileData LineTrace;

	FWeaponMetadata Metadata;
};

/**
 * 
 */
class FPSCORE_API WeaponData {};
