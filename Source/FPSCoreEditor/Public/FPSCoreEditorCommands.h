// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Framework/Commands/Commands.h"
#include "FPSCoreEditorStyle.h"

class FFPSCoreEditorCommands : public TCommands<FFPSCoreEditorCommands>
{
public:

	FFPSCoreEditorCommands()
		: TCommands<FFPSCoreEditorCommands>(TEXT("FPSCoreEditor"), NSLOCTEXT("Contexts", "FPSCoreEditor", "FPSCoreEditor Plugin"), NAME_None, FFPSCoreEditorStyle::GetStyleSetName())
	{
	}

	// TCommands<> interface
	virtual void RegisterCommands() override;

public:
	TSharedPtr< FUICommandInfo > PluginAction;
};
