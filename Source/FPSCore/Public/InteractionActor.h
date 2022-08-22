// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "GameFramework/Actor.h"
#include "InteractionActor.generated.h"

class AInteractedActor;
class UStaticMeshComponent;

UCLASS()
class FPSCORE_API AInteractionActor : public AActor, public IInteractInterface
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractionActor();

	virtual void Interact() override;

	// The actors to which we cast upon receiving an interaction
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Interacted Actor")
	TArray<AInteractedActor*> InteractedActors;

	// The description to be passed to the player for this item
	UPROPERTY(BlueprintReadWrite, EditInstanceOnly, Category = "Interacted Actor")
	FText PopupDescription;

	// Called for every item interacted with
	UFUNCTION(BlueprintImplementableEvent)
	void OnInteraction(AActor* ImplementedActor);

	// Called when the interaction is completed
	UFUNCTION(BlueprintImplementableEvent)
	void InteractionCompleted();

private:

	// The mesh which to render
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* MeshComp;
	
};
