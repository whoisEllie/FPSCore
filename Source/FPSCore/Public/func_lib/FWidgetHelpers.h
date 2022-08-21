// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/CanvasPanel.h"

/**
 * 
 */
class FWidgetHelpers
{
public:
	FWidgetHelpers();
	~FWidgetHelpers();

	/** Iterates through the widget tree in order to find the next highest canvas
	 *	@param Widget The widget who's parent canvas to find
	 *	@return The next highest canvas in the widget tree
	 */
	static UUserWidget* GetParentCanvas(const UWidget* Widget);
};
