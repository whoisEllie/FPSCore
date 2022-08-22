// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCORE_InteractionComponent_generated_h
#error "InteractionComponent.generated.h already included, missing '#pragma once' in InteractionComponent.h"
#endif
#define FPSCORE_InteractionComponent_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execGetInteractText);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanInteract); \
	DECLARE_FUNCTION(execGetInteractText);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionComponent(); \
	friend struct Z_Construct_UClass_UInteractionComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInteractionComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionComponent(UInteractionComponent&&); \
	NO_API UInteractionComponent(const UInteractionComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InteractText() { return STRUCT_OFFSET(UInteractionComponent, InteractText); } \
	FORCEINLINE static uint32 __PPO__InteractDistance() { return STRUCT_OFFSET(UInteractionComponent, InteractDistance); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_11_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UInteractionComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InteractionComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
