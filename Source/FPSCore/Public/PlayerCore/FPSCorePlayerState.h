#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerState.h"
#include "AbilitySystemInterface.h"
#include "FPSCorePlayerState.generated.h"

class UFPSCoreAbilitySystemComponent;

UCLASS()
class FPSCORE_API AFPSCorePlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	AFPSCorePlayerState();

	UAbilitySystemComponent* GetAbilitySystemComponent() const override;

protected:
	UPROPERTY()
	UFPSCoreAbilitySystemComponent* AbilitySystemComponent;
};
