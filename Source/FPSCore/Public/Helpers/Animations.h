// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Animations.generated.h"

/** A struct containing all the animations needed by FPS Core, in order to simplify blueprint operations */
USTRUCT(BlueprintType)
struct FHandAnimations 
{
	GENERATED_BODY()

	/** The walking BlendSpace */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UBlendSpace* Walk;

	/** The ADS Walking BlendSpace */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UBlendSpace* Ads_Walk;

	/** The Idle animation sequence */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Idle;

	/** The ADS Idle animation sequence */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Ads_Idle;
	
	/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Jump_Start;

	/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Jump_End;

	/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Fall;

	/** The sprinting animation sequence */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Sprint;

	/** The weapon's reload animation */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimMontage* Reload;

	/** The reload animation for when the weapon is empty */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimMontage* EmptyReload;
	
	/** The animation to play when inspecting the weapon */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimMontage* Inspect;
	
	/** The animation to play when equipping this weapon */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimMontage* Equip;

	/** The animation to play when unequipping this weapon */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimMontage* Unequip;
	
	/** Custom user animations */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TMap<FString, UAnimSequence*> CustomAnimations;
	
	/** Custom user animations */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TMap<FString, UBlendSpace*> CustomBlendSpaces;
};

USTRUCT(BlueprintType)
struct FWeaponAnimations
{
	GENERATED_BODY()
	
	/** The weapon's reload animation */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimationAsset* Reload;

	/** The reload animation for when the weapon is empty */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimationAsset* EmptyReload;
	
	/** The animation to play when inspecting the weapon */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimMontage* Inspect;

	/** The shooting animation for the weapon itself (bolt shooting back/forward) */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Gunshot;
	
	/** The animation to play when equipping this weapon */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimMontage* Equip;

	/** The animation to play when unequipping this weapon */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimMontage* Unequip;
	
	/** Custom user animations */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TMap<FString, UAnimSequence*> CustomAnimations;
	
	/** Custom user animations */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TMap<FString, UBlendSpace*> CustomBlendSpaces;
};

USTRUCT(BlueprintType)
struct FFPSCoreAnimations
{
	GENERATED_BODY()

	UPROPERTY(BlueprintReadOnly)
	FWeaponAnimations Weapon;

	UPROPERTY(BlueprintReadOnly)
	FHandAnimations Hands;
};



UCLASS()
class FPSCORE_API UGlobalCharacterAnimStruct : public UObject
{
	GENERATED_BODY()
	
};
