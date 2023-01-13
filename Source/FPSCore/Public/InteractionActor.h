// Copyright 2022 Ellie Kelemen. All Rights Reserved.

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
	UPROPERTY(BlueprintReadOnly, EditInstanceOnly, Category = "Interacted Actor")
	TArray<AInteractedActor*> InteractedActors;
	
	// Called for every item interacted with
	UFUNCTION(BlueprintImplementableEvent)
	void OnInteraction(AActor* ImplementedActor);

	// Called when the interaction is completed
	UFUNCTION(BlueprintImplementableEvent)
	void InteractionCompleted();
};
