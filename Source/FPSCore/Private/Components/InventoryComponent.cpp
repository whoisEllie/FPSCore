// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "Components/InventoryComponent.h"
#include "EnhancedInputComponent.h"
#include "FPSCharacterController.h"
#include "WeaponCore/Weapon.h"
#include "WeaponPickup.h"
#include "GameFramework/Actor.h"
#include "TimerManager.h"
#include "Animation/AnimInstance.h"
#include "CharacterCore/CharacterCore.h"


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
				const AWeapon* WeaponBaseReference = StarterWeapons[i].WeaponClassRef.GetDefaultObject();
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
	// Returning if the target weapon is already equipped or it does not exist
    if (CurrentWeaponSlot == SlotId) { return; }
    if (!EquippedWeapons.Contains(SlotId)) { return; }
	if (!bPerformingWeaponSwap)
	{
		if (CurrentWeapon->GetStaticWeaponData()->WeaponUnequip)
		{
			bPerformingWeaponSwap = true;
			TargetWeaponSlot = SlotId;
			HandleUnequip();
			return;
		}	
	}
	
	// Disabling the currently equipped weapon, if it exists
    if (CurrentWeapon)
    {
        CurrentWeapon->PrimaryActorTick.bCanEverTick = false;
        CurrentWeapon->SetActorHiddenInGame(true);
		if (CurrentWeapon->GetClass()->ImplementsInterface(UWeaponInterface::StaticClass()))
		{
			 Cast<IWeaponInterface>(CurrentWeapon)->StopAttack();
		}
    }

	// Swapping to the new weapon, enabling it and playing it's equip animation
    CurrentWeapon = EquippedWeapons[SlotId];
    if (CurrentWeapon)
    {
        CurrentWeapon->PrimaryActorTick.bCanEverTick = true;
        CurrentWeapon->SetActorHiddenInGame(false);
        if (CurrentWeapon->GetStaticWeaponData()->WeaponEquip)
        {
        	if (ACharacterCore* Character = Cast<ACharacterCore>(GetOwner()))
        	{
        		Character->GetMainAnimationMesh()->GetAnimInstance()->StopAllMontages(0.1f);
        		Character->GetMainAnimationMesh()->GetAnimInstance()->Montage_Play(CurrentWeapon->GetStaticWeaponData()->WeaponEquip, 1.0f);
        		Character->UpdateMovementState(Character->GetMovementState());
        	}
        }
    }
	
	bPerformingWeaponSwap = false;
}

// Spawns a new weapon (either from weapon swap or picking up a new weapon)
void UInventoryComponent::UpdateWeapon(const TSubclassOf<AActor> WeaponActor, const int InventoryPosition, const bool bSpawnPickup,
                                       const bool bStatic, const FTransform PickupTransform)
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
        	
        	if (ACharacterCore* Character = Cast<ACharacterCore>(GetOwner()))
        	{
        		TraceStart = Character->GetLookOriginComponent()->GetComponentLocation();
        		TraceStartRotation = Character->GetLookOriginComponent()->GetComponentRotation();
        	}
            const FVector TraceDirection = TraceStartRotation.Vector();
            const FVector TraceEnd = TraceStart + TraceDirection * WeaponSpawnDistance;

			IWeaponInterface* CurrentWeaponInterface = Cast<IWeaponInterface>(CurrentWeapon); 

            // Spawning the new pickup
            AWeaponPickup* NewPickup = GetWorld()->SpawnActor<AWeaponPickup>(CurrentWeaponInterface->PickupReference, TraceEnd, FRotator::ZeroRotator, SpawnParameters);
            if (bStatic)
            {
                NewPickup->GetMainMesh()->SetSimulatePhysics(false);
                NewPickup->SetActorTransform(PickupTransform);
            }
            // Applying the current weapon data to the pickup
            NewPickup->SetStatic(bStatic);
            NewPickup->SetRuntimeSpawned(true);
            NewPickup->SetWeaponReference(EquippedWeapons[InventoryPosition]->GetClass());
            NewPickup->SpawnAttachmentMesh();
            EquippedWeapons[InventoryPosition]->Destroy();
        }
    }
    // Spawns the new weapon and sets the player as it's owner
    AActor* SpawnedWeapon = GetWorld()->SpawnActor<AActor>(WeaponActor, FVector::ZeroVector, FRotator::ZeroRotator, SpawnParameters);
	IWeaponInterface* NewWeapon = Cast<IWeaponInterface>(SpawnedWeapon);	
    if (SpawnedWeapon)
    {
    	// Placing the new weapon at the correct location and finishing up it's initialisation
        SpawnedWeapon->SetOwner(GetOwner());
    	if (ACharacterCore* Character = Cast<ACharacterCore>(GetOwner()))
    	{
    		SpawnedWeapon->AttachToComponent(Character->GetMainAnimationMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, NewWeapon->WeaponAttachmentSocketName);
    	}
        EquippedWeapons.Add(InventoryPosition, SpawnedWeapon);

		// Disabling the currently equipped weapon, if it exists
        if (CurrentWeapon)
        {
            CurrentWeapon->PrimaryActorTick.bCanEverTick = false;
            CurrentWeapon->SetActorHiddenInGame(true);
			if (CurrentWeapon->GetClass()->ImplementsInterface(UWeaponInterface::StaticClass()))
			{
				Cast<IWeaponInterface>(CurrentWeapon)->StopAttack();
			}
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
            	if (ACharacterCore* Character = Cast<ACharacterCore>(GetOwner()))
	            {
            		Character->GetMainAnimationMesh()->GetAnimInstance()->StopAllMontages(0.1f);
		            Character->GetMainAnimationMesh()->GetAnimInstance()->Montage_Play(CurrentWeapon->GetStaticWeaponData()->WeaponEquip, 1.0f);
            		Character->UpdateMovementState(Character->GetMovementState());
	            }
            }
        }
    }
}

FText UInventoryComponent::GetCurrentWeaponRemainingAmmo() const
{
	if (const ACharacterCore* Character = Cast<ACharacterCore>(GetOwner()))
	{
		AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(Character->GetController());
		IWeaponInterface* CurrentWeaponInterface = Cast<IWeaponInterface>(CurrentWeapon); 

		if (CharacterController)	
		{
			if (CurrentWeapon != nullptr)
			{
				return FText::AsNumber(CharacterController->AmmoMap[CurrentWeaponInterface->AmmoType]);
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
	IWeaponInterface* WeaponInterface = Cast<IWeaponInterface>(CurrentWeapon);
	WeaponInterface->Attack();
}

// Passing player inputs to WeaponBase
void UInventoryComponent::StopFire()
{
	IWeaponInterface* WeaponInterface = Cast<IWeaponInterface>(CurrentWeapon);
	WeaponInterface->StopAttack();
}

// Passing player inputs to WeaponBase
void UInventoryComponent::Reload()
{
	if (IWeaponInterface* WeaponInterface = Cast<IWeaponInterface>(CurrentWeapon))
	{
		if (!WeaponInterface->Reload())
		{
			switch (ReloadFailedBehaviour)
			{
				case EReloadFailedBehaviour::Retry:
					   {
								GetWorld()->GetTimerManager().SetTimer(ReloadRetry, this, &UInventoryComponent::Reload, 0.1f, false, 0.1f);
								break;
					   }

				case EReloadFailedBehaviour::ChangeState:
					   {
								ACharacterCore* Character = Cast<ACharacterCore>(GetOwner());
								Character->UpdateMovementState(EMovementState::State_Walk);
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
		IWeaponInterface* CurrentWeaponInterface = Cast<IWeaponInterface>(CurrentWeapon);
		
		if (CurrentWeaponInterface->Animations.Weapon.Inspect  && CurrentWeapon->Animations.Hands.Inspect)
		{
			if (ACharacterCore* Character = Cast<ACharacterCore>(GetOwner()))
			{
				Character->GetMainAnimationMesh()->GetAnimInstance()->Montage_Play(CurrentWeaponInterface->Animations.Hands.Inspect, 1.0f);
				CurrentWeapon->GetMainMeshComp()->GetAnimInstance()->Montage_Play(CurrentWeaponInterface->Animations.Weapon.Inspect, 1.0f);
			}
		}
	}
}

void UInventoryComponent::HandleUnequip()
{
	if (CurrentWeapon)
	{
		IWeaponInterface* CurrentWeaponInterface = Cast<IWeaponInterface>(CurrentWeapon);
		
		if (CurrentWeaponInterface->Animations.Hands.Unequip)
		{
			if (ACharacterCore* Character = Cast<ACharacterCore>(GetOwner()))
			{
				float AnimTime = Character->GetMainAnimationMesh()->GetAnimInstance()->Montage_Play(CurrentWeaponInterface->Animations.Hands.Unequip, 1.0f);
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
