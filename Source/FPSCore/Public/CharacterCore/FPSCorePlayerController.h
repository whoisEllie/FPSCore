#pragma once

#include "CoreMinimal.h"
#include "FPSCorePlayerController.generated.h"


UCLASS()
class FPSCORE_API AFPSCorePlayerController : public APlayerController 
{
	GENERATED_BODY()

	public:
	AFPSCorePlayerController();

	UFUNCTION(BlueprintCallable, Category = "Input System|Player Controller")
	APlayerState* GetFPSCorePlayerState() const;

	UFUNCTION(BlueprintCallable, Category = "Input System|FPS Core Ability System Component")
	UAbilitySystemComponent* GetFPSCoreAbilitySystemComponent() const;

	protected:
	
};