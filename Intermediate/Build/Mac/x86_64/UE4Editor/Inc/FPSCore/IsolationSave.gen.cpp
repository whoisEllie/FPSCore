// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/IsolationSave.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsolationSave() {}
// Cross Module References
	FPSCORE_API UClass* Z_Construct_UClass_UIsolationSave_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UIsolationSave();
	ENGINE_API UClass* Z_Construct_UClass_USaveGame();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	void UIsolationSave::StaticRegisterNativesUIsolationSave()
	{
	}
	UClass* Z_Construct_UClass_UIsolationSave_NoRegister()
	{
		return UIsolationSave::StaticClass();
	}
	struct Z_Construct_UClass_UIsolationSave_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EffectsVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EffectsVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InterfaceVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InterfaceVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AmbientVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AmbientVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MusicVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MusicVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsolationSave_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveGame,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsolationSave_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "IsolationSave.h" },
		{ "ModuleRelativePath", "Public/IsolationSave.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsolationSave_Statics::NewProp_EffectsVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/IsolationSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsolationSave_Statics::NewProp_EffectsVolume = { "EffectsVolume", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsolationSave, EffectsVolume), METADATA_PARAMS(Z_Construct_UClass_UIsolationSave_Statics::NewProp_EffectsVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsolationSave_Statics::NewProp_EffectsVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsolationSave_Statics::NewProp_InterfaceVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/IsolationSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsolationSave_Statics::NewProp_InterfaceVolume = { "InterfaceVolume", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsolationSave, InterfaceVolume), METADATA_PARAMS(Z_Construct_UClass_UIsolationSave_Statics::NewProp_InterfaceVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsolationSave_Statics::NewProp_InterfaceVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsolationSave_Statics::NewProp_AmbientVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/IsolationSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsolationSave_Statics::NewProp_AmbientVolume = { "AmbientVolume", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsolationSave, AmbientVolume), METADATA_PARAMS(Z_Construct_UClass_UIsolationSave_Statics::NewProp_AmbientVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsolationSave_Statics::NewProp_AmbientVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsolationSave_Statics::NewProp_MusicVolume_MetaData[] = {
		{ "Category", "Audio" },
		{ "ModuleRelativePath", "Public/IsolationSave.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UIsolationSave_Statics::NewProp_MusicVolume = { "MusicVolume", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UIsolationSave, MusicVolume), METADATA_PARAMS(Z_Construct_UClass_UIsolationSave_Statics::NewProp_MusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UIsolationSave_Statics::NewProp_MusicVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UIsolationSave_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsolationSave_Statics::NewProp_EffectsVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsolationSave_Statics::NewProp_InterfaceVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsolationSave_Statics::NewProp_AmbientVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UIsolationSave_Statics::NewProp_MusicVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsolationSave_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsolationSave>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsolationSave_Statics::ClassParams = {
		&UIsolationSave::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UIsolationSave_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UIsolationSave_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UIsolationSave_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsolationSave_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsolationSave()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsolationSave_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsolationSave, 3500550868);
	template<> FPSCORE_API UClass* StaticClass<UIsolationSave>()
	{
		return UIsolationSave::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsolationSave(Z_Construct_UClass_UIsolationSave, &UIsolationSave::StaticClass, TEXT("/Script/FPSCore"), TEXT("UIsolationSave"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsolationSave);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
