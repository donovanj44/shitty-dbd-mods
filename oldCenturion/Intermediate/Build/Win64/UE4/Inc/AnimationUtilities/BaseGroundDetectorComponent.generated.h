// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class USkinnedMeshComponent;
#ifdef ANIMATIONUTILITIES_BaseGroundDetectorComponent_generated_h
#error "BaseGroundDetectorComponent.generated.h already included, missing '#pragma once' in BaseGroundDetectorComponent.h"
#endif
#define ANIMATIONUTILITIES_BaseGroundDetectorComponent_generated_h

#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetGroundPosition); \
	DECLARE_FUNCTION(execInitSkinnedMeshComponent);


#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetGroundPosition); \
	DECLARE_FUNCTION(execInitSkinnedMeshComponent);


#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseGroundDetectorComponent(); \
	friend struct Z_Construct_UClass_UBaseGroundDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseGroundDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(UBaseGroundDetectorComponent)


#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUBaseGroundDetectorComponent(); \
	friend struct Z_Construct_UClass_UBaseGroundDetectorComponent_Statics; \
public: \
	DECLARE_CLASS(UBaseGroundDetectorComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AnimationUtilities"), NO_API) \
	DECLARE_SERIALIZER(UBaseGroundDetectorComponent)


#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseGroundDetectorComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseGroundDetectorComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGroundDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGroundDetectorComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGroundDetectorComponent(UBaseGroundDetectorComponent&&); \
	NO_API UBaseGroundDetectorComponent(const UBaseGroundDetectorComponent&); \
public:


#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseGroundDetectorComponent(UBaseGroundDetectorComponent&&); \
	NO_API UBaseGroundDetectorComponent(const UBaseGroundDetectorComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseGroundDetectorComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseGroundDetectorComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseGroundDetectorComponent)


#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___startTransformName() { return STRUCT_OFFSET(UBaseGroundDetectorComponent, _startTransformName); } \
	FORCEINLINE static uint32 __PPO___walkableCollisionChannel() { return STRUCT_OFFSET(UBaseGroundDetectorComponent, _walkableCollisionChannel); } \
	FORCEINLINE static uint32 __PPO___traceComplex() { return STRUCT_OFFSET(UBaseGroundDetectorComponent, _traceComplex); } \
	FORCEINLINE static uint32 __PPO___extraTraceDistance() { return STRUCT_OFFSET(UBaseGroundDetectorComponent, _extraTraceDistance); } \
	FORCEINLINE static uint32 __PPO___skinnedMeshComponent() { return STRUCT_OFFSET(UBaseGroundDetectorComponent, _skinnedMeshComponent); } \
	FORCEINLINE static uint32 __PPO___startSlopeTransformName() { return STRUCT_OFFSET(UBaseGroundDetectorComponent, _startSlopeTransformName); }


#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_10_PROLOG
#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_INCLASS \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ANIMATIONUTILITIES_API UClass* StaticClass<class UBaseGroundDetectorComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_AnimationUtilities_Public_BaseGroundDetectorComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
