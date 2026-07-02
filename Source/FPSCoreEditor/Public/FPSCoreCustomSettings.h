#pragma once
#include "FPSCoreCustomSettings.generated.h"

UCLASS(Config = EditorUserSettings, DefaultConfig)
class UFPSCoreCustomSettings : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, config, Category = Test)
	bool bTest = false;

	UFUNCTION(CallInEditor, Category = Test)
	void CreateCollisionChannels();
};
