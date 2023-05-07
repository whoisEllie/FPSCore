// Fill out your copyright notice in the Description page of Project Settings.


#include "WeaponCore/Editors/ProjectileTemplateEditorToolkit.h"
#include "Widgets/Docking/SDockTab.h"
#include "Modules/ModuleManager.h"

void ProjectileTemplateEditorToolkit::InitEditor(const TArray<UObject*>& InObjects)
{
	ProjectileTemplate = Cast<UProjectileTemplate>(InObjects[0]);

	const TSharedRef<FTabManager::FLayout> Layout = FTabManager::NewLayout("ProjectileTemplateEditorLayout")
	->AddArea
	(
		FTabManager::NewPrimaryArea()->SetOrientation(Orient_Vertical)
		->Split
		(
			FTabManager::NewStack()
			->SetSizeCoefficient(0.6f)
			->AddTab("ProjectileBaseDetailsTab", ETabState::OpenedTab)
		)
		->Split
		(
			FTabManager::NewStack()
			->SetSizeCoefficient(0.4f)
			->AddTab("OutputLog", ETabState::OpenedTab)
		)
	);
	FAssetEditorToolkit::InitAssetEditor(EToolkitMode::Standalone, {}, "ProjectileTemplateEditor", Layout, true, true, InObjects);
}

void ProjectileTemplateEditorToolkit::RegisterTabSpawners(const TSharedRef<FTabManager>& TabManager)
{
	FAssetEditorToolkit::RegisterTabSpawners(TabManager);

	FPropertyEditorModule& PropertyEditorModule = FModuleManager::GetModuleChecked<FPropertyEditorModule>("PropertyEditor");
	FDetailsViewArgs DetailsViewArgs;
	DetailsViewArgs.NameAreaSettings = FDetailsViewArgs::HideNameArea;
	TSharedRef<IDetailsView> DetailsView = PropertyEditorModule.CreateDetailView(DetailsViewArgs);
	DetailsView->SetObjects(TArray<UObject*>{ ProjectileTemplate });
	TabManager->RegisterTabSpawner("ProjectileBaseDetailsTab", FOnSpawnTab::CreateLambda([=](const FSpawnTabArgs&)
	{
		return SNew(SDockTab)
		[
			DetailsView
		];
	}))
	.SetDisplayName(INVTEXT("Details"))
	.SetGroup(WorkspaceMenuCategory.ToSharedRef());
}

void ProjectileTemplateEditorToolkit::UnregisterTabSpawners(const TSharedRef<FTabManager>& TabManager)
{
	FAssetEditorToolkit::UnregisterTabSpawners(TabManager);
	TabManager->UnregisterTabSpawner("ProjectileBaseDetailsTab");
}
