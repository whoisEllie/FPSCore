// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/LineTraceWeapon.h"


// Sets default values
ALineTraceWeapon::ALineTraceWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}


void ALineTraceWeapon::Attack()
{
	IWeaponInterface::Attack();

	if (bCanFire)
	{
		GetWorldTimerManager().SetTimer(ShotDelay, this, &ALineTraceWeapon::Fire, (60 / WeaponData.FireRate), WeaponData.bAutomaticFire, 0.0f);

		if (bShowDebug)
		{
			Debugs::DebugText(EDebugSeverity::Low, 2.0f, TEXT("Test"));
		}
	}
	
}

void ALineTraceWeapon::StartRecoil()
{
}

void ALineTraceWeapon::StopAttack()
{
	IWeaponInterface::StopAttack();

	GetWorldTimerManager().ClearTimer(ShotDelay);
}

bool ALineTraceWeapon::Reload()
{
	return IWeaponInterface::Reload();
}

void ALineTraceWeapon::Inspect()
{
	IWeaponInterface::Inspect();
}

void ALineTraceWeapon::Fire()
{
}



// Called when the game starts or when spawned
void ALineTraceWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ALineTraceWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

