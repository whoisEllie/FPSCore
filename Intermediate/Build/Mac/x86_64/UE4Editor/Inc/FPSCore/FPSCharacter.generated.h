// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UInputMappingContext;
class UAnimSequence;
class UBlendSpace;
#ifdef FPSCORE_FPSCharacter_generated_h
#error "FPSCharacter.generated.h already included, missing '#pragma once' in FPSCharacter.h"
#endif
#define FPSCORE_FPSCharacter_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMovementVariables_Statics; \
	FPSCORE_API static class UScriptStruct* StaticStruct();


template<> FPSCORE_API UScriptStruct* StaticStruct<struct FMovementVariables>();

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execTimelineProgress); \
	DECLARE_FUNCTION(execGetBaseMappingContext); \
	DECLARE_FUNCTION(execGetSprintAnim); \
	DECLARE_FUNCTION(execGetAdsIdleAnim); \
	DECLARE_FUNCTION(execGetIdleAnim); \
	DECLARE_FUNCTION(execGetWalkAdsBlendSpace); \
	DECLARE_FUNCTION(execGetWalkBlendSpace); \
	DECLARE_FUNCTION(execIsPlayerSprinting); \
	DECLARE_FUNCTION(execIsPlayerAiming); \
	DECLARE_FUNCTION(execSetCrosshairVisibility); \
	DECLARE_FUNCTION(execIsCrosshairVisible); \
	DECLARE_FUNCTION(execSetBaseFOV); \
	DECLARE_FUNCTION(execGetMouseX); \
	DECLARE_FUNCTION(execGetMouseY); \
	DECLARE_FUNCTION(execGetRightMovement); \
	DECLARE_FUNCTION(execGetForwardMovement); \
	DECLARE_FUNCTION(execFootstepSounds);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execTimelineProgress); \
	DECLARE_FUNCTION(execGetBaseMappingContext); \
	DECLARE_FUNCTION(execGetSprintAnim); \
	DECLARE_FUNCTION(execGetAdsIdleAnim); \
	DECLARE_FUNCTION(execGetIdleAnim); \
	DECLARE_FUNCTION(execGetWalkAdsBlendSpace); \
	DECLARE_FUNCTION(execGetWalkBlendSpace); \
	DECLARE_FUNCTION(execIsPlayerSprinting); \
	DECLARE_FUNCTION(execIsPlayerAiming); \
	DECLARE_FUNCTION(execSetCrosshairVisibility); \
	DECLARE_FUNCTION(execIsCrosshairVisible); \
	DECLARE_FUNCTION(execSetBaseFOV); \
	DECLARE_FUNCTION(execGetMouseX); \
	DECLARE_FUNCTION(execGetMouseY); \
	DECLARE_FUNCTION(execGetRightMovement); \
	DECLARE_FUNCTION(execGetForwardMovement); \
	DECLARE_FUNCTION(execFootstepSounds);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_INCLASS \
private: \
	static void StaticRegisterNativesAFPSCharacter(); \
	friend struct Z_Construct_UClass_AFPSCharacter_Statics; \
public: \
	DECLARE_CLASS(AFPSCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/FPSCore"), NO_API) \
	DECLARE_SERIALIZER(AFPSCharacter)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AFPSCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AFPSCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AFPSCharacter(AFPSCharacter&&); \
	NO_API AFPSCharacter(const AFPSCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AFPSCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AFPSCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AFPSCharacter)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraComp() { return STRUCT_OFFSET(AFPSCharacter, CameraComp); } \
	FORCEINLINE static uint32 __PPO__HandsMeshComp() { return STRUCT_OFFSET(AFPSCharacter, HandsMeshComp); } \
	FORCEINLINE static uint32 __PPO__SpringArmComp() { return STRUCT_OFFSET(AFPSCharacter, SpringArmComp); } \
	FORCEINLINE static uint32 __PPO__FootstepAudioComp() { return STRUCT_OFFSET(AFPSCharacter, FootstepAudioComp); } \
	FORCEINLINE static uint32 __PPO__BS_Walk() { return STRUCT_OFFSET(AFPSCharacter, BS_Walk); } \
	FORCEINLINE static uint32 __PPO__BS_Ads_Walk() { return STRUCT_OFFSET(AFPSCharacter, BS_Ads_Walk); } \
	FORCEINLINE static uint32 __PPO__Anim_Idle() { return STRUCT_OFFSET(AFPSCharacter, Anim_Idle); } \
	FORCEINLINE static uint32 __PPO__Anim_Ads_Idle() { return STRUCT_OFFSET(AFPSCharacter, Anim_Ads_Idle); } \
	FORCEINLINE static uint32 __PPO__Anim_Sprint() { return STRUCT_OFFSET(AFPSCharacter, Anim_Sprint); } \
	FORCEINLINE static uint32 __PPO__VaultMontage() { return STRUCT_OFFSET(AFPSCharacter, VaultMontage); } \
	FORCEINLINE static uint32 __PPO__bDrawDebug() { return STRUCT_OFFSET(AFPSCharacter, bDrawDebug); } \
	FORCEINLINE static uint32 __PPO__CrouchedCapsuleHalfHeight() { return STRUCT_OFFSET(AFPSCharacter, CrouchedCapsuleHalfHeight); } \
	FORCEINLINE static uint32 __PPO__CrouchedSpringArmHeightDelta() { return STRUCT_OFFSET(AFPSCharacter, CrouchedSpringArmHeightDelta); } \
	FORCEINLINE static uint32 __PPO__CrouchSpeed() { return STRUCT_OFFSET(AFPSCharacter, CrouchSpeed); } \
	FORCEINLINE static uint32 __PPO__SlideTime() { return STRUCT_OFFSET(AFPSCharacter, SlideTime); } \
	FORCEINLINE static uint32 __PPO__MaxMantleHeight() { return STRUCT_OFFSET(AFPSCharacter, MaxMantleHeight); } \
	FORCEINLINE static uint32 __PPO__VaultTraceAmount() { return STRUCT_OFFSET(AFPSCharacter, VaultTraceAmount); } \
	FORCEINLINE static uint32 __PPO__VaultTimelineCurve() { return STRUCT_OFFSET(AFPSCharacter, VaultTimelineCurve); } \
	FORCEINLINE static uint32 __PPO__MovementDataMap() { return STRUCT_OFFSET(AFPSCharacter, MovementDataMap); } \
	FORCEINLINE static uint32 __PPO__BaseFOV() { return STRUCT_OFFSET(AFPSCharacter, BaseFOV); } \
	FORCEINLINE static uint32 __PPO__FOVChangeSpeed() { return STRUCT_OFFSET(AFPSCharacter, FOVChangeSpeed); } \
	FORCEINLINE static uint32 __PPO__SpeedFOVChange() { return STRUCT_OFFSET(AFPSCharacter, SpeedFOVChange); } \
	FORCEINLINE static uint32 __PPO__CameraSocketName() { return STRUCT_OFFSET(AFPSCharacter, CameraSocketName); } \
	FORCEINLINE static uint32 __PPO__ScopeOpacityParameterCollection() { return STRUCT_OFFSET(AFPSCharacter, ScopeOpacityParameterCollection); } \
	FORCEINLINE static uint32 __PPO__OpacityParameterName() { return STRUCT_OFFSET(AFPSCharacter, OpacityParameterName); } \
	FORCEINLINE static uint32 __PPO__SurfaceMaterialArray() { return STRUCT_OFFSET(AFPSCharacter, SurfaceMaterialArray); } \
	FORCEINLINE static uint32 __PPO__MovementState() { return STRUCT_OFFSET(AFPSCharacter, MovementState); } \
	FORCEINLINE static uint32 __PPO__VaultTimeline() { return STRUCT_OFFSET(AFPSCharacter, VaultTimeline); } \
	FORCEINLINE static uint32 __PPO__InventoryComponent() { return STRUCT_OFFSET(AFPSCharacter, InventoryComponent); } \
	FORCEINLINE static uint32 __PPO__MovementAction() { return STRUCT_OFFSET(AFPSCharacter, MovementAction); } \
	FORCEINLINE static uint32 __PPO__LookAction() { return STRUCT_OFFSET(AFPSCharacter, LookAction); } \
	FORCEINLINE static uint32 __PPO__JumpAction() { return STRUCT_OFFSET(AFPSCharacter, JumpAction); } \
	FORCEINLINE static uint32 __PPO__SprintAction() { return STRUCT_OFFSET(AFPSCharacter, SprintAction); } \
	FORCEINLINE static uint32 __PPO__CrouchAction() { return STRUCT_OFFSET(AFPSCharacter, CrouchAction); } \
	FORCEINLINE static uint32 __PPO__FiringAction() { return STRUCT_OFFSET(AFPSCharacter, FiringAction); } \
	FORCEINLINE static uint32 __PPO__PrimaryWeaponAction() { return STRUCT_OFFSET(AFPSCharacter, PrimaryWeaponAction); } \
	FORCEINLINE static uint32 __PPO__SecondaryWeaponAction() { return STRUCT_OFFSET(AFPSCharacter, SecondaryWeaponAction); } \
	FORCEINLINE static uint32 __PPO__ReloadAction() { return STRUCT_OFFSET(AFPSCharacter, ReloadAction); } \
	FORCEINLINE static uint32 __PPO__AimAction() { return STRUCT_OFFSET(AFPSCharacter, AimAction); } \
	FORCEINLINE static uint32 __PPO__InteractAction() { return STRUCT_OFFSET(AFPSCharacter, InteractAction); } \
	FORCEINLINE static uint32 __PPO__ScrollAction() { return STRUCT_OFFSET(AFPSCharacter, ScrollAction); } \
	FORCEINLINE static uint32 __PPO__PauseAction() { return STRUCT_OFFSET(AFPSCharacter, PauseAction); } \
	FORCEINLINE static uint32 __PPO__BaseMappingContext() { return STRUCT_OFFSET(AFPSCharacter, BaseMappingContext); } \
	FORCEINLINE static uint32 __PPO__BaseMappingPriority() { return STRUCT_OFFSET(AFPSCharacter, BaseMappingPriority); }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_57_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_INCLASS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_PRIVATE_PROPERTY_OFFSET \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_INCLASS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h_60_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class AFPSCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_FPSCharacter_h


#define FOREACH_ENUM_EMOVEMENTSTATE(op) \
	op(EMovementState::State_Walk) \
	op(EMovementState::State_Sprint) \
	op(EMovementState::State_Crouch) \
	op(EMovementState::State_Slide) \
	op(EMovementState::State_Vault) 

enum class EMovementState : uint8;
template<> FPSCORE_API UEnum* StaticEnum<EMovementState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
