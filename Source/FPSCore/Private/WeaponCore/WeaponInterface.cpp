// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/WeaponInterface.h"


// Add default functionality here for any IWeaponInterface functions that are not pure virtual.
void IWeaponInterface::Attack()
{
}

void IWeaponInterface::StopAttack()
{
}

bool IWeaponInterface::Reload()
{
	return true;
}

void IWeaponInterface::Inspect()
{
}

USkeletalMeshComponent* IWeaponInterface::GetMainMeshComponent()
{
	return nullptr;
}
