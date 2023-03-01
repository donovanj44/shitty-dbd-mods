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
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_InteractionDetectorComponent_generated_h
#error "InteractionDetectorComponent.generated.h already included, missing '#pragma once' in InteractionDetectorComponent.h"
#endif
#define DEADBYDAYLIGHT_InteractionDetectorComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddIgnoredActor); \
	DECLARE_FUNCTION(execBeginOverlapCallback); \
	DECLARE_FUNCTION(execEndOverlapCallback); \
	DECLARE_FUNCTION(execGetDetectionPrimitive); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execSetDetectionPrimitive);


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddIgnoredActor); \
	DECLARE_FUNCTION(execBeginOverlapCallback); \
	DECLARE_FUNCTION(execEndOverlapCallback); \
	DECLARE_FUNCTION(execGetDetectionPrimitive); \
	DECLARE_FUNCTION(execOnLocallyObservedChanged); \
	DECLARE_FUNCTION(execSetDetectionPrimitive);


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionDetectorComponent(); \
	friend struct Z_Construct_UClass_UInteractionDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInteractionDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionDetectorComponent(); \
	friend struct Z_Construct_UClass_UInteractionDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UInteractionDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UInteractionDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionDetectorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionDetectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionDetectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionDetectorComponent(UInteractionDetectorComponent&&); \
	NO_API UInteractionDetectorComponent(const UInteractionDetectorComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionDetectorComponent(UInteractionDetectorComponent&&); \
	NO_API UInteractionDetectorComponent(const UInteractionDetectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionDetectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionDetectorComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___detectionPrimitive() { return STRUCT_OFFSET(UInteractionDetectorComponent, _detectionPrimitive); } \
	FORCEINLINE static uint32 __PPO___overlappingInteractables() { return STRUCT_OFFSET(UInteractionDetectorComponent, _overlappingInteractables); } \
	FORCEINLINE static uint32 __PPO___overlappingPrimitiveComponents() { return STRUCT_OFFSET(UInteractionDetectorComponent, _overlappingPrimitiveComponents); } \
	FORCEINLINE static uint32 __PPO___ignoredActors() { return STRUCT_OFFSET(UInteractionDetectorComponent, _ignoredActors); }


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_12_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UInteractionDetectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_InteractionDetectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
