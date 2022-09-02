// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "InteractInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UInteractInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class FPSCORE_API IInteractInterface
{
	GENERATED_BODY()

public:

	/** Called by the interact interface */
	UFUNCTION()
	virtual void Interact();
};
