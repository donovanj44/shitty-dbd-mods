// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDBDTimer;
#ifdef DEADBYDAYLIGHT_DBDUtilTimer_generated_h
#error "DBDUtilTimer.generated.h already included, missing '#pragma once' in DBDUtilTimer.h"
#endif
#define DEADBYDAYLIGHT_DBDUtilTimer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPercentTimeElapsed); \
	DECLARE_FUNCTION(execGetPercentTimeLeft); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execGetTimeLeft); \
	DECLARE_FUNCTION(execIsDone); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetTo); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPercentTimeElapsed); \
	DECLARE_FUNCTION(execGetPercentTimeLeft); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execGetTimeLeft); \
	DECLARE_FUNCTION(execIsDone); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetTo); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUpdate);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDUtilTimer(); \
	friend struct Z_Construct_UClass_UDBDUtilTimer_Statics; \
public: \
	DECLARE_CLASS(UDBDUtilTimer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDUtilTimer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUDBDUtilTimer(); \
	friend struct Z_Construct_UClass_UDBDUtilTimer_Statics; \
public: \
	DECLARE_CLASS(UDBDUtilTimer, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDUtilTimer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDUtilTimer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDUtilTimer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDUtilTimer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDUtilTimer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDUtilTimer(UDBDUtilTimer&&); \
	NO_API UDBDUtilTimer(const UDBDUtilTimer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDUtilTimer(UDBDUtilTimer&&); \
	NO_API UDBDUtilTimer(const UDBDUtilTimer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDUtilTimer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDUtilTimer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDUtilTimer)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_7_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDUtilTimer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDUtilTimer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
