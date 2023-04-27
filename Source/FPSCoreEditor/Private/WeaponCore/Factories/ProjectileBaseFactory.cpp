// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/Factories/ProjectileBaseFactory.h"

#include "Kismet2/KismetEditorUtilities.h"
#include "WeaponCore/ProjectileBase.h"

UProjectileBaseFactory::UProjectileBaseFactory(const FObjectInitializer& ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = false;
	SupportedClass = AProjectileBase::StaticClass();
	ParentClass = SupportedClass;
}

UObject* UProjectileBaseFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                                  UObject* Context, FFeedbackContext* Warn)
{
	return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, InName, BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass(), NAME_None);
}