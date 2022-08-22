// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCORE_WeaponPickup_generated_h
#error "WeaponPickup.generated.h already included, missing '#pragma once' in WeaponPickup.h"
#endif
#define FPSCORE_WeaponPickup_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnAttachmentMesh);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnAttachmentMesh);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponPickup(); \
	friend struct Z_Construct_UClass_AWeaponPickup_Statics; \
public: \
	DECLARE_CLASS(AWeaponPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPickup) \
	virtual UObject* _getUObject() const override { return const_cast<AWeaponPickup*>(this); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponPickup(); \
	friend struct Z_Construct_UClass_AWeaponPickup_Statics; \
public: \
	DECLARE_CLASS(AWeaponPickup, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AWeaponPickup) \
	virtual UObject* _getUObject() const override { return const_cast<AWeaponPickup*>(this); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponPickup(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponPickup) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPickup); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponPickup(AWeaponPickup&&); \
	NO_API AWeaponPickup(const AWeaponPickup&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponPickup(AWeaponPickup&&); \
	NO_API AWeaponPickup(const AWeaponPickup&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponPickup); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponPickup); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponPickup)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__WeaponReference() { return STRUCT_OFFSET(AWeaponPickup, WeaponReference); } \
	FORCEINLINE static uint32 __PPO__DataStruct() { return STRUCT_OFFSET(AWeaponPickup, DataStruct); } \
	FORCEINLINE static uint32 __PPO__WeaponDataTable() { return STRUCT_OFFSET(AWeaponPickup, WeaponDataTable); } \
	FORCEINLINE static uint32 __PPO__AttachmentsDataTable() { return STRUCT_OFFSET(AWeaponPickup, AttachmentsDataTable); } \
	FORCEINLINE static uint32 __PPO__bStatic() { return STRUCT_OFFSET(AWeaponPickup, bStatic); } \
	FORCEINLINE static uint32 __PPO__WeaponName() { return STRUCT_OFFSET(AWeaponPickup, WeaponName); } \
	FORCEINLINE static uint32 __PPO__MainMesh() { return STRUCT_OFFSET(AWeaponPickup, MainMesh); } \
	FORCEINLINE static uint32 __PPO__BarrelAttachment() { return STRUCT_OFFSET(AWeaponPickup, BarrelAttachment); } \
	FORCEINLINE static uint32 __PPO__MagazineAttachment() { return STRUCT_OFFSET(AWeaponPickup, MagazineAttachment); } \
	FORCEINLINE static uint32 __PPO__SightsAttachment() { return STRUCT_OFFSET(AWeaponPickup, SightsAttachment); } \
	FORCEINLINE static uint32 __PPO__StockAttachment() { return STRUCT_OFFSET(AWeaponPickup, StockAttachment); } \
	FORCEINLINE static uint32 __PPO__GripAttachment() { return STRUCT_OFFSET(AWeaponPickup, GripAttachment); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_15_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AWeaponPickup>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponPickup_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
