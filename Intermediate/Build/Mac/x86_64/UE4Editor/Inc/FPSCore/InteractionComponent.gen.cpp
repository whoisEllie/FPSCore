// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/Components/InteractionComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionComponent() {}
// Cross Module References
	FPSCORE_API UClass* Z_Construct_UClass_UInteractionComponent_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UInteractionComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UInteractionComponent::execCanInteract)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CanInteract();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UInteractionComponent::execGetInteractText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FText*)Z_Param__Result=P_THIS->GetInteractText();
		P_NATIVE_END;
	}
	void UInteractionComponent::StaticRegisterNativesUInteractionComponent()
	{
		UClass* Class = UInteractionComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanInteract", &UInteractionComponent::execCanInteract },
			{ "GetInteractText", &UInteractionComponent::execGetInteractText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics
	{
		struct InteractionComponent_eventCanInteract_Parms
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
	void Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((InteractionComponent_eventCanInteract_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(InteractionComponent_eventCanInteract_Parms), &Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the result of the interaction trace, which is true if the object that we are looking at is able to be\n\x09\x09interacted with */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "Returns the result of the interaction trace, which is true if the object that we are looking at is able to be\n              interacted with" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "CanInteract", nullptr, nullptr, sizeof(InteractionComponent_eventCanInteract_Parms), Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_CanInteract()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_CanInteract_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics
	{
		struct InteractionComponent_eventGetInteractText_Parms
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
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(InteractionComponent_eventGetInteractText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Returns the display text of the current interactable object that the player is looking at */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "Returns the display text of the current interactable object that the player is looking at" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInteractionComponent, nullptr, "GetInteractText", nullptr, nullptr, sizeof(InteractionComponent_eventGetInteractText_Parms), Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UInteractionComponent_GetInteractText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UInteractionComponent_GetInteractText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UInteractionComponent_NoRegister()
	{
		return UInteractionComponent::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InteractAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_InteractText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InteractDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UInteractionComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UInteractionComponent_CanInteract, "CanInteract" }, // 535271039
		{ &Z_Construct_UFunction_UInteractionComponent_GetInteractText, "GetInteractText" }, // 157574525
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/InteractionComponent.h" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction_MetaData[] = {
		{ "Comment", "/** The input action for interacting with the world */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "The input action for interacting with the world" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction = { "InteractAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText_MetaData[] = {
		{ "Comment", "/** The current message to be displayed above the screen (if any) */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "The current message to be displayed above the screen (if any)" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText = { "InteractText", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractText), METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance_MetaData[] = {
		{ "Category", "Interaction" },
		{ "Comment", "/** The maximum distance in unreal units at which the player can interact with an object */" },
		{ "ModuleRelativePath", "Public/Components/InteractionComponent.h" },
		{ "ToolTip", "The maximum distance in unreal units at which the player can interact with an object" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance = { "InteractDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInteractionComponent, InteractDistance), METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInteractionComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInteractionComponent_Statics::NewProp_InteractDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInteractionComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionComponent_Statics::ClassParams = {
		&UInteractionComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UInteractionComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionComponent, 4253178147);
	template<> FPSCORE_API UClass* StaticClass<UInteractionComponent>()
	{
		return UInteractionComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionComponent(Z_Construct_UClass_UInteractionComponent, &UInteractionComponent::StaticClass, TEXT("/Script/FPSCore"), TEXT("UInteractionComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
