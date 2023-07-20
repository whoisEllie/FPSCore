// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponInterface.h"
#include "Components/CapsuleComponent.h"
#include "GameFramework/Actor.h"
#include "MeleeWeapon.generated.h"

UCLASS()
class FPSCORE_API AMeleeWeapon : public AActor, public IWeaponInterface
{
	GENERATED_BODY()

public:
	// Sets default values for this actor's properties
	AMeleeWeapon();

	virtual void Attack() override;

	UPROPERTY(EditDefaultsOnly)
	UCapsuleComponent* TraceBoundary;

	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

private:

	FHitResult MeleeHit;
};
