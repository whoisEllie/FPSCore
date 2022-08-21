// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "FPSCore/Public/Components/WidgetManagementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWidgetManagementComponent() {}
// Cross Module References
	FPSCORE_API UClass* Z_Construct_UClass_UWidgetManagementComponent_NoRegister();
	FPSCORE_API UClass* Z_Construct_UClass_UWidgetManagementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_FPSCore();
	ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UWidgetManagementComponent::execCreateSettingsMenu)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CreateSettingsMenu();
		P_NATIVE_END;
	}
	void UWidgetManagementComponent::StaticRegisterNativesUWidgetManagementComponent()
	{
		UClass* Class = UWidgetManagementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CreateSettingsMenu", &UWidgetManagementComponent::execCreateSettingsMenu },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UWidgetManagementComponent_CreateSettingsMenu_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UWidgetManagementComponent_CreateSettingsMenu_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** Draws the settings menu to the screen */" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "Draws the settings menu to the screen" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UWidgetManagementComponent_CreateSettingsMenu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UWidgetManagementComponent, nullptr, "CreateSettingsMenu", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UWidgetManagementComponent_CreateSettingsMenu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UWidgetManagementComponent_CreateSettingsMenu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UWidgetManagementComponent_CreateSettingsMenu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UWidgetManagementComponent_CreateSettingsMenu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UWidgetManagementComponent_NoRegister()
	{
		return UWidgetManagementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UWidgetManagementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PauseAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_HUDWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PauseWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PauseWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_SettingsWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHudWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerHudWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPauseWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPauseWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerSettingsWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerSettingsWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWidgetManagementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_FPSCore,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UWidgetManagementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UWidgetManagementComponent_CreateSettingsMenu, "CreateSettingsMenu" }, // 2948366674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "Components/WidgetManagementComponent.h" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseAction_MetaData[] = {
		{ "Comment", "/** The input action for pausing the game */" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "The input action for pausing the game" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseAction = { "PauseAction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetManagementComponent, PauseAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_HUDWidget_MetaData[] = {
		{ "Category", "UI | Widget Defaults" },
		{ "Comment", "/** The HUD widget blueprint to spawn */" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "The HUD widget blueprint to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_HUDWidget = { "HUDWidget", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetManagementComponent, HUDWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_HUDWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_HUDWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseWidget_MetaData[] = {
		{ "Category", "UI | Widget Defaults" },
		{ "Comment", "/** The pause widget blueprint to spawn */" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "The pause widget blueprint to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseWidget = { "PauseWidget", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetManagementComponent, PauseWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_SettingsWidget_MetaData[] = {
		{ "Category", "UI | Widget Defaults" },
		{ "Comment", "/** The settings widget blueprint to spawn */" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "The settings widget blueprint to spawn" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_SettingsWidget = { "SettingsWidget", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetManagementComponent, SettingsWidget), Z_Construct_UClass_UUserWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_SettingsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_SettingsWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerHudWidget_MetaData[] = {
		{ "Comment", "/** A reference to the instance of the player's main HUD widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "A reference to the instance of the player's main HUD widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerHudWidget = { "PlayerHudWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetManagementComponent, PlayerHudWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerHudWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerHudWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerPauseWidget_MetaData[] = {
		{ "Comment", "/** A reference to the instance of the player's pause widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "A reference to the instance of the player's pause widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerPauseWidget = { "PlayerPauseWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetManagementComponent, PlayerPauseWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerPauseWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerPauseWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerSettingsWidget_MetaData[] = {
		{ "Comment", "/** A reference to the instance of the player's settings widget */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "A reference to the instance of the player's settings widget" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerSettingsWidget = { "PlayerSettingsWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetManagementComponent, PlayerSettingsWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerSettingsWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerSettingsWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_CurrentWidget_MetaData[] = {
		{ "Comment", "/** The current insanced widget visible on screen */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/WidgetManagementComponent.h" },
		{ "ToolTip", "The current insanced widget visible on screen" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_CurrentWidget = { "CurrentWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UWidgetManagementComponent, CurrentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_CurrentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_CurrentWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWidgetManagementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_HUDWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PauseWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_SettingsWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerHudWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerPauseWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_PlayerSettingsWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWidgetManagementComponent_Statics::NewProp_CurrentWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWidgetManagementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWidgetManagementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWidgetManagementComponent_Statics::ClassParams = {
		&UWidgetManagementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UWidgetManagementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UWidgetManagementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWidgetManagementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWidgetManagementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWidgetManagementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWidgetManagementComponent, 3194892298);
	template<> FPSCORE_API UClass* StaticClass<UWidgetManagementComponent>()
	{
		return UWidgetManagementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWidgetManagementComponent(Z_Construct_UClass_UWidgetManagementComponent, &UWidgetManagementComponent::StaticClass, TEXT("/Script/FPSCore"), TEXT("UWidgetManagementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWidgetManagementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
