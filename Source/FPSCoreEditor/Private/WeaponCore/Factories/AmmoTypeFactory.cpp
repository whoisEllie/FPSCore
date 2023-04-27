// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/Factories/AmmoTypeFactory.h"
#include "WeaponCore/AmmoType.h"

UAmmoTypeFactory::UAmmoTypeFactory()
{
	SupportedClass = UAmmoType::StaticClass();
	bCreateNew = true;
}

UObject* UAmmoTypeFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<UAmmoType>(InParent, InClass, InName, Flags, Context);
}
