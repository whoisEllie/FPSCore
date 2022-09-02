// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InteractInterface.h"
#include "GameFramework/Actor.h"
#include "InteractionBase.generated.h"

UCLASS()
class FPSCORE_API AInteractionBase : public AActor, public IInteractInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AInteractionBase();

	/** The description to be passed to the player for this item */
	FText InteractionText;
	
protected:
	
	/** The mesh which to render */
	UPROPERTY(EditDefaultsOnly, Category = "Mesh")
	UStaticMeshComponent* MeshComp;
};
