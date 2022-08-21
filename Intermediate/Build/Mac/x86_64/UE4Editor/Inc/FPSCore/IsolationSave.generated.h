// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCORE_IsolationSave_generated_h
#error "IsolationSave.generated.h already included, missing '#pragma once' in IsolationSave.h"
#endif
#define FPSCORE_IsolationSave_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_RPC_WRAPPERS
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUIsolationSave(); \
	friend struct Z_Construct_UClass_UIsolationSave_Statics; \
public: \
	DECLARE_CLASS(UIsolationSave, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UIsolationSave)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUIsolationSave(); \
	friend struct Z_Construct_UClass_UIsolationSave_Statics; \
public: \
	DECLARE_CLASS(UIsolationSave, USaveGame, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UIsolationSave)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsolationSave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsolationSave) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsolationSave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsolationSave); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsolationSave(UIsolationSave&&); \
	NO_API UIsolationSave(const UIsolationSave&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UIsolationSave(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UIsolationSave(UIsolationSave&&); \
	NO_API UIsolationSave(const UIsolationSave&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UIsolationSave); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UIsolationSave); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UIsolationSave)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EffectsVolume() { return STRUCT_OFFSET(UIsolationSave, EffectsVolume); } \
	FORCEINLINE static uint32 __PPO__InterfaceVolume() { return STRUCT_OFFSET(UIsolationSave, InterfaceVolume); } \
	FORCEINLINE static uint32 __PPO__AmbientVolume() { return STRUCT_OFFSET(UIsolationSave, AmbientVolume); } \
	FORCEINLINE static uint32 __PPO__MusicVolume() { return STRUCT_OFFSET(UIsolationSave, MusicVolume); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_12_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UIsolationSave>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_IsolationSave_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
