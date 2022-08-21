// Fill out your copyright notice in the Description page of Project Settings.


#include "InteractedActor.h"

// Sets default values
AInteractedActor::AInteractedActor()
{
}

void AInteractedActor::Interacted()
{
	// Calls function to be implemented in blueprints
	OnInteracted();
}

// Called when the game starts or when spawned
void AInteractedActor::BeginPlay()
{
	Super::BeginPlay();
	
}