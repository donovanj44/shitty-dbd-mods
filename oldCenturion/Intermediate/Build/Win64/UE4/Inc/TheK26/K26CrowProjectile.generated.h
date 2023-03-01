// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EK26ProjectileState : uint8;
struct FK26ProjectileStateDetails;
class AK26CrowProjectile;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
struct FVector;
struct FRotator;
class ACamperPlayer;
#ifdef THEK26_K26CrowProjectile_generated_h
#error "K26CrowProjectile.generated.h already included, missing '#pragma once' in K26CrowProjectile.h"
#endif
#define THEK26_K26CrowProjectile_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_37_DELEGATE \
struct _Script_TheK26_eventK26CrowProjectileOnAcquiredChanged_Parms \
{ \
	bool acquired; \
}; \
static inline void FK26CrowProjectileOnAcquiredChanged_DelegateWrapper(const FMulticastScriptDelegate& K26CrowProjectileOnAcquiredChanged, bool acquired) \
{ \
	_Script_TheK26_eventK26CrowProjectileOnAcquiredChanged_Parms Parms; \
	Parms.acquired=acquired ? true : false; \
	K26CrowProjectileOnAcquiredChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_36_DELEGATE \
struct _Script_TheK26_eventK26CrowProjectileK26ProjectileStateChangeDelegate_Parms \
{ \
	EK26ProjectileState newState; \
	FK26ProjectileStateDetails newDetails; \
}; \
static inline void FK26CrowProjectileK26ProjectileStateChangeDelegate_DelegateWrapper(const FMulticastScriptDelegate& K26CrowProjectileK26ProjectileStateChangeDelegate, EK26ProjectileState newState, FK26ProjectileStateDetails newDetails) \
{ \
	_Script_TheK26_eventK26CrowProjectileK26ProjectileStateChangeDelegate_Parms Parms; \
	Parms.newState=newState; \
	Parms.newDetails=newDetails; \
	K26CrowProjectileK26ProjectileStateChangeDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_35_DELEGATE \
static inline void FK26CrowProjectileOnIsBeingFlashlightedChanged_DelegateWrapper(const FMulticastScriptDelegate& K26CrowProjectileOnIsBeingFlashlightedChanged) \
{ \
	K26CrowProjectileOnIsBeingFlashlightedChanged.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_34_DELEGATE \
struct _Script_TheK26_eventK26CrowProjectileOnCrowProjectileStateChanged_Parms \
{ \
	AK26CrowProjectile* crowProjectile; \
}; \
static inline void FK26CrowProjectileOnCrowProjectileStateChanged_DelegateWrapper(const FMulticastScriptDelegate& K26CrowProjectileOnCrowProjectileStateChanged, AK26CrowProjectile* crowProjectile) \
{ \
	_Script_TheK26_eventK26CrowProjectileOnCrowProjectileStateChanged_Parms Parms; \
	Parms.crowProjectile=crowProjectile; \
	K26CrowProjectileOnCrowProjectileStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_RPC_WRAPPERS \
	virtual void Client_LocalKillerStartSummonTimer_Implementation(const float killerLocalSummonTime); \
	virtual void Multicast_OnExpiration_Implementation(); \
	virtual void Multicast_SetStartingPosition_Implementation(FVector const& position, FRotator const& angle); \
	virtual void Multicast_SetState_Implementation(const EK26ProjectileState newState, const int32 pooledPathIndex); \
	virtual void ProjectileWentOutOfBoundsEvent_Implementation(); \
	virtual void Server_OnSurvivorHit_Implementation(const EK26ProjectileState stateOnHit, ACamperPlayer* hitSurvivor); \
 \
	DECLARE_FUNCTION(execAuthority_OnCollisionOverlapBegin); \
	DECLARE_FUNCTION(execAuthority_OnCollisionOverlapEnd); \
	DECLARE_FUNCTION(execAuthority_OnDestroyAttempt); \
	DECLARE_FUNCTION(execAuthority_OnDestroyTimerExpired); \
	DECLARE_FUNCTION(execAuthority_OnScoutingOverlapBegin); \
	DECLARE_FUNCTION(execAuthority_OnSummonComplete); \
	DECLARE_FUNCTION(execClient_LocalKillerStartSummonTimer); \
	DECLARE_FUNCTION(execGetDistanceFromFirePosition); \
	DECLARE_FUNCTION(execGetFlashlightProgress); \
	DECLARE_FUNCTION(execHideOutlineFromSurvivor); \
	DECLARE_FUNCTION(execIsBeingFlashlighted); \
	DECLARE_FUNCTION(execIsHitboxBeingShown); \
	DECLARE_FUNCTION(execLocal_OnCollisionOverlapBegin); \
	DECLARE_FUNCTION(execLocal_OnSummonComplete); \
	DECLARE_FUNCTION(execMulticast_OnExpiration); \
	DECLARE_FUNCTION(execMulticast_SetStartingPosition); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnIsWithinSurvivorRangeChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_Path); \
	DECLARE_FUNCTION(execOnSurvivorAdded); \
	DECLARE_FUNCTION(execProjectileWentOutOfBoundsEvent); \
	DECLARE_FUNCTION(execServer_OnSurvivorHit);


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_LocalKillerStartSummonTimer_Implementation(const float killerLocalSummonTime); \
	virtual void Multicast_OnExpiration_Implementation(); \
	virtual void Multicast_SetStartingPosition_Implementation(FVector const& position, FRotator const& angle); \
	virtual void Multicast_SetState_Implementation(const EK26ProjectileState newState, const int32 pooledPathIndex); \
	virtual void ProjectileWentOutOfBoundsEvent_Implementation(); \
	virtual void Server_OnSurvivorHit_Implementation(const EK26ProjectileState stateOnHit, ACamperPlayer* hitSurvivor); \
 \
	DECLARE_FUNCTION(execAuthority_OnCollisionOverlapBegin); \
	DECLARE_FUNCTION(execAuthority_OnCollisionOverlapEnd); \
	DECLARE_FUNCTION(execAuthority_OnDestroyAttempt); \
	DECLARE_FUNCTION(execAuthority_OnDestroyTimerExpired); \
	DECLARE_FUNCTION(execAuthority_OnScoutingOverlapBegin); \
	DECLARE_FUNCTION(execAuthority_OnSummonComplete); \
	DECLARE_FUNCTION(execClient_LocalKillerStartSummonTimer); \
	DECLARE_FUNCTION(execGetDistanceFromFirePosition); \
	DECLARE_FUNCTION(execGetFlashlightProgress); \
	DECLARE_FUNCTION(execHideOutlineFromSurvivor); \
	DECLARE_FUNCTION(execIsBeingFlashlighted); \
	DECLARE_FUNCTION(execIsHitboxBeingShown); \
	DECLARE_FUNCTION(execLocal_OnCollisionOverlapBegin); \
	DECLARE_FUNCTION(execLocal_OnSummonComplete); \
	DECLARE_FUNCTION(execMulticast_OnExpiration); \
	DECLARE_FUNCTION(execMulticast_SetStartingPosition); \
	DECLARE_FUNCTION(execMulticast_SetState); \
	DECLARE_FUNCTION(execOnIntroCompleted); \
	DECLARE_FUNCTION(execOnIsWithinSurvivorRangeChanged); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_Path); \
	DECLARE_FUNCTION(execOnSurvivorAdded); \
	DECLARE_FUNCTION(execProjectileWentOutOfBoundsEvent); \
	DECLARE_FUNCTION(execServer_OnSurvivorHit);


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_EVENT_PARMS \
	struct K26CrowProjectile_eventClient_LocalKillerStartSummonTimer_Parms \
	{ \
		float killerLocalSummonTime; \
	}; \
	struct K26CrowProjectile_eventCosmetic_OnEnteredNearAudioRangeOfSurvivor_Parms \
	{ \
		ACamperPlayer* survivor; \
	}; \
	struct K26CrowProjectile_eventMulticast_SetStartingPosition_Parms \
	{ \
		FVector position; \
		FRotator angle; \
	}; \
	struct K26CrowProjectile_eventMulticast_SetState_Parms \
	{ \
		EK26ProjectileState newState; \
		int32 pooledPathIndex; \
	}; \
	struct K26CrowProjectile_eventServer_OnSurvivorHit_Parms \
	{ \
		EK26ProjectileState stateOnHit; \
		ACamperPlayer* hitSurvivor; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAK26CrowProjectile(); \
	friend struct Z_Construct_UClass_AK26CrowProjectile_Statics; \
public: \
	DECLARE_CLASS(AK26CrowProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(AK26CrowProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AK26CrowProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_path=NETFIELD_REP_START, \
		_pooledPathIndex, \
		_pathSplineComponent, \
		_forwardDirection, \
		_statusHandlerComponent, \
		_ammoHandlerComponent, \
		_pathHandlerComponent, \
		NETFIELD_REP_END=_pathHandlerComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_INCLASS \
private: \
	static void StaticRegisterNativesAK26CrowProjectile(); \
	friend struct Z_Construct_UClass_AK26CrowProjectile_Statics; \
public: \
	DECLARE_CLASS(AK26CrowProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(AK26CrowProjectile) \
	virtual UObject* _getUObject() const override { return const_cast<AK26CrowProjectile*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_path=NETFIELD_REP_START, \
		_pooledPathIndex, \
		_pathSplineComponent, \
		_forwardDirection, \
		_statusHandlerComponent, \
		_ammoHandlerComponent, \
		_pathHandlerComponent, \
		NETFIELD_REP_END=_pathHandlerComponent	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AK26CrowProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AK26CrowProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK26CrowProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK26CrowProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK26CrowProjectile(AK26CrowProjectile&&); \
	NO_API AK26CrowProjectile(const AK26CrowProjectile&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AK26CrowProjectile(AK26CrowProjectile&&); \
	NO_API AK26CrowProjectile(const AK26CrowProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AK26CrowProjectile); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AK26CrowProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AK26CrowProjectile)


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___originalFireLocation() { return STRUCT_OFFSET(AK26CrowProjectile, _originalFireLocation); } \
	FORCEINLINE static uint32 __PPO___projectileStateDetails() { return STRUCT_OFFSET(AK26CrowProjectile, _projectileStateDetails); } \
	FORCEINLINE static uint32 __PPO___summonTime() { return STRUCT_OFFSET(AK26CrowProjectile, _summonTime); } \
	FORCEINLINE static uint32 __PPO___detectionRadiusScaleX() { return STRUCT_OFFSET(AK26CrowProjectile, _detectionRadiusScaleX); } \
	FORCEINLINE static uint32 __PPO___detectionRadiusScaleY() { return STRUCT_OFFSET(AK26CrowProjectile, _detectionRadiusScaleY); } \
	FORCEINLINE static uint32 __PPO___detectionRadiusScaleZ() { return STRUCT_OFFSET(AK26CrowProjectile, _detectionRadiusScaleZ); } \
	FORCEINLINE static uint32 __PPO___crowFireAuraVisibilityForSurvivorsTime() { return STRUCT_OFFSET(AK26CrowProjectile, _crowFireAuraVisibilityForSurvivorsTime); } \
	FORCEINLINE static uint32 __PPO___crowSummonAuraVisibilityForSurvivorsTime() { return STRUCT_OFFSET(AK26CrowProjectile, _crowSummonAuraVisibilityForSurvivorsTime); } \
	FORCEINLINE static uint32 __PPO___detectionRadiusFromAbove() { return STRUCT_OFFSET(AK26CrowProjectile, _detectionRadiusFromAbove); } \
	FORCEINLINE static uint32 __PPO___baseSpeed() { return STRUCT_OFFSET(AK26CrowProjectile, _baseSpeed); } \
	FORCEINLINE static uint32 __PPO___selfDestructTimeOnDestroyed() { return STRUCT_OFFSET(AK26CrowProjectile, _selfDestructTimeOnDestroyed); } \
	FORCEINLINE static uint32 __PPO___requiredFlashlightTimeToDestroy() { return STRUCT_OFFSET(AK26CrowProjectile, _requiredFlashlightTimeToDestroy); } \
	FORCEINLINE static uint32 __PPO___flashlightablePointScale() { return STRUCT_OFFSET(AK26CrowProjectile, _flashlightablePointScale); } \
	FORCEINLINE static uint32 __PPO___rangeToTriggerNearSurvivorSFX() { return STRUCT_OFFSET(AK26CrowProjectile, _rangeToTriggerNearSurvivorSFX); } \
	FORCEINLINE static uint32 __PPO___flashlightDisableTime() { return STRUCT_OFFSET(AK26CrowProjectile, _flashlightDisableTime); } \
	FORCEINLINE static uint32 __PPO___onPathMovementSpeedModifierCurve() { return STRUCT_OFFSET(AK26CrowProjectile, _onPathMovementSpeedModifierCurve); } \
	FORCEINLINE static uint32 __PPO___offPathMovementSpeedModifierCurve() { return STRUCT_OFFSET(AK26CrowProjectile, _offPathMovementSpeedModifierCurve); } \
	FORCEINLINE static uint32 __PPO___projectileOffPathCurveDuration() { return STRUCT_OFFSET(AK26CrowProjectile, _projectileOffPathCurveDuration); } \
	FORCEINLINE static uint32 __PPO___path() { return STRUCT_OFFSET(AK26CrowProjectile, _path); } \
	FORCEINLINE static uint32 __PPO___pooledPathIndex() { return STRUCT_OFFSET(AK26CrowProjectile, _pooledPathIndex); } \
	FORCEINLINE static uint32 __PPO___currentProjectileState() { return STRUCT_OFFSET(AK26CrowProjectile, _currentProjectileState); } \
	FORCEINLINE static uint32 __PPO___outlineUpdateStrategy() { return STRUCT_OFFSET(AK26CrowProjectile, _outlineUpdateStrategy); } \
	FORCEINLINE static uint32 __PPO___crowFlockOutlineUpdateStrategy() { return STRUCT_OFFSET(AK26CrowProjectile, _crowFlockOutlineUpdateStrategy); } \
	FORCEINLINE static uint32 __PPO___outlineComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _outlineComponent); } \
	FORCEINLINE static uint32 __PPO___pathSplineComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _pathSplineComponent); } \
	FORCEINLINE static uint32 __PPO___collisionStaticMeshComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _collisionStaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO___killerInstinctStaticMeshComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _killerInstinctStaticMeshComponent); } \
	FORCEINLINE static uint32 __PPO___visualSkeletalMeshComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _visualSkeletalMeshComponent); } \
	FORCEINLINE static uint32 __PPO___rootComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _rootComponent); } \
	FORCEINLINE static uint32 __PPO___firecrackerEffectHandlerComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _firecrackerEffectHandlerComponent); } \
	FORCEINLINE static uint32 __PPO___flashLightableComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _flashLightableComponent); } \
	FORCEINLINE static uint32 __PPO___lightBurnableComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _lightBurnableComponent); } \
	FORCEINLINE static uint32 __PPO___dangerNavModifierComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _dangerNavModifierComponent); } \
	FORCEINLINE static uint32 __PPO__flashlightPointCenter() { return STRUCT_OFFSET(AK26CrowProjectile, flashlightPointCenter); } \
	FORCEINLINE static uint32 __PPO__flashlightPointNorth() { return STRUCT_OFFSET(AK26CrowProjectile, flashlightPointNorth); } \
	FORCEINLINE static uint32 __PPO__flashlightPointEast() { return STRUCT_OFFSET(AK26CrowProjectile, flashlightPointEast); } \
	FORCEINLINE static uint32 __PPO__flashlightPointSouth() { return STRUCT_OFFSET(AK26CrowProjectile, flashlightPointSouth); } \
	FORCEINLINE static uint32 __PPO__flashlightPointWest() { return STRUCT_OFFSET(AK26CrowProjectile, flashlightPointWest); } \
	FORCEINLINE static uint32 __PPO___k26ProjectileStateChangeDelegate() { return STRUCT_OFFSET(AK26CrowProjectile, _k26ProjectileStateChangeDelegate); } \
	FORCEINLINE static uint32 __PPO__OnAcquiredChanged() { return STRUCT_OFFSET(AK26CrowProjectile, OnAcquiredChanged); } \
	FORCEINLINE static uint32 __PPO___forwardDirection() { return STRUCT_OFFSET(AK26CrowProjectile, _forwardDirection); } \
	FORCEINLINE static uint32 __PPO___isBeingFlashlighted() { return STRUCT_OFFSET(AK26CrowProjectile, _isBeingFlashlighted); } \
	FORCEINLINE static uint32 __PPO___lastFlashlightProgress() { return STRUCT_OFFSET(AK26CrowProjectile, _lastFlashlightProgress); } \
	FORCEINLINE static uint32 __PPO___lastTimeFlashlightValueIncreased() { return STRUCT_OFFSET(AK26CrowProjectile, _lastTimeFlashlightValueIncreased); } \
	FORCEINLINE static uint32 __PPO___fireTime() { return STRUCT_OFFSET(AK26CrowProjectile, _fireTime); } \
	FORCEINLINE static uint32 __PPO___currentDistanceAlongSpline() { return STRUCT_OFFSET(AK26CrowProjectile, _currentDistanceAlongSpline); } \
	FORCEINLINE static uint32 __PPO___offPathTime() { return STRUCT_OFFSET(AK26CrowProjectile, _offPathTime); } \
	FORCEINLINE static uint32 __PPO___statusHandlerComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _statusHandlerComponent); } \
	FORCEINLINE static uint32 __PPO___ammoHandlerComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _ammoHandlerComponent); } \
	FORCEINLINE static uint32 __PPO___pathHandlerComponent() { return STRUCT_OFFSET(AK26CrowProjectile, _pathHandlerComponent); } \
	FORCEINLINE static uint32 __PPO___flashlightDestroyChargeable() { return STRUCT_OFFSET(AK26CrowProjectile, _flashlightDestroyChargeable); }


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_39_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h_41_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class AK26CrowProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26CrowProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
