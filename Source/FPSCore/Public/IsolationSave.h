// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "IsolationSave.generated.h"

/**
 * 
 */
UCLASS()
class FPSCORE_API UIsolationSave : public USaveGame
{
	GENERATED_BODY()

	UPROPERTY(VisibleAnywhere, Category = "Audio")
	float EffectsVolume;
	
	UPROPERTY(VisibleAnywhere, Category = "Audio")
	float InterfaceVolume;
	
	UPROPERTY(VisibleAnywhere, Category = "Audio")
	float AmbientVolume;
	
	UPROPERTY(VisibleAnywhere, Category = "Audio")
	float MusicVolume;
	
};
