// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCORE_AmmoPickup_generated_h
#error "AmmoPickup.generated.h already included, missing '#pragma once' in AmmoPickup.h"
#endif
#define FPSCORE_AmmoPickup_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAmmoTypeData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FAmmoTypeData>();

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_RPC_WRAPPERS
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_RPC_WRAPPERS_NO_PURE_DECLS
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(AAmmoPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AAmmoPickup) \
	virtual UObject* _getUObject() const override { return const_cast<AAmmoPickup*>(this); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_INCLASS \
private: \
	static void StaticRegisterNativesAAmmoPickup(); \
	friend struct Z_Construct_UClass_AAmmoPickup_Statics; \
public: \
	DECLARE_CLASS(AAmmoPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AAmmoPickup) \
	virtual UObject* _getUObject() const override { return const_cast<AAmmoPickup*>(this); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AAmmoPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AAmmoPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoPickup(AAmmoPickup&&); \
	NO_API AAmmoPickup(const AAmmoPickup&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AAmmoPickup(AAmmoPickup&&); \
	NO_API AAmmoPickup(const AAmmoPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AAmmoPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AAmmoPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AAmmoPickup)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PickupName() { return STRUCT_OFFSET(AAmmoPickup, PickupName); } \
	FORCEINLINE static uint32 __PPO__AmmoData() { return STRUCT_OFFSET(AAmmoPickup, AmmoData); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AAmmoPickup, MeshComp); } \
	FORCEINLINE static uint32 __PPO__AmmoAmount() { return STRUCT_OFFSET(AAmmoPickup, AmmoAmount); } \
	FORCEINLINE static uint32 __PPO__AmmoType() { return STRUCT_OFFSET(AAmmoPickup, AmmoType); } \
	FORCEINLINE static uint32 __PPO__bInfinite() { return STRUCT_OFFSET(AAmmoPickup, bInfinite); } \
	FORCEINLINE static uint32 __PPO__bDrawDebug() { return STRUCT_OFFSET(AAmmoPickup, bDrawDebug); } \
	FORCEINLINE static uint32 __PPO__PickupSFX() { return STRUCT_OFFSET(AAmmoPickup, PickupSFX); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_41_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h_44_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AAmmoPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_AmmoPickup_h


#define FOREACH_ENUM_EAMMOAMOUNT(op) \
	op(EAmmoAmount::Low) \
	op(EAmmoAmount::Medium) \
	op(EAmmoAmount::High) 

enum class EAmmoAmount : uint8;
template<> FPSCORE_API UEnum* StaticEnum<EAmmoAmount>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
