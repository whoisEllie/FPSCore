// Fill out your copyright notice in the Description page of Project Settings.


#include "func_lib/FWidgetHelpers.h"

FWidgetHelpers::FWidgetHelpers()
{
}

FWidgetHelpers::~FWidgetHelpers()
{
}

// Iterates through a widget tree until it finds a canvas
UUserWidget* FWidgetHelpers::GetParentCanvas(const UWidget* Widget)
{
	UObject* Outer = Widget->GetOuter();
	
	while (!IsValid(Cast<UUserWidget>(Outer)))
	{
		Outer = Outer->GetOuter();
	}
	return Cast<UUserWidget>(Outer);
}
