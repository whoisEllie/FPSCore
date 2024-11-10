// Fill out your copyright notice in the Description page of Project Settings.


#include "NormalDistributionActions.h"
#include "NormalDistribution.h"
#include "NormalDistributionEditorToolkit.h"


UClass* FNormalDistributionActions::GetSupportedClass() const
{
	return UNormalDistribution::StaticClass();
}

FText FNormalDistributionActions::GetName() const
{
	return INVTEXT("Normal Distribution");
}

FColor FNormalDistributionActions::GetTypeColor() const
{
	return FColor::Cyan;
}

uint32 FNormalDistributionActions::GetCategories()
{
	return EAssetTypeCategories::Misc;
}

void FNormalDistributionActions::OpenAssetEditor(const TArray<UObject*>& InObjects,
	TSharedPtr<IToolkitHost> EditWithinLevelEditor)
{
	MakeShared<NormalDistributionEditorToolkit>()->InitEditor(InObjects);
}
