// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
enum class ETrailType : uint8;
class ATormentTrailController;
struct FVector_NetQuantize10;
struct FRotator;
#ifdef THEEXECUTIONER_TormentTrailSpawnerComponent_generated_h
#error "TormentTrailSpawnerComponent.generated.h already included, missing '#pragma once' in TormentTrailSpawnerComponent.h"
#endif
#define THEEXECUTIONER_TormentTrailSpawnerComponent_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_RPC_WRAPPERS \
	virtual bool Server_RequestMoreActorInPool_Validate(const ETrailType ); \
	virtual void Server_RequestMoreActorInPool_Implementation(const ETrailType trailType); \
	virtual void Server_StopTrailController_Implementation(ATormentTrailController* trailController); \
	virtual bool Sever_SpawnTrailController_Validate(ATormentTrailController* , const FVector_NetQuantize10 , const FRotator ); \
	virtual void Sever_SpawnTrailController_Implementation(ATormentTrailController* trailController, const FVector_NetQuantize10 location, const FRotator rotation); \
 \
	DECLARE_FUNCTION(execOnInRangeChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execServer_RequestMoreActorInPool); \
	DECLARE_FUNCTION(execServer_StopTrailController); \
	DECLARE_FUNCTION(execSever_SpawnTrailController);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_RequestMoreActorInPool_Validate(const ETrailType ); \
	virtual void Server_RequestMoreActorInPool_Implementation(const ETrailType trailType); \
	virtual void Server_StopTrailController_Implementation(ATormentTrailController* trailController); \
	virtual bool Sever_SpawnTrailController_Validate(ATormentTrailController* , const FVector_NetQuantize10 , const FRotator ); \
	virtual void Sever_SpawnTrailController_Implementation(ATormentTrailController* trailController, const FVector_NetQuantize10 location, const FRotator rotation); \
 \
	DECLARE_FUNCTION(execOnInRangeChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execServer_RequestMoreActorInPool); \
	DECLARE_FUNCTION(execServer_StopTrailController); \
	DECLARE_FUNCTION(execSever_SpawnTrailController);


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_EVENT_PARMS \
	struct TormentTrailSpawnerComponent_eventServer_RequestMoreActorInPool_Parms \
	{ \
		ETrailType trailType; \
	}; \
	struct TormentTrailSpawnerComponent_eventServer_StopTrailController_Parms \
	{ \
		ATormentTrailController* trailController; \
	}; \
	struct TormentTrailSpawnerComponent_eventSever_SpawnTrailController_Parms \
	{ \
		ATormentTrailController* trailController; \
		FVector_NetQuantize10 location; \
		FRotator rotation; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTormentTrailSpawnerComponent(); \
	friend struct Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UTormentTrailSpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UTormentTrailSpawnerComponent)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUTormentTrailSpawnerComponent(); \
	friend struct Z_Construct_UClass_UTormentTrailSpawnerComponent_Statics; \
public: \
	DECLARE_CLASS(UTormentTrailSpawnerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UTormentTrailSpawnerComponent)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTormentTrailSpawnerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTormentTrailSpawnerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTormentTrailSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTormentTrailSpawnerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTormentTrailSpawnerComponent(UTormentTrailSpawnerComponent&&); \
	NO_API UTormentTrailSpawnerComponent(const UTormentTrailSpawnerComponent&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTormentTrailSpawnerComponent(UTormentTrailSpawnerComponent&&); \
	NO_API UTormentTrailSpawnerComponent(const UTormentTrailSpawnerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTormentTrailSpawnerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTormentTrailSpawnerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTormentTrailSpawnerComponent)


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentTrailController() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _currentTrailController); } \
	FORCEINLINE static uint32 __PPO___restrictionRangeToHooks() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionRangeToHooks); } \
	FORCEINLINE static uint32 __PPO___restrictionRangeToGenerators() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionRangeToGenerators); } \
	FORCEINLINE static uint32 __PPO___restrictionRangeToExitSwitch() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionRangeToExitSwitch); } \
	FORCEINLINE static uint32 __PPO___maxSlopeAngleForTrail() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _maxSlopeAngleForTrail); } \
	FORCEINLINE static uint32 __PPO___minSlopeAngleForTrail() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _minSlopeAngleForTrail); } \
	FORCEINLINE static uint32 __PPO___restrictionRangeToHatch() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionRangeToHatch); } \
	FORCEINLINE static uint32 __PPO___restrictionMaxVerticalDistance() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictionMaxVerticalDistance); } \
	FORCEINLINE static uint32 __PPO___tormentTrailPointCollectionComponent() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _tormentTrailPointCollectionComponent); } \
	FORCEINLINE static uint32 __PPO___restrictedTormentTrailPointCollectionComponent() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _restrictedTormentTrailPointCollectionComponent); } \
	FORCEINLINE static uint32 __PPO___tormentTrailControllerPool() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _tormentTrailControllerPool); } \
	FORCEINLINE static uint32 __PPO___tormentRestrictedTrailControllerPool() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _tormentRestrictedTrailControllerPool); } \
	FORCEINLINE static uint32 __PPO___actorsInRange() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _actorsInRange); } \
	FORCEINLINE static uint32 __PPO___slopeDetectionOverGroundVector() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _slopeDetectionOverGroundVector); } \
	FORCEINLINE static uint32 __PPO___slopeDetectionEndVector() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _slopeDetectionEndVector); } \
	FORCEINLINE static uint32 __PPO___forwardMultiplierSlopeDetection() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _forwardMultiplierSlopeDetection); } \
	FORCEINLINE static uint32 __PPO___epsilonToAddToSpawnLocationInZ() { return STRUCT_OFFSET(UTormentTrailSpawnerComponent, _epsilonToAddToSpawnLocationInZ); }


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_16_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UTormentTrailSpawnerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_TormentTrailSpawnerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
