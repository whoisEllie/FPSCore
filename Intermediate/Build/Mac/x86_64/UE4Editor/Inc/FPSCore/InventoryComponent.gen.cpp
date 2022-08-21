// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/Components/InventoryComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}
// Cross Module References
	FPSCORE_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInventoryComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeaponRemainingAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCurrentWeaponRemainingAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeaponLoadedAmmo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetCurrentWeaponLoadedAmmo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInventoryComponent::execGetCurrentWeapon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AWeaponBase**)Z_Param__Result=P_THIS->GetCurrentWeapon();
		P_NATIVE_END;
	}
	void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
	{
		UClass* Class = UInventoryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetCurrentWeapon", &UInventoryComponent::execGetCurrentWeapon },
			{ "GetCurrentWeaponLoadedAmmo", &UInventoryComponent::execGetCurrentWeaponLoadedAmmo },
			{ "GetCurrentWeaponRemainingAmmo", &UInventoryComponent::execGetCurrentWeaponRemainingAmmo },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics
	{
		struct InventoryComponent_eventGetCurrentWeapon_Parms
		{
			AWeaponBase* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeapon_Parms, ReturnValue), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the current weapon equipped by the player */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the current weapon equipped by the player" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeapon", nullptr, nullptr, sizeof(InventoryComponent_eventGetCurrentWeapon_Parms), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics
	{
		struct InventoryComponent_eventGetCurrentWeaponLoadedAmmo_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeaponLoadedAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**  Returns the amount of ammunition currently loaded into the weapon */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the amount of ammunition currently loaded into the weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeaponLoadedAmmo", nullptr, nullptr, sizeof(InventoryComponent_eventGetCurrentWeaponLoadedAmmo_Parms), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics
	{
		struct InventoryComponent_eventGetCurrentWeaponRemainingAmmo_Parms
		{
			FText ReturnValue;
		};
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InventoryComponent_eventGetCurrentWeaponRemainingAmmo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the amount of ammunition remaining for the current weapon */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "Returns the amount of ammunition remaining for the current weapon" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetCurrentWeaponRemainingAmmo", nullptr, nullptr, sizeof(InventoryComponent_eventGetCurrentWeaponRemainingAmmo_Parms), Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
	{
		return UInventoryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrollAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScrollAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponSpawnDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeaponSpawnDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfWeaponSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_NumberOfWeaponSlots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EquippedWeapons_ValueProp;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EquippedWeapons_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EquippedWeapons_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EquippedWeapons;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWeapon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWeapon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInventoryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeapon, "GetCurrentWeapon" }, // 2619438785
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponLoadedAmmo, "GetCurrentWeaponLoadedAmmo" }, // 1028166312
		{ &Z_Construct_UFunction_UInventoryComponent_GetCurrentWeaponRemainingAmmo, "GetCurrentWeaponRemainingAmmo" }, // 1833933653
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction_MetaData[] = {
		{ "Comment", "/** The input actions implemented by this component */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "The input actions implemented by this component" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction = { "FiringAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, FiringAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction = { "PrimaryWeaponAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, PrimaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction = { "SecondaryWeaponAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, SecondaryWeaponAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction = { "ReloadAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, ReloadAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction = { "ScrollAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, ScrollAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance_MetaData[] = {
		{ "Category", "Camera | Interaction" },
		{ "Comment", "/** The distance at which pickups for old weapons spawn during a weapon swap */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "The distance at which pickups for old weapons spawn during a weapon swap" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance = { "WeaponSpawnDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, WeaponSpawnDistance), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots_MetaData[] = {
		{ "Category", "Weapons | Inventory" },
		{ "Comment", "/** THe Number of slots for Weapons that this player has */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "THe Number of slots for Weapons that this player has" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots = { "NumberOfWeaponSlots", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, NumberOfWeaponSlots), METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_ValueProp = { "EquippedWeapons", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_Key_KeyProp = { "EquippedWeapons_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_MetaData[] = {
		{ "Comment", "/** A Map storing the player's current weapons and the slot that they correspond to */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "A Map storing the player's current weapons and the slot that they correspond to" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons = { "EquippedWeapons", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, EquippedWeapons), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData[] = {
		{ "Comment", "/** The player's currently equipped weapon */" },
		{ "ModuleRelativePath", "Public/Components/InventoryComponent.h" },
		{ "ToolTip", "The player's currently equipped weapon" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon = { "CurrentWeapon", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInventoryComponent, CurrentWeapon), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_FiringAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_PrimaryWeaponAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_SecondaryWeaponAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ReloadAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_ScrollAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_WeaponSpawnDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_NumberOfWeaponSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_EquippedWeapons,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_CurrentWeapon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
		&UInventoryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryComponent, 3983821915);
	template<> FPSCORE_API UClass* StaticClass<UInventoryComponent>()
	{
		return UInventoryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryComponent(Z_Construct_UClass_UInventoryComponent, &UInventoryComponent::StaticClass, TEXT("/Script/FPSCore"), TEXT("UInventoryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
