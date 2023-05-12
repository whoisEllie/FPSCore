// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "Components/InventoryComponent.h"
#include "EnhancedInputComponent.h"
#include "FPSCharacter.h"
#include "FPSCharacterController.h"
#include "WeaponBase.h"
#include "WeaponPickup.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "Animation/AnimInstance.h"
#include "Components/SkeletalMeshComponent.h"
#include "Camera/CameraComponent.h"

// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
}

// Swapping weapons with the scroll wheel
void UInventoryComponent::ScrollWeapon(const FInputActionValue& Value)
{
	int NewID;

	// Value[0] determines the axis of input for our scroll wheel
	// a positive value indicates scrolling towards you, while a negative one
	// represents scrolling away from you
	
	if (Value[0] < 0)
	{
		NewID = FMath::Clamp(CurrentWeaponSlot + 1, 0, NumberOfWeaponSlots - 1);

		// If we've reached the end of the weapons array, loop back around to index 0
		if (CurrentWeaponSlot == NumberOfWeaponSlots - 1)
		{
			NewID = 0;
		}
	}
	else
	{        
		NewID = FMath::Clamp(CurrentWeaponSlot - 1, 0, NumberOfWeaponSlots - 1);

		// If we've reached index 0, loop back around to the max index
		if (CurrentWeaponSlot == 0)
		{
			NewID = NumberOfWeaponSlots - 1;
		}
	}

	if (bPerformingWeaponSwap && WeaponSwapBehaviour == EWeaponSwapBehaviour::UseNewValue)
	{
		TargetWeaponSlot = NewID;	
	}
	else if (!bPerformingWeaponSwap)
	{
		SwapWeapon(NewID);
	}
}

void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	for (int i = 0; i < NumberOfWeaponSlots; ++i)
	{
		if (StarterWeapons.IsValidIndex(i))
		{
			if (StarterWeapons[i].WeaponClassRef != nullptr)
			{
				// Getting a reference to our Weapon Data table in order to see if we have attachments
				const AWeaponBase* WeaponBaseReference = StarterWeapons[i].WeaponClassRef.GetDefaultObject();
				if (StarterWeapons[i].WeaponDataTableRef && WeaponBaseReference)
				{
					if (const FStaticWeaponData* WeaponData = StarterWeapons[i].WeaponDataTableRef->FindRow<FStaticWeaponData>(
						FName(WeaponBaseReference->GetDataTableNameRef()), FString(WeaponBaseReference->GetDataTableNameRef()),
						true))
					{
						// Spawning attachments if the weapon has them and the attachments table exists
						if (WeaponData->bHasAttachments && StarterWeapons[i].AttachmentsDataTable)
						{
							// Iterating through all the attachments in AttachmentArray
							for (FName RowName : StarterWeapons[i].DataStruct.WeaponAttachments)
							{
								// Searching the data table for the attachment
								const FAttachmentData* AttachmentData = StarterWeapons[i].AttachmentsDataTable->FindRow<
									FAttachmentData>(
									RowName, RowName.ToString(), true);

								// Applying the effects of the attachment
								if (AttachmentData)
								{
									if (AttachmentData->AttachmentType == EAttachmentType::Magazine)
									{
										// Pulling default values from the Magazine attachment type
										StarterWeapons[i].DataStruct.AmmoType = AttachmentData->AmmoToUse;
										StarterWeapons[i].DataStruct.ClipCapacity = AttachmentData->ClipCapacity;
										StarterWeapons[i].DataStruct.ClipSize = AttachmentData->ClipSize;
										StarterWeapons[i].DataStruct.WeaponHealth = 100.0f;
									}
								}
							}
						}
						else
						{
							StarterWeapons[i].DataStruct.AmmoType = WeaponData->AmmoToUse;
							StarterWeapons[i].DataStruct.ClipCapacity = WeaponData->ClipCapacity;
							StarterWeapons[i].DataStruct.ClipSize = WeaponData->ClipSize;
							StarterWeapons[i].DataStruct.WeaponHealth = 100.0f;
						}
					}
				}
				UpdateWeapon(StarterWeapons[i].WeaponClassRef, i, false, false, GetOwner()->GetActorTransform(), StarterWeapons[i].DataStruct);
			}
		}
	}
}

void UInventoryComponent::SwapWeapon(const int SlotId)
{
	// Clearing the weapon swap timer in case it's still active
	GetWorld()->GetTimerManager().ClearTimer(ReloadRetry);

	
	// Returning if the target weapon is already equipped or it does not exist
    if (CurrentWeaponSlot == SlotId) { return; }
    if (!EquippedWeapons.Contains(SlotId)) { return; }
	if (!bPerformingWeaponSwap)
	{
		if (CurrentWeapon->GetStaticWeaponData()->WeaponUnequip)
		{
			CurrentWeapon->StopFire();
			CurrentWeapon->SetCanFire(false);
			bPerformingWeaponSwap = true;
			TargetWeaponSlot = SlotId;
			HandleUnequip();
			return;
		}	
	}

	CurrentWeaponSlot = SlotId;
	
	// Disabling the currently equipped weapon, if it exists
    if (CurrentWeapon)
    {
        CurrentWeapon->PrimaryActorTick.bCanEverTick = false;
        CurrentWeapon->SetActorHiddenInGame(true);
        CurrentWeapon->StopFire();
    }

	// Swapping to the new weapon, enabling it and playing it's equip animation
    CurrentWeapon = EquippedWeapons[SlotId];
    if (CurrentWeapon)
    {
        CurrentWeapon->PrimaryActorTick.bCanEverTick = true;
        CurrentWeapon->SetActorHiddenInGame(false);
    	CurrentWeapon->SetCanFire(true);
        if (CurrentWeapon->GetStaticWeaponData()->WeaponEquip)
        {
        	if (AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
        	{
        		FPSCharacter->GetHandsMesh()->GetAnimInstance()->StopAllMontages(0.1f);
        		FPSCharacter->GetHandsMesh()->GetAnimInstance()->Montage_Play(CurrentWeapon->GetStaticWeaponData()->WeaponEquip, 1.0f);
        		FPSCharacter->SetMovementState(FPSCharacter->GetMovementState());
        	}
        }
    }
	
	bPerformingWeaponSwap = false;
}

// Spawns a new weapon (either from weapon swap or picking up a new weapon)
void UInventoryComponent::UpdateWeapon(const TSubclassOf<AWeaponBase> NewWeapon, const int InventoryPosition, const bool bSpawnPickup,
                                       const bool bStatic, const FTransform PickupTransform, const FRuntimeWeaponData DataStruct)
{
    // Determining spawn parameters (forcing the weapon pickup to spawn at all times)
    FActorSpawnParameters SpawnParameters;
    SpawnParameters.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
    if (InventoryPosition == CurrentWeaponSlot && EquippedWeapons.Contains(InventoryPosition))
    {
        if (bSpawnPickup)
        {
            // Calculating the location where to spawn the new weapon in front of the player
        	FVector TraceStart = FVector::ZeroVector;
        	FRotator TraceStartRotation = FRotator::ZeroRotator;
        	
        	if (const AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
        	{
        		TraceStart = FPSCharacter->GetCameraComponent()->GetComponentLocation();
        		TraceStartRotation = FPSCharacter->GetCameraComponent()->GetComponentRotation();
        	}
            const FVector TraceDirection = TraceStartRotation.Vector();
            const FVector TraceEnd = TraceStart + TraceDirection * WeaponSpawnDistance;

            // Spawning the new pickup
            AWeaponPickup* NewPickup = GetWorld()->SpawnActor<AWeaponPickup>(CurrentWeapon->GetStaticWeaponData()->PickupReference, TraceEnd, FRotator::ZeroRotator, SpawnParameters);
            if (bStatic)
            {
                NewPickup->GetMainMesh()->SetSimulatePhysics(false);
                NewPickup->SetActorTransform(PickupTransform);
            }
            // Applying the current weapon data to the pickup
            NewPickup->SetStatic(bStatic);
            NewPickup->SetRuntimeSpawned(true);
            NewPickup->SetWeaponReference(EquippedWeapons[InventoryPosition]->GetClass());
            NewPickup->SetCacheDataStruct(EquippedWeapons[InventoryPosition]->GetRuntimeWeaponData());
            NewPickup->SpawnAttachmentMesh();
            EquippedWeapons[InventoryPosition]->Destroy();
        }
    }
    // Spawns the new weapon and sets the player as it's owner
    AWeaponBase* SpawnedWeapon = GetWorld()->SpawnActor<AWeaponBase>(NewWeapon, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParameters);
    if (SpawnedWeapon)
    {
    	// Placing the new weapon at the correct location and finishing up it's initialisation
        SpawnedWeapon->SetOwner(GetOwner());
    	if (const AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
    	{
    		SpawnedWeapon->AttachToComponent(FPSCharacter->GetHandsMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, SpawnedWeapon->GetStaticWeaponData()->WeaponAttachmentSocketName);
    	}
        SpawnedWeapon->SetRuntimeWeaponData(DataStruct);
        SpawnedWeapon->SpawnAttachments();
        EquippedWeapons.Add(InventoryPosition, SpawnedWeapon);

		// Disabling the currently equipped weapon, if it exists
        if (CurrentWeapon)
        {
            CurrentWeapon->PrimaryActorTick.bCanEverTick = false;
            CurrentWeapon->SetActorHiddenInGame(true);
        	CurrentWeapon->StopFire();
        }

    	
    	// Swapping to the new weapon, enabling it and playing it's equip animation
        CurrentWeapon = EquippedWeapons[InventoryPosition];
        CurrentWeaponSlot = InventoryPosition; 
        
        if (CurrentWeapon)
        {
            CurrentWeapon->PrimaryActorTick.bCanEverTick = true;
            CurrentWeapon->SetActorHiddenInGame(false);
            if (CurrentWeapon->GetStaticWeaponData()->WeaponEquip)
            {
            	if (AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
	            {
            		FPSCharacter->GetHandsMesh()->GetAnimInstance()->StopAllMontages(0.1f);
		            FPSCharacter->GetHandsMesh()->GetAnimInstance()->Montage_Play(CurrentWeapon->GetStaticWeaponData()->WeaponEquip, 1.0f);
            		FPSCharacter->SetMovementState(FPSCharacter->GetMovementState());
	            }
            }
        }
    }
}

FText UInventoryComponent::GetCurrentWeaponRemainingAmmo() const
{
	if (const AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
	{
		AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(FPSCharacter->GetController());

		if (CharacterController)	
		{
			if (CurrentWeapon != nullptr)
			{
				return FText::AsNumber(CharacterController->AmmoMap[CurrentWeapon->GetRuntimeWeaponData()->AmmoType]);
			}
			UE_LOG(LogProfilingDebugging, Log, TEXT("Cannot find Current Weapon"));
			return FText::AsNumber(0);
		}
		UE_LOG(LogProfilingDebugging, Error, TEXT("No character controller found in UInventoryComponent"))
		return FText::FromString("Err");
	}
	UE_LOG(LogProfilingDebugging, Error, TEXT("No player character found in UInventoryComponent"))
	return FText::FromString("Err");
}

// Passing player inputs to WeaponBase
void UInventoryComponent::StartFire()
{
    if (CurrentWeapon)
    {
        CurrentWeapon->StartFire();
    }
}

// Passing player inputs to WeaponBase
void UInventoryComponent::StopFire()
{
    if (CurrentWeapon)
    {
        CurrentWeapon->StopFire();
    }
}

// Passing player inputs to WeaponBase
void UInventoryComponent::Reload()
{
    if (CurrentWeapon)
    {
        if (!CurrentWeapon->Reload())
        {
	        switch (ReloadFailedBehaviour)
	        {
	        case EReloadFailedBehaviour::Retry:
	        	{
		            if (MaxRetryAmount == 0)
		            {
						GetWorld()->GetTimerManager().SetTimer(ReloadRetry, this, &UInventoryComponent::Reload, RetryInterval, false, RetryInterval);
						if (bDrawDebug)
						{
							GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Retrying Reload"));	
						}
		            	break;
		            }
		            if (RetryAmount < MaxRetryAmount)
		            {
						GetWorld()->GetTimerManager().SetTimer(ReloadRetry, this, &UInventoryComponent::Reload, RetryInterval, false, RetryInterval);
						if (bDrawDebug)
						{
							GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, TEXT("Retrying Reload"));	
						}
		            	RetryAmount++;
						break;
		            }
	        		RetryAmount = 0;
	        		break;
	        	}

	        case EReloadFailedBehaviour::ChangeState:
	        	{
	        		AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner());
	        		FPSCharacter->SetMovementState(TargetMovementState);
	        		Reload();
	        		break;
	        	}

	        case EReloadFailedBehaviour::HandleInBP:
	        	{
	        		EventFailedToReload.Broadcast();	
	        		break;
	        	}

	        case EReloadFailedBehaviour::Ignore:
		        {
			        // Ignoring it, obviously :)
	        		break;
		        }

	        default: { break; }
	        } 
        }
    }
}

void UInventoryComponent::Inspect()
{
	if (CurrentWeapon)
	{
			if (const AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
			{
				if (CurrentWeapon->GetStaticWeaponData()->HandsInspect)
				{
					FPSCharacter->GetHandsMesh()->GetAnimInstance()->Montage_Play(CurrentWeapon->GetStaticWeaponData()->HandsInspect, 1.0f);
				}
				if (CurrentWeapon->GetStaticWeaponData()->WeaponInspect)
				{
					CurrentWeapon->GetMainMeshComp()->PlayAnimation(CurrentWeapon->GetStaticWeaponData()->WeaponInspect, false);
				}
			}
	}
}

void UInventoryComponent::HandleUnequip()
{
	if (CurrentWeapon)
	{
		if (CurrentWeapon->GetStaticWeaponData()->WeaponUnequip)
		{
			if (const AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
			{
				const float AnimTime = FPSCharacter->GetHandsMesh()->GetAnimInstance()->Montage_Play(CurrentWeapon->GetStaticWeaponData()->WeaponUnequip, 1.0f);
				GetWorld()->GetTimerManager().SetTimer(WeaponSwapDelegate, this, &UInventoryComponent::UnequipReturn, AnimTime, false, AnimTime);
			}	
		}	
	}
}

void UInventoryComponent::UnequipReturn()
{
	SwapWeapon(TargetWeaponSlot);
}

void UInventoryComponent::SetupInputComponent(UEnhancedInputComponent* PlayerInputComponent)
{
	if (FiringAction)
	{
		// Firing
		PlayerInputComponent->BindAction(FiringAction, ETriggerEvent::Started, this, &UInventoryComponent::StartFire);
		PlayerInputComponent->BindAction(FiringAction, ETriggerEvent::Completed, this, &UInventoryComponent::StopFire);
	}
        
	if (PrimaryWeaponAction)
	{
		// Switching to the primary weapon
		PlayerInputComponent->BindAction(PrimaryWeaponAction, ETriggerEvent::Started, this, &UInventoryComponent::SwapWeapon<0>);
	}

	if (SecondaryWeaponAction)
	{            
		// Switching to the secondary weapon
		PlayerInputComponent->BindAction(SecondaryWeaponAction, ETriggerEvent::Started, this, &UInventoryComponent::SwapWeapon<1>);
	}

	if (ReloadAction)
	{
		// Reloading
		PlayerInputComponent->BindAction(ReloadAction, ETriggerEvent::Started, this, &UInventoryComponent::Reload);
	}

	if (ScrollAction)
	{
		// Scrolling through weapons
		PlayerInputComponent->BindAction(ScrollAction, ETriggerEvent::Started, this, &UInventoryComponent::ScrollWeapon);
	}

	if (InspectWeaponAction)
	{
		// Playing the inspect animation
		PlayerInputComponent->BindAction(InspectWeaponAction, ETriggerEvent::Started, this, &UInventoryComponent::Inspect);
	}
}
