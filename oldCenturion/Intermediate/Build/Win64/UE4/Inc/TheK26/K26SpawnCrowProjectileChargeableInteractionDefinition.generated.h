// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class ASlasherPlayer;
struct FVector;
class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class UK26PowerStatusHandlerComponent;
#ifdef THEK26_K26SpawnCrowProjectileChargeableInteractionDefinition_generated_h
#error "K26SpawnCrowProjectileChargeableInteractionDefinition.generated.h already included, missing '#pragma once' in K26SpawnCrowProjectileChargeableInteractionDefinition.h"
#endif
#define THEK26_K26SpawnCrowProjectileChargeableInteractionDefinition_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_19_DELEGATE \
struct _Script_TheK26_eventK26SpawnCrowProjectileChargeableInteractionDefinitionOnProjectileSummoned_Parms \
{ \
	int32 remainingAmmo; \
	int32 maxAmmo; \
}; \
static inline void FK26SpawnCrowProjectileChargeableInteractionDefinitionOnProjectileSummoned_DelegateWrapper(const FMulticastScriptDelegate& K26SpawnCrowProjectileChargeableInteractionDefinitionOnProjectileSummoned, int32 remainingAmmo, int32 maxAmmo) \
{ \
	_Script_TheK26_eventK26SpawnCrowProjectileChargeableInteractionDefinitionOnProjectileSummoned_Parms Parms; \
	Parms.remainingAmmo=remainingAmmo; \
	Parms.maxAmmo=maxAmmo; \
	K26SpawnCrowProjectileChargeableInteractionDefinitionOnProjectileSummoned.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_18_DELEGATE \
static inline void FK26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStarted_DelegateWrapper(const FMulticastScriptDelegate& K26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStarted) \
{ \
	K26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStarted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_17_DELEGATE \
static inline void FK26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStopped_DelegateWrapper(const FMulticastScriptDelegate& K26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStopped) \
{ \
	K26SpawnCrowProjectileChargeableInteractionDefinitionOnChargingStopped.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_RPC_WRAPPERS \
	virtual void Multicast_OnK26CrowSummonAttemptAcknowledged_Implementation(); \
	virtual void Multicast_OnK26CrowSummoned_Implementation(const ASlasherPlayer* killer, const int32 remainingAmmo, const int32 maxAmmo); \
	virtual void Server_PlaceProjectileWithPath_Implementation(ASlasherPlayer* killer, FVector const& projectileSpawnPoint, const float killerLocalTime); \
 \
	DECLARE_FUNCTION(execCanSummonCrow); \
	DECLARE_FUNCTION(execCanSummonCrowOnceFullyCharged); \
	DECLARE_FUNCTION(execIsSummonOnCooldown); \
	DECLARE_FUNCTION(execLocal_OnGlobalCooldownDone); \
	DECLARE_FUNCTION(execMulticast_OnK26CrowSummonAttemptAcknowledged); \
	DECLARE_FUNCTION(execMulticast_OnK26CrowSummoned); \
	DECLARE_FUNCTION(execOnConfirmButtonPressed); \
	DECLARE_FUNCTION(execOnSummonCooldownComplete); \
	DECLARE_FUNCTION(execServer_PlaceProjectileWithPath); \
	DECLARE_FUNCTION(execSetDependencies); \
	DECLARE_FUNCTION(execSetSummonCooldown);


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnK26CrowSummonAttemptAcknowledged_Implementation(); \
	virtual void Multicast_OnK26CrowSummoned_Implementation(const ASlasherPlayer* killer, const int32 remainingAmmo, const int32 maxAmmo); \
	virtual void Server_PlaceProjectileWithPath_Implementation(ASlasherPlayer* killer, FVector const& projectileSpawnPoint, const float killerLocalTime); \
 \
	DECLARE_FUNCTION(execCanSummonCrow); \
	DECLARE_FUNCTION(execCanSummonCrowOnceFullyCharged); \
	DECLARE_FUNCTION(execIsSummonOnCooldown); \
	DECLARE_FUNCTION(execLocal_OnGlobalCooldownDone); \
	DECLARE_FUNCTION(execMulticast_OnK26CrowSummonAttemptAcknowledged); \
	DECLARE_FUNCTION(execMulticast_OnK26CrowSummoned); \
	DECLARE_FUNCTION(execOnConfirmButtonPressed); \
	DECLARE_FUNCTION(execOnSummonCooldownComplete); \
	DECLARE_FUNCTION(execServer_PlaceProjectileWithPath); \
	DECLARE_FUNCTION(execSetDependencies); \
	DECLARE_FUNCTION(execSetSummonCooldown);


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_EVENT_PARMS \
	struct K26SpawnCrowProjectileChargeableInteractionDefinition_eventCosmetic_LocalOnSummonCooldownComplete_Parms \
	{ \
		int32 amountOfAmmoLeft; \
		bool isInteractionActive; \
	}; \
	struct K26SpawnCrowProjectileChargeableInteractionDefinition_eventCosmetic_OnFullyCharged_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct K26SpawnCrowProjectileChargeableInteractionDefinition_eventMulticast_OnK26CrowSummoned_Parms \
	{ \
		const ASlasherPlayer* killer; \
		int32 remainingAmmo; \
		int32 maxAmmo; \
	}; \
	struct K26SpawnCrowProjectileChargeableInteractionDefinition_eventServer_PlaceProjectileWithPath_Parms \
	{ \
		ASlasherPlayer* killer; \
		FVector projectileSpawnPoint; \
		float killerLocalTime; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK26SpawnCrowProjectileChargeableInteractionDefinition(); \
	friend struct Z_Construct_UClass_UK26SpawnCrowProjectileChargeableInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UK26SpawnCrowProjectileChargeableInteractionDefinition, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26SpawnCrowProjectileChargeableInteractionDefinition)


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_INCLASS \
private: \
	static void StaticRegisterNativesUK26SpawnCrowProjectileChargeableInteractionDefinition(); \
	friend struct Z_Construct_UClass_UK26SpawnCrowProjectileChargeableInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UK26SpawnCrowProjectileChargeableInteractionDefinition, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26SpawnCrowProjectileChargeableInteractionDefinition)


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK26SpawnCrowProjectileChargeableInteractionDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK26SpawnCrowProjectileChargeableInteractionDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26SpawnCrowProjectileChargeableInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26SpawnCrowProjectileChargeableInteractionDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26SpawnCrowProjectileChargeableInteractionDefinition(UK26SpawnCrowProjectileChargeableInteractionDefinition&&); \
	NO_API UK26SpawnCrowProjectileChargeableInteractionDefinition(const UK26SpawnCrowProjectileChargeableInteractionDefinition&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26SpawnCrowProjectileChargeableInteractionDefinition(UK26SpawnCrowProjectileChargeableInteractionDefinition&&); \
	NO_API UK26SpawnCrowProjectileChargeableInteractionDefinition(const UK26SpawnCrowProjectileChargeableInteractionDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26SpawnCrowProjectileChargeableInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26SpawnCrowProjectileChargeableInteractionDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK26SpawnCrowProjectileChargeableInteractionDefinition)


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chargeCooldownTime() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _chargeCooldownTime); } \
	FORCEINLINE static uint32 __PPO___summonCooldownTime() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _summonCooldownTime); } \
	FORCEINLINE static uint32 __PPO___pathLength() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _pathLength); } \
	FORCEINLINE static uint32 __PPO___projectileHeight() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _projectileHeight); } \
	FORCEINLINE static uint32 __PPO___projectileSummonDistance() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _projectileSummonDistance); } \
	FORCEINLINE static uint32 __PPO___cooldownGracePeriodPercentage() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _cooldownGracePeriodPercentage); } \
	FORCEINLINE static uint32 __PPO___globalSpawnCooldownTime() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _globalSpawnCooldownTime); } \
	FORCEINLINE static uint32 __PPO___pathDistanceCheckAttempts() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _pathDistanceCheckAttempts); } \
	FORCEINLINE static uint32 __PPO___aimingGuideClass() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _aimingGuideClass); } \
	FORCEINLINE static uint32 __PPO___local_aimingGuide() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _local_aimingGuide); } \
	FORCEINLINE static uint32 __PPO___isConfirmButtonPressed() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _isConfirmButtonPressed); } \
	FORCEINLINE static uint32 __PPO___ammoHandler() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _ammoHandler); } \
	FORCEINLINE static uint32 __PPO___pathHandler() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _pathHandler); } \
	FORCEINLINE static uint32 __PPO___statusHandler() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _statusHandler); } \
	FORCEINLINE static uint32 __PPO___firedFullyChargedEvent() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _firedFullyChargedEvent); } \
	FORCEINLINE static uint32 __PPO___isWaitingForSummonAcknowledgement() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _isWaitingForSummonAcknowledgement); } \
	FORCEINLINE static uint32 __PPO___globalCooldownMovementSpeedCurve() { return STRUCT_OFFSET(UK26SpawnCrowProjectileChargeableInteractionDefinition, _globalCooldownMovementSpeedCurve); }


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_21_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class UK26SpawnCrowProjectileChargeableInteractionDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26SpawnCrowProjectileChargeableInteractionDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
