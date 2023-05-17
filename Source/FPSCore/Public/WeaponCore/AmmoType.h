// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AmmoType.generated.h"

/**
 * 
 */
UCLASS()
class FPSCORE_API UAmmoType : public UObject
{
	GENERATED_BODY()

public:

	FName GetDisplayName() const { return AmmoTypeName; }

	FName GetDisplayCaliber() const { return Caliber; }

private:

	UPROPERTY(EditDefaultsOnly, Category = "Ammo Type")
	FName AmmoTypeName;

	UPROPERTY(EditDefaultsOnly, Category = "Ammo Type")
	FName Caliber;

	UPROPERTY(EditDefaultsOnly, Category = "Ammo Type")
	UTexture2D* Icon;	
};
