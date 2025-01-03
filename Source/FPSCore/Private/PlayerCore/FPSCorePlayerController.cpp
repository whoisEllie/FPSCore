#include "PlayerCore/FPSCorePlayerController.h"
#include "GAS/FPSCoreAbilitySystemComponent.h"
#include "PlayerCore/FPSCorePlayerState.h"

AFPSCorePlayerController::AFPSCorePlayerController()
{
}

AFPSCorePlayerState* AFPSCorePlayerController::GetFPSCorePlayerState() const
{
	return CastChecked<AFPSCorePlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}

UAbilitySystemComponent* AFPSCorePlayerController::GetFPSCoreAbilitySystemComponent() const
{
	const AFPSCorePlayerState* PlayerState = GetFPSCorePlayerState();
	return CastChecked<UFPSCoreAbilitySystemComponent>(PlayerState->GetAbilitySystemComponent());
}
