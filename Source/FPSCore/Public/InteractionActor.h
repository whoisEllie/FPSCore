// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "InteractionBase.h"
#include "InteractionActor.generated.h"

class AInteractedActor;
class UStaticMeshComponent;

UCLASS()
class FPSCORE_API AInteractionActor : public AInteractionBase
{
	GENERATED_BODY()
	
public:	

	UFUNCTION(BlueprintCallable, Category = "Interaction")
	void UpdateInteractionPopupText(const FText NewInteractionText) { InteractionText = NewInteractionText; }
	
	virtual void Interact() override;

	// The actors to which we cast upon receiving an interaction
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Interacted Actor")
	TArray<AInteractedActor*> InteractedActors;
	
	// Called for every item interacted with
	UFUNCTION(BlueprintImplementableEvent)
	void OnInteraction(AActor* ImplementedActor);

	// Called when the interaction is completed
	UFUNCTION(BlueprintImplementableEvent)
	void InteractionCompleted();
};
