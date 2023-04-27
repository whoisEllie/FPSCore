// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "LineTraceBulletFactory.generated.h"

/**
 * 
 */
UCLASS()
class FPSCOREEDITOR_API ULineTraceBulletFactory : public UFactory
{

	GENERATED_BODY()
	
public:
	ULineTraceBulletFactory();
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
