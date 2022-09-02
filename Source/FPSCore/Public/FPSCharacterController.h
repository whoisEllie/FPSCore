// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"
#include "GameFramework/PlayerController.h"
#include "FPSCharacterController.generated.h"

class FPSCORE_API AWeaponBase; 

UCLASS()
class AFPSCharacterController : public APlayerController
{
	GENERATED_BODY()
	
	public:
	
	/** Stored ammo data for the player character */
    UPROPERTY(EditDefaultsOnly, Category = "Inventory")
    TMap<EAmmoType, int32> AmmoMap;

	/** The amount of ammunition boxes that the player has */
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Inventory")
	int AmmoBoxCount;
};
