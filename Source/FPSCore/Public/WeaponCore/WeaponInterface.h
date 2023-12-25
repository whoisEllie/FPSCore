// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AmmoType.h"
#include "WeaponPickup.h"
#include "UObject/Interface.h"
#include "WeaponCore/WeaponData.h"
#include "Helpers/GlobalCharacterAnimStruct.h"
#include "WeaponInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UWeaponInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FPSCORE_API IWeaponInterface
{
	GENERATED_BODY()

// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:

	UFUNCTION()
	virtual void Attack();

	UFUNCTION()
	virtual void StopAttack();

	UFUNCTION()
	virtual bool Reload();

	UFUNCTION()
	virtual void Inspect();
	
	/** Determines the socket or bone with which the weapon will be attached to the character's hand (typically the root bone or the grip bone) */
	UPROPERTY()
	FName WeaponAttachmentSocketName;

	/** The Ammo Type to use for this weapon */
	UPROPERTY()
	UAmmoType AmmoType;
	
	/** Pickup reference */
	UPROPERTY()
	TSubclassOf<AWeaponPickup> PickupReference;

	/** Declares the animations  */
	UPROPERTY()
	FFPSCoreAnimations Animations;
};
