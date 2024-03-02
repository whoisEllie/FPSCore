// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/LineTraceWeapon.h"

#include "Helpers/Debugs.h"
#include "FPSCharacterController.h"
#include "NiagaraFunctionLibrary.h"
#include "CharacterCore/CharacterCore.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
ALineTraceWeapon::ALineTraceWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;

	if (WeaponData.Magazine.RecoilRecoveryCurve)
	{
		FOnTimelineFloat RecoveryProgressFunction;
		RecoveryProgressFunction.BindUFunction(this, FName("HandleRecoveryProgress"));
		RecoilRecoveryTimeline.AddInterpFloat(WeaponData.Magazine.RecoilRecoveryCurve, RecoveryProgressFunction);
	}
	/*
	// Testing dynamic attachment allocation
	USkeletalMeshComponent* AttachmentComponent = NewObject<USkeletalMeshComponent>(this, "Attachment Mesh");
	AttachmentComponent->SetupAttachment(RootComponent);
	AttachmentComponent->RegisterComponent();
	// TODO: Assign skeletal mesh
	Attachments.Add(AttachmentComponent); */
}


void ALineTraceWeapon::Attack()
{
	IWeaponInterface::Attack();

	if (bCanFire)
	{
		GetWorldTimerManager().SetTimer(ShotDelay, this, &ALineTraceWeapon::Fire, (60 / WeaponData.FiringMechanism.FireRate), WeaponData.FiringMechanism.bAutomaticFire, 0.0f);
	}
	
}

void ALineTraceWeapon::StartRecoil()
{
	const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	const AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(Character->GetController());

	if (bCanFire && CurrentAmmoCount > 0 && CharacterController && WeaponState == Idle)
	{
		ControlRotation = CharacterController->GetControlRotation();
		ShotCount = 0;
	}
}

void ALineTraceWeapon::StopAttack()
{
	IWeaponInterface::StopAttack();

	WeaponState = Idle;
	GetWorldTimerManager().ClearTimer(ShotDelay);
}


void ALineTraceWeapon::Inspect()
{
	IWeaponInterface::Inspect();
}

void ALineTraceWeapon::Fire()
{
	if (bCanFire && CurrentAmmoCount > 0 && WeaponState == Idle)
	{
		WeaponState = Firing;
		
		FHitResult Hit;
		
		const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

		if (bShowDebug)
		{
			Debugs::DebugText(EDebugSeverity::Log, 2.0f, "Fire");
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
            //FVector TraceEnd = TraceStart + (TraceDirection * WeaponData.LineTrace.LengthMultiplier);
			FVector TraceEnd = FVector::ZeroVector;

			//Recoil();

			if (Animations.Weapon.Gunshot)
			{
				MeshComp->PlayAnimation(Animations.Weapon.Gunshot, false);
			}

			FCollisionQueryParams QueryParams;

			QueryParams.AddIgnoredActor(this);
			QueryParams.bTraceComplex = true;
			QueryParams.bReturnPhysicalMaterial = true;

			if (GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_GameTraceChannel18, QueryParams))
			{
				float FinalDamage = WeaponData.Magazine.BaseDamage + WeaponData.General.DamageModifier;

				FinalDamage *= WeaponData.Magazine.DamageModifiers[Hit.PhysMaterial.Get()];

				UGameplayStatics::ApplyPointDamage(Hit.GetActor(), FinalDamage, TraceDirection, Hit, GetInstigatorController(), this, DamageType);

				//TODO: Redo this logic so that all gunshots are broadcast, with hit if the gunshot hit something
				if (Character)
				{
					if (UInventoryComponent* InventoryComponent = Character->FindComponentByClass<UInventoryComponent>(); IsValid(InventoryComponent))
					{
						InventoryComponent->EventHitActor.Broadcast(Hit);
					}
				}
			} else
			{
				//TODO: Draw Debugs
			}

			const FRotator ParticleRotation = (TraceEnd - (MeshComp->GetSocketLocation(WeaponData.Barrel.MuzzleLocation))).Rotation();

			// Spawn the bullet trace particle effect
			//TODO: Figure out where to store weapon particle effects
			//UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponData.)

			// Spawn the hit effect based on the hit physical material
			UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponData.Barrel.HitEffects[Hit.PhysMaterial.Get()], Hit.ImpactPoint, Hit.ImpactNormal.Rotation());

			// Spawn the muzzle flash particle effect

			// Spawn the firing sound

			if (!WeaponData.FiringMechanism.bAutomaticFire)
			{
				RecoilRecoveryTimeline.PlayFromStart();
			}

			WeaponState = Idle;
		}
	}
	else if (bCanFire && WeaponState != Reloading)
	{
		//TODO: Make sure that this works for attachments too
		//UGameplayStatics::PlaySoundAtLocation(GetWorld(), /*Empty fire sound*/, MeshComp->GetSocketLocation(WeaponData.Barrel.MuzzleLocation));
		GetWorldTimerManager().ClearTimer(ShotDelay);

		WeaponState = Idle;

		RecoilRecoveryTimeline.PlayFromStart();
	}
}

void ALineTraceWeapon::Recoil()
{
	const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(Character->GetController());

	// Apply recoil by adding a pitch and yaw input to the character controller
	if (CharacterController && IsValid(WeaponData.Magazine.VerticalRecoilCurve) && IsValid(WeaponData.Magazine.HorizontalRecoilCurve))
	{
		// Calculate the point of the curve from which to sample the recoil amount
		const float InTime = ShotCount * (60 / WeaponData.FiringMechanism.FireRate);

		// Apply the recoil to the character's pitch and yaw inputs
		CharacterController->AddPitchInput(WeaponData.Magazine.VerticalRecoilCurve->GetFloatValue(InTime));
		CharacterController->AddYawInput(WeaponData.Magazine.HorizontalRecoilCurve->GetFloatValue(InTime));
	}

	ShotCount++;

	// TODO: Handle camera shake
}

bool ALineTraceWeapon::Reload()
{
	const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(Character->GetController());

	float AnimTime = FallbackReloadTime;

	if (CharacterController->AmmoMap.Contains(WeaponData.Magazine.AmmoType))
	{
		if (WeaponState != Reloading && CharacterController->AmmoMap[WeaponData.Magazine.AmmoType] > 0)
		{
			if (CurrentAmmoCount <= 0 && Animations.Hands.EmptyReload && Animations.Weapon.EmptyReload)
			{
				MeshComp->PlayAnimation(Animations.Weapon.EmptyReload, false);
				AnimTime = Character->GetMainAnimationMesh()->GetAnimInstance()->Montage_Play(Animations.Hands.EmptyReload, 1.0f);
			}
		}
		else if (Animations.Hands.Reload && Animations.Weapon.Reload)
		{
			 MeshComp->PlayAnimation(Animations.Weapon.Reload, false);
			 AnimTime = Character->GetMainAnimationMesh()->GetAnimInstance()->Montage_Play(Animations.Hands.Reload, 1.0f);
		}
		else
		{
			Debugs::DebugText(EDebugSeverity::Low, 2.0f, "Tried to reload, but could not find animations, defaulting to fixed-length reload");
		}

		if (bShowDebug)
		{
			Debugs::DebugText(EDebugSeverity::Log, 2.0f, "Reloading");
		}

		WeaponState = Reloading;

		GetWorldTimerManager().SetTimer(ReloadingDelay, this, &ALineTraceWeapon::UpdateAmmo, AnimTime, false, AnimTime);

		return true;
	}

	Debugs::DebugText(EDebugSeverity::High, 2.0f, "Ammo Map entry not found for current ammo type");
	return false;
}

void ALineTraceWeapon::UpdateAmmo()
{
	if (bShowDebug)
	{
		Debugs::DebugText(EDebugSeverity::Log, 2.0f, "Completed Ammunition Update");
	}

	const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(Character->GetController());

	const bool bBulletInChamber = (CurrentAmmoCount > 0 && WeaponData.FiringMechanism.bCanBeChambered);

	const int Difference = WeaponData.Magazine.MagazineSize - CurrentAmmoCount;

	// Making sure we have enough ammunition to reload
	if (CharacterController->AmmoMap[WeaponData.Magazine.AmmoType] >= Difference + (bBulletInChamber ? 1 : 0))
	{
		CurrentAmmoCount = WeaponData.Magazine.MagazineSize + (bBulletInChamber ? 1 : 0);
		CharacterController->AmmoMap[WeaponData.Magazine.AmmoType] -= (Difference + (bBulletInChamber ? 1 : 0));
	}
	else
	{
		CurrentAmmoCount += CharacterController->AmmoMap[WeaponData.Magazine.AmmoType];
		CharacterController->AmmoMap[WeaponData.Magazine.AmmoType] = 0;
	}

	WeaponState = Idle;
}

// Called every frame
void ALineTraceWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	RecoilRecoveryTimeline.TickTimeline(DeltaTime);
}


// Resetting the player's camera to the position it was at before they began firing
void ALineTraceWeapon::HandleRecoveryProgress(float Value) const
{
	// Getting a reference to the Character Controller
	const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
	AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(Character->GetController());

	// Calculate the new control rotation by interpolating between the current rotation and our pre-set target rotation
	const FRotator NewControlRotation = FMath::Lerp(CharacterController->GetControlRotation(), ControlRotation, Value);

	// Update the control rotation on the character
	CharacterController->SetControlRotation(NewControlRotation);
}

void ALineTraceWeapon::BeginPlay()
{
	Super::BeginPlay();
}
