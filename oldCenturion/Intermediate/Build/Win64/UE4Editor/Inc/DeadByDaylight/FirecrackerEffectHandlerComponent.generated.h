// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FFirecrackerEffectData;
class AActor;
class AFirecracker;
#ifdef DEADBYDAYLIGHT_FirecrackerEffectHandlerComponent_generated_h
#error "FirecrackerEffectHandlerComponent.generated.h already included, missing '#pragma once' in FirecrackerEffectHandlerComponent.h"
#endif
#define DEADBYDAYLIGHT_FirecrackerEffectHandlerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventFirecrackerEffectHandlerComponentOnFirecrackerInRangeUpdate_Parms \
{ \
	float deltaTime; \
	FFirecrackerEffectData effectData; \
}; \
static inline void FFirecrackerEffectHandlerComponentOnFirecrackerInRangeUpdate_DelegateWrapper(const FMulticastScriptDelegate& FirecrackerEffectHandlerComponentOnFirecrackerInRangeUpdate, float deltaTime, FFirecrackerEffectData const& effectData) \
{ \
	_Script_DeadByDaylight_eventFirecrackerEffectHandlerComponentOnFirecrackerInRangeUpdate_Parms Parms; \
	Parms.deltaTime=deltaTime; \
	Parms.effectData=effectData; \
	FirecrackerEffectHandlerComponentOnFirecrackerInRangeUpdate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_11_DELEGATE \
struct _Script_DeadByDaylight_eventFirecrackerEffectHandlerComponentOnFirecrackerInRangeBegin_Parms \
{ \
	FFirecrackerEffectData effectData; \
}; \
static inline void FFirecrackerEffectHandlerComponentOnFirecrackerInRangeBegin_DelegateWrapper(const FMulticastScriptDelegate& FirecrackerEffectHandlerComponentOnFirecrackerInRangeBegin, FFirecrackerEffectData const& effectData) \
{ \
	_Script_DeadByDaylight_eventFirecrackerEffectHandlerComponentOnFirecrackerInRangeBegin_Parms Parms; \
	Parms.effectData=effectData; \
	FirecrackerEffectHandlerComponentOnFirecrackerInRangeBegin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventFirecrackerEffectHandlerComponentOnFirecrackerInRangeEnd_Parms \
{ \
	FFirecrackerEffectData effectData; \
}; \
static inline void FFirecrackerEffectHandlerComponentOnFirecrackerInRangeEnd_DelegateWrapper(const FMulticastScriptDelegate& FirecrackerEffectHandlerComponentOnFirecrackerInRangeEnd, FFirecrackerEffectData const& effectData) \
{ \
	_Script_DeadByDaylight_eventFirecrackerEffectHandlerComponentOnFirecrackerInRangeEnd_Parms Parms; \
	Parms.effectData=effectData; \
	FirecrackerEffectHandlerComponentOnFirecrackerInRangeEnd.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnFirecrackerDestroyed); \
	DECLARE_FUNCTION(execSetFirecrackerInRange);


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnFirecrackerDestroyed); \
	DECLARE_FUNCTION(execSetFirecrackerInRange);


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFirecrackerEffectHandlerComponent(); \
	friend struct Z_Construct_UClass_UFirecrackerEffectHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UFirecrackerEffectHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFirecrackerEffectHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUFirecrackerEffectHandlerComponent(); \
	friend struct Z_Construct_UClass_UFirecrackerEffectHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UFirecrackerEffectHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFirecrackerEffectHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFirecrackerEffectHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFirecrackerEffectHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirecrackerEffectHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirecrackerEffectHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirecrackerEffectHandlerComponent(UFirecrackerEffectHandlerComponent&&); \
	NO_API UFirecrackerEffectHandlerComponent(const UFirecrackerEffectHandlerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFirecrackerEffectHandlerComponent(UFirecrackerEffectHandlerComponent&&); \
	NO_API UFirecrackerEffectHandlerComponent(const UFirecrackerEffectHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFirecrackerEffectHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFirecrackerEffectHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFirecrackerEffectHandlerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___effectDataList() { return STRUCT_OFFSET(UFirecrackerEffectHandlerComponent, _effectDataList); }


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UFirecrackerEffectHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_FirecrackerEffectHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
