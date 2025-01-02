#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "FPSCoreGameplayAbility.generated.h"

UENUM()
enum class EFPSCoreAbilityActivationPolicy : uint8
{
	OnInputTriggered,

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
