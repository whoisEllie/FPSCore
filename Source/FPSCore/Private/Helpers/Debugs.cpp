// Fill out your copyright notice in the Description page of Project Settings.


#include "Helpers/Debugs.h"

void Debugs::DebugText(EDebugSeverity DebugSeverity, float DisplayTime, FString DebugText)
{
	FColor Color;

	switch (DebugSeverity)
	{
		case EDebugSeverity::Log:
			Color = FColor::Green;
			UE_LOG(LogTemp, Log, TEXT("%f"), *DebugText);
			break;
		case EDebugSeverity::Low:
			Color = FColor::Orange;
			UE_LOG(LogTemp, Display, TEXT("%f"), *DebugText);
			break;
		case EDebugSeverity::Medium:
			Color = FColor::Red;
			UE_LOG(LogTemp, Warning, TEXT("%f"), *DebugText);
			break;
		case EDebugSeverity::High:
			Color = FColor::Magenta;
			UE_LOG(LogTemp, Error, TEXT("%f"), *DebugText);
			break;
		default:
			Color = FColor::Black;
			GEngine->AddOnScreenDebugMessage(-1, 2.0f, Color, TEXT("No severity specified"));
	}

	GEngine->AddOnScreenDebugMessage(-1, DisplayTime, Color, DebugText);
}
