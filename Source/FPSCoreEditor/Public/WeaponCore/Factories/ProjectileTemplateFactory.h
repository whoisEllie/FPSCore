// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "WeaponCore/ProjectileTemplate.h"
#include "ProjectileTemplateFactory.generated.h"

/**
 * 
 */
UCLASS()
class FPSCOREEDITOR_API UProjectileTemplateFactory : public UFactory
{
	GENERATED_BODY()
	
public:
	UProjectileTemplateFactory(const FObjectInitializer& ObjectInitializer);
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);
};
