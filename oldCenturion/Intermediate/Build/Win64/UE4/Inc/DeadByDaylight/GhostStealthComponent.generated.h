// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class EGhostStealthState : uint8;
class ACharacter;
#ifdef DEADBYDAYLIGHT_GhostStealthComponent_generated_h
#error "GhostStealthComponent.generated.h already included, missing '#pragma once' in GhostStealthComponent.h"
#endif
#define DEADBYDAYLIGHT_GhostStealthComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_18_DELEGATE \
struct _Script_DeadByDaylight_eventGhostStealthComponentLocal_OnStealthCancelledByPlayer_Parms \
{ \
	ADBDPlayer* player; \
}; \
static inline void FGhostStealthComponentLocal_OnStealthCancelledByPlayer_DelegateWrapper(const FMulticastScriptDelegate& GhostStealthComponentLocal_OnStealthCancelledByPlayer, ADBDPlayer* player) \
{ \
	_Script_DeadByDaylight_eventGhostStealthComponentLocal_OnStealthCancelledByPlayer_Parms Parms; \
	Parms.player=player; \
	GhostStealthComponentLocal_OnStealthCancelledByPlayer.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_17_DELEGATE \
struct _Script_DeadByDaylight_eventGhostStealthComponentOnIsBeingSpotChanged_Parms \
{ \
	bool isBeingSpot; \
}; \
static inline void FGhostStealthComponentOnIsBeingSpotChanged_DelegateWrapper(const FMulticastScriptDelegate& GhostStealthComponentOnIsBeingSpotChanged, bool isBeingSpot) \
{ \
	_Script_DeadByDaylight_eventGhostStealthComponentOnIsBeingSpotChanged_Parms Parms; \
	Parms.isBeingSpot=isBeingSpot ? true : false; \
	GhostStealthComponentOnIsBeingSpotChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_16_DELEGATE \
struct _Script_DeadByDaylight_eventGhostStealthComponentOnIsStealthChanged_Parms \
{ \
	bool isStealth; \
}; \
static inline void FGhostStealthComponentOnIsStealthChanged_DelegateWrapper(const FMulticastScriptDelegate& GhostStealthComponentOnIsStealthChanged, bool isStealth) \
{ \
	_Script_DeadByDaylight_eventGhostStealthComponentOnIsStealthChanged_Parms Parms; \
	Parms.isStealth=isStealth ? true : false; \
	GhostStealthComponentOnIsStealthChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_15_DELEGATE \
struct _Script_DeadByDaylight_eventGhostStealthComponentOnStealthStateChanged_Parms \
{ \
	EGhostStealthState stealthState; \
}; \
static inline void FGhostStealthComponentOnStealthStateChanged_DelegateWrapper(const FMulticastScriptDelegate& GhostStealthComponentOnStealthStateChanged, EGhostStealthState stealthState) \
{ \
	_Script_DeadByDaylight_eventGhostStealthComponentOnStealthStateChanged_Parms Parms; \
	Parms.stealthState=stealthState; \
	GhostStealthComponentOnStealthStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventGhostStealthComponentOnSuccessfulAttackInStealth_Parms \
{ \
	ADBDPlayer* target; \
}; \
static inline void FGhostStealthComponentOnSuccessfulAttackInStealth_DelegateWrapper(const FMulticastScriptDelegate& GhostStealthComponentOnSuccessfulAttackInStealth, ADBDPlayer* target) \
{ \
	_Script_DeadByDaylight_eventGhostStealthComponentOnSuccessfulAttackInStealth_Parms Parms; \
	Parms.target=target; \
	GhostStealthComponentOnSuccessfulAttackInStealth.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_RPC_WRAPPERS \
	virtual void Client_OnPlayerSpottedKiller_Implementation(ADBDPlayer* player); \
	virtual void Client_SpawnMarkerOnCharacter_Implementation(ACharacter* character); \
	virtual void Multicast_BroadcastOnSuccessfulAttackInStealth_Implementation(ADBDPlayer* target); \
 \
	DECLARE_FUNCTION(execAuthority_TryActivateStealth); \
	DECLARE_FUNCTION(execClient_OnPlayerSpottedKiller); \
	DECLARE_FUNCTION(execClient_SpawnMarkerOnCharacter); \
	DECLARE_FUNCTION(execGetStealthChargePercent); \
	DECLARE_FUNCTION(execGetStealthState); \
	DECLARE_FUNCTION(execIsStealth); \
	DECLARE_FUNCTION(execIsStealthReadyToActivate); \
	DECLARE_FUNCTION(execMulticast_BroadcastOnSuccessfulAttackInStealth); \
	DECLARE_FUNCTION(execOnRep_StealthState); \
	DECLARE_FUNCTION(execSetRedStainVisibility);


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_OnPlayerSpottedKiller_Implementation(ADBDPlayer* player); \
	virtual void Client_SpawnMarkerOnCharacter_Implementation(ACharacter* character); \
	virtual void Multicast_BroadcastOnSuccessfulAttackInStealth_Implementation(ADBDPlayer* target); \
 \
	DECLARE_FUNCTION(execAuthority_TryActivateStealth); \
	DECLARE_FUNCTION(execClient_OnPlayerSpottedKiller); \
	DECLARE_FUNCTION(execClient_SpawnMarkerOnCharacter); \
	DECLARE_FUNCTION(execGetStealthChargePercent); \
	DECLARE_FUNCTION(execGetStealthState); \
	DECLARE_FUNCTION(execIsStealth); \
	DECLARE_FUNCTION(execIsStealthReadyToActivate); \
	DECLARE_FUNCTION(execMulticast_BroadcastOnSuccessfulAttackInStealth); \
	DECLARE_FUNCTION(execOnRep_StealthState); \
	DECLARE_FUNCTION(execSetRedStainVisibility);


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_EVENT_PARMS \
	struct GhostStealthComponent_eventClient_OnPlayerSpottedKiller_Parms \
	{ \
		ADBDPlayer* player; \
	}; \
	struct GhostStealthComponent_eventClient_SpawnMarkerOnCharacter_Parms \
	{ \
		ACharacter* character; \
	}; \
	struct GhostStealthComponent_eventMulticast_BroadcastOnSuccessfulAttackInStealth_Parms \
	{ \
		ADBDPlayer* target; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGhostStealthComponent(); \
	friend struct Z_Construct_UClass_UGhostStealthComponent_Statics; \
public: \
	DECLARE_CLASS(UGhostStealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGhostStealthComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_stealthState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_stealthState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUGhostStealthComponent(); \
	friend struct Z_Construct_UClass_UGhostStealthComponent_Statics; \
public: \
	DECLARE_CLASS(UGhostStealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGhostStealthComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_stealthState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_stealthState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGhostStealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGhostStealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGhostStealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGhostStealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGhostStealthComponent(UGhostStealthComponent&&); \
	NO_API UGhostStealthComponent(const UGhostStealthComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGhostStealthComponent(UGhostStealthComponent&&); \
	NO_API UGhostStealthComponent(const UGhostStealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGhostStealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGhostStealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGhostStealthComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___stealthState() { return STRUCT_OFFSET(UGhostStealthComponent, _stealthState); } \
	FORCEINLINE static uint32 __PPO___cooldownTimer() { return STRUCT_OFFSET(UGhostStealthComponent, _cooldownTimer); } \
	FORCEINLINE static uint32 __PPO___markers() { return STRUCT_OFFSET(UGhostStealthComponent, _markers); } \
	FORCEINLINE static uint32 __PPO___markerMaxAngleOffset() { return STRUCT_OFFSET(UGhostStealthComponent, _markerMaxAngleOffset); } \
	FORCEINLINE static uint32 __PPO___useKillerInstinctWhenSpotted() { return STRUCT_OFFSET(UGhostStealthComponent, _useKillerInstinctWhenSpotted); } \
	FORCEINLINE static uint32 __PPO___sightableComponent() { return STRUCT_OFFSET(UGhostStealthComponent, _sightableComponent); } \
	FORCEINLINE static uint32 __PPO___stalkerComponent() { return STRUCT_OFFSET(UGhostStealthComponent, _stalkerComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_20_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGhostStealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GhostStealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
