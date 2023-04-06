// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSCoreEditor.h"
#include "FPSCoreEditorStyle.h"
#include "FPSCoreEditorCommands.h"
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
}

void FFPSCoreEditorModule::ShutdownModule()
{
	// This function may be called during shutdown to clean up your module.  For modules that support dynamic reloading,
	// we call this function before unloading the module.

	UToolMenus::UnRegisterStartupCallback(this);

	UToolMenus::UnregisterOwner(this);

	FFPSCoreEditorStyle::Shutdown();

	FFPSCoreEditorCommands::Unregister();
}

void FFPSCoreEditorModule::PluginButtonClicked()
{
	// Put your "OnButtonClicked" stuff here
	FText DialogText = FText::Format(
							LOCTEXT("PluginButtonDialogText", "Add code to {0} in {1} to override this button's actions"),
							FText::FromString(TEXT("FFPSCoreEditorModule::PluginButtonClicked()")),
							FText::FromString(TEXT("FPSCoreEditor.cpp"))
					   );
	FMessageDialog::Open(EAppMsgType::Ok, DialogText);
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