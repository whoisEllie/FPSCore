// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "InteractionActor.h"
#include "InteractedActor.h"

// Implementing the function from our interface
void AInteractionActor::Interact()
{
	// Calling Interacted() on all of the interacted actors
	for (AInteractedActor* InteractedActor : InteractedActors)
	{
		InteractedActor->Interacted();
		OnInteraction(InteractedActor);
	}

	// Calling the local interaction complete function
	InteractionCompleted();
}