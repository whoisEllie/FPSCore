// Fill out your copyright notice in the Description page of Project Settings.


#include "FPSCoreAbilitySet.h"

void FFPSCoreAbilitySet_GrantedHandles::AddAbilitySpecHandles(const FGameplayAbilitySpecHandle& Handle)
{
	if (Handle.IsValid())
	{
		AbilitySpecHandles.Add(Handle);
	}
}

void FFPSCoreAbilitySet_GrantedHandles::AddGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle)
{
	if (Handle.IsValid())
	{
		GameplayEffectHandles.Add(Handle);
	}
}

void FFPSCoreAbilitySet_GrantedHandles::AddAttributeSet(UAttributeSet* Set)
{
	if (IsValid(Set))
	{
		GrantedAttributeSets.Add(Set);
	}
}

void FFPSCoreAbilitySet_GrantedHandles::TakeFromAbilitySystem(UFPSCoreAbilitySystemComponent* AbilitySystemComponent)
{
	check(AbilitySystemComponent)
	
	if (!AbilitySystemComponent->IsOwnerActorAuthoritative())
	{
		// Must be the server to take away ability sets
		return;
	}
	
	for (const FGameplayAbilitySpecHandle& Handle : AbilitySpecHandles)
	{
		if (Handle.IsValid())
		{
			AbilitySystemComponent->ClearAbility(Handle);
		}
	}
	
	for (const FActiveGameplayEffectHandle& Handle : GameplayEffectHandles)
	{
		if (Handle.IsValid())
		{
			AbilitySystemComponent->RemoveActiveGameplayEffect(Handle);
		}
	}
	
	for (UAttributeSet* Set : GrantedAttributeSets)
	{
		AbilitySystemComponent->RemoveSpawnedAttribute(Set);
	}
	
	AbilitySpecHandles.Reset();
	GameplayEffectHandles.Reset();
	GrantedAttributeSets.Reset();
}

UFPSCoreAbilitySet::UFPSCoreAbilitySet(const FObjectInitializer& ObjectInitializer)
{
}

void UFPSCoreAbilitySet::GiveToAbilitySystem(UFPSCoreAbilitySystemComponent* AbilitySystemComponent,
	FFPSCoreAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject) const
{
	check (AbilitySystemComponent)
	
	if (!AbilitySystemComponent->IsOwnerActorAuthoritative())
	{
		// Must be the server to grant ability sets
		return;
	}
	
	// Grant gameplay abilities
	for (int32 AbilityIndex = 0; AbilityIndex < GrantedGameplayAbilities.Num(); ++AbilityIndex)
	{
		const FFPSCoreAbilitySet_GameplayAbility& AbilityToGrant = GrantedGameplayAbilities[AbilityIndex];
		
		if (!IsValid(AbilityToGrant.Ability))
		{
			UE_LOG(LogTemp, Error, TEXT("GrantedGameplayAbilities[%d] on ability set [%s] is not valid"), AbilityIndex, *GetNameSafe(this))
			continue;
		}
		
		UFPSCoreGameplayAbility* AbilityCast = AbilityToGrant.Ability->GetDefaultObject<UFPSCoreGameplayAbility>();
		
		FGameplayAbilitySpec AbilitySpec(AbilityCast, AbilityToGrant.AbilityLevel);
		AbilitySpec.SourceObject = SourceObject;
		AbilitySpec.GetDynamicSpecSourceTags().AddTag(AbilityToGrant.InputTag);
		
		const FGameplayAbilitySpecHandle AbilitySpecHandle = AbilitySystemComponent->GiveAbility(AbilitySpec);
		
		if (OutGrantedHandles)
		{
			OutGrantedHandles->AddAbilitySpecHandles(AbilitySpecHandle);
		}
	}
	
	// Grant attribute sets
	for (int32 SetIndex = 0; SetIndex < GrantedAttributes.Num(); ++SetIndex)
	{
		const FFPSCoreAbilitySet_AttributeSet& SetToGrant = GrantedAttributes[SetIndex];
		
		if (!IsValid(SetToGrant.AttributeSet))
		{
			UE_LOG(LogTemp, Error, TEXT("GrantedAttributes[%d] on ability set [%s] is not valid"), SetIndex, *GetNameSafe(this))
			continue;
		}
		
		UAttributeSet* NewSet = NewObject<UAttributeSet>(AbilitySystemComponent->GetOuter(), SetToGrant.AttributeSet);
		AbilitySystemComponent->AddAttributeSetSubobject(NewSet);
		
		if (OutGrantedHandles)
		{
			OutGrantedHandles->AddAttributeSet(NewSet);
		}
	}
	
	// Grant gameplay effects
	for (int32 EffectIndex = 0; EffectIndex < GrantedGameplayEffects.Num(); ++EffectIndex)
	{
		const FFPSCoreAbilitySet_GameplayEffect& EffectToGrant = GrantedGameplayEffects[EffectIndex];
		
		if (!IsValid(EffectToGrant.GameplayEffect))
		{
			UE_LOG(LogTemp, Error, TEXT("GrantedGameplayEffects[%d] on ability set [%s] is not valid"), EffectIndex, *GetNameSafe(this))
			continue;
		}
		
		const UGameplayEffect* GameplayEffect = EffectToGrant.GameplayEffect->GetDefaultObject<UGameplayEffect>();
		const FActiveGameplayEffectHandle GameplayEffectHandle = AbilitySystemComponent->ApplyGameplayEffectToSelf(GameplayEffect, EffectToGrant.EffectLevel, AbilitySystemComponent->MakeEffectContext());
		
		if (OutGrantedHandles)
		{
			OutGrantedHandles->AddGameplayEffectHandle(GameplayEffectHandle);
		}
	}
}
