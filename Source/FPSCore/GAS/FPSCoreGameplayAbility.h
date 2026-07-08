#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "FPSCoreGameplayAbility.generated.h"

UENUM()
enum class EFPSCoreAbilityActivationPolicy : uint8
{
	/** Activate once on the frame the input is pressed. */
	OnInputTriggered,

	/** Keep active while the input is held. */
	WhileInputActive
};


UCLASS()
class FPSCORE_API UFPSCoreGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()

public:
	EFPSCoreAbilityActivationPolicy GetActivationPolicy() const {return ActivationPolicy;};

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputSystem|Ability Activation")
	EFPSCoreAbilityActivationPolicy ActivationPolicy;
	
};