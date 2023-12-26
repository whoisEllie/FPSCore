// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

UENUM(BlueprintType)
enum class EDebugSeverity : uint8
{
 Low,
 Medium,
 High,
 Extreme
};

/**
 * 
 */
class FPSCORE_API Debugs
{
public:
 /**
  * Display a standardised debug message
  * 
  * @param DebugSeverity The severity of the debug message, which determines it's color
  * @param DisplayTime The time in seconds to display the debug message for
  * @param DebugMessage The message to display
  */
 static void DebugText(EDebugSeverity DebugSeverity, float DisplayTime, FString DebugMessage);
 
};
