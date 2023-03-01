// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef DEADBYDAYLIGHT_LoudNoiseHUDIndicator_generated_h
#error "LoudNoiseHUDIndicator.generated.h already included, missing '#pragma once' in LoudNoiseHUDIndicator.h"
#endif
#define DEADBYDAYLIGHT_LoudNoiseHUDIndicator_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_10_DELEGATE \
static inline void FLoudNoiseHUDIndicatorLoudNoiseAddedEvent_DelegateWrapper(const FMulticastScriptDelegate& LoudNoiseHUDIndicatorLoudNoiseAddedEvent) \
{ \
	LoudNoiseHUDIndicatorLoudNoiseAddedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddTrackedNoise);


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddTrackedNoise);


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULoudNoiseHUDIndicator(); \
	friend struct Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics; \
public: \
	DECLARE_CLASS(ULoudNoiseHUDIndicator, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULoudNoiseHUDIndicator)


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_INCLASS \
private: \
	static void StaticRegisterNativesULoudNoiseHUDIndicator(); \
	friend struct Z_Construct_UClass_ULoudNoiseHUDIndicator_Statics; \
public: \
	DECLARE_CLASS(ULoudNoiseHUDIndicator, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ULoudNoiseHUDIndicator)


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULoudNoiseHUDIndicator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULoudNoiseHUDIndicator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoudNoiseHUDIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudNoiseHUDIndicator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoudNoiseHUDIndicator(ULoudNoiseHUDIndicator&&); \
	NO_API ULoudNoiseHUDIndicator(const ULoudNoiseHUDIndicator&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULoudNoiseHUDIndicator(ULoudNoiseHUDIndicator&&); \
	NO_API ULoudNoiseHUDIndicator(const ULoudNoiseHUDIndicator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULoudNoiseHUDIndicator); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULoudNoiseHUDIndicator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULoudNoiseHUDIndicator)


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___trackedNoises() { return STRUCT_OFFSET(ULoudNoiseHUDIndicator, _trackedNoises); }


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ULoudNoiseHUDIndicator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_LoudNoiseHUDIndicator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
