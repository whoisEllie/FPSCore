// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WeaponCore/ProjectileTemplate.h"
#include "Toolkits/AssetEditorToolkit.h"

/**
 * 
 */
class FPSCOREEDITOR_API ProjectileTemplateEditorToolkit : public FAssetEditorToolkit
{
public:
    void InitEditor(const TArray<UObject*>& InObjects);

	void RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager) override;
	void UnregisterTabSpawners(const TSharedRef<FTabManager>& TabManager) override;

	FName GetToolkitFName() const override { return "ProjectileTemplateEditor"; };
	FText GetBaseToolkitName() const override { return INVTEXT("Projectile Template Editor"); };
	FString GetWorldCentricTabPrefix() const override { return "Projectile Template"; };
	FLinearColor GetWorldCentricTabColorScale() const override { return {}; };

private:

	UProjectileTemplate* ProjectileTemplate;
};
