// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef ARCHIVES_NearTrackedActorComponent_generated_h
#error "NearTrackedActorComponent.generated.h already included, missing '#pragma once' in NearTrackedActorComponent.h"
#endif
#define ARCHIVES_NearTrackedActorComponent_generated_h

#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_8_DELEGATE \
struct _Script_Archives_eventNearTrackedActorComponentIsWithinRangeDelegate_Parms \
{ \
	bool isWithinRange; \
	const AActor* trackedActor; \
}; \
static inline void FNearTrackedActorComponentIsWithinRangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& NearTrackedActorComponentIsWithinRangeDelegate, bool isWithinRange, const AActor* trackedActor) \
{ \
	_Script_Archives_eventNearTrackedActorComponentIsWithinRangeDelegate_Parms Parms; \
	Parms.isWithinRange=isWithinRange ? true : false; \
	Parms.trackedActor=trackedActor; \
	NearTrackedActorComponentIsWithinRangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsActorWithinRange); \
	DECLARE_FUNCTION(execSetDistanceThreshold); \
	DECLARE_FUNCTION(execStartTrackingActor); \
	DECLARE_FUNCTION(execStopTrackingActor);


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsActorWithinRange); \
	DECLARE_FUNCTION(execSetDistanceThreshold); \
	DECLARE_FUNCTION(execStartTrackingActor); \
	DECLARE_FUNCTION(execStopTrackingActor);


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNearTrackedActorComponent(); \
	friend struct Z_Construct_UClass_UNearTrackedActorComponent_Statics; \
public: \
	DECLARE_CLASS(UNearTrackedActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UNearTrackedActorComponent)


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUNearTrackedActorComponent(); \
	friend struct Z_Construct_UClass_UNearTrackedActorComponent_Statics; \
public: \
	DECLARE_CLASS(UNearTrackedActorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Archives"), NO_API) \
	DECLARE_SERIALIZER(UNearTrackedActorComponent)


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNearTrackedActorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNearTrackedActorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearTrackedActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearTrackedActorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNearTrackedActorComponent(UNearTrackedActorComponent&&); \
	NO_API UNearTrackedActorComponent(const UNearTrackedActorComponent&); \
public:


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNearTrackedActorComponent(UNearTrackedActorComponent&&); \
	NO_API UNearTrackedActorComponent(const UNearTrackedActorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNearTrackedActorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNearTrackedActorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UNearTrackedActorComponent)


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___distanceThreshold() { return STRUCT_OFFSET(UNearTrackedActorComponent, _distanceThreshold); }


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_10_PROLOG
#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_INCLASS \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ARCHIVES_API UClass* StaticClass<class UNearTrackedActorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_Archives_Public_NearTrackedActorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
