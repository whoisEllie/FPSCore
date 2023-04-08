// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSCoreEditor.h"

#include "FPSCoreCustomSettings.h"
#include "FPSCoreEditorStyle.h"
#include "FPSCoreEditorCommands.h"
#include "ISettingsContainer.h"
#include "ISettingsModule.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"

static const FName FPSCoreEditorTabName("FPSCoreEditor");

#define LOCTEXT_NAMESPACE "FFPSCoreEditorModule"

void FFPSCoreEditorModule::StartupModule()
{
	// This code will execute after your module is loaded into memory; the exact timing is specified in the .uplugin file per-module
	
	FFPSCoreEditorStyle::Initialize();
	FFPSCoreEditorStyle::ReloadTextures();

	FFPSCoreEditorCommands::Register();
	
	PluginCommands = MakeShareable(new FUICommandList);

	PluginCommands->MapAction(
		FFPSCoreEditorCommands::Get().PluginAction,
		FExecuteAction::CreateRaw(this, &FFPSCoreEditorModule::PluginButtonClicked),
		FCanExecuteAction());

	UToolMenus::RegisterStartupCallback(FSimpleMulticastDelegate::FDelegate::CreateRaw(this, &FFPSCoreEditorModule::RegisterMenus));

	// Set up custom settings
	{
		ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
		if (SettingsModule)
		{
			const TSharedPtr<ISettingsContainer> ProjectSettingsContainer = SettingsModule->GetContainer("Project");
			ProjectSettingsContainer->DescribeCategory("FPS Core", FText::FromString("FPS Core"), FText::FromString("Settings for the FPS Core Plugin"));

			SettingsModule->RegisterSettings("Project", "FPS Core", "FPS Core Settings",
				FText::FromString("FPS Core Settings"),
				FText::FromString("Configure FPS Core Settings"),
				GetMutableDefault<UFPSCoreCustomSettings>()
			);
		}
	}
}

void FFPSCoreEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FFPSCoreEditorStyle::Shutdown();

	FFPSCoreEditorCommands::Unregister();

	// Unregister settings
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	if (SettingsModule)
	{
		SettingsModule->UnregisterSettings("Project", "FPS Core", "FPS Core Settings");	
	}
}

void FFPSCoreEditorModule::PluginButtonClicked()
{
	// Open the FPS Core settings
	ISettingsModule* SettingsModule = FModuleManager::GetModulePtr<ISettingsModule>("Settings");
	SettingsModule->ShowViewer("Project", "FPS Core", "FPS Core Settings");
}

void FFPSCoreEditorModule::RegisterMenus()
{
	// Owner will be used for cleanup in call to UToolMenus::UnregisterOwner
	FToolMenuOwnerScoped OwnerScoped(this);

	{
		UToolMenu* Menu = UToolMenus::Get()->ExtendMenu("LevelEditor.MainMenu.Window");
		{
			FToolMenuSection& Section = Menu->FindOrAddSection("WindowLayout");
			Section.AddMenuEntryWithCommandList(FFPSCoreEditorCommands::Get().PluginAction, PluginCommands);
		}
	}

	{
		UToolMenu* ToolbarMenu = UToolMenus::Get()->ExtendMenu("LevelEditor.LevelEditorToolBar.PlayToolBar");
		{
			FToolMenuSection& Section = ToolbarMenu->FindOrAddSection("PluginTools");
			{
				FToolMenuEntry& Entry = Section.AddEntry(FToolMenuEntry::InitToolBarButton(FFPSCoreEditorCommands::Get().PluginAction));
				Entry.SetCommandList(PluginCommands);
			}
		}
	}
}

#undef LOCTEXT_NAMESPACE
	
IMPLEMENT_MODULE(FFPSCoreEditorModule, FPSCoreEditor)