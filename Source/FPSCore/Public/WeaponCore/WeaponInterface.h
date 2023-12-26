// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AmmoType.h"
#include "WeaponPickup.h"
#include "Helpers/Animations.h"
#include "UObject/Interface.h"
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
	FName WeaponAttachmentSocketName;

	/** The Ammo Type to use for this weapon */
	UAmmoType AmmoType;
	
	/** Pickup reference */
	TSubclassOf<AWeaponPickup> PickupReference;

	/** Declares the animations  */
	FFPSCoreAnimations Animations;
};
