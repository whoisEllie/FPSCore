// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "InputAction.h"
#include "InteractionBase.h"
#include "Components/ActorComponent.h"
#include "InteractionComponent.generated.h"

class UInteractionComponent;

DECLARE_DYNAMIC_MULTICAST_SPARSE_DELEGATE_TwoParams(FGetCurrentHitActorSignature, UInteractionComponent, GetCurrentHitActor, AInteractionBase*, HitInteractionBase, bool, bIsValid);


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent, Blueprintable) )
class FPSCORE_API UInteractionComponent final : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInteractionComponent();

	/** Returns the display text of the current interactable object that the player is looking at */
	UFUNCTION(BlueprintCallable, Category = "Interaction Component")
	FText& GetInteractText() { return InteractText; }

	/** Returns the result of the interaction trace, which is true if the object that we are looking at is able to be
		interacted with */
	UFUNCTION(BlueprintCallable, Category = "Interaction Component")
	bool CanInteract() const { return bCanInteract; }

	/** Returns true if the interaction trace is hitting a weapon pickup */
	bool InteractionIsWeapon() const { return bInteractionIsWeapon; }

	/** Returns the current interaction actor, or, if no actor is hit, nullptr
	 *	@warning this function is not guaranteed to return a value, make sure to check if the output is valid before performing logic on it
	 */
	UPROPERTY(BlueprintAssignable, Category = "Interaction Component")
	FGetCurrentHitActorSignature GetCurrentHitActor;
	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	/** Called to bind functionality to input */
	void SetupInputComponent(class UEnhancedInputComponent* PlayerInputComponent);

	/** The input action for interacting with the world */
	UPROPERTY()
	UInputAction* InteractAction;

private:	
	/** Interaction with the world using SInteractInterface */
	void WorldInteract();

	/** Displaying the indicator for interaction */
	void InteractionIndicator();
	
	/** The current message to be displayed above the screen (if any) */
	UPROPERTY()
	FText InteractText;

	/** Hit result for line trace */
	FHitResult InteractionHit;

	/** The maximum distance in unreal units at which the player can interact with an object */
	UPROPERTY(EditDefaultsOnly, Category = "Interaction")
	float InteractDistance = 400.0f;

	/** Whether the object we are looking at is one we are able to interact with (used for UI) */
	bool bCanInteract;
	
	/** Whether the interaction object the character is looking at is a weapon pickup (used for UI) */
	bool bInteractionIsWeapon;
};
