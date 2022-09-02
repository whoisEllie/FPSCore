// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "HealthComponent.generated.h"

/** Delegate that is passed through to the owner via Blueprint */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_SixParams(FOnHealthChangedSignature, UHealthComponent*, HealthComponent, float,
                                             Health, float, HealthDelta, const class UDamageType*, DamageType,
                                             class AController*, InstigatedBy, AActor*, DamageCauser);

UCLASS( ClassGroup=(Isolation), meta=(BlueprintSpawnableComponent) )
class FPSCORE_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	/** Sets default values for this component's properties */
	UHealthComponent();

	/** Implementation of our delegate  */
	UPROPERTY(BlueprintAssignable, Category = "Events")
	FOnHealthChangedSignature OnHealthChanged;
	
protected:
	/** Called when the game starts */
	virtual void BeginPlay() override;

	/** The starting health */
	UPROPERTY(EditDefaultsOnly, Category = "Health Component")
	float DefaultHealth = 100.0f;

	/** The current active health */
	float Health = 100.0f;

	/** The function that handles taking damage, signature is the same as OnTakeAnyDamage */
	UFUNCTION()
	void HandleTakeAnyDamage(AActor* DamagedActor, float Damage, const UDamageType* DamageType,
	                         AController* InstigatedBy, AActor* DamageCauser);
};
