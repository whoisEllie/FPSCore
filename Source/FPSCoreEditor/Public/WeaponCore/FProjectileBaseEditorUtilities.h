// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

/**
 * 
 */
class FProjectileBaseEditorUtilities
{
public:

    static bool PickChildrenOfClass(const FText& TitleText, UClass*& OutChosenClass, UClass* Class);
};
