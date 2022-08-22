// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/InteractedActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractedActor() {}
// Cross Module References
	FPSCORE_API UClass* Z_Construct_UClass_AInteractedActor_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractedActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
// End Cross Module References
	static FName NAME_AInteractedActor_OnInteracted = FName(TEXT("OnInteracted"));
	void AInteractedActor::OnInteracted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractedActor_OnInteracted),NULL);
	}
	void AInteractedActor::StaticRegisterNativesAInteractedActor()
	{
	}
	struct Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Function implemented in blueprints from which to perform logic\n" },
		{ "ModuleRelativePath", "Public/InteractedActor.h" },
		{ "ToolTip", "Function implemented in blueprints from which to perform logic" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractedActor, nullptr, "OnInteracted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractedActor_OnInteracted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractedActor_OnInteracted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractedActor_NoRegister()
	{
		return AInteractedActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractedActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractedActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractedActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractedActor_OnInteracted, "OnInteracted" }, // 828178043
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractedActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractedActor.h" },
		{ "ModuleRelativePath", "Public/InteractedActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractedActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractedActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractedActor_Statics::ClassParams = {
		&AInteractedActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractedActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractedActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractedActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractedActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractedActor, 3949883609);
	template<> FPSCORE_API UClass* StaticClass<AInteractedActor>()
	{
		return AInteractedActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractedActor(Z_Construct_UClass_AInteractedActor, &AInteractedActor::StaticClass, TEXT("/Script/FPSCore"), TEXT("AInteractedActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractedActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
