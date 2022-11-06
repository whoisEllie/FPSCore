// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InteractionBase.h"
#include "WeaponBase.h"
#include "AmmoPickup.generated.h"

class UStaticMeshComponent;
class USceneComponent;
class USoundBase;

/** Enum for the ammo amounts that a pickup can have */
UENUM()
enum class EAmmoAmount : uint8
{
	Low    		UMETA(DisplayName="Low Ammo"),
	Medium 		UMETA(DisplayName="Medium Ammo"),
	High 		UMETA(DisplayName="High Ammo"),
};

/** Struct that keeps track of all our data per ammo type */
USTRUCT()
struct FAmmoTypeData
{
	GENERATED_BODY()

	UPROPERTY(EditDefaultsOnly, Category = "Ammo Pickup")
	TMap<EAmmoAmount, UStaticMesh*> FullAmmoBoxes;
	
	UPROPERTY(EditDefaultsOnly, Category = "Ammo Pickup")
	TMap<EAmmoAmount, UStaticMesh*> EmptyAmmoBoxes;

	UPROPERTY(EditDefaultsOnly, Category = "Ammo Pickup")
	TMap<EAmmoAmount, int32> AmmoCounts;

	UPROPERTY(EditAnywhere, Category = "Ammo Pickup")
	FText PickupName;
	
};

UCLASS()
class FPSCORE_API AAmmoPickup : public AInteractionBase
{
	GENERATED_BODY()

protected:

	/** Map to keep track of the name showed to the player for each ammo type */
	UPROPERTY(EditDefaultsOnly, Category = "Pickup", meta=(DeprecatedProperty, DeprecationMessage="Please set pickup names in AmmoData instead."))
	TMap<EAmmoType, FText> PickupName;

	/** Map to keep track of all values for the meshes and ammo counts */
	UPROPERTY(EditDefaultsOnly, Category = "Meshes")
	TMap<EAmmoType, FAmmoTypeData> AmmoData;
	
private:
	
	/** Interact function from Interact Interface */
	virtual void Interact() override;
	
	/** Sets default values for this actor's properties */
	AAmmoPickup();

	/** Overriden construction script to display mesh preview in engine */
	virtual void OnConstruction(const FTransform& Transform) override;

	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** Updates the pickup mesh from the full mesh to the empty one */
	void SetEmptyMesh();
	
	/** The amount of ammo (low/medium/high that this instance should have */
	UPROPERTY(EditInstanceOnly, Category = "Properties")
	EAmmoAmount AmmoAmount;

	/** The type of ammo that this instance should have */
	UPROPERTY(EditInstanceOnly, Category = "Properties")
	EAmmoType AmmoType;

	/** Whether this is an infinite ammo box or not */
	UPROPERTY(EditInstanceOnly, Category = "Properties")
	bool bInfinite;
	
	/** Whether the player can interact with this ammo pickup (whether it is full or empty, basically) */
	bool bIsEmpty;

	/** Whether debug print statements should be shown */
	UPROPERTY(EditDefaultsOnly, Category = "Debug")
	bool bDrawDebug;

	/** The sound effect to play when ammunition is collected */
	UPROPERTY(EditDefaultsOnly, Category = "Sound bases	")
	USoundBase* PickupSFX;
};
