// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "AmmoPickup.h"
#include "DrawDebugHelpers.h"
#include "FPSCharacter.h"
#include "FPSCharacterController.h"
#include "Components/StaticMeshComponent.h"
#include "Engine/Engine.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AAmmoPickup::AAmmoPickup()
{
	// Creating our mesh
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PreviewMeshComp"));
	RootComponent = MeshComp;

	// False by default
	bIsEmpty = false;
}

// Called when the game starts or when spawned
void AAmmoPickup::BeginPlay()
{
	Super::BeginPlay();

	// Updating MeshComp with the desired mesh if it exists
    if (AmmoData.Contains(AmmoType))
    {
        if (AmmoData[AmmoType].FullAmmoBoxes.Contains(AmmoAmount))
        {
            MeshComp->SetStaticMesh(AmmoData[AmmoType].FullAmmoBoxes[AmmoAmount]);
        	if (AmmoData[AmmoType].PickupName.ToString() != TEXT(""))
        	{
        		InteractionText = AmmoData[AmmoType].PickupName;
        	}
            else
            {
        		InteractionText = PickupName[AmmoType];
            	GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, TEXT("Please note that defining pickup names with the PickupName map is now deprecated, and will be removed soon. Please define pickup names inside the AmmoData data structure."));
            }
        }
	}
	else
	{
		UE_LOG(LogProfilingDebugging, Error, TEXT("Mesh to spawn not found in SAmmoPickup, make sure all meshes are set."));
	}
}

void AAmmoPickup::Interact()
{
	if (!bIsEmpty)
	{
		const AFPSCharacter* PlayerCharacter = Cast<AFPSCharacter>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));
		AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(PlayerCharacter->GetController());


		// Debug print of the ammo before pickup
		if (bDrawDebug)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Green, FString::FromInt(CharacterController->AmmoMap[AmmoType]));
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Green, TEXT("Before"));
		}

		// Adding ammo to our character's ammo map
		CharacterController->AmmoMap[AmmoType] += AmmoData[AmmoType].AmmoCounts[AmmoAmount];

		// Debug print of the ammo after pickup
		if (bDrawDebug)
		{
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, FString::FromInt(CharacterController->AmmoMap[AmmoType]));
			GEngine->AddOnScreenDebugMessage(-1, 2, FColor::Red, TEXT("After"));
		}

		// Spawning our pickup sound effect
		UGameplayStatics::SpawnSoundAtLocation(GetWorld(), PickupSFX, GetActorLocation());

		// Switching the mesh to it's empty variant in the case that it is not infinite
		if (!bInfinite)
		{
			SetEmptyMesh();
		}
	}
}

void AAmmoPickup::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// Updating MeshComp with the desired mesh in editor if it exists
	if (AmmoData.Contains(AmmoType))
	{
		if (AmmoData[AmmoType].FullAmmoBoxes.Contains(AmmoAmount))
		{
			MeshComp->SetStaticMesh(AmmoData[AmmoType].FullAmmoBoxes[AmmoAmount]);
		}
	}
}

void AAmmoPickup::SetEmptyMesh()
{
	// Updating MeshComp with the desired empty mesh if it exists
	if (AmmoData.Contains(AmmoType))
	{
		if (AmmoData[AmmoType].EmptyAmmoBoxes.Contains(AmmoAmount))
		{
			MeshComp->SetStaticMesh(AmmoData[AmmoType].EmptyAmmoBoxes[AmmoAmount]);
		}
	}

	if (AmmoData[AmmoType].PickupName.ToString() != TEXT(""))
	{
		InteractionText = FText::FromString(AmmoData[AmmoType].PickupName.ToString() + " [Empty]");
	}
	else
	{
		InteractionText = FText::FromString(PickupName[AmmoType].ToString() + " [Empty]");
	}
	bIsEmpty = true;
}

