// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/AmmoPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAmmoPickup() {}
// Cross Module References
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EAmmoAmount();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FAmmoTypeData();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AAmmoPickup_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AAmmoPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	FPSCORE_API UEnum* Z_Construct_UEnum_FPSCore_EAmmoType();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static UEnum* EAmmoAmount_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_FPSCore_EAmmoAmount, Z_Construct_UPackage__Script_FPSCore(), TEXT("EAmmoAmount"));
		}
		return Singleton;
	}
	template<> FPSCORE_API UEnum* StaticEnum<EAmmoAmount>()
	{
		return EAmmoAmount_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAmmoAmount(EAmmoAmount_StaticEnum, TEXT("/Script/FPSCore"), TEXT("EAmmoAmount"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_FPSCore_EAmmoAmount_Hash() { return 4278659466U; }
	UEnum* Z_Construct_UEnum_FPSCore_EAmmoAmount()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_FPSCore();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAmmoAmount"), 0, Get_Z_Construct_UEnum_FPSCore_EAmmoAmount_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAmmoAmount::Low", (int64)EAmmoAmount::Low },
				{ "EAmmoAmount::Medium", (int64)EAmmoAmount::Medium },
				{ "EAmmoAmount::High", (int64)EAmmoAmount::High },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Comment", "/** Enum for the ammo amounts that a pickup can have */" },
				{ "High.DisplayName", "High Ammo" },
				{ "High.Name", "EAmmoAmount::High" },
				{ "Low.DisplayName", "Low Ammo" },
				{ "Low.Name", "EAmmoAmount::Low" },
				{ "Medium.DisplayName", "Medium Ammo" },
				{ "Medium.Name", "EAmmoAmount::Medium" },
				{ "ModuleRelativePath", "Public/AmmoPickup.h" },
				{ "ToolTip", "Enum for the ammo amounts that a pickup can have" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_FPSCore,
				nullptr,
				"EAmmoAmount",
				"EAmmoAmount",
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
class UScriptStruct* FAmmoTypeData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern FPSCORE_API uint32 Get_Z_Construct_UScriptStruct_FAmmoTypeData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAmmoTypeData, Z_Construct_UPackage__Script_FPSCore(), TEXT("AmmoTypeData"), sizeof(FAmmoTypeData), Get_Z_Construct_UScriptStruct_FAmmoTypeData_Hash());
	}
	return Singleton;
}
template<> FPSCORE_API UScriptStruct* StaticStruct<FAmmoTypeData>()
{
	return FAmmoTypeData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAmmoTypeData(FAmmoTypeData::StaticStruct, TEXT("/Script/FPSCore"), TEXT("AmmoTypeData"), false, nullptr, nullptr);
static struct FScriptStruct_FPSCore_StaticRegisterNativesFAmmoTypeData
{
	FScriptStruct_FPSCore_StaticRegisterNativesFAmmoTypeData()
	{
		UScriptStruct::DeferCppStructOps<FAmmoTypeData>(FName(TEXT("AmmoTypeData")));
	}
} ScriptStruct_FPSCore_StaticRegisterNativesFAmmoTypeData;
	struct Z_Construct_UScriptStruct_FAmmoTypeData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FullAmmoBoxes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FullAmmoBoxes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FullAmmoBoxes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullAmmoBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_FullAmmoBoxes;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmptyAmmoBoxes_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmptyAmmoBoxes_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmptyAmmoBoxes_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmptyAmmoBoxes_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_EmptyAmmoBoxes;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AmmoCounts_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoCounts_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoCounts_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoCounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AmmoCounts;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Struct that keeps track of all our data per ammo type */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Struct that keeps track of all our data per ammo type" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAmmoTypeData>();
	}
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_ValueProp = { "FullAmmoBoxes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_Key_KeyProp = { "FullAmmoBoxes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_MetaData[] = {
		{ "Category", "Ammo Pickup" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes = { "FullAmmoBoxes", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoTypeData, FullAmmoBoxes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_ValueProp = { "EmptyAmmoBoxes", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_Key_KeyProp = { "EmptyAmmoBoxes_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_MetaData[] = {
		{ "Category", "Ammo Pickup" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes = { "EmptyAmmoBoxes", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoTypeData, EmptyAmmoBoxes), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_ValueProp = { "AmmoCounts", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_Key_KeyProp = { "AmmoCounts_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoAmount, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_MetaData[] = {
		{ "Category", "Ammo Pickup" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts = { "AmmoCounts", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAmmoTypeData, AmmoCounts), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAmmoTypeData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_FullAmmoBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_EmptyAmmoBoxes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAmmoTypeData_Statics::NewProp_AmmoCounts,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAmmoTypeData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
		nullptr,
		&NewStructOps,
		"AmmoTypeData",
		sizeof(FAmmoTypeData),
		alignof(FAmmoTypeData),
		Z_Construct_UScriptStruct_FAmmoTypeData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAmmoTypeData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAmmoTypeData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAmmoTypeData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_FPSCore();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AmmoTypeData"), sizeof(FAmmoTypeData), Get_Z_Construct_UScriptStruct_FAmmoTypeData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAmmoTypeData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAmmoTypeData_Hash() { return 2682144247U; }
	void AAmmoPickup::StaticRegisterNativesAAmmoPickup()
	{
	}
	UClass* Z_Construct_UClass_AAmmoPickup_NoRegister()
	{
		return AAmmoPickup::StaticClass();
	}
	struct Z_Construct_UClass_AAmmoPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PickupName_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PickupName_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PickupName_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupName_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_PickupName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AmmoData_ValueProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoData_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoData_Key_KeyProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AmmoData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoAmount_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoAmount_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoAmount;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AmmoType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmmoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AmmoType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bInfinite_MetaData[];
#endif
		static void NewProp_bInfinite_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bInfinite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDrawDebug_MetaData[];
#endif
		static void NewProp_bDrawDebug_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDrawDebug;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PickupSFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PickupSFX;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAmmoPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AmmoPickup.h" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_ValueProp = { "PickupName", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_Key_KeyProp = { "PickupName_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/** Map to keep track of the name showed to the player for each ammo type */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Map to keep track of the name showed to the player for each ammo type" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName = { "PickupName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickup, PickupName), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_ValueProp = { "AmmoData", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAmmoTypeData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_Key_KeyProp = { "AmmoData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_MetaData[] = {
		{ "Category", "Meshes" },
		{ "Comment", "/** Map to keep track of all values for the meshes and ammo counts */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Map to keep track of all values for the meshes and ammo counts" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData = { "AmmoData", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickup, AmmoData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Comment", "/** Display mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Display mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickup, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The amount of ammo (low/medium/high that this instance should have */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "The amount of ammo (low/medium/high that this instance should have" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount = { "AmmoAmount", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickup, AmmoAmount), Z_Construct_UEnum_FPSCore_EAmmoAmount, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** The type of ammo that this instance should have */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "The type of ammo that this instance should have" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType = { "AmmoType", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickup, AmmoType), Z_Construct_UEnum_FPSCore_EAmmoType, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_MetaData[] = {
		{ "Category", "Properties" },
		{ "Comment", "/** Whether this is an infinite ammo box or not (used for demo level) */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Whether this is an infinite ammo box or not (used for demo level)" },
	};
#endif
	void Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_SetBit(void* Obj)
	{
		((AAmmoPickup*)Obj)->bInfinite = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite = { "bInfinite", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmoPickup), &Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_MetaData[] = {
		{ "Category", "Debug" },
		{ "Comment", "/** Whether debug print statements should be shown */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "Whether debug print statements should be shown" },
	};
#endif
	void Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_SetBit(void* Obj)
	{
		((AAmmoPickup*)Obj)->bDrawDebug = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug = { "bDrawDebug", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAmmoPickup), &Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX_MetaData[] = {
		{ "Category", "Sound bases" },
		{ "Comment", "/** The sound effect to play when ammunition is collected */" },
		{ "ModuleRelativePath", "Public/AmmoPickup.h" },
		{ "ToolTip", "The sound effect to play when ammunition is collected" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX = { "PickupSFX", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAmmoPickup, PickupSFX), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAmmoPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_AmmoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bInfinite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_bDrawDebug,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAmmoPickup_Statics::NewProp_PickupSFX,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AAmmoPickup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AAmmoPickup, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAmmoPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAmmoPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAmmoPickup_Statics::ClassParams = {
		&AAmmoPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAmmoPickup_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAmmoPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAmmoPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAmmoPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAmmoPickup, 473673886);
	template<> FPSCORE_API UClass* StaticClass<AAmmoPickup>()
	{
		return AAmmoPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAmmoPickup(Z_Construct_UClass_AAmmoPickup, &AAmmoPickup::StaticClass, TEXT("/Script/FPSCore"), TEXT("AAmmoPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAmmoPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
