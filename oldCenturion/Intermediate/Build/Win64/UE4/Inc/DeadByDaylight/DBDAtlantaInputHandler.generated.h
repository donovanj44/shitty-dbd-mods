// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
#ifdef DEADBYDAYLIGHT_DBDAtlantaInputHandler_generated_h
#error "DBDAtlantaInputHandler.generated.h already included, missing '#pragma once' in DBDAtlantaInputHandler.h"
#endif
#define DEADBYDAYLIGHT_DBDAtlantaInputHandler_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVirtualJoystickNormalizedOffset); \
	DECLARE_FUNCTION(execGetVirtualJoystickPosition); \
	DECLARE_FUNCTION(execGetVirtualJoystickVisualCenter); \
	DECLARE_FUNCTION(execGetVirtualJoystickVisualSize); \
	DECLARE_FUNCTION(execSetVirtualJoystickCenter);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVirtualJoystickNormalizedOffset); \
	DECLARE_FUNCTION(execGetVirtualJoystickPosition); \
	DECLARE_FUNCTION(execGetVirtualJoystickVisualCenter); \
	DECLARE_FUNCTION(execGetVirtualJoystickVisualSize); \
	DECLARE_FUNCTION(execSetVirtualJoystickCenter);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDAtlantaInputHandler(); \
	friend struct Z_Construct_UClass_UDBDAtlantaInputHandler_Statics; \
public: \
	DECLARE_CLASS(UDBDAtlantaInputHandler, UDBDBaseInputHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAtlantaInputHandler)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUDBDAtlantaInputHandler(); \
	friend struct Z_Construct_UClass_UDBDAtlantaInputHandler_Statics; \
public: \
	DECLARE_CLASS(UDBDAtlantaInputHandler, UDBDBaseInputHandler, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDAtlantaInputHandler)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDAtlantaInputHandler(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDAtlantaInputHandler) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAtlantaInputHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAtlantaInputHandler); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAtlantaInputHandler(UDBDAtlantaInputHandler&&); \
	NO_API UDBDAtlantaInputHandler(const UDBDAtlantaInputHandler&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDAtlantaInputHandler(UDBDAtlantaInputHandler&&); \
	NO_API UDBDAtlantaInputHandler(const UDBDAtlantaInputHandler&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDAtlantaInputHandler); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDAtlantaInputHandler); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDAtlantaInputHandler)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_7_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDAtlantaInputHandler>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDAtlantaInputHandler_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
