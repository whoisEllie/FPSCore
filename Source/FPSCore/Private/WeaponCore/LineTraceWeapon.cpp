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
	if (WeaponData.Magazine.VerticalRecoilCurve)
	{
		FOnTimelineFloat VerticalRecoilProgressFunction;
		VerticalRecoilProgressFunction.BindUFunction(this, FName("HandleVerticalRecoilProgress"));
		VerticalRecoilTimeline.AddInterpFloat(WeaponData.Magazine.VerticalRecoilCurve, VerticalRecoilProgressFunction);
	}

	if (WeaponData.Magazine.HorizontalRecoilCurve)
	{
		FOnTimelineFloat HorizontalRecoilProgressFunction;
		HorizontalRecoilProgressFunction.BindUFunction(this, FName("HandleHorizontalRecoilProgress"));
		HorizontalRecoilTimeline.AddInterpFloat(WeaponData.Magazine.HorizontalRecoilCurve, HorizontalRecoilProgressFunction);
	}
}


void ALineTraceWeapon::Attack()
{
	IWeaponInterface::Attack();

	if (bCanFire)
	{
		GetWorldTimerManager().SetTimer(ShotDelay, this, &ALineTraceWeapon::Fire, (60 / WeaponData.FiringMechanism.FireRate), WeaponData.FiringMechanism.bAutomaticFire, 0.0f);

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

	if (bCanFire && CurrentAmmoCount > 0 && CharacterController)
	{
		VerticalRecoilTimeline.PlayFromStart();
		HorizontalRecoilTimeline.PlayFromStart();
		ControlRotation = CharacterController->GetControlRotation();
	}
}

void ALineTraceWeapon::EnableFire()
{
	bCanFire = true;
}

void ALineTraceWeapon::StopAttack()
{
	IWeaponInterface::StopAttack();

	VerticalRecoilTimeline.Stop();
	HorizontalRecoilTimeline.Stop();

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
	if (bCanFire && CurrentAmmoCount > 0 && WeaponState != Reloading)
	{
		FHitResult Hit;
		
		const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

		if (bShowDebug)
		{
			Debugs::DebugText(EDebugSeverity::Low, 2.0f, "Fire");
		}

		CurrentAmmoCount -= 1;

		const int NumberOfShots = WeaponData.Magazine.bIsShotgun ? WeaponData.Magazine.ShotgunPellets : 1;

		for (int i = 0; i < NumberOfShots; i++)
		{
			FVector TraceStart = Character->GetLookOriginComponent()->GetComponentLocation();
			FRotator TraceStartRotation = Character->GetLookOriginComponent()->GetComponentRotation();

			const float AccuracyMultiplier = Character->IsPlayerAiming() ? WeaponData.Magazine.AccuracyDebuff : 1.0f;
			
            TraceStartRotation.Pitch += FMath::FRandRange(
                -((WeaponData.Magazine.WeaponPitchVariation + WeaponData.General.WeaponPitchVariationModifier) * AccuracyMultiplier),
                (WeaponData.Magazine.WeaponPitchVariation + WeaponData.General.WeaponPitchVariationModifier) * AccuracyMultiplier);
            TraceStartRotation.Yaw += FMath::FRandRange(
                -((WeaponData.Magazine.WeaponYawVariation + WeaponData.General.WeaponYawVariationModifier) * AccuracyMultiplier),
                (WeaponData.Magazine.WeaponYawVariation + WeaponData.General.WeaponYawVariationModifier) * AccuracyMultiplier);
            FVector TraceDirection = TraceStartRotation.Vector();
            FVector TraceEnd = TraceStart + (TraceDirection * WeaponData.LineTrace.LengthMultiplier);

			//Recoil();

			if (Animations.Weapon.Gunshot)
			{
				MeshComp->PlayAnimation(Animations.Weapon.Gunshot, false);
			}

			FVector DisplayEndPoint = TraceEnd;

			FCollisionQueryParams QueryParams;

			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = true;
			QueryParams.bReturnPhysicalMaterial = true;

			if (GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_GameTraceChannel18, QueryParams))
			{
				float FinalDamage = WeaponData.Magazine.BaseDamage + WeaponData.General.DamageModifier;

				UGameplayStatics::ApplyPointDamage(Hit.GetActor(), FinalDamage, TraceDirection, Hit, GetInstigatorController(), this, DamageType);
			}
		}
	}
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

