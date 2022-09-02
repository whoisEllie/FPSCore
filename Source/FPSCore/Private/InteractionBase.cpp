// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "InteractionBase.h"


// Sets default values
AInteractionBase::AInteractionBase()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	RootComponent = MeshComp;
}