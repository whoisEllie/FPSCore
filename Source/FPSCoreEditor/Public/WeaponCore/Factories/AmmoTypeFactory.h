// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "AmmoTypeFactory.generated.h"

/**
 * 
 */
UCLASS()
class FPSCOREEDITOR_API UAmmoTypeFactory : public UFactory
{
	GENERATED_BODY()

public:
	UAmmoTypeFactory();
	UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
	
};
