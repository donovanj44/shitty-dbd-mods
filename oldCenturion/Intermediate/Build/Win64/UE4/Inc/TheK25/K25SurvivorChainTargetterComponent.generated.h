// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECamperDamageState : uint8;
struct FVector;
#ifdef THEK25_K25SurvivorChainTargetterComponent_generated_h
#error "K25SurvivorChainTargetterComponent.generated.h already included, missing '#pragma once' in K25SurvivorChainTargetterComponent.h"
#endif
#define THEK25_K25SurvivorChainTargetterComponent_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_RPC_WRAPPERS \
	virtual void Multicast_DebugPositionFind_Implementation(FVector const& startSweepPosition, FVector const& endSweepPosition, bool hasFoundPosition, FVector const& foundPosition, bool hasFoundCollision, FVector const& collisionPosition) const; \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorHealthStateChanged); \
	DECLARE_FUNCTION(execMulticast_DebugPositionFind);


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DebugPositionFind_Implementation(FVector const& startSweepPosition, FVector const& endSweepPosition, bool hasFoundPosition, FVector const& foundPosition, bool hasFoundCollision, FVector const& collisionPosition) const; \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorHealthStateChanged); \
	DECLARE_FUNCTION(execMulticast_DebugPositionFind);


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_EVENT_PARMS \
	struct K25SurvivorChainTargetterComponent_eventMulticast_DebugPositionFind_Parms \
	{ \
		FVector startSweepPosition; \
		FVector endSweepPosition; \
		bool hasFoundPosition; \
		FVector foundPosition; \
		bool hasFoundCollision; \
		FVector collisionPosition; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25SurvivorChainTargetterComponent(); \
	friend struct Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics; \
public: \
	DECLARE_CLASS(UK25SurvivorChainTargetterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25SurvivorChainTargetterComponent)


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUK25SurvivorChainTargetterComponent(); \
	friend struct Z_Construct_UClass_UK25SurvivorChainTargetterComponent_Statics; \
public: \
	DECLARE_CLASS(UK25SurvivorChainTargetterComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25SurvivorChainTargetterComponent)


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25SurvivorChainTargetterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25SurvivorChainTargetterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25SurvivorChainTargetterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25SurvivorChainTargetterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25SurvivorChainTargetterComponent(UK25SurvivorChainTargetterComponent&&); \
	NO_API UK25SurvivorChainTargetterComponent(const UK25SurvivorChainTargetterComponent&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25SurvivorChainTargetterComponent(UK25SurvivorChainTargetterComponent&&); \
	NO_API UK25SurvivorChainTargetterComponent(const UK25SurvivorChainTargetterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25SurvivorChainTargetterComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25SurvivorChainTargetterComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25SurvivorChainTargetterComponent)


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___timeBetweenQueuedChainsLaunch() { return STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _timeBetweenQueuedChainsLaunch); } \
	FORCEINLINE static uint32 __PPO___timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt() { return STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _timeBetweenQueuedChainsLaunchAfterPreviousFailedAttempt); } \
	FORCEINLINE static uint32 __PPO___minimumSpawnDistance() { return STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _minimumSpawnDistance); } \
	FORCEINLINE static uint32 __PPO___maximumSpawnDistance() { return STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _maximumSpawnDistance); } \
	FORCEINLINE static uint32 __PPO___sphereCastRadius() { return STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _sphereCastRadius); } \
	FORCEINLINE static uint32 __PPO___numberOfPositionFindingTries() { return STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _numberOfPositionFindingTries); } \
	FORCEINLINE static uint32 __PPO___maxNumberOfChainRetries() { return STRUCT_OFFSET(UK25SurvivorChainTargetterComponent, _maxNumberOfChainRetries); }


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_9_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25SurvivorChainTargetterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25SurvivorChainTargetterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
