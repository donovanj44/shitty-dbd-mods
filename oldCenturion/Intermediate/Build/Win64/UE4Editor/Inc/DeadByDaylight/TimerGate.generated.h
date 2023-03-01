// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_TimerGate_generated_h
#error "TimerGate.generated.h already included, missing '#pragma once' in TimerGate.h"
#endif
#define DEADBYDAYLIGHT_TimerGate_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddTime); \
	DECLARE_FUNCTION(execRemoveTime); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRushed); \
	DECLARE_FUNCTION(execSetValues); \
	DECLARE_FUNCTION(execUpdate);


#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTime); \
	DECLARE_FUNCTION(execRemoveTime); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execRushed); \
	DECLARE_FUNCTION(execSetValues); \
	DECLARE_FUNCTION(execUpdate);


#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATimerGate(); \
	friend struct Z_Construct_UClass_ATimerGate_Statics; \
public: \
	DECLARE_CLASS(ATimerGate, AGate, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATimerGate)


#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_INCLASS \
private: \
	static void StaticRegisterNativesATimerGate(); \
	friend struct Z_Construct_UClass_ATimerGate_Statics; \
public: \
	DECLARE_CLASS(ATimerGate, AGate, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ATimerGate)


#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATimerGate(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATimerGate) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimerGate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimerGate); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimerGate(ATimerGate&&); \
	NO_API ATimerGate(const ATimerGate&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATimerGate(ATimerGate&&); \
	NO_API ATimerGate(const ATimerGate&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATimerGate); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATimerGate); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATimerGate)


#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_6_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ATimerGate>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TimerGate_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
