// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "FPSCoreAbilitySystemComponent.h"
#include "FPSCoreGameplayAbility.h"
#include "Engine/DataAsset.h"
#include "FPSCoreAbilitySet.generated.h"

class UFPSCoreAbilitySystemComponent;
class UFPSCoreAbility;

// Ability set gameplay ability container
USTRUCT(BlueprintType)
struct FFPSCoreAbilitySet_GameplayAbility
{
	GENERATED_BODY()
	
public:
	// GA to grant
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UFPSCoreGameplayAbility> Ability = nullptr;
	
	// Level of ability to grant
	UPROPERTY(EditDefaultsOnly)
	int32 AbilityLevel = 1;
	
	// Tag used to process ipnut for this ability
	UPROPERTY(EditDefaultsOnly)
	FGameplayTag InputTag;
};

USTRUCT(BlueprintType)
struct FFPSCoreAbilitySet_GameplayEffect
{
	GENERATED_BODY()
	
public:
	// Gameplay effect to grant
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameplayEffect> GameplayEffect = nullptr;
	
	// Level of gampelay effect to grant
	UPROPERTY(EditDefaultsOnly)
	float EffectLevel = 1.0f;
};

USTRUCT(BlueprintType)
struct FFPSCoreAbilitySet_AttributeSet
{
	GENERATED_BODY()
	
public:
	// Attribute set to grant
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAttributeSet> AttributeSet;
};

USTRUCT()
struct FFPSCoreAbilitySet_GrantedHandles
{
	GENERATED_BODY()
	
public:
	void AddAbilitySpecHandles(const FGameplayAbilitySpecHandle& Handle);
	void AddGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle);
	void AddAttributeSet(UAttributeSet* Set);
	void TakeFromAbilitySystem(UFPSCoreAbilitySystemComponent* AbilitySystemComponent);
	
protected:
	
	UPROPERTY()
	TArray<FGameplayAbilitySpecHandle> AbilitySpecHandles;
	
	UPROPERTY()
	TArray<FActiveGameplayEffectHandle> GameplayEffectHandles;
	
	UPROPERTY()
	TArray<TObjectPtr<UAttributeSet>> GrantedAttributeSets;
};

/**
 * 
 */
UCLASS()
class FPSCORE_API UFPSCoreAbilitySet : public UDataAsset
{
	GENERATED_BODY()
	
public:
	
	UFPSCoreAbilitySet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());
	
	void GiveToAbilitySystem(UFPSCoreAbilitySystemComponent* AbilitySystemComponent, FFPSCoreAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject = nullptr) const;
	
protected:
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Abilities", meta=(TitleProperty=Ability))
	TArray<FFPSCoreAbilitySet_GameplayAbility> GrantedGameplayAbilities;
	
	UPROPERTY(EditDefaultsOnly, Category = "Gameplay Effects", meta=(TitleProperty=GameplayEffects))
	TArray<FFPSCoreAbilitySet_GameplayEffect> GrantedGameplayEffects;
	
	UPROPERTY(EditDefaultsOnly, Category = "Attribute Sets", meta=(TitleProperty=AttributeSet))
	TArray<FFPSCoreAbilitySet_AttributeSet> GrantedAttributes;
};
