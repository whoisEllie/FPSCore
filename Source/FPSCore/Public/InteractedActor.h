// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InteractedActor.generated.h"

UCLASS()
class FPSCORE_API AInteractedActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AInteractedActor();

	// The function called from the delegating SInteractionActor
	void Interacted();

	// Function implemented in blueprints from which to perform logic
	UFUNCTION(BlueprintImplementableEvent)
	void OnInteracted();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;
};
