// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTerrorRadiusReceiverComponent;
#ifdef DEADBYDAYLIGHT_TerrorRadiusEmitterComponent_generated_h
#error "TerrorRadiusEmitterComponent.generated.h already included, missing '#pragma once' in TerrorRadiusEmitterComponent.h"
#endif
#define DEADBYDAYLIGHT_TerrorRadiusEmitterComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGeneratesChaseMusic); \
	DECLARE_FUNCTION(execGetImitatesAudioOnly); \
	DECLARE_FUNCTION(execGetIsActive); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execGetSimulatedFixedDistance); \
	DECLARE_FUNCTION(execIsInTerrorRadius); \
	DECLARE_FUNCTION(execRemoveEmitterFromList); \
	DECLARE_FUNCTION(execSetGeneratesChaseMusic); \
	DECLARE_FUNCTION(execSetImitatesAudioOnly); \
	DECLARE_FUNCTION(execSetIsActive); \
	DECLARE_FUNCTION(execSetSimulatedFixedDistance); \
	DECLARE_FUNCTION(execSetTerrorRadius);


#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGeneratesChaseMusic); \
	DECLARE_FUNCTION(execGetImitatesAudioOnly); \
	DECLARE_FUNCTION(execGetIsActive); \
	DECLARE_FUNCTION(execGetRadius); \
	DECLARE_FUNCTION(execGetSimulatedFixedDistance); \
	DECLARE_FUNCTION(execIsInTerrorRadius); \
	DECLARE_FUNCTION(execRemoveEmitterFromList); \
	DECLARE_FUNCTION(execSetGeneratesChaseMusic); \
	DECLARE_FUNCTION(execSetImitatesAudioOnly); \
	DECLARE_FUNCTION(execSetIsActive); \
	DECLARE_FUNCTION(execSetSimulatedFixedDistance); \
	DECLARE_FUNCTION(execSetTerrorRadius);


#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTerrorRadiusEmitterComponent(); \
	friend struct Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics; \
public: \
	DECLARE_CLASS(UTerrorRadiusEmitterComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTerrorRadiusEmitterComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUTerrorRadiusEmitterComponent(); \
	friend struct Z_Construct_UClass_UTerrorRadiusEmitterComponent_Statics; \
public: \
	DECLARE_CLASS(UTerrorRadiusEmitterComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UTerrorRadiusEmitterComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTerrorRadiusEmitterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTerrorRadiusEmitterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTerrorRadiusEmitterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTerrorRadiusEmitterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTerrorRadiusEmitterComponent(UTerrorRadiusEmitterComponent&&); \
	NO_API UTerrorRadiusEmitterComponent(const UTerrorRadiusEmitterComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTerrorRadiusEmitterComponent(UTerrorRadiusEmitterComponent&&); \
	NO_API UTerrorRadiusEmitterComponent(const UTerrorRadiusEmitterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTerrorRadiusEmitterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTerrorRadiusEmitterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTerrorRadiusEmitterComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___simulatedFixedDistance() { return STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _simulatedFixedDistance); } \
	FORCEINLINE static uint32 __PPO___imitatesAudioOnly() { return STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _imitatesAudioOnly); } \
	FORCEINLINE static uint32 __PPO___generatesChaseMusic() { return STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _generatesChaseMusic); } \
	FORCEINLINE static uint32 __PPO___active() { return STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _active); } \
	FORCEINLINE static uint32 __PPO___isFakeTerrorRadius() { return STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _isFakeTerrorRadius); } \
	FORCEINLINE static uint32 __PPO___radius() { return STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _radius); } \
	FORCEINLINE static uint32 __PPO___receiversInTerrorRadiusMap() { return STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _receiversInTerrorRadiusMap); } \
	FORCEINLINE static uint32 __PPO___receiversPhysicallyInRadiusRangeMap() { return STRUCT_OFFSET(UTerrorRadiusEmitterComponent, _receiversPhysicallyInRadiusRangeMap); }


#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_8_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UTerrorRadiusEmitterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_TerrorRadiusEmitterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
