// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDBDTimerComponent;
enum class EBlinkerState : uint8;
class ADBDPlayer;
struct FVector;
#ifdef DEADBYDAYLIGHT_BlinkerComponent_generated_h
#error "BlinkerComponent.generated.h already included, missing '#pragma once' in BlinkerComponent.h"
#endif
#define DEADBYDAYLIGHT_BlinkerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAutomaticBlinkDelay); \
	DECLARE_FUNCTION(execGetBlinkChainTimer); \
	DECLARE_FUNCTION(execGetBlinkerState); \
	DECLARE_FUNCTION(execGetChainedBlinkCount); \
	DECLARE_FUNCTION(execGetFatigueDuration); \
	DECLARE_FUNCTION(execGetInterpolatedIndicatorPosition); \
	DECLARE_FUNCTION(execIncrementChainedBlinkCount); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execLocalAddRandomToTargetLocation); \
	DECLARE_FUNCTION(execSetBlinkerState); \
	DECLARE_FUNCTION(execSetChainedBlinkCount); \
	DECLARE_FUNCTION(execShouldInterpolateIndicatorPosition); \
	DECLARE_FUNCTION(execUpdateTargetLocation);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAutomaticBlinkDelay); \
	DECLARE_FUNCTION(execGetBlinkChainTimer); \
	DECLARE_FUNCTION(execGetBlinkerState); \
	DECLARE_FUNCTION(execGetChainedBlinkCount); \
	DECLARE_FUNCTION(execGetFatigueDuration); \
	DECLARE_FUNCTION(execGetInterpolatedIndicatorPosition); \
	DECLARE_FUNCTION(execIncrementChainedBlinkCount); \
	DECLARE_FUNCTION(execIsReady); \
	DECLARE_FUNCTION(execLocalAddRandomToTargetLocation); \
	DECLARE_FUNCTION(execSetBlinkerState); \
	DECLARE_FUNCTION(execSetChainedBlinkCount); \
	DECLARE_FUNCTION(execShouldInterpolateIndicatorPosition); \
	DECLARE_FUNCTION(execUpdateTargetLocation);


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlinkerComponent(); \
	friend struct Z_Construct_UClass_UBlinkerComponent_Statics; \
public: \
	DECLARE_CLASS(UBlinkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlinkerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBlinkerComponent(); \
	friend struct Z_Construct_UClass_UBlinkerComponent_Statics; \
public: \
	DECLARE_CLASS(UBlinkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UBlinkerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlinkerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlinkerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlinkerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlinkerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlinkerComponent(UBlinkerComponent&&); \
	NO_API UBlinkerComponent(const UBlinkerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlinkerComponent(UBlinkerComponent&&); \
	NO_API UBlinkerComponent(const UBlinkerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlinkerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlinkerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlinkerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___rayCastZOffet() { return STRUCT_OFFSET(UBlinkerComponent, _rayCastZOffet); } \
	FORCEINLINE static uint32 __PPO___rayCastLength() { return STRUCT_OFFSET(UBlinkerComponent, _rayCastLength); } \
	FORCEINLINE static uint32 __PPO___minimumIndicatorVelocity() { return STRUCT_OFFSET(UBlinkerComponent, _minimumIndicatorVelocity); } \
	FORCEINLINE static uint32 __PPO___IndicatorVelocityEasingFactor() { return STRUCT_OFFSET(UBlinkerComponent, _IndicatorVelocityEasingFactor); } \
	FORCEINLINE static uint32 __PPO___lineOfSightBlinkOffset() { return STRUCT_OFFSET(UBlinkerComponent, _lineOfSightBlinkOffset); } \
	FORCEINLINE static uint32 __PPO___blinkChainTimer() { return STRUCT_OFFSET(UBlinkerComponent, _blinkChainTimer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UBlinkerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_BlinkerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
