// Copyright 2022 Ellie Kelemen. All Rights Reserved.

#include "Components/InteractionComponent.h"
#include "EnhancedInputComponent.h"
#include "FPSCharacter.h"
#include "InteractionActor.h"
#include "WeaponBase.h"
#include "Camera/CameraComponent.h"

// Sets default values for this component's properties
UInteractionComponent::UInteractionComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Interact with a hit actor through an interact interface
void UInteractionComponent::WorldInteract()
{    
    FCollisionQueryParams TraceParams;
    TraceParams.bTraceComplex = true;

    if (const AFPSCharacter* Owner = Cast<AFPSCharacter>(GetOwner()))
    {
        TraceParams.AddIgnoredActor(Owner);
    }

    FVector CameraLocation = FVector::ZeroVector;
    FRotator CameraRotation = FRotator::ZeroRotator;
    
    if (const AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
    {
        CameraLocation = FPSCharacter->GetCameraComponent()->GetComponentLocation();
        CameraRotation = FPSCharacter->GetCameraComponent()->GetComponentRotation();
    }
    
    const FVector TraceDirection = CameraRotation.Vector();
    const FVector TraceEndLocation = CameraLocation + TraceDirection * InteractDistance;

    // Checking if we hit something with our line trace
    if (GetWorld()->LineTraceSingleByChannel(InteractionHit, CameraLocation, TraceEndLocation, ECC_WorldStatic, TraceParams))
    {
        // Making sure we don't crash the engine when we hit an object that doesn't implement a public GetClass() (such as bsp)
        if (Cast<UObject>(InteractionHit.GetActor()))
        {
            // Checking if the actor we hit implements the interaction interface
            if(InteractionHit.GetActor()->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()))
            {
                // Calling the Interact function within our hit actor via the interface
                Cast<IInteractInterface>(InteractionHit.GetActor())->Interact();
            }
        }
    }
}

// Performing logic around the visibility of the interaction indicator - called every frame
void UInteractionComponent::InteractionIndicator()
{
    bCanInteract = false;
    bInteractionIsWeapon = false;
    
    FCollisionQueryParams TraceParams;
    TraceParams.bTraceComplex = true;

    const AActor* Owner = GetOwner();
    
    if (Owner)
    {
        // Making sure we do not collide with our own line trace
        TraceParams.AddIgnoredActor(Owner);
    }
    
    FVector CameraLocation = FVector::ZeroVector;
    FRotator CameraRotation = FRotator::ZeroRotator;
    
    if (const AFPSCharacter* FPSCharacter = Cast<AFPSCharacter>(GetOwner()))
    {
        CameraLocation = FPSCharacter->GetCameraComponent()->GetComponentLocation();
        CameraRotation = FPSCharacter->GetCameraComponent()->GetComponentRotation();
    }
    
    const FVector TraceDirection = CameraRotation.Vector();
    const FVector TraceEndLocation = CameraLocation + TraceDirection * InteractDistance;

    // Checking if we hit something with our line trace
    if (GetWorld()->LineTraceSingleByChannel(InteractionHit, CameraLocation, TraceEndLocation, ECC_WorldStatic, TraceParams))
    {
        // Making sure we don't crash the engine when we hit an object that doesn't implement a public GetClass() (such as bsp)
        if (Cast<UObject>(InteractionHit.GetActor()))
        {
            // Checking if the actor we hit implements the interaction interface
            if(InteractionHit.GetActor()->GetClass()->ImplementsInterface(UInteractInterface::StaticClass()))
            {
                bCanInteract = true;
    
                // Checking between classes that derive from AInteractionBase and updating variables accordingly
                AInteractionBase* InteractionActor = Cast<AInteractionBase>(InteractionHit.GetActor());
                
                if (InteractionActor)
                {
                    InteractText = InteractionActor->InteractionText;
                    GetCurrentHitActor.Broadcast(InteractionActor, true);
                }
                else
                {
                    InteractText = FText::FromString(" "); 
                    GetCurrentHitActor.Broadcast(nullptr, false);
                }
            }
        }
    }
}

// Called every frame
void UInteractionComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // Checks to see if we are facing something to interact with, and updates the interaction indicator accordingly
    InteractionIndicator();
}

// Binds functionality to the owner's Input Component
void UInteractionComponent::SetupInputComponent(UEnhancedInputComponent* PlayerInputComponent)
{
    if (InteractAction)
    {            
        // Interacting with the world
        PlayerInputComponent->BindAction(InteractAction, ETriggerEvent::Started, this, &UInteractionComponent::WorldInteract);
    }
}

