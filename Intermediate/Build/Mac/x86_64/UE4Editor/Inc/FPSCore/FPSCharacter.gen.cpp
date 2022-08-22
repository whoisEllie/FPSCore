// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/FPSCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacter() {}
// Cross Module References
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EMovementState();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FMovementVariables();
	FPSCORE_API UClass* Z_Construct_UClass_AFPSCharacter_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AFPSCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlendSpace_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialParameterCollection_NoRegister();
	PHYSICSCORE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimeline();
	FPSCORE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
// End Cross Module References
	static UEnum* EMovementState_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_EMovementState, Z_Construct_UPackage__Script_FPSCore(), TEXT("EMovementState"));
		}
		return Singleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<EMovementState>()
	{
		return EMovementState_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EMovementState(EMovementState_StaticEnum, TEXT("/Script/FPSCore"), TEXT("EMovementState"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSCore_EMovementState_Hash() { return 1223094899U; }
	UEnum* Z_Construct_UEnum_FPSCore_EMovementState()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EMovementState"), 0, Get_Z_Construct_UEnum_FPSCore_EMovementState_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EMovementState::State_Walk", (int64)EMovementState::State_Walk },
				{ "EMovementState::State_Sprint", (int64)EMovementState::State_Sprint },
				{ "EMovementState::State_Crouch", (int64)EMovementState::State_Crouch },
				{ "EMovementState::State_Slide", (int64)EMovementState::State_Slide },
				{ "EMovementState::State_Vault", (int64)EMovementState::State_Vault },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "Comment", "/** Movement state enumerator holding all possible movement states */" },
				{ "ModuleRelativePath", "Public/FPSCharacter.h" },
				{ "State_Crouch.DisplayName", "Crouching" },
				{ "State_Crouch.Name", "EMovementState::State_Crouch" },
				{ "State_Slide.DisplayName", "Sliding" },
				{ "State_Slide.Name", "EMovementState::State_Slide" },
				{ "State_Sprint.DisplayName", "Sprinting" },
				{ "State_Sprint.Name", "EMovementState::State_Sprint" },
				{ "State_Vault.DisplayName", "Vaulting" },
				{ "State_Vault.Name", "EMovementState::State_Vault" },
				{ "State_Walk.DisplayName", "Walking" },
				{ "State_Walk.Name", "EMovementState::State_Walk" },
				{ "ToolTip", "Movement state enumerator holding all possible movement states" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
				nullptr,
				"EMovementState",
				"EMovementState",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FMovementVariables::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCORE_API uint32 Get_Z_Construct_UScriptStruct_FMovementVariables_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMovementVariables, Z_Construct_UPackage__Script_FPSCore(), TEXT("MovementVariables"), sizeof(FMovementVariables), Get_Z_Construct_UScriptStruct_FMovementVariables_Hash());
	}
	return Singleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FMovementVariables>()
{
	return FMovementVariables::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMovementVariables(FMovementVariables::StaticStruct, TEXT("/Script/FPSCore"), TEXT("MovementVariables"), false, nullptr, nullptr);
static struct FScriptStruct_FPSCore_StaticRegisterNativesFMovementVariables
{
	FScriptStruct_FPSCore_StaticRegisterNativesFMovementVariables()
	{
		UScriptStruct::DeferCppStructOps<FMovementVariables>(FName(TEXT("MovementVariables")));
	}
} ScriptStruct_FPSCore_StaticRegisterNativesFMovementVariables;
	struct Z_Construct_UScriptStruct_FMovementVariables_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanFire_MetaData[];
#endif
		static void NewProp_bCanFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCanFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxAcceleration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxAcceleration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BreakingDecelerationWalking_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BreakingDecelerationWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GroundFriction_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GroundFriction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxWalkSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxWalkSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Variables associated with each movement state */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Variables associated with each movement state" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMovementVariables_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMovementVariables>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_SetBit(void* Obj)
	{
		((FMovementVariables*)Obj)->bCanFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire = { "bCanFire", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMovementVariables), &Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration = { "MaxAcceleration", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementVariables, MaxAcceleration), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking = { "BreakingDecelerationWalking", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementVariables, BreakingDecelerationWalking), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction = { "GroundFriction", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementVariables, GroundFriction), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed_MetaData[] = {
		{ "Category", "Movement Variables" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed = { "MaxWalkSpeed", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMovementVariables, MaxWalkSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMovementVariables_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_bCanFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxAcceleration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_BreakingDecelerationWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_GroundFriction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMovementVariables_Statics::NewProp_MaxWalkSpeed,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMovementVariables_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		&NewStructOps,
		"MovementVariables",
		sizeof(FMovementVariables),
		alignof(FMovementVariables),
		Z_Construct_UScriptStruct_FMovementVariables_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMovementVariables_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMovementVariables_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMovementVariables()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMovementVariables_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MovementVariables"), sizeof(FMovementVariables), Get_Z_Construct_UScriptStruct_FMovementVariables_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMovementVariables_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMovementVariables_Hash() { return 3519098584U; }
	DEFINE_FUNCTION(AFPSCharacter::execTimelineProgress)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimelineProgress(Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetBaseMappingContext)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UInputMappingContext**)Z_Param__Result=P_THIS->GetBaseMappingContext();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetSprintAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetSprintAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetAdsIdleAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetAdsIdleAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetIdleAnim)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAnimSequence**)Z_Param__Result=P_THIS->GetIdleAnim();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetWalkAdsBlendSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetWalkAdsBlendSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetWalkBlendSpace)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBlendSpace**)Z_Param__Result=P_THIS->GetWalkBlendSpace();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execIsPlayerSprinting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerSprinting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execIsPlayerAiming)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsPlayerAiming();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execSetCrosshairVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisible);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCrosshairVisibility(Z_Param_bVisible);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execIsCrosshairVisible)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCrosshairVisible();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execSetBaseFOV)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewFOV);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBaseFOV(Z_Param_NewFOV);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetMouseX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseX();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetMouseY)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMouseY();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetRightMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRightMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execGetForwardMovement)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetForwardMovement();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AFPSCharacter::execFootstepSounds)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FootstepSounds();
		P_NATIVE_END;
	}
	void AFPSCharacter::StaticRegisterNativesAFPSCharacter()
	{
		UClass* Class = AFPSCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "FootstepSounds", &AFPSCharacter::execFootstepSounds },
			{ "GetAdsIdleAnim", &AFPSCharacter::execGetAdsIdleAnim },
			{ "GetBaseMappingContext", &AFPSCharacter::execGetBaseMappingContext },
			{ "GetForwardMovement", &AFPSCharacter::execGetForwardMovement },
			{ "GetIdleAnim", &AFPSCharacter::execGetIdleAnim },
			{ "GetMouseX", &AFPSCharacter::execGetMouseX },
			{ "GetMouseY", &AFPSCharacter::execGetMouseY },
			{ "GetRightMovement", &AFPSCharacter::execGetRightMovement },
			{ "GetSprintAnim", &AFPSCharacter::execGetSprintAnim },
			{ "GetWalkAdsBlendSpace", &AFPSCharacter::execGetWalkAdsBlendSpace },
			{ "GetWalkBlendSpace", &AFPSCharacter::execGetWalkBlendSpace },
			{ "IsCrosshairVisible", &AFPSCharacter::execIsCrosshairVisible },
			{ "IsPlayerAiming", &AFPSCharacter::execIsPlayerAiming },
			{ "IsPlayerSprinting", &AFPSCharacter::execIsPlayerSprinting },
			{ "SetBaseFOV", &AFPSCharacter::execSetBaseFOV },
			{ "SetCrosshairVisibility", &AFPSCharacter::execSetCrosshairVisibility },
			{ "TimelineProgress", &AFPSCharacter::execTimelineProgress },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AFPSCharacter_FootstepSounds_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_FootstepSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Plays footstep sounds, called from animations with anim notify. */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Plays footstep sounds, called from animations with anim notify." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_FootstepSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "FootstepSounds", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_FootstepSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_FootstepSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_FootstepSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_FootstepSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics
	{
		struct FPSCharacter_eventGetAdsIdleAnim_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetAdsIdleAnim_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's empty handed idle animation for use in the aiming state */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's empty handed idle animation for use in the aiming state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetAdsIdleAnim", nullptr, nullptr, sizeof(FPSCharacter_eventGetAdsIdleAnim_Parms), Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics
	{
		struct FPSCharacter_eventGetBaseMappingContext_Parms
		{
			UInputMappingContext* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetBaseMappingContext_Parms, ReturnValue), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's current input mapping context */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's current input mapping context" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetBaseMappingContext", nullptr, nullptr, sizeof(FPSCharacter_eventGetBaseMappingContext_Parms), Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics
	{
		struct FPSCharacter_eventGetForwardMovement_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetForwardMovement_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's forward movement (from 0 to 1) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's forward movement (from 0 to 1)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetForwardMovement", nullptr, nullptr, sizeof(FPSCharacter_eventGetForwardMovement_Parms), Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetForwardMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetForwardMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics
	{
		struct FPSCharacter_eventGetIdleAnim_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetIdleAnim_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's empty-handed idle animation */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's empty-handed idle animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetIdleAnim", nullptr, nullptr, sizeof(FPSCharacter_eventGetIdleAnim_Parms), Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetIdleAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetIdleAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics
	{
		struct FPSCharacter_eventGetMouseX_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetMouseX_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's horizontal mouse position (from 0 to 1) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's horizontal mouse position (from 0 to 1)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetMouseX", nullptr, nullptr, sizeof(FPSCharacter_eventGetMouseX_Parms), Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetMouseX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetMouseX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics
	{
		struct FPSCharacter_eventGetMouseY_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetMouseY_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's vertical mouse position (from 0 to 1) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's vertical mouse position (from 0 to 1)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetMouseY", nullptr, nullptr, sizeof(FPSCharacter_eventGetMouseY_Parms), Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetMouseY()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetMouseY_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics
	{
		struct FPSCharacter_eventGetRightMovement_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetRightMovement_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's sideways movement (from 0 to 1) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's sideways movement (from 0 to 1)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetRightMovement", nullptr, nullptr, sizeof(FPSCharacter_eventGetRightMovement_Parms), Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetRightMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetRightMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics
	{
		struct FPSCharacter_eventGetSprintAnim_Parms
		{
			UAnimSequence* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetSprintAnim_Parms, ReturnValue), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's empty handed sprinting animation */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's empty handed sprinting animation" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetSprintAnim", nullptr, nullptr, sizeof(FPSCharacter_eventGetSprintAnim_Parms), Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetSprintAnim()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetSprintAnim_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics
	{
		struct FPSCharacter_eventGetWalkAdsBlendSpace_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetWalkAdsBlendSpace_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's empty-handed walking blend space for use in the aiming state */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's empty-handed walking blend space for use in the aiming state" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetWalkAdsBlendSpace", nullptr, nullptr, sizeof(FPSCharacter_eventGetWalkAdsBlendSpace_Parms), Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics
	{
		struct FPSCharacter_eventGetWalkBlendSpace_Parms
		{
			UBlendSpace* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventGetWalkBlendSpace_Parms, ReturnValue), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the character's empty-handed walking blend space */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the character's empty-handed walking blend space" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "GetWalkBlendSpace", nullptr, nullptr, sizeof(FPSCharacter_eventGetWalkBlendSpace_Parms), Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics
	{
		struct FPSCharacter_eventIsCrosshairVisible_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventIsCrosshairVisible_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventIsCrosshairVisible_Parms), &Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns the current visibility of the crosshair */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns the current visibility of the crosshair" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "IsCrosshairVisible", nullptr, nullptr, sizeof(FPSCharacter_eventIsCrosshairVisible_Parms), Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics
	{
		struct FPSCharacter_eventIsPlayerAiming_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventIsPlayerAiming_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventIsPlayerAiming_Parms), &Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns whether the player is currently aiming or not */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns whether the player is currently aiming or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "IsPlayerAiming", nullptr, nullptr, sizeof(FPSCharacter_eventIsPlayerAiming_Parms), Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics
	{
		struct FPSCharacter_eventIsPlayerSprinting_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((FPSCharacter_eventIsPlayerSprinting_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventIsPlayerSprinting_Parms), &Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Returns whether the player is sprinting or not */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Returns whether the player is sprinting or not" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "IsPlayerSprinting", nullptr, nullptr, sizeof(FPSCharacter_eventIsPlayerSprinting_Parms), Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics
	{
		struct FPSCharacter_eventSetBaseFOV_Parms
		{
			float NewFOV;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewFOV;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV = { "NewFOV", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventSetBaseFOV_Parms, NewFOV), METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::NewProp_NewFOV,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Update the base FOV\n\x09 * @param NewFOV The FOV to use as a new BaseFOV\n\x09 */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Update the base FOV\n@param NewFOV The FOV to use as a new BaseFOV" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SetBaseFOV", nullptr, nullptr, sizeof(FPSCharacter_eventSetBaseFOV_Parms), Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_SetBaseFOV()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_SetBaseFOV_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics
	{
		struct FPSCharacter_eventSetCrosshairVisibility_Parms
		{
			bool bVisible;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bVisible_MetaData[];
#endif
		static void NewProp_bVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_SetBit(void* Obj)
	{
		((FPSCharacter_eventSetCrosshairVisibility_Parms*)Obj)->bVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible = { "bVisible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPSCharacter_eventSetCrosshairVisibility_Parms), &Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::NewProp_bVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "FPS Character" },
		{ "Comment", "/** Update the visibility of the crosshair in HUD UI component\n\x09 * @param bVisible The new visibility of the crosshair\n\x09 */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Update the visibility of the crosshair in HUD UI component\n@param bVisible The new visibility of the crosshair" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "SetCrosshairVisibility", nullptr, nullptr, sizeof(FPSCharacter_eventSetCrosshairVisibility_Parms), Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics
	{
		struct FPSCharacter_eventTimelineProgress_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPSCharacter_eventTimelineProgress_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Ticks the timeline */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Ticks the timeline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AFPSCharacter, nullptr, "TimelineProgress", nullptr, nullptr, sizeof(FPSCharacter_eventTimelineProgress_Parms), Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AFPSCharacter_TimelineProgress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AFPSCharacter_TimelineProgress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AFPSCharacter_NoRegister()
	{
		return AFPSCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HandsMeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HandsMeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FootstepAudioComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FootstepAudioComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BS_Walk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BS_Walk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BS_Ads_Walk_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BS_Ads_Walk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_Ads_Idle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim_Ads_Idle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Anim_Sprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Anim_Sprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaultMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchedCapsuleHalfHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchedCapsuleHalfHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchedSpringArmHeightDelta_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchedSpringArmHeightDelta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CrouchSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlideTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SlideTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMantleHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxMantleHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultTraceAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_VaultTraceAmount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultTimelineCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VaultTimelineCurve;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MovementDataMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementDataMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementDataMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_MovementDataMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseFOV_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BaseFOV;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FOVChangeSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FOVChangeSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeedFOVChange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeedFOVChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CameraSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScopeOpacityParameterCollection_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScopeOpacityParameterCollection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OpacityParameterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OpacityParameterName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurfaceMaterialArray_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurfaceMaterialArray_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SurfaceMaterialArray;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MovementState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MovementState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VaultTimeline_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_VaultTimeline;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InventoryComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LookAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_JumpAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SprintAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SprintAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CrouchAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CrouchAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FiringAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FiringAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryWeaponAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrimaryWeaponAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryWeaponAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondaryWeaponAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AimAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMappingContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BaseMappingContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BaseMappingPriority_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BaseMappingPriority;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AFPSCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AFPSCharacter_FootstepSounds, "FootstepSounds" }, // 4275120716
		{ &Z_Construct_UFunction_AFPSCharacter_GetAdsIdleAnim, "GetAdsIdleAnim" }, // 3313318864
		{ &Z_Construct_UFunction_AFPSCharacter_GetBaseMappingContext, "GetBaseMappingContext" }, // 1273279918
		{ &Z_Construct_UFunction_AFPSCharacter_GetForwardMovement, "GetForwardMovement" }, // 2661564600
		{ &Z_Construct_UFunction_AFPSCharacter_GetIdleAnim, "GetIdleAnim" }, // 2943792405
		{ &Z_Construct_UFunction_AFPSCharacter_GetMouseX, "GetMouseX" }, // 3431879794
		{ &Z_Construct_UFunction_AFPSCharacter_GetMouseY, "GetMouseY" }, // 1340097485
		{ &Z_Construct_UFunction_AFPSCharacter_GetRightMovement, "GetRightMovement" }, // 1521921697
		{ &Z_Construct_UFunction_AFPSCharacter_GetSprintAnim, "GetSprintAnim" }, // 1263891336
		{ &Z_Construct_UFunction_AFPSCharacter_GetWalkAdsBlendSpace, "GetWalkAdsBlendSpace" }, // 2132485639
		{ &Z_Construct_UFunction_AFPSCharacter_GetWalkBlendSpace, "GetWalkBlendSpace" }, // 151664646
		{ &Z_Construct_UFunction_AFPSCharacter_IsCrosshairVisible, "IsCrosshairVisible" }, // 3096179295
		{ &Z_Construct_UFunction_AFPSCharacter_IsPlayerAiming, "IsPlayerAiming" }, // 3153256629
		{ &Z_Construct_UFunction_AFPSCharacter_IsPlayerSprinting, "IsPlayerSprinting" }, // 1812820845
		{ &Z_Construct_UFunction_AFPSCharacter_SetBaseFOV, "SetBaseFOV" }, // 2832615694
		{ &Z_Construct_UFunction_AFPSCharacter_SetCrosshairVisibility, "SetCrosshairVisibility" }, // 3815825669
		{ &Z_Construct_UFunction_AFPSCharacter_TimelineProgress, "TimelineProgress" }, // 2928592826
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "FPSCharacter.h" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The character's FPS camera component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The character's FPS camera component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x002008000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The character's hands mesh component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The character's hands mesh component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp = { "HandsMeshComp", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, HandsMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The spring arm component, which is required to enable 'use control rotation' */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The spring arm component, which is required to enable 'use control rotation'" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FootstepAudioComp_MetaData[] = {
		{ "Category", "Components" },
		{ "Comment", "/** The component used to play audio for footsteps */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The component used to play audio for footsteps" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FootstepAudioComp = { "FootstepAudioComp", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, FootstepAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FootstepAudioComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FootstepAudioComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk_MetaData[] = {
		{ "Category", "Animations | Blend Spaces" },
		{ "Comment", "/** Hand animation blend space for when the player has no weapon  */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation blend space for when the player has no weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk = { "BS_Walk", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, BS_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Ads_Walk_MetaData[] = {
		{ "Category", "Animations | Blend Spaces" },
		{ "Comment", "/** Hand animation blend space for then the player has no weapon and is aiming down sights */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation blend space for then the player has no weapon and is aiming down sights" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Ads_Walk = { "BS_Ads_Walk", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, BS_Ads_Walk), Z_Construct_UClass_UBlendSpace_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Ads_Walk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Ads_Walk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon and is idle */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon and is idle" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle = { "Anim_Idle", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, Anim_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Ads_Idle_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon, is idle, and is aiming down sights */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon, is idle, and is aiming down sights" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Ads_Idle = { "Anim_Ads_Idle", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, Anim_Ads_Idle), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Ads_Idle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Ads_Idle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint_MetaData[] = {
		{ "Category", "Animations | Sequences" },
		{ "Comment", "/** Hand animation for when the player has no weapon and is sprinting */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand animation for when the player has no weapon and is sprinting" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint = { "Anim_Sprint", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, Anim_Sprint), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage_MetaData[] = {
		{ "Category", "Animations | Montages" },
		{ "Comment", "/** Hand montage, played during vault */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Hand montage, played during vault" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage = { "VaultMontage", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, VaultMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Prints debug variables if true */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Prints debug variables if true" },
	};
#endif
	void Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((AFPSCharacter*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AFPSCharacter), &Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight_MetaData[] = {
		{ "Category", "Movement | Crouch" },
		{ "Comment", "/** Sets the height of the player's capsule component when crouched */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Sets the height of the player's capsule component when crouched" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight = { "CrouchedCapsuleHalfHeight", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CrouchedCapsuleHalfHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedSpringArmHeightDelta_MetaData[] = {
		{ "Category", "Movement | Crouch" },
		{ "Comment", "/** The change in height of the spring arm that the camera + hands rest on when the player is crouched\n\x09 *\n\x09 *\x09In order to best line up with the crouched height, this should be equal to the\n\x09 *\x09""CrouchedCapsuleHalfHeight minus the capsule's default height. For example, if the default capsule half height\n\x09 *\x09is 88.0f, and the crouched half height is 58.0f, then the crouched spring arm height delta should be -30\n\x09 */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The change in height of the spring arm that the camera + hands rest on when the player is crouched\n\n    In order to best line up with the crouched height, this should be equal to the\n    CrouchedCapsuleHalfHeight minus the capsule's default height. For example, if the default capsule half height\n    is 88.0f, and the crouched half height is 58.0f, then the crouched spring arm height delta should be -30" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedSpringArmHeightDelta = { "CrouchedSpringArmHeightDelta", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CrouchedSpringArmHeightDelta), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedSpringArmHeightDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedSpringArmHeightDelta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed_MetaData[] = {
		{ "Category", "Movement | Crouch" },
		{ "Comment", "/** The rate at which the character crouches */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The rate at which the character crouches" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed = { "CrouchSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CrouchSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime_MetaData[] = {
		{ "Category", "Movement | Slide" },
		{ "Comment", "/** The time in seconds between the beginning of a slide and when it is ended */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The time in seconds between the beginning of a slide and when it is ended" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime = { "SlideTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, SlideTime), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight_MetaData[] = {
		{ "Category", "Movement | Vault" },
		{ "Comment", "/** The height of the highest surface that the player can mantle up onto */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The height of the highest surface that the player can mantle up onto" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight = { "MaxMantleHeight", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, MaxMantleHeight), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount_MetaData[] = {
		{ "Category", "Movement | Vault" },
		{ "Comment", "/** The amount of traces to draw for vault collision checks, to get distance in unreal units, multiply by 5 */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The amount of traces to draw for vault collision checks, to get distance in unreal units, multiply by 5" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount = { "VaultTraceAmount", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, VaultTraceAmount), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve_MetaData[] = {
		{ "Category", "Movement | Vault" },
		{ "Comment", "/** Curve that controls motion during vault */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Curve that controls motion during vault" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve = { "VaultTimelineCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, VaultTimelineCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_ValueProp = { "MovementDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovementVariables, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_Key_KeyProp = { "MovementDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FPSCore_EMovementState, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_MetaData[] = {
		{ "Category", "Movement | Data" },
		{ "Comment", "/** A map holding data for each movement state */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "A map holding data for each movement state" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap = { "MovementDataMap", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, MovementDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV_MetaData[] = {
		{ "Category", "Camera | FOV" },
		{ "Comment", "/** The game's default FOV */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The game's default FOV" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV = { "BaseFOV", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, BaseFOV), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed_MetaData[] = {
		{ "Category", "Camera | FOV" },
		{ "Comment", "/** The speed at which FOV changes occur */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The speed at which FOV changes occur" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed = { "FOVChangeSpeed", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, FOVChangeSpeed), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange_MetaData[] = {
		{ "Category", "Camera | FOV" },
		{ "Comment", "/** The increase in FOV during fast actions, such as sprinting and sliding */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The increase in FOV during fast actions, such as sprinting and sliding" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange = { "SpeedFOVChange", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, SpeedFOVChange), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSocketName_MetaData[] = {
		{ "Category", "Camera | Socket" },
		{ "Comment", "/** Name of the socket we attach our camera to */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Name of the socket we attach our camera to" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSocketName = { "CameraSocketName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CameraSocketName), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScopeOpacityParameterCollection_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** The material parameter collection that stores the scope opacity parameter to be changed */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The material parameter collection that stores the scope opacity parameter to be changed" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScopeOpacityParameterCollection = { "ScopeOpacityParameterCollection", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, ScopeOpacityParameterCollection), Z_Construct_UClass_UMaterialParameterCollection_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScopeOpacityParameterCollection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScopeOpacityParameterCollection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_OpacityParameterName_MetaData[] = {
		{ "Category", "Materials" },
		{ "Comment", "/** The name of the parameter to modify in the material parameter collection */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The name of the parameter to modify in the material parameter collection" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_OpacityParameterName = { "OpacityParameterName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, OpacityParameterName), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_OpacityParameterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_OpacityParameterName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SurfaceMaterialArray_Inner = { "SurfaceMaterialArray", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SurfaceMaterialArray_MetaData[] = {
		{ "Category", "Footsteps" },
		{ "Comment", "/** Array of physical materials for footsteps */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Array of physical materials for footsteps" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SurfaceMaterialArray = { "SurfaceMaterialArray", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, SurfaceMaterialArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SurfaceMaterialArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SurfaceMaterialArray_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_MetaData[] = {
		{ "Comment", "/** Enumerator holding the 5 possible movement states defined by EMovementState */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Enumerator holding the 5 possible movement states defined by EMovementState" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState = { "MovementState", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, MovementState), Z_Construct_UEnum_FPSCore_EMovementState, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline_MetaData[] = {
		{ "Comment", "/** The timeline for vaulting (generated from the curve) */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "The timeline for vaulting (generated from the curve)" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline = { "VaultTimeline", nullptr, (EPropertyFlags)0x0040008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, VaultTimeline), Z_Construct_UScriptStruct_FTimeline, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent_MetaData[] = {
		{ "Comment", "/** A reference to the player's Inventory Component */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "A reference to the player's Inventory Component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent = { "InventoryComponent", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, InventoryComponent), Z_Construct_UClass_UInventoryComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "Comment", "/** Input actions */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Input actions" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction = { "MovementAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, MovementAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction = { "JumpAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, JumpAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction = { "SprintAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, SprintAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction = { "CrouchAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, CrouchAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction = { "FiringAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, FiringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction = { "PrimaryWeaponAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, PrimaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction = { "SecondaryWeaponAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, SecondaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction = { "AimAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, AimAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction = { "ScrollAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, ScrollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction_MetaData[] = {
		{ "Category", "Input | Actions" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext_MetaData[] = {
		{ "Category", "Input | Mappings" },
		{ "Comment", "/** Input Mappings */" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
		{ "ToolTip", "Input Mappings" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext = { "BaseMappingContext", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, BaseMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority_MetaData[] = {
		{ "Category", "Input | Mappings" },
		{ "ModuleRelativePath", "Public/FPSCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority = { "BaseMappingPriority", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacter, BaseMappingPriority), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_HandsMeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FootstepAudioComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Walk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BS_Ads_Walk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Ads_Idle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_Anim_Sprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedCapsuleHalfHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchedSpringArmHeightDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SlideTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MaxMantleHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTraceAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimelineCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseFOV,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FOVChangeSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SpeedFOVChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CameraSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScopeOpacityParameterCollection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_OpacityParameterName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SurfaceMaterialArray_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SurfaceMaterialArray,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_VaultTimeline,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InventoryComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_MovementAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_LookAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_JumpAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SprintAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_CrouchAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_FiringAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PrimaryWeaponAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_SecondaryWeaponAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ReloadAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_AimAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_InteractAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_ScrollAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_PauseAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacter_Statics::NewProp_BaseMappingPriority,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacter_Statics::ClassParams = {
		&AFPSCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AFPSCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacter, 3143915036);
	template<> FPSCORE_API UClass* StaticClass<AFPSCharacter>()
	{
		return AFPSCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacter(Z_Construct_UClass_AFPSCharacter, &AFPSCharacter::StaticClass, TEXT("/Script/FPSCore"), TEXT("AFPSCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
