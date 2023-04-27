// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/Factories/LineTraceBulletFactory.h"
#include "WeaponCore/LineTraceBullet.h"

ULineTraceBulletFactory::ULineTraceBulletFactory()
{
	SupportedClass = ULineTraceBullet::StaticClass();
	bCreateNew = true;
}

UObject* ULineTraceBulletFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
	UObject* Context, FFeedbackContext* Warn)
{
	return NewObject<ULineTraceBullet>(InParent, InClass, InName, Flags, Context);
}
