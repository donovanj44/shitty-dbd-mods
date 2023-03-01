// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ABaseTormentTrailPoint;
#ifdef THEEXECUTIONER_TrailControllerBase_generated_h
#error "TrailControllerBase.generated.h already included, missing '#pragma once' in TrailControllerBase.h"
#endif
#define THEEXECUTIONER_TrailControllerBase_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnAcquireChanged); \
	DECLARE_FUNCTION(execOnTrailPointDeath); \
	DECLARE_FUNCTION(execRemoveTormentTrailController);


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnAcquireChanged); \
	DECLARE_FUNCTION(execOnTrailPointDeath); \
	DECLARE_FUNCTION(execRemoveTormentTrailController);


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_EVENT_PARMS \
	struct TrailControllerBase_eventActivateCosmetic_Parms \
	{ \
		bool value; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATrailControllerBase(); \
	friend struct Z_Construct_UClass_ATrailControllerBase_Statics; \
public: \
	DECLARE_CLASS(ATrailControllerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATrailControllerBase)


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_INCLASS \
private: \
	static void StaticRegisterNativesATrailControllerBase(); \
	friend struct Z_Construct_UClass_ATrailControllerBase_Statics; \
public: \
	DECLARE_CLASS(ATrailControllerBase, AActor, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATrailControllerBase)


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATrailControllerBase(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATrailControllerBase) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrailControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrailControllerBase); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrailControllerBase(ATrailControllerBase&&); \
	NO_API ATrailControllerBase(const ATrailControllerBase&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATrailControllerBase(ATrailControllerBase&&); \
	NO_API ATrailControllerBase(const ATrailControllerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATrailControllerBase); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATrailControllerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATrailControllerBase)


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___tormentTrailPointCollection() { return STRUCT_OFFSET(ATrailControllerBase, _tormentTrailPointCollection); } \
	FORCEINLINE static uint32 __PPO___distanceBetweenTormentTrailPoint() { return STRUCT_OFFSET(ATrailControllerBase, _distanceBetweenTormentTrailPoint); } \
	FORCEINLINE static uint32 __PPO___splineComponent() { return STRUCT_OFFSET(ATrailControllerBase, _splineComponent); } \
	FORCEINLINE static uint32 __PPO___poolableComponent() { return STRUCT_OFFSET(ATrailControllerBase, _poolableComponent); } \
	FORCEINLINE static uint32 __PPO___trailType() { return STRUCT_OFFSET(ATrailControllerBase, _trailType); }


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_13_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class ATrailControllerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_TrailControllerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
