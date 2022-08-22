// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAnimSequence;
class UBlendSpace;
#ifdef FPSCORE_WeaponBase_generated_h
#error "WeaponBase.generated.h already included, missing '#pragma once' in WeaponBase.h"
#endif
#define FPSCORE_WeaponBase_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_266_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FStaticWeaponData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FStaticWeaponData>();

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_84_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAttachmentData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FAttachmentData>();

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_53_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRuntimeWeaponData_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FRuntimeWeaponData>();

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execHandleRecoveryProgress); \
	DECLARE_FUNCTION(execGetVerticalCameraOffset); \
	DECLARE_FUNCTION(execGetSprintAnim); \
	DECLARE_FUNCTION(execGetAdsIdleAnim); \
	DECLARE_FUNCTION(execGetIdleAnim); \
	DECLARE_FUNCTION(execGetWalkAdsBlendSpace); \
	DECLARE_FUNCTION(execGetWalkBlendSpace); \
	DECLARE_FUNCTION(execSetShowDebug);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execHandleRecoveryProgress); \
	DECLARE_FUNCTION(execGetVerticalCameraOffset); \
	DECLARE_FUNCTION(execGetSprintAnim); \
	DECLARE_FUNCTION(execGetAdsIdleAnim); \
	DECLARE_FUNCTION(execGetIdleAnim); \
	DECLARE_FUNCTION(execGetWalkAdsBlendSpace); \
	DECLARE_FUNCTION(execGetWalkBlendSpace); \
	DECLARE_FUNCTION(execSetShowDebug);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_INCLASS \
private: \
	static void StaticRegisterNativesAWeaponBase(); \
	friend struct Z_Construct_UClass_AWeaponBase_Statics; \
public: \
	DECLARE_CLASS(AWeaponBase, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AWeaponBase)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AWeaponBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWeaponBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AWeaponBase(AWeaponBase&&); \
	NO_API AWeaponBase(const AWeaponBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AWeaponBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWeaponBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWeaponBase)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ScopeFrameRate() { return STRUCT_OFFSET(AWeaponBase, ScopeFrameRate); } \
	FORCEINLINE static uint32 __PPO__WeaponDataTable() { return STRUCT_OFFSET(AWeaponBase, WeaponDataTable); } \
	FORCEINLINE static uint32 __PPO__DataTableNameRef() { return STRUCT_OFFSET(AWeaponBase, DataTableNameRef); } \
	FORCEINLINE static uint32 __PPO__bShowDebug() { return STRUCT_OFFSET(AWeaponBase, bShowDebug); } \
	FORCEINLINE static uint32 __PPO__MeshComp() { return STRUCT_OFFSET(AWeaponBase, MeshComp); } \
	FORCEINLINE static uint32 __PPO__DamageType() { return STRUCT_OFFSET(AWeaponBase, DamageType); } \
	FORCEINLINE static uint32 __PPO__RecoveryCurve() { return STRUCT_OFFSET(AWeaponBase, RecoveryCurve); } \
	FORCEINLINE static uint32 __PPO__EjectedCasing() { return STRUCT_OFFSET(AWeaponBase, EjectedCasing); } \
	FORCEINLINE static uint32 __PPO__BarrelAttachment() { return STRUCT_OFFSET(AWeaponBase, BarrelAttachment); } \
	FORCEINLINE static uint32 __PPO__MagazineAttachment() { return STRUCT_OFFSET(AWeaponBase, MagazineAttachment); } \
	FORCEINLINE static uint32 __PPO__SightsAttachment() { return STRUCT_OFFSET(AWeaponBase, SightsAttachment); } \
	FORCEINLINE static uint32 __PPO__StockAttachment() { return STRUCT_OFFSET(AWeaponBase, StockAttachment); } \
	FORCEINLINE static uint32 __PPO__GripAttachment() { return STRUCT_OFFSET(AWeaponBase, GripAttachment); } \
	FORCEINLINE static uint32 __PPO__Hit() { return STRUCT_OFFSET(AWeaponBase, Hit); } \
	FORCEINLINE static uint32 __PPO__VerticalRecoilCurve() { return STRUCT_OFFSET(AWeaponBase, VerticalRecoilCurve); } \
	FORCEINLINE static uint32 __PPO__HorizontalRecoilCurve() { return STRUCT_OFFSET(AWeaponBase, HorizontalRecoilCurve); } \
	FORCEINLINE static uint32 __PPO__VerticalCameraOffset() { return STRUCT_OFFSET(AWeaponBase, VerticalCameraOffset); } \
	FORCEINLINE static uint32 __PPO__WeaponEquip() { return STRUCT_OFFSET(AWeaponBase, WeaponEquip); } \
	FORCEINLINE static uint32 __PPO__WalkBlendSpace() { return STRUCT_OFFSET(AWeaponBase, WalkBlendSpace); } \
	FORCEINLINE static uint32 __PPO__ADSWalkBlendSpace() { return STRUCT_OFFSET(AWeaponBase, ADSWalkBlendSpace); } \
	FORCEINLINE static uint32 __PPO__Anim_Idle() { return STRUCT_OFFSET(AWeaponBase, Anim_Idle); } \
	FORCEINLINE static uint32 __PPO__Anim_Sprint() { return STRUCT_OFFSET(AWeaponBase, Anim_Sprint); } \
	FORCEINLINE static uint32 __PPO__Anim_ADS_Idle() { return STRUCT_OFFSET(AWeaponBase, Anim_ADS_Idle); } \
	FORCEINLINE static uint32 __PPO__EmptyWeaponReload() { return STRUCT_OFFSET(AWeaponBase, EmptyWeaponReload); } \
	FORCEINLINE static uint32 __PPO__WeaponReload() { return STRUCT_OFFSET(AWeaponBase, WeaponReload); } \
	FORCEINLINE static uint32 __PPO__EmptyPlayerReload() { return STRUCT_OFFSET(AWeaponBase, EmptyPlayerReload); } \
	FORCEINLINE static uint32 __PPO__PlayerReload() { return STRUCT_OFFSET(AWeaponBase, PlayerReload); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_506_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h_509_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AWeaponBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_WeaponBase_h


#define FOREACH_ENUM_EATTACHMENTTYPE(op) \
	op(EAttachmentType::Barrel) \
	op(EAttachmentType::Magazine) \
	op(EAttachmentType::Sights) \
	op(EAttachmentType::Stock) \
	op(EAttachmentType::Grip) 

enum class EAttachmentType : uint8;
template<> FPSCORE_API UEnum* StaticEnum<EAttachmentType>();

#define FOREACH_ENUM_EAMMOTYPE(op) \
	op(EAmmoType::Pistol) \
	op(EAmmoType::Rifle) \
	op(EAmmoType::Shotgun) \
	op(EAmmoType::Special) 

enum class EAmmoType : uint8;
template<> FPSCORE_API UEnum* StaticEnum<EAmmoType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
