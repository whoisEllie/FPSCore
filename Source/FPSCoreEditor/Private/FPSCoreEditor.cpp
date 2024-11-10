// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSCoreEditor.h"

#include "AssetTypeActions_Base.h"
#include "FPSCoreCustomSettings.h"
#include "FPSCoreEditorStyle.h"
#include "FPSCoreEditorCommands.h"
#include "ISettingsContainer.h"
#include "ISettingsModule.h"
#include "Misc/MessageDialog.h"
#include "ToolMenus.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"
#include "Styling/SlateStyleRegistry.h"
#include "WeaponCore/AmmoType.h"
#include "WeaponCore/LineTraceTemplate.h"
#include "WeaponCore/ProjectileTemplate.h"

static const FName FPSCoreEditorTabName("FPSCoreEditor");

#define LOCTEXT_NAMESPACE "FFPSCoreEditorModule"

class FAmmoTypeActions : public FAssetTypeActions_Base
{
public:
	virtual UClass* GetSupportedClass() const override { return UAmmoType::StaticClass(); };
	virtual FText GetName() const override { return INVTEXT("Ammo Type"); };
	virtual FColor GetTypeColor() const override { return FColor::Orange; };
	virtual uint32 GetCategories() override { return FAssetToolsModule::GetModule().Get().FindAdvancedAssetCategory(FName("Weapon Core")); };
};

class FLineTraceBulletActions : public FAssetTypeActions_Base
{
public:
	virtual UClass* GetSupportedClass() const override { return ULineTraceTemplate::StaticClass(); };
	virtual FText GetName() const override { return INVTEXT("Line Trace Template"); };
	virtual FColor GetTypeColor() const override { return FColor::Cyan; };
	virtual uint32 GetCategories() override { return FAssetToolsModule::GetModule().Get().FindAdvancedAssetCategory(FName("Weapon Core")); };
};

class FFPSCoreSlateStyle final : public FSlateStyleSet
{
public:
	FFPSCoreSlateStyle() : FSlateStyleSet("FPSCoreEditor")
	{
		SetParentStyleName(FAppStyle::GetAppStyleSetName());

		const TSharedPtr<IPlugin> Plugin = IPluginManager::Get().FindPlugin(TEXT("FPSCore"));
		check(Plugin.IsValid());

		const FString PluginIconsDir = FPaths::ConvertRelativePathToFull(FPaths::Combine(Plugin->GetBaseDir(), TEXT("Resources")));

		SetContentRoot(PluginIconsDir);
		SetCoreContentRoot(FPaths::EngineContentDir() / TEXT("Slate"));
		
		// FPS Core Editor icons
		static const FVector2D Icon16 = FVector2D(16.0f, 16.0f);
		static const FVector2D Icon64 = FVector2D(64.0f, 64.0f);

		Set("ClassIcon.AmmoType", new IMAGE_BRUSH_SVG("InputAction_16", Icon16));
		Set("ClassThumbnail.AmmoType", new IMAGE_BRUSH_SVG("InputAction_64", Icon64));
		
		Set("ClassIcon.LineTraceBullet", new IMAGE_BRUSH_SVG("InputAction_16", Icon16));
		Set("ClassThumbnail.LineTraceBullet", new IMAGE_BRUSH_SVG("InputAction_64", Icon64));
		
		Set("ClassIcon.ProjectileBase", new IMAGE_BRUSH_SVG("InputAction_16", Icon16));
		Set("ClassThumbnail.ProjectileBase", new IMAGE_BRUSH_SVG("InputAction_64", Icon64));
	}
};

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

	// Registering custom styles
	StyleSet = MakeShared<FFPSCoreSlateStyle>();
	FSlateStyleRegistry::RegisterSlateStyle(*StyleSet.Get());
	
	// Set up custom settings
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