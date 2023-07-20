// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GlobalCharacterAnimStruct.generated.h"

/** A struct containing all the animations needed by FPS Core, in order to simplify blueprint operations */
USTRUCT(BlueprintType)
struct FFPSHandsAnimSet
{
	GENERATED_BODY()

	/** The walking BlendSpace */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UBlendSpace* BS_Walk;

	/** The ADS Walking BlendSpace */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UBlendSpace* BS_Ads_Walk;

	/** The Idle animation sequence */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Anim_Idle;

	/** The ADS Idle animation sequence */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Anim_Ads_Idle;
	
	/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Anim_Jump_Start;

	/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Anim_Jump_End;

	/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Anim_Fall;

	/** The sprinting animation sequence */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	UAnimSequence* Anim_Sprint;

	/** Custom user animations */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TMap<FString, UAnimSequence*> CustomAnimations;
	
	/** Custom user animations */
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
	TMap<FString, UBlendSpace*> CustomBlendSpaces;
};

UCLASS()
class FPSCORE_API UGlobalCharacterAnimStruct : public UObject
{
	GENERATED_BODY()
	
};
