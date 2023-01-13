// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InteractionActor.h"
#include "WeaponBase.h"
#include "WeaponPickup.generated.h"

class UStaticMeshComponent;
class UDataTable;
class AWeaponBase;
class AFPSCharacter;

UCLASS()
class FPSCORE_API AWeaponPickup : public AInteractionBase
{
	GENERATED_BODY()


public:

	/** Returns the main mesh component of the given pickup - useful for toggling setting such as physics simulation */
	UStaticMeshComponent* GetMainMesh() const { return MeshComp; }

	/** Set the static setting of the given pickup (whether it should simulate physics or not */
	void SetStatic(const bool bNewStatic) { bStatic = bNewStatic; }

	/** Swt whether this pickup was spawned at runtime  */
	void SetRuntimeSpawned(const bool bNewRuntimeSpawned) { bRuntimeSpawned = bNewRuntimeSpawned; }

	/** Set the weapon class that this pickup corresponds to */
	void SetWeaponReference(const TSubclassOf<AWeaponBase> NewWeaponReference) { WeaponReference = NewWeaponReference; }

	/** Set the cached data struct that this weapon pickup hold */
	void SetCacheDataStruct(const FRuntimeWeaponData* NewDataStruct) { DataStruct = *NewDataStruct; }

	/** Returns the name of the weapon that this pickup is associated with (used for HUD) */
	FText GetWeaponName() const { return WeaponName; } 
	
	/** Spawns attachment meshes from data table */
	UFUNCTION(BlueprintCallable, Category = "Weapon Pickup")
	void SpawnAttachmentMesh();
	
	/** The array of attachments to spawn (usually inherited, can be set by instance) */
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Data")
	TArray<FName> AttachmentArrayOverride;

private:	
	/** Sets default values for this actor's properties */
	AWeaponPickup();

	/** Interface function */
	virtual void Interact() override;

	/** Called every time a variable is changed or the actor is moved in the editor */
	virtual void OnConstruction(const FTransform& Transform) override;

	/** Weapon to spawn when picked up */
	UPROPERTY(EditDefaultsOnly, Category = "Weapon")
	TSubclassOf<AWeaponBase> WeaponReference;

	/** Local weapon data struct to keep track of ammo amounts and weapon health */
	UPROPERTY()
	FRuntimeWeaponData DataStruct;

	/** Data table reference for weapon (used to see if the weapon has attachments) */
	UPROPERTY(EditDefaultsOnly, Category = "Data Table")
	UDataTable* WeaponDataTable;

	/** Data table reference for attachments */
	UPROPERTY(EditDefaultsOnly, Category = "Data Table")
	UDataTable* AttachmentsDataTable;

	/** Whether this pickup has been spawned at runtime or not  (determines whether we inherit DataStruct values or */
	/** reset to default) */
	bool bRuntimeSpawned;

	/** Whether to run physics simulations or not */
	UPROPERTY(EditInstanceOnly, Category = "Weapon")
	bool bStatic;

	/** Whether this weapon will become the primary or secondary weapon */
	bool bIsNewPrimary;
	
	/** Visualisation name */
	UPROPERTY(EditDefaultsOnly, Category = "Pickup")
	FText WeaponName;

	/** Called when the game starts or when spawned */
	virtual void BeginPlay() override;

	/** Meshes for Attachments */

	UPROPERTY()
	UStaticMeshComponent* BarrelAttachment;

	UPROPERTY()
	UStaticMeshComponent* MagazineAttachment;

	UPROPERTY()
	UStaticMeshComponent* SightsAttachment;
	
	UPROPERTY()
	UStaticMeshComponent* StockAttachment;

	UPROPERTY()
	UStaticMeshComponent* GripAttachment;
};
