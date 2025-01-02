#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "FPSCoreAbilitySystemComponent.generated.h"

UCLASS()
class FPSCORE_API UFPSCoreAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()

	public:
	UFPSCoreAbilitySystemComponent();

	void AbilityInputTagPressed(const FGameplayTag& InputTag);
	void AbilityInputTagReleased(const FGameplayTag& InputTag);

	void ProcessAbilityInput(float DeltaTime, bool bGamePaused);
	void ClearAbilityInput();

	protected:
	virtual void AbilitySpecInputPressed(FGameplayAbilitySpec& Spec) override;
	virtual void AbilitySpecInputReleased(FGameplayAbilitySpec& Spec) override;

	protected:
	// Handles for abilities that had their inputs pressed this frame
	TArray<FGameplayAbilitySpecHandle> InputPressedSpecHandles;

	// Handles for abilities that had their inputs released this frame
	TArray<FGameplayAbilitySpecHandle> InputReleasedSpecHandles;

	// Handles for abilities that have their inputs held this frame
    TArray<FGameplayAbilitySpecHandle> InputHeldSpecHandles;
};