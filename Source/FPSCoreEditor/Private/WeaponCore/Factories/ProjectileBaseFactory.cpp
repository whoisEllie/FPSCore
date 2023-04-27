// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/Factories/ProjectileBaseFactory.h"

#include "Kismet2/KismetEditorUtilities.h"
#include "WeaponCore/FProjectileBaseEditorUtilities.h"
#include "WeaponCore/ProjectileBase.h"

UProjectileBaseFactory::UProjectileBaseFactory(const FObjectInitializer& ObjectInitializer)
{
	bCreateNew = true;
	bEditAfterNew = false;
	SupportedClass = AProjectileBase::StaticClass();
	ParentClass = SupportedClass;
}

bool UProjectileBaseFactory::ConfigureProperties()
{
	static const FText TitleText = FText::FromString(TEXT("Pick Parent Item Class for new Projectile Base Object"));

	ParentClass = nullptr;

	UClass* ChosenClass = nullptr;

	const bool bPressedOk = FProjectileBaseEditorUtilities::PickChildrenOfClass(TitleText, ChosenClass, SupportedClass);

	if (bPressedOk)
	{
		ParentClass = ChosenClass;
	}
	
	return bPressedOk;
}

UObject* UProjectileBaseFactory::FactoryCreateNew(UClass* InClass, UObject* InParent, FName InName, EObjectFlags Flags,
                                                  UObject* Context, FFeedbackContext* Warn)
{
	if (ParentClass == nullptr || !FKismetEditorUtilities::CanCreateBlueprintOfClass(ParentClass))
	{
		FFormatNamedArguments Args;

		Args.Add(TEXT("ClassName"), ParentClass ? FText::FromString(ParentClass->GetName()) : NSLOCTEXT("UnrealEd", "Null", "(null)"));

		FMessageDialog::Open(EAppMsgType::Ok, FText::Format(NSLOCTEXT("UnrealEd", "CannotCreateBlueprintFromClass", "Cannot create a blueprint baded on the class '{0}'."), Args));

		return nullptr;
	}

	return FKismetEditorUtilities::CreateBlueprint(ParentClass, InParent, InName, BPTYPE_Normal, UBlueprint::StaticClass(), UBlueprintGeneratedClass::StaticClass(), NAME_None);
}