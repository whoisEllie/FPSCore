// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "Components/WidgetManagementComponent.h"
#include "EnhancedInputComponent.h"
#include "FPSCharacter.h"
#include "FPSCharacterController.h"
#include "Blueprint/UserWidget.h"
#include "Kismet/GameplayStatics.h"

// Called when the game starts
void UWidgetManagementComponent::BeginPlay()
{
	Super::BeginPlay();

	// Initialising our widgets, and adding the HUD widget to the screen
	if (IsValid(HUDWidget))
	{
		PlayerHudWidget = Cast<UUserWidget>(CreateWidget(GetWorld(), HUDWidget));
		if (PlayerHudWidget != nullptr)
		{
			PlayerHudWidget->AddToViewport();
			CurrentWidget = PlayerHudWidget;
		}
	}
	if (IsValid(PauseWidget))
	{
		PlayerPauseWidget = Cast<UUserWidget>(CreateWidget(GetWorld(), PauseWidget));
	}
	if (IsValid(SettingsWidget))
	{
		PlayerSettingsWidget = Cast<UUserWidget>(CreateWidget(GetWorld(), SettingsWidget));
	}
	
}

void UWidgetManagementComponent::ManageOnScreenWidgets()
{
	if (const AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
	{
		AFPSCharacterController* CharacterController = Cast<AFPSCharacterController>(FPSCharacter->GetController());

		// Making sure that all widget instances are valid before attempting to perform logic on them
		if (PlayerHudWidget && PlayerPauseWidget && SettingsWidget)
		{
			if (CurrentWidget == PlayerHudWidget)
			{
				// If our widget is currently the HUD widget, remove it and add the pause menu to the screen
				PlayerHudWidget->RemoveFromParent();
				PlayerPauseWidget->AddToViewport();
				CurrentWidget = PlayerPauseWidget;
				CharacterController->SetInputMode(FInputModeGameAndUI());
				CharacterController->SetShowMouseCursor(true);
				UGameplayStatics::SetGamePaused(GetWorld(), true);
			}
			else
			{
				if (CurrentWidget == PlayerPauseWidget)
				{
					// If the current widget is the pause menu, remove it and add the HUD to the screen
					PlayerPauseWidget->RemoveFromParent();
					PlayerHudWidget->AddToViewport();
					CharacterController->SetInputMode(FInputModeGameOnly());
					CharacterController->SetShowMouseCursor(false);
					UGameplayStatics::SetGamePaused(GetWorld(), false);
					CurrentWidget = PlayerHudWidget;
				}
				else
				{
					// If the current widget is the settings menu, remove it and add the pause widget to the screen
					PlayerSettingsWidget->RemoveFromParent();
					PlayerPauseWidget->AddToViewport();
					CurrentWidget = PlayerPauseWidget;
				}
			}
		}
		else
		{
			UE_LOG(LogProfilingDebugging, Error,
			       TEXT(
				       "Unable to find one or more widget classes! Make sure to set them in UWidgetManagementComponent"
			       ))
		}
	}
}

// Creates the settings menu and adds it to the screen (called from pause menu widget BP)
void UWidgetManagementComponent::CreateSettingsMenu()
{
	if (PlayerPauseWidget)
	{
		PlayerPauseWidget->RemoveFromParent();
		if (PlayerSettingsWidget)
		{
			PlayerSettingsWidget->AddToViewport();
			CurrentWidget = PlayerSettingsWidget;
		}
	}
}

// Binds functionality to the owner's Input Component
void UWidgetManagementComponent::SetupInputComponent(UEnhancedInputComponent* PlayerInputComponent)
{
	if (PauseAction)
	{
		// Pausing the game
		PlayerInputComponent->BindAction(PauseAction, ETriggerEvent::Started, this, &UWidgetManagementComponent::ManageOnScreenWidgets);
	}
}