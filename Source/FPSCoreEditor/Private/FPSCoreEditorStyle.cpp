// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSCoreEditorStyle.h"
#include "FPSCoreEditor.h"
#include "Framework/Application/SlateApplication.h"
#include "Styling/SlateStyleRegistry.h"
#include "Slate/SlateGameResources.h"
#include "Interfaces/IPluginManager.h"
#include "Styling/SlateStyleMacros.h"

#define RootToContentDir Style->RootToContentDir

TSharedPtr<FSlateStyleSet> FFPSCoreEditorStyle::StyleInstance = nullptr;

void FFPSCoreEditorStyle::Initialize()
{
	if (!StyleInstance.IsValid())
	{
		StyleInstance = Create();
		FSlateStyleRegistry::RegisterSlateStyle(*StyleInstance);
	}
}

void FFPSCoreEditorStyle::Shutdown()
{
	FSlateStyleRegistry::UnRegisterSlateStyle(*StyleInstance);
	ensure(StyleInstance.IsUnique());
	StyleInstance.Reset();
}

FName FFPSCoreEditorStyle::GetStyleSetName()
{
	static FName StyleSetName(TEXT("FPSCoreEditorStyle"));
	return StyleSetName;
}


const FVector2D Icon16x16(16.0f, 16.0f);
const FVector2D Icon20x20(20.0f, 20.0f);

TSharedRef< FSlateStyleSet > FFPSCoreEditorStyle::Create()
{
	TSharedRef< FSlateStyleSet > Style = MakeShareable(new FSlateStyleSet("FPSCoreEditorStyle"));
	Style->SetContentRoot(IPluginManager::Get().FindPlugin("FPSCore")->GetBaseDir() / TEXT("Resources"));

	Style->Set("FPSCoreEditor.PluginAction", new IMAGE_BRUSH_SVG(TEXT("FPSCoreIcon"), Icon20x20));
	return Style;
}

void FFPSCoreEditorStyle::ReloadTextures()
{
	if (FSlateApplication::IsInitialized())
	{
		FSlateApplication::Get().GetRenderer()->ReloadTextureResources();
	}
}

const ISlateStyle& FFPSCoreEditorStyle::Get()
{
	return *StyleInstance;
}
