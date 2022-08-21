// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/FPSCharacterController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSCharacterController() {}
// Cross Module References
	FPSCORE_API UClass* Z_Construct_UClass_AFPSCharacterController_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AFPSCharacterController();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EAmmoType();
// End Cross Module References
	void AFPSCharacterController::StaticRegisterNativesAFPSCharacterController()
	{
	}
	UClass* Z_Construct_UClass_AFPSCharacterController_NoRegister()
	{
		return AFPSCharacterController::StaticClass();
	}
	struct Z_Construct_UClass_AFPSCharacterController_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoMap_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoMap_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AmmoMap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoBoxCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_AmmoBoxCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFPSCharacterController_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterController_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "FPSCharacterController.h" },
		{ "ModuleRelativePath", "Public/FPSCharacterController.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_ValueProp = { "AmmoMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_Key_KeyProp = { "AmmoMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** Stored ammo data for the player character */" },
		{ "ModuleRelativePath", "Public/FPSCharacterController.h" },
		{ "ToolTip", "Stored ammo data for the player character" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap = { "AmmoMap", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterController, AmmoMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount_MetaData[] = {
		{ "Category", "Inventory" },
		{ "Comment", "/** The amount of ammunition boxes that the player has */" },
		{ "ModuleRelativePath", "Public/FPSCharacterController.h" },
		{ "ToolTip", "The amount of ammunition boxes that the player has" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount = { "AmmoBoxCount", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFPSCharacterController, AmmoBoxCount), METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFPSCharacterController_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFPSCharacterController_Statics::NewProp_AmmoBoxCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFPSCharacterController_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFPSCharacterController>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AFPSCharacterController_Statics::ClassParams = {
		&AFPSCharacterController::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFPSCharacterController_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::PropPointers),
		0,
		0x008002A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFPSCharacterController_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFPSCharacterController_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFPSCharacterController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AFPSCharacterController_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AFPSCharacterController, 4136329605);
	template<> FPSCORE_API UClass* StaticClass<AFPSCharacterController>()
	{
		return AFPSCharacterController::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AFPSCharacterController(Z_Construct_UClass_AFPSCharacterController, &AFPSCharacterController::StaticClass, TEXT("/Script/FPSCore"), TEXT("AFPSCharacterController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFPSCharacterController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
