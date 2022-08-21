// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UHealthComponent;
class UDamageType;
class AController;
class AActor;
#ifdef FPSCORE_HealthComponent_generated_h
#error "HealthComponent.generated.h already included, missing '#pragma once' in HealthComponent.h"
#endif
#define FPSCORE_HealthComponent_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_12_DELEGATE \
struct _Script_FPSCore_eventOnHealthChangedSignature_Parms \
{ \
	UHealthComponent* HealthComponent; \
	float Health; \
	float HealthDelta; \
	const UDamageType* DamageType; \
	AController* InstigatedBy; \
	AActor* DamageCauser; \
}; \
static inline void FOnHealthChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& OnHealthChangedSignature, UHealthComponent* HealthComponent, float Health, float HealthDelta, const UDamageType* DamageType, AController* InstigatedBy, AActor* DamageCauser) \
{ \
	_Script_FPSCore_eventOnHealthChangedSignature_Parms Parms; \
	Parms.HealthComponent=HealthComponent; \
	Parms.Health=Health; \
	Parms.HealthDelta=HealthDelta; \
	Parms.DamageType=DamageType; \
	Parms.InstigatedBy=InstigatedBy; \
	Parms.DamageCauser=DamageCauser; \
	OnHealthChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleTakeAnyDamage);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUHealthComponent(); \
	friend struct Z_Construct_UClass_UHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UHealthComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHealthComponent(UHealthComponent&&); \
	NO_API UHealthComponent(const UHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHealthComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHealthComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultHealth() { return STRUCT_OFFSET(UHealthComponent, DefaultHealth); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_14_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_HealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
