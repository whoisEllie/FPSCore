// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AWeaponBase;
#ifdef FPSCORE_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define FPSCORE_InventoryComponent_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetCurrentWeaponRemainingAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeaponLoadedAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetCurrentWeaponRemainingAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeaponLoadedAmmo); \
	DECLARE_FUNCTION(execGetCurrentWeapon);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInventoryComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInventoryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInventoryComponent(UInventoryComponent&&); \
	NO_API UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponSpawnDistance() { return STRUCT_OFFSET(UInventoryComponent, WeaponSpawnDistance); } \
	FORCEINLINE static uint32 __PPO__NumberOfWeaponSlots() { return STRUCT_OFFSET(UInventoryComponent, NumberOfWeaponSlots); } \
	FORCEINLINE static uint32 __PPO__EquippedWeapons() { return STRUCT_OFFSET(UInventoryComponent, EquippedWeapons); } \
	FORCEINLINE static uint32 __PPO__CurrentWeapon() { return STRUCT_OFFSET(UInventoryComponent, CurrentWeapon); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_14_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_Components_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
