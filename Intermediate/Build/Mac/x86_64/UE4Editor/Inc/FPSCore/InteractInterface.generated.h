// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef FPSCORE_InteractInterface_generated_h
#error "InteractInterface.generated.h already included, missing '#pragma once' in InteractInterface.h"
#endif
#define FPSCORE_InteractInterface_generated_h

#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_SPARSE_DATA
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execInteract);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execInteract);


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPSCORE_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSCORE_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPSCORE_API UInteractInterface(UInteractInterface&&); \
	FPSCORE_API UInteractInterface(const UInteractInterface&); \
public:


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	FPSCORE_API UInteractInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	FPSCORE_API UInteractInterface(UInteractInterface&&); \
	FPSCORE_API UInteractInterface(const UInteractInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(FPSCORE_API, UInteractInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractInterface)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUInteractInterface(); \
	friend struct Z_Construct_UClass_UInteractInterface_Statics; \
public: \
	DECLARE_CLASS(UInteractInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/FPSCore"), FPSCORE_API) \
	DECLARE_SERIALIZER(UInteractInterface)


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_INCLASS_IINTERFACE \
protected: \
	virtual ~IInteractInterface() {} \
public: \
	typedef UInteractInterface UClassType; \
	typedef IInteractInterface ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_10_PROLOG
#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_RPC_WRAPPERS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_SPARSE_DATA \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> FPSCORE_API UClass* StaticClass<class UInteractInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FPSCoreDev_Plugins_FPSCore_Source_FPSCore_Public_InteractInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
