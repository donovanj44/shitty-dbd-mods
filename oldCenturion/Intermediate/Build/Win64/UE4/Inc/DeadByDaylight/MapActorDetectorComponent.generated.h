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
#ifdef DEADBYDAYLIGHT_MapActorDetectorComponent_generated_h
#error "MapActorDetectorComponent.generated.h already included, missing '#pragma once' in MapActorDetectorComponent.h"
#endif
#define DEADBYDAYLIGHT_MapActorDetectorComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_11_DELEGATE \
struct _Script_DeadByDaylight_eventMapActorDetectorComponentOnActorDetected_Parms \
{ \
	AActor* actor; \
}; \
static inline void FMapActorDetectorComponentOnActorDetected_DelegateWrapper(const FMulticastScriptDelegate& MapActorDetectorComponentOnActorDetected, AActor* actor) \
{ \
	_Script_DeadByDaylight_eventMapActorDetectorComponentOnActorDetected_Parms Parms; \
	Parms.actor=actor; \
	MapActorDetectorComponentOnActorDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnter); \
	DECLARE_FUNCTION(execSetDetectionPrimitive);


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnter); \
	DECLARE_FUNCTION(execSetDetectionPrimitive);


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMapActorDetectorComponent(); \
	friend struct Z_Construct_UClass_UMapActorDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UMapActorDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMapActorDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUMapActorDetectorComponent(); \
	friend struct Z_Construct_UClass_UMapActorDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UMapActorDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UMapActorDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMapActorDetectorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMapActorDetectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapActorDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapActorDetectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapActorDetectorComponent(UMapActorDetectorComponent&&); \
	NO_API UMapActorDetectorComponent(const UMapActorDetectorComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UMapActorDetectorComponent(UMapActorDetectorComponent&&); \
	NO_API UMapActorDetectorComponent(const UMapActorDetectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMapActorDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMapActorDetectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMapActorDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollectedCategories() { return STRUCT_OFFSET(UMapActorDetectorComponent, CollectedCategories); } \
	FORCEINLINE static uint32 __PPO___primitive() { return STRUCT_OFFSET(UMapActorDetectorComponent, _primitive); }


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_13_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UMapActorDetectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_MapActorDetectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
