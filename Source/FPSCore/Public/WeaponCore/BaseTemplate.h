// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AmmoType.h"
#include "UObject/Object.h"
#include "BaseTemplate.generated.h"

/**
 * 
 */
UCLASS()
class FPSCORE_API UBaseTemplate : public UObject
{
	GENERATED_BODY()

protected:

	UPROPERTY(EditDefaultsOnly)
	UAmmoType* AmmoType;
};
