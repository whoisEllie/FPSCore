// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/Factories/ProjectileTemplateFactory.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "WeaponCore/ProjectileTemplate.h"

UProjectileTemplateFactory::UProjectileTemplateFactory(const FObjectInitializer& ObjectInitializer)
{
	SupportedClass = UProjectileTemplate::StaticClass();
	bCreateNew = true;
}

UObject* UProjectileTemplateFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                                  UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UProjectileTemplate>(InParent, InClass, InName, Flags, Context);
}