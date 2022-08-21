// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/InteractionActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionActor() {}
// Cross Module References
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionActor_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractionActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_AInteractedActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInteractInterface_NoRegister();
// End Cross Module References
	static FName NAME_AInteractionActor_InteractionCompleted = FName(TEXT("InteractionCompleted"));
	void AInteractionActor::InteractionCompleted()
	{
		ProcessEvent(FindFunctionChecked(NAME_AInteractionActor_InteractionCompleted),NULL);
	}
	static FName NAME_AInteractionActor_OnInteraction = FName(TEXT("OnInteraction"));
	void AInteractionActor::OnInteraction(AActor* ImplementedActor)
	{
		InteractionActor_eventOnInteraction_Parms Parms;
		Parms.ImplementedActor=ImplementedActor;
		ProcessEvent(FindFunctionChecked(NAME_AInteractionActor_OnInteraction),&Parms);
	}
	void AInteractionActor::StaticRegisterNativesAInteractionActor()
	{
	}
	struct Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called when the interaction is completed\n" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
		{ "ToolTip", "Called when the interaction is completed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionActor, nullptr, "InteractionCompleted", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionActor_InteractionCompleted()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionActor_InteractionCompleted_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImplementedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::NewProp_ImplementedActor = { "ImplementedActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionActor_eventOnInteraction_Parms, ImplementedActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::NewProp_ImplementedActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::Function_MetaDataParams[] = {
		{ "Comment", "// Called for every item interacted with\n" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
		{ "ToolTip", "Called for every item interacted with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AInteractionActor, nullptr, "OnInteraction", nullptr, nullptr, sizeof(InteractionActor_eventOnInteraction_Parms), Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AInteractionActor_OnInteraction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AInteractionActor_OnInteraction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AInteractionActor_NoRegister()
	{
		return AInteractionActor::StaticClass();
	}
	struct Z_Construct_UClass_AInteractionActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractedActors_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InteractedActors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PopupDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PopupDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AInteractionActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AInteractionActor_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AInteractionActor_InteractionCompleted, "InteractionCompleted" }, // 1239686420
		{ &Z_Construct_UFunction_AInteractionActor_OnInteraction, "OnInteraction" }, // 1367518040
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InteractionActor.h" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_Inner = { "InteractedActors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AInteractedActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_MetaData[] = {
		{ "Category", "Interacted Actor" },
		{ "Comment", "// The actors to which we cast upon receiving an interaction\n" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
		{ "ToolTip", "The actors to which we cast upon receiving an interaction" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors = { "InteractedActors", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionActor, InteractedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionActor_Statics::NewProp_PopupDescription_MetaData[] = {
		{ "Category", "Interacted Actor" },
		{ "Comment", "// The description to be passed to the player for this item\n" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
		{ "ToolTip", "The description to be passed to the player for this item" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_AInteractionActor_Statics::NewProp_PopupDescription = { "PopupDescription", nullptr, (EPropertyFlags)0x0010000000000805, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionActor, PopupDescription), METADATA_PARAMS(Z_Construct_UClass_AInteractionActor_Statics::NewProp_PopupDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::NewProp_PopupDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AInteractionActor_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Mesh" },
		{ "Comment", "// The mesh which to render\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InteractionActor.h" },
		{ "ToolTip", "The mesh which to render" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AInteractionActor_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x0040000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AInteractionActor, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AInteractionActor_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::NewProp_MeshComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AInteractionActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionActor_Statics::NewProp_InteractedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionActor_Statics::NewProp_PopupDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AInteractionActor_Statics::NewProp_MeshComp,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AInteractionActor_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UInteractInterface_NoRegister, (int32)VTABLE_OFFSET(AInteractionActor, IInteractInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AInteractionActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AInteractionActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AInteractionActor_Statics::ClassParams = {
		&AInteractionActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AInteractionActor_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AInteractionActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AInteractionActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AInteractionActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AInteractionActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AInteractionActor, 712531107);
	template<> FPSCORE_API UClass* StaticClass<AInteractionActor>()
	{
		return AInteractionActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AInteractionActor(Z_Construct_UClass_AInteractionActor, &AInteractionActor::StaticClass, TEXT("/Script/FPSCore"), TEXT("AInteractionActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AInteractionActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
