// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/WeaponPickup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWeaponPickup() {}
// Cross Module References
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponPickup_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponPickup();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
	FPSCORE_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	FPSCORE_API UScriptStruct* Z_Construct_UScriptStruct_FRuntimeWeaponData();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AWeaponPickup::execSpawnAttachmentMesh)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnAttachmentMesh();
		P_NATIVE_END;
	}
	void AWeaponPickup::StaticRegisterNativesAWeaponPickup()
	{
		UClass* Class = AWeaponPickup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnAttachmentMesh", &AWeaponPickup::execSpawnAttachmentMesh },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Weapon Pickup" },
		{ "Comment", "/** Spawns attachment meshes from data table */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Spawns attachment meshes from data table" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AWeaponPickup, nullptr, "SpawnAttachmentMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AWeaponPickup_NoRegister()
	{
		return AWeaponPickup::StaticClass();
	}
	struct Z_Construct_UClass_AWeaponPickup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachmentArrayOverride_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentArrayOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AttachmentArrayOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponReference;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataStruct_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DataStruct;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeaponDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachmentsDataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachmentsDataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bStatic_MetaData[];
#endif
		static void NewProp_bStatic_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStatic;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_WeaponName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MainMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BarrelAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BarrelAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagazineAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MagazineAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightsAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SightsAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StockAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StockAttachment;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GripAttachment_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GripAttachment;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWeaponPickup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AWeaponPickup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AWeaponPickup_SpawnAttachmentMesh, "SpawnAttachmentMesh" }, // 2725729177
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WeaponPickup.h" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_Inner = { "AttachmentArrayOverride", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_MetaData[] = {
		{ "Category", "Data" },
		{ "Comment", "/** The array of attachments to spawn (usually inherited, can be set by instance) */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "The array of attachments to spawn (usually inherited, can be set by instance)" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride = { "AttachmentArrayOverride", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, AttachmentArrayOverride), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Weapon to spawn when picked up */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Weapon to spawn when picked up" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference = { "WeaponReference", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, WeaponReference), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct_MetaData[] = {
		{ "Comment", "/** Local weapon data struct to keep track of ammo amounts and weapon health */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Local weapon data struct to keep track of ammo amounts and weapon health" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct = { "DataStruct", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, DataStruct), Z_Construct_UScriptStruct_FRuntimeWeaponData, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable_MetaData[] = {
		{ "Category", "Data Table" },
		{ "Comment", "/** Data table reference for weapon (used to see if the weapon has attachments) */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Data table reference for weapon (used to see if the weapon has attachments)" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable = { "WeaponDataTable", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, WeaponDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable_MetaData[] = {
		{ "Category", "Data Table" },
		{ "Comment", "/** Data table reference for attachments */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Data table reference for attachments" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable = { "AttachmentsDataTable", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, AttachmentsDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_MetaData[] = {
		{ "Category", "Weapon" },
		{ "Comment", "/** Whether to run physics simulations or not */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Whether to run physics simulations or not" },
	};
#endif
	void Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_SetBit(void* Obj)
	{
		((AWeaponPickup*)Obj)->bStatic = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic = { "bStatic", nullptr, (EPropertyFlags)0x0040000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AWeaponPickup), &Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_SetBit, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName_MetaData[] = {
		{ "Category", "Pickup" },
		{ "Comment", "/** Visualisation name */" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Visualisation name" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName = { "WeaponName", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, WeaponName), METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MainMesh_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "/** Main weapon mesh */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Main weapon mesh" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MainMesh = { "MainMesh", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, MainMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MainMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MainMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment_MetaData[] = {
		{ "Comment", "/** Meshes for Attachments */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
		{ "ToolTip", "Meshes for Attachments" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment = { "BarrelAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, BarrelAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment = { "MagazineAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, MagazineAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment = { "SightsAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, SightsAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment = { "StockAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, StockAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WeaponPickup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment = { "GripAttachment", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AWeaponPickup, GripAttachment), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AWeaponPickup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentArrayOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponReference,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_DataStruct,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_AttachmentsDataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_bStatic,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_WeaponName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MainMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_BarrelAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_MagazineAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_SightsAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_StockAttachment,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AWeaponPickup_Statics::NewProp_GripAttachment,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AWeaponPickup_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AWeaponPickup, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWeaponPickup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWeaponPickup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWeaponPickup_Statics::ClassParams = {
		&AWeaponPickup::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AWeaponPickup_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AWeaponPickup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWeaponPickup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWeaponPickup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWeaponPickup, 2912448474);
	template<> FPSCORE_API UClass* StaticClass<AWeaponPickup>()
	{
		return AWeaponPickup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWeaponPickup(Z_Construct_UClass_AWeaponPickup, &AWeaponPickup::StaticClass, TEXT("/Script/FPSCore"), TEXT("AWeaponPickup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWeaponPickup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
