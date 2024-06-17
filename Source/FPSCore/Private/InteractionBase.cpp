// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "InteractionBase.h"
#include "Engine/World.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
AInteractionBase::AInteractionBase()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
}