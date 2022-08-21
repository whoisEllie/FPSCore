// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponBase.h"

/**
 * 
 */
class FDebugHelpers
{
public:

	/**
	 * Prints a String array to the screen
	 * @param Arr Array of strings to print
	 * @param Color Color of printed text
	 * @param DisplayTime The display time in seconds
	 */
	static void PrintStrArray(TArray<FString> Arr, FColor Color, float DisplayTime);

	/**
	 * Prints a Name array to the screen
	 * @param Arr Array of names to print
	 * @param Color Color of printed text
	 * @param DisplayTime The display time in seconds
	 */
	static void PrintNameArray(TArray<FName> Arr, FColor Color, float DisplayTime);

	/**
	 * Prints an Int array to the screen
	 * @param Arr Array of Ints to print
	 * @param Color Color of printed text
	 * @param DisplayTime The display time in seconds
	 */
	static void PrintIntArray(TArray<int> Arr, FColor Color, float DisplayTime);
	
	/**
	 * Prints a Float array to the screen
	 * @param Arr Array of floats to print
	 * @param Color Color of printed text
	 * @param DisplayTime The display time in seconds
	 */
	static void PrintFloatArray(TArray<float> Arr, FColor Color, float DisplayTime);
};
