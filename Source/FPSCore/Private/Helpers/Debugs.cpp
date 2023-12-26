// Fill out your copyright notice in the Description page of Project Settings.


#include "Helpers/Debugs.h"

void Debugs::DebugText(EDebugSeverity DebugSeverity, float DisplayTime, FString DebugText)
{
	FColor Color;

	switch (DebugSeverity)
	{
		case EDebugSeverity::Low:
			Color = FColor::Green;
			break;
		case EDebugSeverity::Medium:
			Color = FColor::Orange;
			break;
		case EDebugSeverity::High:
			Color = FColor::Red;
			break;
		case EDebugSeverity::Extreme:
			Color = FColor::Magenta;
			break;
		default:
			Color = FColor::Black;
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, Color, TEXT("No severity specified"));
	}

	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, DebugText);
}
