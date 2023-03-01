// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USplineComponent;
struct FVector;
enum class ETrailPointRefreshReason : uint8;
#ifdef THEEXECUTIONER_TormentTrailPoint_generated_h
#error "TormentTrailPoint.generated.h already included, missing '#pragma once' in TormentTrailPoint.h"
#endif
#define THEEXECUTIONER_TormentTrailPoint_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_RPC_WRAPPERS \
	virtual void Multicast_TriggerTrailPointDisappear_Implementation(); \
	virtual bool Server_RemoveTrailPoint_Validate(); \
	virtual void Server_RemoveTrailPoint_Implementation(); \
 \
	DECLARE_FUNCTION(execGetTrailLocationAndTangeant); \
	DECLARE_FUNCTION(execMulticast_TriggerTrailPointDisappear); \
	DECLARE_FUNCTION(execOnAcquireChanged); \
	DECLARE_FUNCTION(execServer_RemoveTrailPoint);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_TriggerTrailPointDisappear_Implementation(); \
	virtual bool Server_RemoveTrailPoint_Validate(); \
	virtual void Server_RemoveTrailPoint_Implementation(); \
 \
	DECLARE_FUNCTION(execGetTrailLocationAndTangeant); \
	DECLARE_FUNCTION(execMulticast_TriggerTrailPointDisappear); \
	DECLARE_FUNCTION(execOnAcquireChanged); \
	DECLARE_FUNCTION(execServer_RemoveTrailPoint);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_EVENT_PARMS \
	struct TormentTrailPoint_eventActivateCosmetic_Parms \
	{ \
		bool value; \
	}; \
	struct TormentTrailPoint_eventAddTrailCosmetic_Parms \
	{ \
		const USplineComponent* splineComponent; \
		uint8 indexInTrail; \
	}; \
	struct TormentTrailPoint_eventRefreshTrailPointCosmetic_Parms \
	{ \
		ETrailPointRefreshReason trailPointRefreshReason; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATormentTrailPoint(); \
	friend struct Z_Construct_UClass_ATormentTrailPoint_Statics; \
public: \
	DECLARE_CLASS(ATormentTrailPoint, ABaseTormentTrailPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATormentTrailPoint)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesATormentTrailPoint(); \
	friend struct Z_Construct_UClass_ATormentTrailPoint_Statics; \
public: \
	DECLARE_CLASS(ATormentTrailPoint, ABaseTormentTrailPoint, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATormentTrailPoint)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATormentTrailPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATormentTrailPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATormentTrailPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATormentTrailPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATormentTrailPoint(ATormentTrailPoint&&); \
	NO_API ATormentTrailPoint(const ATormentTrailPoint&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATormentTrailPoint(ATormentTrailPoint&&); \
	NO_API ATormentTrailPoint(const ATormentTrailPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATormentTrailPoint); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATormentTrailPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATormentTrailPoint)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___poolableComponent() { return STRUCT_OFFSET(ATormentTrailPoint, _poolableComponent); } \
	FORCEINLINE static uint32 __PPO___splineMeshOverlapDistance() { return STRUCT_OFFSET(ATormentTrailPoint, _splineMeshOverlapDistance); }


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_11_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class ATormentTrailPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_TormentTrailPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
