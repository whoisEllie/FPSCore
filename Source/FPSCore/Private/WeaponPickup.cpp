// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "WeaponPickup.h"

#include "CharacterCore/CharacterCore.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AWeaponPickup::AWeaponPickup()
{
	// Creating all of our meshes
	BarrelAttachment = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BarrelAttachment"));
	BarrelAttachment->SetupAttachment(MeshComp);

	MagazineAttachment = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MagazineAttachment"));
	MagazineAttachment->SetupAttachment(MeshComp);
	
	SightsAttachment = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("SightsAttachment"));
	SightsAttachment->SetupAttachment(MeshComp);

	StockAttachment = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("StockAttachment"));
	StockAttachment->SetupAttachment(MeshComp);
	
	GripAttachment = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("GripAttachment"));
	GripAttachment->SetupAttachment(MeshComp);
}

// Called when the game starts or when spawned
void AWeaponPickup::BeginPlay()
{
	Super::BeginPlay();

	// Spawning attachments on begin play
	SpawnAttachmentMesh();

	// Simulating physics if not bStatic
	if (!bStatic)
	{
		MeshComp->SetSimulatePhysics(true);
	}

	InteractionText = WeaponName;
}

// Updating the appearance of the pickup in the editor
void AWeaponPickup::OnConstruction(const FTransform& Transform)
{
	Super::OnConstruction(Transform);

	// Live attachment preview in the editor
	SpawnAttachmentMesh();
}


void AWeaponPickup::SpawnAttachmentMesh()
{
	// Getting a reference to our Weapon Data table in order to see if we have attachments
	const AActor* WeaponBaseReference =  WeaponReference.GetDefaultObject();
}

void AWeaponPickup::Interact()
{
	// Getting a reference to the Character Controller
	const ACharacterCore* Character = Cast<ACharacterCore>(UGameplayStatics::GetPlayerCharacter(GetWorld(), 0));

	if (Character->GetInventoryComponent())
	{
		int InventoryPosition = Character->GetInventoryComponent()->GetCurrentWeaponSlot();
		bool SpawnPickup = true;

		// Checking if the player has a free weapon slot. If not, we swap out the currently equipped weapon
		for (int Index = 0; Index < Character->GetInventoryComponent()->GetNumberOfWeaponSlots(); Index++)
		{
			if (Character->GetInventoryComponent()->GetEquippedWeapons().Find(Index) == nullptr)
			{
				InventoryPosition = Index;
				SpawnPickup = false;
				break;
			}
		}
	
		// Destroying the pickup
		Destroy();
	}
}