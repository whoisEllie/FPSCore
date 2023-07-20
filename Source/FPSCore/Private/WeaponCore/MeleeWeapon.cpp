// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/MeleeWeapon.h"


// Sets default values
AMeleeWeapon::AMeleeWeapon()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	TraceBoundary = CreateDefaultSubobject<UCapsuleComponent>(TEXT("TraceBoundary"));
	TraceBoundary->SetupAttachment(RootComponent);
}

void AMeleeWeapon::Attack()
{
	IWeaponInterface::Attack();

	FCollisionQueryParams TraceParams;
	TraceParams.bTraceComplex = true;
	TraceParams.AddIgnoredActor(this);
	TraceParams.AddIgnoredActor(GetParentActor());
	
	GetWorld()->SweepSingleByChannel(MeleeHit, TraceBoundary->GetComponentLocation(),
	                                 TraceBoundary->GetComponentLocation(), TraceBoundary->GetComponentQuat(),
	                                 ECC_WorldStatic,
	                                 FCollisionShape::MakeCapsule(TraceBoundary->GetScaledCapsuleRadius(),
	                                                              TraceBoundary->GetScaledCapsuleHalfHeight()),
	                                 TraceParams);

}

// Called when the game starts or when spawned
void AMeleeWeapon::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AMeleeWeapon::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

