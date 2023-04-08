// Copyright Epic Games, Inc. All Rights Reserved.

#include "FPSCoreEditorCommands.h"

#define LOCTEXT_NAMESPACE "FFPSCoreEditorModule"

void FFPSCoreEditorCommands::RegisterCommands()
{
	UI_COMMAND(PluginAction, "FPS Core", "Opens the FPS Core settings", EUserInterfaceActionType::Button, FInputChord());
}

#undef LOCTEXT_NAMESPACE
