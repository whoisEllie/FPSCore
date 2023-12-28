// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/LineTraceWeapon.h"

#include "FPSCharacterController.h"
#include "CharacterCore/CharacterCore.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALineTraceWeapon::ALineTraceWeapon()
{
	
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	// Setting our recoil & recovery curves
	if (WeaponData.VerticalRecoilCurve)
	{
		FOnTimelineFloat VerticalRecoilProgressFunction;
		VerticalRecoilProgressFunction.BindUFunction(this, FName("HandleVerticalRecoilProgress"));
		VerticalRecoilTimeline.AddInterpFloat(WeaponData.VerticalRecoilCurve, VerticalRecoilProgressFunction);
	}

	if (WeaponData.HorizontalRecoilCurve)
	{
		FOnTimelineFloat HorizontalRecoilProgressFunction;
		HorizontalRecoilProgressFunction.BindUFunction(this, FName("HandleHorizontalRecoilProgress"));
		HorizontalRecoilTimeline.AddInterpFloat(WeaponData.HorizontalRecoilCurve, HorizontalRecoilProgressFunction);
	}
}


void ALineTraceWeapon::Attack()
{
	IWeaponInterface::Attack();

	if (bCanFire)
	{
		GetWorldTimerManager().SetTimer(ShotDelay, this, &ALineTraceWeapon::Fire, (60 / WeaponData.FireRate), WeaponData.bAutomaticFire, 0.0f);

		if (bShowDebug)
		{
			VerticalRecoilTimeline.PlayFromStart();
			HorizontalRecoilTimeline.PlayFromStart();
			Debugs::DebugText(EDebugSeverity::Low, 2.0f, TEXT("Test"));
		}
	}
	
}

void ALineTraceWeapon::StartRecoil()
{
	const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	const AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(Character->GetController());

	if (bCanFire && CharacterController)
	{
		VerticalRecoilTimeline.PlayFromStart();
		HorizontalRecoilTimeline.PlayFromStart();
		ControlRotation = CharacterController->GetControlRotation();
	}
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

	VerticalRecoilTimeline.TickTimeline(DeltaTime);
	HorizontalRecoilTimeline.TickTimeline(DeltaTime);
}

