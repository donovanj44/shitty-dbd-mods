// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector_NetQuantize10;
struct FRotator;
#ifdef THEEXECUTIONER_TormentAttackTrailController_generated_h
#error "TormentAttackTrailController.generated.h already included, missing '#pragma once' in TormentAttackTrailController.h"
#endif
#define THEEXECUTIONER_TormentAttackTrailController_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_RPC_WRAPPERS \
	virtual void DisplayAttackTrailSpawnSign_Implementation(); \
	virtual void Multicast_StartAttackTrail_Implementation(const float serverTimeSpawn, const FVector_NetQuantize10 location, const FRotator rotation); \
	virtual void OnTrailPointRemovedCosmetic_Implementation(int32 index); \
 \
	DECLARE_FUNCTION(execDisplayAttackTrailSpawnSign); \
	DECLARE_FUNCTION(execMulticast_StartAttackTrail); \
	DECLARE_FUNCTION(execOnIntervalBetweenPointsTimerDone); \
	DECLARE_FUNCTION(execOnStartTrailTimerDone); \
	DECLARE_FUNCTION(execOnTrailPointRemovedCosmetic);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void DisplayAttackTrailSpawnSign_Implementation(); \
	virtual void Multicast_StartAttackTrail_Implementation(const float serverTimeSpawn, const FVector_NetQuantize10 location, const FRotator rotation); \
	virtual void OnTrailPointRemovedCosmetic_Implementation(int32 index); \
 \
	DECLARE_FUNCTION(execDisplayAttackTrailSpawnSign); \
	DECLARE_FUNCTION(execMulticast_StartAttackTrail); \
	DECLARE_FUNCTION(execOnIntervalBetweenPointsTimerDone); \
	DECLARE_FUNCTION(execOnStartTrailTimerDone); \
	DECLARE_FUNCTION(execOnTrailPointRemovedCosmetic);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_EVENT_PARMS \
	struct TormentAttackTrailController_eventMulticast_StartAttackTrail_Parms \
	{ \
		float serverTimeSpawn; \
		FVector_NetQuantize10 location; \
		FRotator rotation; \
	}; \
	struct TormentAttackTrailController_eventOnTrailPointRemovedCosmetic_Parms \
	{ \
		int32 index; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATormentAttackTrailController(); \
	friend struct Z_Construct_UClass_ATormentAttackTrailController_Statics; \
public: \
	DECLARE_CLASS(ATormentAttackTrailController, ATrailControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATormentAttackTrailController)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_INCLASS \
private: \
	static void StaticRegisterNativesATormentAttackTrailController(); \
	friend struct Z_Construct_UClass_ATormentAttackTrailController_Statics; \
public: \
	DECLARE_CLASS(ATormentAttackTrailController, ATrailControllerBase, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ATormentAttackTrailController)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATormentAttackTrailController(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATormentAttackTrailController) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATormentAttackTrailController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATormentAttackTrailController); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATormentAttackTrailController(ATormentAttackTrailController&&); \
	NO_API ATormentAttackTrailController(const ATormentAttackTrailController&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATormentAttackTrailController(ATormentAttackTrailController&&); \
	NO_API ATormentAttackTrailController(const ATormentAttackTrailController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATormentAttackTrailController); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATormentAttackTrailController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATormentAttackTrailController)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___tormentTrailAttackPointClass() { return STRUCT_OFFSET(ATormentAttackTrailController, _tormentTrailAttackPointClass); } \
	FORCEINLINE static uint32 __PPO___tormentTrailAttackSign() { return STRUCT_OFFSET(ATormentAttackTrailController, _tormentTrailAttackSign); } \
	FORCEINLINE static uint32 __PPO___trailSpawnDelay() { return STRUCT_OFFSET(ATormentAttackTrailController, _trailSpawnDelay); } \
	FORCEINLINE static uint32 __PPO___timeIntervalBetweenPointsSpawn() { return STRUCT_OFFSET(ATormentAttackTrailController, _timeIntervalBetweenPointsSpawn); } \
	FORCEINLINE static uint32 __PPO___attackTrailLenght() { return STRUCT_OFFSET(ATormentAttackTrailController, _attackTrailLenght); } \
	FORCEINLINE static uint32 __PPO___consideredAsSlopeAngle() { return STRUCT_OFFSET(ATormentAttackTrailController, _consideredAsSlopeAngle); } \
	FORCEINLINE static uint32 __PPO___pointsTransform() { return STRUCT_OFFSET(ATormentAttackTrailController, _pointsTransform); } \
	FORCEINLINE static uint32 __PPO___slopeDetectionOverGroundVector() { return STRUCT_OFFSET(ATormentAttackTrailController, _slopeDetectionOverGroundVector); } \
	FORCEINLINE static uint32 __PPO___groundDetectionEndVector() { return STRUCT_OFFSET(ATormentAttackTrailController, _groundDetectionEndVector); } \
	FORCEINLINE static uint32 __PPO___slopeCompensationVector() { return STRUCT_OFFSET(ATormentAttackTrailController, _slopeCompensationVector); } \
	FORCEINLINE static uint32 __PPO___spawnedAttackPointList() { return STRUCT_OFFSET(ATormentAttackTrailController, _spawnedAttackPointList); } \
	FORCEINLINE static uint32 __PPO___trailSpawnStarted() { return STRUCT_OFFSET(ATormentAttackTrailController, _trailSpawnStarted); } \
	FORCEINLINE static uint32 __PPO___soundDistanceOnTrail() { return STRUCT_OFFSET(ATormentAttackTrailController, _soundDistanceOnTrail); } \
	FORCEINLINE static uint32 __PPO___mobileTormentTrailRenderer() { return STRUCT_OFFSET(ATormentAttackTrailController, _mobileTormentTrailRenderer); }


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_18_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class ATormentAttackTrailController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_TormentAttackTrailController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
