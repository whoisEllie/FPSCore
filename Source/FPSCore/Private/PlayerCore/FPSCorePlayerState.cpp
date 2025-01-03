#include "PlayerCore/FPSCorePlayerState.h"
#include "GAS/FPSCoreAbilitySystemComponent.h"

AFPSCorePlayerState::AFPSCorePlayerState()
{
	AbilitySystemComponent = CreateDefaultSubobject<UFPSCoreAbilitySystemComponent>(TEXT("FPSCoreAbilitySystemComponent"));
	AbilitySystemComponent->SetIsReplicated(true);
	AbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);

	SetNetUpdateFrequency(15.0f);
}

UAbilitySystemComponent* AFPSCorePlayerState::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}
