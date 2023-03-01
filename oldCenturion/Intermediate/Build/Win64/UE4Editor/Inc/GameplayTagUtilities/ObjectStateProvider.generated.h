// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GAMEPLAYTAGUTILITIES_ObjectStateProvider_generated_h
#error "ObjectStateProvider.generated.h already included, missing '#pragma once' in ObjectStateProvider.h"
#endif
#define GAMEPLAYTAGUTILITIES_ObjectStateProvider_generated_h

#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_SPARSE_DATA
#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_RPC_WRAPPERS
#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_RPC_WRAPPERS_NO_PURE_DECLS
#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectStateProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectStateProvider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectStateProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectStateProvider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectStateProvider(UObjectStateProvider&&); \
	NO_API UObjectStateProvider(const UObjectStateProvider&); \
public:


#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UObjectStateProvider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UObjectStateProvider(UObjectStateProvider&&); \
	NO_API UObjectStateProvider(const UObjectStateProvider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UObjectStateProvider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UObjectStateProvider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UObjectStateProvider)


#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUObjectStateProvider(); \
	friend struct Z_Construct_UClass_UObjectStateProvider_Statics; \
public: \
	DECLARE_CLASS(UObjectStateProvider, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/GameplayTagUtilities"), NO_API) \
	DECLARE_SERIALIZER(UObjectStateProvider)


#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_GENERATED_BODY_LEGACY \
		PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_STANDARD_CONSTRUCTORS \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_GENERATED_UINTERFACE_BODY() \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IObjectStateProvider() {} \
public: \
	typedef UObjectStateProvider UClassType; \
	typedef IObjectStateProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_INCLASS_IINTERFACE \
protected: \
	virtual ~IObjectStateProvider() {} \
public: \
	typedef UObjectStateProvider UClassType; \
	typedef IObjectStateProvider ThisClass; \
	virtual UObject* _getUObject() const { check(0 && "Missing required implementation."); return nullptr; }


#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_6_PROLOG
#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_SPARSE_DATA \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_INCLASS_IINTERFACE \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_SPARSE_DATA \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h_8_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEPLAYTAGUTILITIES_API UClass* StaticClass<class UObjectStateProvider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_GameplayTagUtilities_Public_ObjectStateProvider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
