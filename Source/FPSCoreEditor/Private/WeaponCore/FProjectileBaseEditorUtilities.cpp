// Fill out your copyright notice in the Description page of Project Settings.

#include "WeaponCore/FProjectileBaseEditorUtilities.h"
#include "WeaponCore/Factories/ProjectileBaseClassViewFilter.h"
#include "K2Node_Event.h"
#include "Kismet2/BlueprintEditorUtils.h"
#include "Kismet2/KismetEditorUtilities.h"
#include "Kismet2/SClassPickerDialog.h"

bool FProjectileBaseEditorUtilities::PickChildrenOfClass(const FText& TitleText, UClass*& OutChosenClass, UClass* Class)
{
	TSharedPtr<ProjectileBaseClassViewFilter> Filter = MakeShareable(new ProjectileBaseClassViewFilter);
	Filter->AllowedChildrenOfClasses.Add(Class);

	FClassViewerInitializationOptions Options;

	Options.Mode = EClassViewerMode::ClassPicker;
	Options.ClassFilter = Filter;
	Options.bShowUnloadedBlueprints = true;
	Options.bExpandRootNodes = true;
	Options.NameTypeToDisplay = EClassViewerNameTypeToDisplay::Dynamic;

	return SClassPickerDialog::PickClass(TitleText, Options, OutChosenClass, Class);
}
