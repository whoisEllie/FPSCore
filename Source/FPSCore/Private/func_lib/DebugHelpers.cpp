// Fill out your copyright notice in the Description page of Project Settings.


#include "func_lib/DebugHelpers.h"


void FDebugHelpers::PrintStrArray(TArray<FString> Arr, const FColor Color, const float DisplayTime)
{
	for (FString Element: Arr)
	{
		GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, Element);
	}
}

void FDebugHelpers::PrintNameArray(TArray<FName> Arr, const FColor Color, const float DisplayTime)
{
	for (FName Element: Arr)
	{
		GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, Element.ToString());
	}
}

void FDebugHelpers::PrintIntArray(TArray<int> Arr, const FColor Color, const float DisplayTime)
{
	for (const int Element: Arr)
	{
		GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, FString::FromInt(Element));
	}
}

void FDebugHelpers::PrintFloatArray(TArray<float> Arr, const FColor Color, const float DisplayTime)
{
	for (const float Element: Arr)
	{
		GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, FString::SanitizeFloat(Element));
	}
}