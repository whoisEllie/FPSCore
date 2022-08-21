// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef FPSCORE_InteractionActor_generated_h
#error "InteractionActor.generated.h already included, missing '#pragma once' in InteractionActor.h"
#endif
#define FPSCORE_InteractionActor_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_RPC_WRAPPERS
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_EVENT_PARMS \
	struct InteractionActor_eventOnInteraction_Parms \
	{ \
		AActor* ImplementedActor; \
	};


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_CALLBACK_WRAPPERS
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAInteractionActor(); \
	friend struct Z_Construct_UClass_AInteractionActor_Statics; \
public: \
	DECLARE_CLASS(AInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AInteractionActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractionActor*>(this); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_INCLASS \
private: \
	static void StaticRegisterNativesAInteractionActor(); \
	friend struct Z_Construct_UClass_AInteractionActor_Statics; \
public: \
	DECLARE_CLASS(AInteractionActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AInteractionActor) \
	virtual UObject* _getUObject() const override { return const_cast<AInteractionActor*>(this); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AInteractionActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AInteractionActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionActor(AInteractionActor&&); \
	NO_API AInteractionActor(const AInteractionActor&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AInteractionActor(AInteractionActor&&); \
	NO_API AInteractionActor(const AInteractionActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AInteractionActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AInteractionActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AInteractionActor)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AInteractionActor, MeshComp); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_13_PROLOG \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_EVENT_PARMS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_CALLBACK_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_CALLBACK_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AInteractionActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractionActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
