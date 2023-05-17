#pragma once
#include "WeaponCore/AmmoType.h"
#include "FPSCoreCustomSettings.generated.h"

UCLASS(Config = EditorUserSettings, DefaultConfig)
class UFPSCoreCustomSettings : public UObject
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere, config, Category = Test)
	bool bTest = false;

	UPROPERTY(EditAnywhere, Category = Weapons)
	TMap<UAmmoType*, int> StartingAmmo;

	UFUNCTION(CallInEditor, Category = Test)
	void CreateCollisionChannels();
};
