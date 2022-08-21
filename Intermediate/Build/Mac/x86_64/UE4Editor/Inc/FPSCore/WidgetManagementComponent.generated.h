// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCORE_WidgetManagementComponent_generated_h
#error "WidgetManagementComponent.generated.h already included, missing '#pragma once' in WidgetManagementComponent.h"
#endif
#define FPSCORE_WidgetManagementComponent_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCreateSettingsMenu);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCreateSettingsMenu);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWidgetManagementComponent(); \
	friend struct Z_Construct_UClass_UWidgetManagementComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetManagementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UWidgetManagementComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUWidgetManagementComponent(); \
	friend struct Z_Construct_UClass_UWidgetManagementComponent_Statics; \
public: \
	DECLARE_CLASS(UWidgetManagementComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UWidgetManagementComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetManagementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetManagementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetManagementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetManagementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetManagementComponent(UWidgetManagementComponent&&); \
	NO_API UWidgetManagementComponent(const UWidgetManagementComponent&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UWidgetManagementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UWidgetManagementComponent(UWidgetManagementComponent&&); \
	NO_API UWidgetManagementComponent(const UWidgetManagementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWidgetManagementComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWidgetManagementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWidgetManagementComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HUDWidget() { return STRUCT_OFFSET(UWidgetManagementComponent, HUDWidget); } \
	FORCEINLINE static uint32 __PPO__PauseWidget() { return STRUCT_OFFSET(UWidgetManagementComponent, PauseWidget); } \
	FORCEINLINE static uint32 __PPO__SettingsWidget() { return STRUCT_OFFSET(UWidgetManagementComponent, SettingsWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerHudWidget() { return STRUCT_OFFSET(UWidgetManagementComponent, PlayerHudWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerPauseWidget() { return STRUCT_OFFSET(UWidgetManagementComponent, PlayerPauseWidget); } \
	FORCEINLINE static uint32 __PPO__PlayerSettingsWidget() { return STRUCT_OFFSET(UWidgetManagementComponent, PlayerSettingsWidget); } \
	FORCEINLINE static uint32 __PPO__CurrentWidget() { return STRUCT_OFFSET(UWidgetManagementComponent, CurrentWidget); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_11_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UWidgetManagementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_WidgetManagementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
