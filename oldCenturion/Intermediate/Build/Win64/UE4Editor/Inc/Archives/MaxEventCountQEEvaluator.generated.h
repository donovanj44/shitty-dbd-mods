// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
#ifdef ARCHIVES_MaxEventCountQEEvaluator_generated_h
#error "MaxEventCountQEEvaluator.generated.h already included, missing '#pragma once' in MaxEventCountQEEvaluator.h"
#endif
#define ARCHIVES_MaxEventCountQEEvaluator_generated_h

#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_SPARSE_DATA
#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnDecrementEventCount); \
	DECLARE_FUNCTION(execOnIncrementEventCount); \
	DECLARE_FUNCTION(execOnStopEventCount);


#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnDecrementEventCount); \
	DECLARE_FUNCTION(execOnIncrementEventCount); \
	DECLARE_FUNCTION(execOnStopEventCount);


#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMaxEventCountQEEvaluator(); \
	friend struct Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics; \
public: \
	DECLARE_CLASS(UMaxEventCountQEEvaluator, UQuestEventEvaluatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UMaxEventCountQEEvaluator)


#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUMaxEventCountQEEvaluator(); \
	friend struct Z_Construct_UClass_UMaxEventCountQEEvaluator_Statics; \
public: \
	DECLARE_CLASS(UMaxEventCountQEEvaluator, UQuestEventEvaluatorBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UMaxEventCountQEEvaluator)


#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMaxEventCountQEEvaluator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMaxEventCountQEEvaluator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaxEventCountQEEvaluator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaxEventCountQEEvaluator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaxEventCountQEEvaluator(UMaxEventCountQEEvaluator&&); \
	NO_API UMaxEventCountQEEvaluator(const UMaxEventCountQEEvaluator&); \
public:


#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMaxEventCountQEEvaluator(UMaxEventCountQEEvaluator&&); \
	NO_API UMaxEventCountQEEvaluator(const UMaxEventCountQEEvaluator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMaxEventCountQEEvaluator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMaxEventCountQEEvaluator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMaxEventCountQEEvaluator)


#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___incrementEventCount() { return STRUCT_OFFSET(UMaxEventCountQEEvaluator, _incrementEventCount); } \
	FORCEINLINE static uint32 __PPO___decrementEventCount() { return STRUCT_OFFSET(UMaxEventCountQEEvaluator, _decrementEventCount); } \
	FORCEINLINE static uint32 __PPO___stopEventCount() { return STRUCT_OFFSET(UMaxEventCountQEEvaluator, _stopEventCount); }


#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_8_PROLOG
#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_INCLASS \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVES_API UClass* StaticClass<class UMaxEventCountQEEvaluator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Archives_Public_MaxEventCountQEEvaluator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
