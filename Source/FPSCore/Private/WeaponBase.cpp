// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "WeaponBase.h"
#include "Animation/AnimationAsset.h"
#include "Animation/AnimSequence.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"
#include "DrawDebugHelpers.h"
#include "NiagaraFunctionLibrary.h"
#include "Math/UnrealMathUtility.h"
#include "FPSCharacterController.h"
#include "FPSCharacter.h"
#include "Camera/CameraComponent.h"
#include "Curves/CurveFloat.h"
#include "Components/InventoryComponent.h"

// Sets default values
AWeaponBase::AWeaponBase()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

    // Creating our weapon's skeletal mesh, telling it to not cast shadows and finally setting it as the root of the actor
    MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MeshComp"));
    MeshComp->CastShadow = false;
    RootComponent = MeshComp;
    
    // Creating the skeletal meshes for our attachments and making sure that they do not cast shadows

    BarrelAttachment = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("BarrelAttachment"));
    BarrelAttachment->CastShadow = false;
    BarrelAttachment->SetupAttachment(RootComponent);

    MagazineAttachment = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("MagazineAttachment"));
    MagazineAttachment->CastShadow = false;
    MagazineAttachment->SetupAttachment(RootComponent);

    SightsAttachment = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SightsAttachment"));
    SightsAttachment->CastShadow = false;
    SightsAttachment->SetupAttachment(RootComponent);

    StockAttachment = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("StockAttachment"));
    StockAttachment->CastShadow = false;
    StockAttachment->SetupAttachment(RootComponent);

    GripAttachment = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("GripAttachment"));
    GripAttachment->CastShadow = false;
    GripAttachment->SetupAttachment(RootComponent);
}


// Called when the game starts or when spawned
void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();

    // Getting a reference to the relevant row in the WeaponData DataTable
    if (WeaponDataTable && (DataTableNameRef != ""))
    {
        WeaponData = *WeaponDataTable->FindRow<FStaticWeaponData>(FName(DataTableNameRef), FString(DataTableNameRef), true);
    }
    else
    {
        GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, TEXT("MISSING A WEAPON DATA TABLE NAME REFERENCE"));
    }
    
    // Setting our default animation values
    // We set these here, but they can be overriden later by variables from applied attachments.
    
    if (WeaponData.WeaponEquip)
    {
        WeaponEquip = WeaponData.WeaponEquip;
    }
    if (WeaponData.BS_Walk)
    {
        WalkBlendSpace = WeaponData.BS_Walk;
    }
    if (WeaponData.BS_Ads_Walk)
    {
        ADSWalkBlendSpace = WeaponData.BS_Ads_Walk;
    }
    if (WeaponData.Anim_Idle)
    {
        Anim_Idle = WeaponData.Anim_Idle;
    }
    if (WeaponData.Anim_Sprint)
    {
        Anim_Sprint = WeaponData.Anim_Sprint;
    }
    if (WeaponData.Anim_Ads_Idle)
    {
        Anim_ADS_Idle = WeaponData.Anim_Ads_Idle;
    }


    // Setting our recoil & recovery curves
    if (VerticalRecoilCurve)
    {
        FOnTimelineFloat VerticalRecoilProgressFunction;
        VerticalRecoilProgressFunction.BindUFunction(this, FName("HandleVerticalRecoilProgress"));
        VerticalRecoilTimeline.AddInterpFloat(VerticalRecoilCurve, VerticalRecoilProgressFunction);
    }

    if (HorizontalRecoilCurve)
    {
        FOnTimelineFloat HorizontalRecoilProgressFunction;
        HorizontalRecoilProgressFunction.BindUFunction(this, FName("HandleHorizontalRecoilProgress"));
        HorizontalRecoilTimeline.AddInterpFloat(HorizontalRecoilCurve, HorizontalRecoilProgressFunction);
    }

    if (RecoveryCurve)
    {
        FOnTimelineFloat RecoveryProgressFunction;
        RecoveryProgressFunction.BindUFunction(this, FName("HandleRecoveryProgress"));
        RecoilRecoveryTimeline.AddInterpFloat(RecoveryCurve, RecoveryProgressFunction);
    }
}

void AWeaponBase::SpawnAttachments()
{
    if (WeaponData.bHasAttachments)
    {
        for (FName RowName : GeneralWeaponData.WeaponAttachments)
        {
            // Going through each of our attachments and updating our static weapon data accordingly
            AttachmentData = WeaponData.AttachmentsDataTable->FindRow<FAttachmentData>(RowName, RowName.ToString(), true);

            if (AttachmentData)
            {
                DamageModifier += AttachmentData->BaseDamageImpact;
                WeaponPitchModifier += AttachmentData->WeaponPitchVariationImpact;
                WeaponYawModifier += AttachmentData->WeaponYawVariationImpact;
                HorizontalRecoilModifier += AttachmentData->HorizontalRecoilMultiplier;
                VerticalRecoilModifier += AttachmentData->VerticalRecoilMultiplier;

                if (AttachmentData->AttachmentType == EAttachmentType::Barrel)
                {

                    BarrelAttachment->SetSkeletalMesh(AttachmentData->AttachmentMesh);
                    WeaponData.MuzzleLocation = AttachmentData->MuzzleLocationOverride;
                    WeaponData.ParticleSpawnLocation = AttachmentData->ParticleSpawnLocationOverride;
                    WeaponData.bSilenced = AttachmentData->bSilenced;
                }
                else if (AttachmentData->AttachmentType == EAttachmentType::Magazine)
                {
                    MagazineAttachment->SetSkeletalMesh(AttachmentData->AttachmentMesh);
                    WeaponData.FireSound = AttachmentData->FiringSoundOverride;
                    WeaponData.SilencedSound = AttachmentData->SilencedFiringSoundOverride;
                    WeaponData.RateOfFire = AttachmentData->FireRate;
                    WeaponData.bAutomaticFire = AttachmentData->AutomaticFire;
                    WeaponData.VerticalRecoilCurve = AttachmentData->VerticalRecoilCurve;
                    WeaponData.HorizontalRecoilCurve = AttachmentData->HorizontalRecoilCurve;
                    WeaponData.RecoilCameraShake = AttachmentData->RecoilCameraShake;
                    WeaponData.bIsShotgun = AttachmentData->bIsShotgun;
                    WeaponData.ShotgunRange = AttachmentData->ShotgunRange;
                    WeaponData.ShotgunPellets = AttachmentData->ShotgunPellets;
                    WeaponData.EmptyWeaponReload = AttachmentData->EmptyWeaponReload;
                    WeaponData.WeaponReload = AttachmentData->WeaponReload;
                    WeaponData.EmptyPlayerReload = AttachmentData->EmptyPlayerReload;
                    WeaponData.PlayerReload = AttachmentData->PlayerReload;
                    WeaponData.WeaponShot = AttachmentData->WeaponShot;
                    WeaponData.LastWeaponShot = AttachmentData->LastWeaponShot;
                    WeaponData.HandsShot = AttachmentData->HandsShot;
                    WeaponData.HandsADSShot = AttachmentData->HandsADSShot;
                    WeaponData.AccuracyDebuff = AttachmentData->AccuracyDebuff;
                    WeaponData.bWaitForAnim = AttachmentData->bWaitForAnim;
                    WeaponData.bPreventRapidManualFire = AttachmentData->bPreventRapidManualFire;
                    WeaponData.bAutoReload = AttachmentData->bAutoReload;
                    WeaponData.bAutoFireAfterReload = AttachmentData->bAutoFireAfterReload;
                }
                else if (AttachmentData->AttachmentType == EAttachmentType::Sights)
                {
                    SightsAttachment->SetSkeletalMesh(AttachmentData->AttachmentMesh);
                    VerticalCameraOffset = AttachmentData->VerticalCameraOffset;
                    WeaponData.bAimingFOV = AttachmentData->bAimingFOV;
                    WeaponData.AimingFOVChange = AttachmentData->AimingFOVChange;
                    WeaponData.ScopeMagnification = AttachmentData->ScopeMagnification;
                    WeaponData.UnmagnifiedLFoV = AttachmentData->UnmagnifiedLFoV;
                }
                else if (AttachmentData->AttachmentType == EAttachmentType::Stock)
                {
                    StockAttachment->SetSkeletalMesh(AttachmentData->AttachmentMesh);
                }
                else if (AttachmentData->AttachmentType == EAttachmentType::Grip)
                {
                    GripAttachment->SetSkeletalMesh(AttachmentData->AttachmentMesh);
                    if (AttachmentData->WeaponEquip)
                    {
                        WeaponEquip = AttachmentData->WeaponEquip;
                    }
                    if (AttachmentData->BS_Walk)
                    {
                        WalkBlendSpace = AttachmentData->BS_Walk;
                    }
                    if (AttachmentData->BS_Ads_Walk)
                    {
                        ADSWalkBlendSpace = AttachmentData->BS_Ads_Walk;
                    }
                    if (AttachmentData->Anim_Idle)
                    {
                        Anim_Idle = AttachmentData->Anim_Idle;
                    }
                    if (AttachmentData->Anim_Sprint)
                    {
                        Anim_Sprint = AttachmentData->Anim_Sprint;
                    }
                    if (AttachmentData->Anim_Ads_Idle)
                    {
                        Anim_ADS_Idle = AttachmentData->Anim_Ads_Idle;
                    }
                    if (AttachmentData->Anim_Jump_Start)
                    {
                        Anim_Jump_Start = AttachmentData->Anim_Jump_Start;
                    }
                    if (AttachmentData->Anim_Jump_End)
                    {
                        Anim_Jump_End = AttachmentData->Anim_Jump_End;
                    }
                    if (AttachmentData->Anim_Fall)
                    {
                        Anim_Fall = AttachmentData->Anim_Fall;
                    }
                }
            }
        }
    }
}

void AWeaponBase::StartFire()
{ 
    if (bCanFire)
    {
        // sets a timer for firing the weapon - if bAutomaticFire is true then this timer will repeat until cleared by StopFire(), leading to fully automatic fire
        GetWorldTimerManager().SetTimer(ShotDelay, this, &AWeaponBase::Fire, (60 / WeaponData.RateOfFire), WeaponData.bAutomaticFire, 0.0f);

        if (bShowDebug)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Orange, TEXT("Started firing timer"));
        }

        // Simultaneously engage recoil systems 
        StartRecoil();
    }
    
}

void AWeaponBase::StartRecoil()
{
    const AFPSCharacter* PlayerCharacter = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    const AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(PlayerCharacter->GetController());
    
    if (bCanFire && GeneralWeaponData.ClipSize > 0 && !bIsReloading && CharacterController)
    {
        // Plays the recoil timelines and saves the current control rotation in order to recover to it
        ControlRotation = CharacterController->GetControlRotation();
        bShouldRecover = true;
    }
}

void AWeaponBase::EnableFire()
{
    // Fairly self explanatory - allows the weapon to fire again after waiting for an animation to finish or finishing a reload
    bCanFire = true;
}

void AWeaponBase::ReadyToFire()
{
    bIsWeaponReadyToFire = true;
}

void AWeaponBase::StopFire()
{
    // Stops the gun firing (for automatic fire)
    VerticalRecoilTimeline.Stop();
    HorizontalRecoilTimeline.Stop();
    RecoilRecovery();
    ShotsFired = 0;

    if (WeaponData.bPreventRapidManualFire && bHasFiredRecently)
    {
        GetWorldTimerManager().ClearTimer(SpamFirePreventionDelay);
        const float TimeRemaining = GetWorldTimerManager().GetTimerRemaining(ShotDelay);
        // GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::SanitizeFloat(TimeRemaining));
        if (TimeRemaining > 0.0f)
        {
            bHasFiredRecently = false;
            bIsWeaponReadyToFire = false;
            GetWorldTimerManager().SetTimer(SpamFirePreventionDelay, this, &AWeaponBase::ReadyToFire, GetWorldTimerManager().GetTimerRemaining(ShotDelay), false, GetWorldTimerManager().GetTimerRemaining(ShotDelay));
        }
    }
    GetWorldTimerManager().ClearTimer(ShotDelay);
}

void AWeaponBase::Fire()
{    
    // Allowing the gun to fire if it has ammunition, is not reloading and the bCanFire variable is true
    if(bCanFire && bIsWeaponReadyToFire && GeneralWeaponData.ClipSize > 0 && !bIsReloading)
    {
        // Casting to the player character
        const AFPSCharacter* PlayerCharacter = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    
        // Printing debug strings
        if(bShowDebug)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Fire", true);
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, FString::FromInt(GeneralWeaponData.ClipSize > 0 && !bIsReloading), true);
        }

        GunFired();

        // Subtracting from the ammunition count of the weapon
        GeneralWeaponData.ClipSize -= 1;

        const int NumberOfShots = WeaponData.bIsShotgun? WeaponData.ShotgunPellets : 1;
        // We run this for the number of bullets/projectiles per shot, in order to support shotguns
        for (int i = 0; i < NumberOfShots; i++)
        {
            // Calculating the start and end points of our line trace, and applying randomised variation
            TraceStart = PlayerCharacter->GetCameraComponent()->GetComponentLocation();
            TraceStartRotation = PlayerCharacter->GetCameraComponent()->GetComponentRotation();

            float AccuracyMultiplier = 1.0f;
            if (!PlayerCharacter->IsPlayerAiming())
            {
                AccuracyMultiplier = WeaponData.AccuracyDebuff;
            }
            
            TraceStartRotation.Pitch += FMath::FRandRange(
                -((WeaponData.WeaponPitchVariation + WeaponPitchModifier) * AccuracyMultiplier),
                (WeaponData.WeaponPitchVariation + WeaponPitchModifier) * AccuracyMultiplier);
            TraceStartRotation.Yaw += FMath::FRandRange(
                -((WeaponData.WeaponYawVariation + WeaponYawModifier) * AccuracyMultiplier),
                (WeaponData.WeaponYawVariation + WeaponYawModifier) * AccuracyMultiplier);
            TraceDirection = TraceStartRotation.Vector();
            TraceEnd = TraceStart + (TraceDirection * (WeaponData.bIsShotgun
                                                           ? WeaponData.ShotgunRange
                                                           : WeaponData.LengthMultiplier));
            

            // Applying Recoil to the weapon
            Recoil();

            // Playing an animation on the weapon mesh
            if (WeaponData.WeaponShot)
            {
                MeshComp->PlayAnimation(GeneralWeaponData.ClipSize == 0? WeaponData.LastWeaponShot : WeaponData.WeaponShot, false);
                if (WeaponData.bWaitForAnim)
                {
                    // Preventing the player from firing the weapon until the animation finishes playing 
                    const float AnimWaitTime = WeaponData.WeaponShot->GetPlayLength();
                    bCanFire = false;
                    GetWorldTimerManager().SetTimer(AnimationWaitDelay, this, &AWeaponBase::EnableFire, AnimWaitTime, false, AnimWaitTime);
                }
            }
            if (PlayerCharacter->IsPlayerAiming())
            {
                if (WeaponData.HandsADSShot)
                {
                   PlayerCharacter->GetHandsMesh()->GetAnimInstance()->Montage_Play(WeaponData.HandsADSShot); 
                } 
            }
            else
            {
                if (WeaponData.HandsShot)
                {
                   PlayerCharacter->GetHandsMesh()->GetAnimInstance()->Montage_Play(WeaponData.HandsShot); 
                }
            }

            FVector EndPoint = TraceEnd;

            	
            /** collision parameters for spawning the line trace */
            FCollisionQueryParams QueryParams;

            //Sets the default values for our trace query
            QueryParams.AddIgnoredActor(this);
            QueryParams.bTraceComplex = true;
            QueryParams.bReturnPhysicalMaterial = true;

            // Drawing a line trace based on the parameters calculated previously 
            if(GetWorld()->LineTraceSingleByChannel(Hit, TraceStart, TraceEnd, ECC_GameTraceChannel1, QueryParams))
            {                
                // Drawing debug line trace
                if (bShowDebug)
                {
                    // Debug line from muzzle to hit location
                    DrawDebugLine(
                        GetWorld(), (WeaponData.bHasAttachments
                                         ? BarrelAttachment->GetSocketLocation(WeaponData.MuzzleLocation)
                                         : MeshComp->GetSocketLocation(WeaponData.MuzzleLocation)), Hit.Location,
                                         FColor::Red, false, 10.0f, 0.0f, 2.0f);

                    if (bDrawObstructiveDebugs)
                    {
                        // Debug line from camera to hit location
                        DrawDebugLine(GetWorld(), TraceStart, Hit.Location,FColor::Orange, false, 10.0f, 0.0f, 2.0f);

                        // Debug line from camera to target location
                        DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Green, false, 10.0f, 0.0f, 2.0f);
                    }
                }
                
                // Resetting finalDamage
                FinalDamage = 0.0f;

                // Setting finalDamage based on the type of surface hit
                FinalDamage = (WeaponData.BaseDamage + DamageModifier);
                
                if (Hit.PhysMaterial.Get() == WeaponData.HeadshotDamageSurface)
                {
                    FinalDamage = (WeaponData.BaseDamage + DamageModifier) * WeaponData.HeadshotMultiplier;
                }

                AActor* HitActor = Hit.GetActor();

                // Applying the previously set damage to the hit actor
                UGameplayStatics::ApplyPointDamage(HitActor, FinalDamage, TraceDirection, Hit,
                                                   GetOwner()->GetInstigatorController(), this, DamageType);

                EndPoint = Hit.Location;

                // Passing hit delegate to InventoryComponent
                AFPSCharacter* PlayerRef = Cast<AFPSCharacter>(GetOwner());
                if (PlayerRef)
                {
                    UInventoryComponent* PlayerInventoryComp = PlayerRef->FindComponentByClass<UInventoryComponent>();
                    if (IsValid(PlayerInventoryComp))
                    {
                        PlayerInventoryComp->EventHitActor.Broadcast(Hit);
                    }
                }
            }
            else
            {
                // Drawing debug line trace
                if (bShowDebug)
                {
                    DrawDebugLine(
                        GetWorld(), (WeaponData.bHasAttachments
                                         ? BarrelAttachment->GetSocketLocation(WeaponData.MuzzleLocation)
                                         : MeshComp->GetSocketLocation(WeaponData.MuzzleLocation)), TraceEnd,
                        FColor::Red, false, 10.0f, 0.0f, 2.0f);

                    if (bDrawObstructiveDebugs)
                    {
                        // Debug line from camera to target location
                        DrawDebugLine(GetWorld(), TraceStart, TraceEnd, FColor::Green, false, 10.0f, 0.0f, 2.0f);
                    }
                }
            }

            const FRotator ParticleRotation = (EndPoint - (WeaponData.bHasAttachments
                                                               ? BarrelAttachment->GetSocketLocation(
                                                                   WeaponData.MuzzleLocation)
                                                               : MeshComp->GetSocketLocation(
                                                                   WeaponData.MuzzleLocation))).Rotation();
            
            // Spawning the bullet trace particle effect
            if (WeaponData.bHasAttachments)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponData.BulletTrace,
                                                         BarrelAttachment->GetSocketLocation(
                                                             WeaponData.ParticleSpawnLocation), ParticleRotation);
            }
            else
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponData.BulletTrace,
                                                         MeshComp->GetSocketLocation(WeaponData.ParticleSpawnLocation),
                                                         ParticleRotation);
            }

            // Selecting the hit effect based on the hit physical surface material (hit.PhysMaterial.Get()) and spawning it (Niagara)

            if (Hit.PhysMaterial.Get() == WeaponData.NormalDamageSurface || Hit.PhysMaterial.Get() == WeaponData.HeadshotDamageSurface)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponData.EnemyHitEffect, Hit.ImpactPoint,
                                                               Hit.ImpactNormal.Rotation());
            }
            else if (Hit.PhysMaterial.Get() == WeaponData.GroundSurface)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponData.GroundHitEffect, Hit.ImpactPoint,
                                                               Hit.ImpactNormal.Rotation());
            }
            else if (Hit.PhysMaterial.Get() == WeaponData.RockSurface)
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponData.RockHitEffect, Hit.ImpactPoint,
                                                               Hit.ImpactNormal.Rotation());
            }
            else
            {
                UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponData.DefaultHitEffect, Hit.ImpactPoint,
                                                               Hit.ImpactNormal.Rotation());
            }
        }

        // Spawning the muzzle flash particle
        if (WeaponData.bHasAttachments)
        {
            UNiagaraFunctionLibrary::SpawnSystemAttached(WeaponData.MuzzleFlash, BarrelAttachment, WeaponData.ParticleSpawnLocation,
                                                    FVector::ZeroVector,
                                                    FRotator::ZeroRotator, EAttachLocation::SnapToTarget, true);
        }
        else
        {
            UNiagaraFunctionLibrary::SpawnSystemAttached(WeaponData.MuzzleFlash, MeshComp, WeaponData.ParticleSpawnLocation,
                                                   FVector::ZeroVector,
                                                   FRotator::ZeroRotator, EAttachLocation::SnapToTarget, true);
        }

        // Spawning the firing sound
        if(WeaponData.bSilenced)
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), WeaponData.SilencedSound, TraceStart);
        }
        else
        {
            UGameplayStatics::PlaySoundAtLocation(GetWorld(), WeaponData.FireSound, TraceStart);
        }


        FRotator EjectionSpawnVector = FRotator::ZeroRotator;
        EjectionSpawnVector.Yaw = 270.0f;
        UNiagaraFunctionLibrary::SpawnSystemAttached(EjectedCasing, MagazineAttachment, FName("ejection_port"),
                                                     FVector::ZeroVector, EjectionSpawnVector,
                                                     EAttachLocation::SnapToTarget, true, true);

        if (!WeaponData.bAutomaticFire)
        {
            RecoilRecovery();
        }

        bHasFiredRecently = true;
    }
    else if (bCanFire && !bIsReloading)
    {
        UGameplayStatics::PlaySoundAtLocation(GetWorld(), WeaponData.EmptyFireSound, MeshComp->GetSocketLocation(WeaponData.MuzzleLocation));
        // Clearing the ShotDelay timer so that we don't have a constant ticking when the player has no ammo, just a single click
        GetWorldTimerManager().ClearTimer(ShotDelay);

        if (WeaponData.bAutoReload && GeneralWeaponData.ClipSize == 0)
        {
            Reload();
        }
        
        RecoilRecovery();
    }
    
}

void AWeaponBase::Recoil()
{
    const AFPSCharacter* PlayerCharacter = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(PlayerCharacter->GetController());

    // Apply recoil by adding a pitch and yaw input to the character controller
    if (WeaponData.bAutomaticFire && CharacterController && ShotsFired > 0 && IsValid(WeaponData.VerticalRecoilCurve) && IsValid(WeaponData.HorizontalRecoilCurve))
    {
        CharacterController->AddPitchInput(WeaponData.VerticalRecoilCurve->GetFloatValue((60 / WeaponData.RateOfFire) * ShotsFired) * VerticalRecoilModifier);
        CharacterController->AddYawInput(WeaponData.HorizontalRecoilCurve->GetFloatValue((60 / WeaponData.RateOfFire) * ShotsFired) * HorizontalRecoilModifier);
    }
    else if (CharacterController && ShotsFired <= 0 && IsValid(WeaponData.VerticalRecoilCurve) && IsValid(WeaponData.HorizontalRecoilCurve))
    {
        CharacterController->AddPitchInput(WeaponData.VerticalRecoilCurve->GetFloatValue(0) * VerticalRecoilModifier);
        CharacterController->AddYawInput(WeaponData.HorizontalRecoilCurve->GetFloatValue(0) * HorizontalRecoilModifier);
    }

    ShotsFired += 1;
    GetWorld()->GetFirstPlayerController()->ClientStartCameraShake(WeaponData.RecoilCameraShake);  
}

void AWeaponBase::RecoilRecovery()
{
    // Plays the recovery timeline
    if (bShouldRecover)
    {
        RecoilRecoveryTimeline.PlayFromStart();
    }
}


bool AWeaponBase::Reload()
{
    if (!bCanReload)
    {
        return false;
    }

    // Calling a blueprint implementable reload function
    StartReload();
    
    // Casting to the character controller (which stores all the ammunition and health variables)
    const AFPSCharacter* PlayerCharacter = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(PlayerCharacter->GetController());

    // Changing the maximum ammunition based on if the weapon can hold a bullet in the chamber
    int Value = 0;
    if (WeaponData.bCanBeChambered)
    {
        Value = 1;
    }

    // Checking if we are not reloading, if a reloading montage exists, and if there is any point in reloading
    // (current ammunition does not match maximum magazine capacity and there is spare ammunition to load into the gun)
    if (CharacterController->AmmoMap.Contains(GeneralWeaponData.AmmoType))
    {
        if (!bIsReloading && CharacterController->AmmoMap[GeneralWeaponData.AmmoType] > 0 && (GeneralWeaponData.ClipSize
            !=
            (GeneralWeaponData.ClipCapacity + Value)))
        {
            // Differentiating between having no ammunition in the magazine (having to chamber a round after reloading)
            // or not, and playing an animation relevant to that
            if (GeneralWeaponData.ClipSize <= 0 && WeaponData.EmptyPlayerReload)
            {
                if (WeaponData.bHasAttachments)
                {
                    MagazineAttachment->PlayAnimation(WeaponData.EmptyWeaponReload, false);
                }
                else
                {
                    MeshComp->PlayAnimation(WeaponData.EmptyWeaponReload, false);
                }

                AnimTime = PlayerCharacter->GetHandsMesh()->GetAnimInstance()->Montage_Play(
                    WeaponData.EmptyPlayerReload, 1.0f);
            }
            else if (WeaponData.PlayerReload)
            {
                if (WeaponData.bHasAttachments)
                {
                    MagazineAttachment->PlayAnimation(WeaponData.WeaponReload, false);
                }
                else
                {
                    MeshComp->PlayAnimation(WeaponData.WeaponReload, false);
                }
                AnimTime = PlayerCharacter->GetHandsMesh()->GetAnimInstance()->Montage_Play(
                    WeaponData.PlayerReload, 1.0f);
            }
            else
            {
                AnimTime = 2.0f;
            }

            // Printing debug strings
            if (bShowDebug)
            {
                GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "Reload", true);
            }

            // Setting variables to make sure that the player cannot fire or reload during the time that the weapon is in it's reloading animation
            bCanFire = false;
            bIsReloading = true;

            // Starting the timer alongside the animation of the weapon reloading, casting to UpdateAmmo when it finishes
            GetWorldTimerManager().SetTimer(ReloadingDelay, this, &AWeaponBase::UpdateAmmo, AnimTime, false, AnimTime);
        }
    }

    return true;
}

void AWeaponBase::UpdateAmmo()
{
    // Calling a blueprint implementable function signifying the end of a reload
    FinishReload();
    
    // Printing debug strings
    if(bShowDebug)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, "UpdateAmmo", true);
    }

    // Casting to the game instance (which stores all the ammunition and health variables)
    AFPSCharacter* PlayerCharacter = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(PlayerCharacter->GetController());
    
    // value system to reload the correct amount of bullets if the weapon is using a chambered reloading system
    int Value = 0;

    // Checking to see if there is already ammunition within the gun and that this particular gun supports chambered rounds
    if (GeneralWeaponData.ClipSize > 0 && WeaponData.bCanBeChambered)
    {
        Value = 1;

        if(bShowDebug)
        {
            GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, "There is a bullet in the chamber already.", true);
        }
    }
    
    // First, we set Temp, which keeps track of the difference between the maximum ammunition and the amount that there
    // is currently loaded (i.e. how much ammunition we need to reload into the gun)
    const int Temp = GeneralWeaponData.ClipCapacity - GeneralWeaponData.ClipSize;
    // Making sure we have enough ammunition to reload
    if (CharacterController->AmmoMap[GeneralWeaponData.AmmoType] >= Temp + Value)
    {
        // Then, we update the weapon to have full ammunition, plus the value (1 if there is a bullet in the chamber, 0 if not)
        GeneralWeaponData.ClipSize = GeneralWeaponData.ClipCapacity + Value;
        // Finally, we remove temp (and an extra bullet, if one is chambered) from the player's ammunition store
        CharacterController->AmmoMap[GeneralWeaponData.AmmoType] -= (Temp + Value);
    }
    // If we don't, add the remaining ammunition to the clip, and set the remaining ammunition to 0
    else
    {
        GeneralWeaponData.ClipSize = GeneralWeaponData.ClipSize + CharacterController->AmmoMap[GeneralWeaponData.AmmoType];
        CharacterController->AmmoMap[GeneralWeaponData.AmmoType] = 0;
    }

    // Print debug strings
    if(bShowDebug)
    {
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::FromInt(GeneralWeaponData.ClipSize), true);
        GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Blue, FString::FromInt(CharacterController->AmmoMap[GeneralWeaponData.AmmoType]), true);
    }

    // Resetting bIsReloading and allowing the player to fire the gun again
    bIsReloading = false;
    

    // Making sure the player cannot fire if sprinting
    if (PlayerCharacter->GetMovementData(PlayerCharacter->GetMovementState()).bCanFire)
    {
        EnableFire();
    }

    bIsWeaponReadyToFire = true;

    if (WeaponData.bAutoFireAfterReload && ShotsFired > 0)
    {
       StartFire(); 
    }
}


// Called every frame
void AWeaponBase::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
        
    VerticalRecoilTimeline.TickTimeline(DeltaTime);
    HorizontalRecoilTimeline.TickTimeline(DeltaTime);
    RecoilRecoveryTimeline.TickTimeline(DeltaTime);

    if (bShowDebug)
    {
        GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Green, bHasFiredRecently? TEXT("Has fired recently") : TEXT("Has not fired recently"));
        GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Green, bCanFire? TEXT("Can Fire") : TEXT("Can not Fire"));
        GEngine->AddOnScreenDebugMessage(-1, DeltaTime, FColor::Green, bIsWeaponReadyToFire? TEXT("Weapon is ready to fire") : TEXT("Weapon is not ready to fire"));
    }
}

// Recovering the player's recoil to the pre-fired position
void AWeaponBase::HandleRecoveryProgress(float Value) const
{
    // Getting a reference to the Character Controller
    const AFPSCharacter* PlayerCharacter = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
    AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(PlayerCharacter->GetController());

    // Calculating the new control rotation by interpolating between current and target 
    const FRotator NewControlRotation = FMath::Lerp(CharacterController->GetControlRotation(), ControlRotation, Value);
    
    CharacterController->SetControlRotation(NewControlRotation);
}
