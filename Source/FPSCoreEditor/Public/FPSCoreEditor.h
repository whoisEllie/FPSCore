// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NormalDistributionActions.h"
#include "Modules/ModuleManager.h"

class FToolBarBuilder;
class FMenuBuilder;

class FFPSCoreEditorModule : public IModuleInterface
{
public:

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;
	
	/** This function will be bound to Command. */
	void PluginButtonClicked();
	
private:
	void RegisterAssetTypeActions(IAssetTools& AssetTools, TSharedRef<IAssetTypeActions> Actions)
	{
		AssetTools.RegisterAssetTypeActions(Actions);
		CreatedAssetTypeActions.Add(Actions);	
	}

	void RegisterMenus();

	TArray<TSharedPtr<IAssetTypeActions>> CreatedAssetTypeActions;

	TSharedPtr<FNormalDistributionActions> NormalDistributionActions;

	TSharedPtr<class FSlateStyleSet> StyleSet;

private:
	TSharedPtr<class FUICommandList> PluginCommands;
};
