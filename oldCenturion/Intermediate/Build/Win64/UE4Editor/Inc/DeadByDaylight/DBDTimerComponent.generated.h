// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_DBDTimerComponent_generated_h
#error "DBDTimerComponent.generated.h already included, missing '#pragma once' in DBDTimerComponent.h"
#endif
#define DEADBYDAYLIGHT_DBDTimerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetPercentTimeElapsed); \
	DECLARE_FUNCTION(execGetPercentTimeLeft); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execGetTimeLeft); \
	DECLARE_FUNCTION(execIsDone); \
	DECLARE_FUNCTION(execIsOnPause); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetTo); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUnpause); \
	DECLARE_FUNCTION(execUpdate);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetPercentTimeElapsed); \
	DECLARE_FUNCTION(execGetPercentTimeLeft); \
	DECLARE_FUNCTION(execGetStartTime); \
	DECLARE_FUNCTION(execGetTimeElapsed); \
	DECLARE_FUNCTION(execGetTimeLeft); \
	DECLARE_FUNCTION(execIsDone); \
	DECLARE_FUNCTION(execIsOnPause); \
	DECLARE_FUNCTION(execPause); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execResetTo); \
	DECLARE_FUNCTION(execStop); \
	DECLARE_FUNCTION(execUnpause); \
	DECLARE_FUNCTION(execUpdate);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDTimerComponent(); \
	friend struct Z_Construct_UClass_UDBDTimerComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDTimerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDTimerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUDBDTimerComponent(); \
	friend struct Z_Construct_UClass_UDBDTimerComponent_Statics; \
public: \
	DECLARE_CLASS(UDBDTimerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDTimerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDTimerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDTimerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDTimerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDTimerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDTimerComponent(UDBDTimerComponent&&); \
	NO_API UDBDTimerComponent(const UDBDTimerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDTimerComponent(UDBDTimerComponent&&); \
	NO_API UDBDTimerComponent(const UDBDTimerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDTimerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDTimerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDTimerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDTimerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDTimerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
