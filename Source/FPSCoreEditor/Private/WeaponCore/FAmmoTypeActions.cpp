// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/FAmmoTypeActions.h"

#include "WeaponCore/AmmoType.h"

UClass* FAmmoTypeActions::GetSupportedClass() const
{
	return UAmmoType::StaticClass();
}

FText FAmmoTypeActions::GetName() const
{
	return INVTEXT("Ammo Type");
}

FColor FAmmoTypeActions::GetTypeColor() const
{
	return FColor::Orange;
}

uint32 FAmmoTypeActions::GetCategories()
{
	return FAssetToolsModule::GetModule().Get().FindAdvancedAssetCategory(FName("Weapon Core"));
}
