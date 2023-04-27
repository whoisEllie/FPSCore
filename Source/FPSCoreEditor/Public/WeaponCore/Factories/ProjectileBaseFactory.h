// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Factories/Factory.h"
#include "WeaponCore/ProjectileBase.h"
#include "ProjectileBaseFactory.generated.h"

/**
 * 
 */
UCLASS()
class FPSCOREEDITOR_API UProjectileBaseFactory : public UFactory
{
	GENERATED_BODY()
	
public:
	UProjectileBaseFactory(const FObjectInitializer& ObjectInitializer);
	virtual UObject* FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags, UObject* Context, FFeedbackContext* Warn);

private:

	UPROPERTY()
	TSubclassOf<AProjectileBase> ParentClass;
};
