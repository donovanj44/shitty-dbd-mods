// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef DEADBYDAYLIGHT_ActorDetectorComponent_generated_h
#error "ActorDetectorComponent.generated.h already included, missing '#pragma once' in ActorDetectorComponent.h"
#endif
#define DEADBYDAYLIGHT_ActorDetectorComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_10_DELEGATE \
struct _Script_DeadByDaylight_eventActorDetectorComponentOnActorDetected_Parms \
{ \
	AActor* actor; \
}; \
static inline void FActorDetectorComponentOnActorDetected_DelegateWrapper(const FMulticastScriptDelegate& ActorDetectorComponentOnActorDetected, AActor* actor) \
{ \
	_Script_DeadByDaylight_eventActorDetectorComponentOnActorDetected_Parms Parms; \
	Parms.actor=actor; \
	ActorDetectorComponentOnActorDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnter); \
	DECLARE_FUNCTION(execSetDetectionPrimitive);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnter); \
	DECLARE_FUNCTION(execSetDetectionPrimitive);


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActorDetectorComponent(); \
	friend struct Z_Construct_UClass_UActorDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UActorDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActorDetectorComponent(); \
	friend struct Z_Construct_UClass_UActorDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UActorDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UActorDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActorDetectorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActorDetectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorDetectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorDetectorComponent(UActorDetectorComponent&&); \
	NO_API UActorDetectorComponent(const UActorDetectorComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActorDetectorComponent(UActorDetectorComponent&&); \
	NO_API UActorDetectorComponent(const UActorDetectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActorDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActorDetectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActorDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollectedTypes() { return STRUCT_OFFSET(UActorDetectorComponent, CollectedTypes); } \
	FORCEINLINE static uint32 __PPO___primitive() { return STRUCT_OFFSET(UActorDetectorComponent, _primitive); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UActorDetectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ActorDetectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
