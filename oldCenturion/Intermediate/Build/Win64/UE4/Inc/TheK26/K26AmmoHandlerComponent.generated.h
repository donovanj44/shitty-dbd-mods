// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EK26AmmoState : uint8;
class AActor;
enum class EK26AmmoCooldownReason : uint8;
class ASlasherPlayer;
class UK26PathHandlerComponent;
class UK26PowerStatusHandlerComponent;
class UAuthoritativeActorPoolComponent;
#ifdef THEK26_K26AmmoHandlerComponent_generated_h
#error "K26AmmoHandlerComponent.generated.h already included, missing '#pragma once' in K26AmmoHandlerComponent.h"
#endif
#define THEK26_K26AmmoHandlerComponent_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_20_DELEGATE \
struct _Script_TheK26_eventK26AmmoHandlerComponentOnMaxAmmoSet_Parms \
{ \
	int32 maxAmmo; \
}; \
static inline void FK26AmmoHandlerComponentOnMaxAmmoSet_DelegateWrapper(const FMulticastScriptDelegate& K26AmmoHandlerComponentOnMaxAmmoSet, const int32 maxAmmo) \
{ \
	_Script_TheK26_eventK26AmmoHandlerComponentOnMaxAmmoSet_Parms Parms; \
	Parms.maxAmmo=maxAmmo; \
	K26AmmoHandlerComponentOnMaxAmmoSet.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_19_DELEGATE \
struct _Script_TheK26_eventK26AmmoHandlerComponentCallback_Parms \
{ \
	int32 maxAmmo; \
}; \
static inline void FK26AmmoHandlerComponentCallback_DelegateWrapper(const FScriptDelegate& K26AmmoHandlerComponentCallback, const int32 maxAmmo) \
{ \
	_Script_TheK26_eventK26AmmoHandlerComponentCallback_Parms Parms; \
	Parms.maxAmmo=maxAmmo; \
	K26AmmoHandlerComponentCallback.ProcessDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_18_DELEGATE \
struct _Script_TheK26_eventK26AmmoHandlerComponentOnCurrentAmmoStateChanged_Parms \
{ \
	EK26AmmoState newAmmoState; \
	int32 currentAmmo; \
	int32 maxAmmo; \
}; \
static inline void FK26AmmoHandlerComponentOnCurrentAmmoStateChanged_DelegateWrapper(const FMulticastScriptDelegate& K26AmmoHandlerComponentOnCurrentAmmoStateChanged, const EK26AmmoState newAmmoState, const int32 currentAmmo, const int32 maxAmmo) \
{ \
	_Script_TheK26_eventK26AmmoHandlerComponentOnCurrentAmmoStateChanged_Parms Parms; \
	Parms.newAmmoState=newAmmoState; \
	Parms.currentAmmo=currentAmmo; \
	Parms.maxAmmo=maxAmmo; \
	K26AmmoHandlerComponentOnCurrentAmmoStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_RPC_WRAPPERS \
	virtual void Multicast_OnAmmoExpired_Implementation(); \
	virtual void Multicast_OnAmmoHasBeenFired_Implementation(); \
	virtual void Multicast_OnCurrentAmmoStateChanged_Implementation(const EK26AmmoState newState, const int32 currentAmmo, const int32 maxAmmo); \
	virtual void Multicast_StartExpiring_Implementation(); \
	virtual void Multicast_StartRecharging_Implementation(const EK26AmmoCooldownReason lastCooldownReason); \
 \
	DECLARE_FUNCTION(execAuthority_InitializePoolComponent); \
	DECLARE_FUNCTION(execAuthority_OnAmmoInit); \
	DECLARE_FUNCTION(execCallOnMaxAmmoSet); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetCurrentAmmoState); \
	DECLARE_FUNCTION(execGetCurrentCooldownReason); \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execMulticast_OnAmmoExpired); \
	DECLARE_FUNCTION(execMulticast_OnAmmoHasBeenFired); \
	DECLARE_FUNCTION(execMulticast_OnCurrentAmmoStateChanged); \
	DECLARE_FUNCTION(execMulticast_StartExpiring); \
	DECLARE_FUNCTION(execMulticast_StartRecharging); \
	DECLARE_FUNCTION(execOnKillerSet); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execSendHasExpiredDelegate); \
	DECLARE_FUNCTION(execSetDependencies);


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnAmmoExpired_Implementation(); \
	virtual void Multicast_OnAmmoHasBeenFired_Implementation(); \
	virtual void Multicast_OnCurrentAmmoStateChanged_Implementation(const EK26AmmoState newState, const int32 currentAmmo, const int32 maxAmmo); \
	virtual void Multicast_StartExpiring_Implementation(); \
	virtual void Multicast_StartRecharging_Implementation(const EK26AmmoCooldownReason lastCooldownReason); \
 \
	DECLARE_FUNCTION(execAuthority_InitializePoolComponent); \
	DECLARE_FUNCTION(execAuthority_OnAmmoInit); \
	DECLARE_FUNCTION(execCallOnMaxAmmoSet); \
	DECLARE_FUNCTION(execGetCurrentAmmo); \
	DECLARE_FUNCTION(execGetCurrentAmmoState); \
	DECLARE_FUNCTION(execGetCurrentCooldownReason); \
	DECLARE_FUNCTION(execGetMaxAmmo); \
	DECLARE_FUNCTION(execMulticast_OnAmmoExpired); \
	DECLARE_FUNCTION(execMulticast_OnAmmoHasBeenFired); \
	DECLARE_FUNCTION(execMulticast_OnCurrentAmmoStateChanged); \
	DECLARE_FUNCTION(execMulticast_StartExpiring); \
	DECLARE_FUNCTION(execMulticast_StartRecharging); \
	DECLARE_FUNCTION(execOnKillerSet); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execSendHasExpiredDelegate); \
	DECLARE_FUNCTION(execSetDependencies);


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_EVENT_PARMS \
	struct K26AmmoHandlerComponent_eventMulticast_OnCurrentAmmoStateChanged_Parms \
	{ \
		EK26AmmoState newState; \
		int32 currentAmmo; \
		int32 maxAmmo; \
	}; \
	struct K26AmmoHandlerComponent_eventMulticast_StartRecharging_Parms \
	{ \
		EK26AmmoCooldownReason lastCooldownReason; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK26AmmoHandlerComponent(); \
	friend struct Z_Construct_UClass_UK26AmmoHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UK26AmmoHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26AmmoHandlerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isAmmoOnCooldown=NETFIELD_REP_START, \
		_currentAmmo, \
		_lastCooldownReason, \
		_currentAmmoState, \
		_isOutOfAmmo, \
		NETFIELD_REP_END=_isOutOfAmmo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUK26AmmoHandlerComponent(); \
	friend struct Z_Construct_UClass_UK26AmmoHandlerComponent_Statics; \
public: \
	DECLARE_CLASS(UK26AmmoHandlerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26AmmoHandlerComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_isAmmoOnCooldown=NETFIELD_REP_START, \
		_currentAmmo, \
		_lastCooldownReason, \
		_currentAmmoState, \
		_isOutOfAmmo, \
		NETFIELD_REP_END=_isOutOfAmmo	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK26AmmoHandlerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK26AmmoHandlerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26AmmoHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26AmmoHandlerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26AmmoHandlerComponent(UK26AmmoHandlerComponent&&); \
	NO_API UK26AmmoHandlerComponent(const UK26AmmoHandlerComponent&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26AmmoHandlerComponent(UK26AmmoHandlerComponent&&); \
	NO_API UK26AmmoHandlerComponent(const UK26AmmoHandlerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26AmmoHandlerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26AmmoHandlerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK26AmmoHandlerComponent)


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___isAmmoOnCooldown() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _isAmmoOnCooldown); } \
	FORCEINLINE static uint32 __PPO___onMaxAmmoSet() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _onMaxAmmoSet); } \
	FORCEINLINE static uint32 __PPO___rechargeEndTime() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _rechargeEndTime); } \
	FORCEINLINE static uint32 __PPO___isTunableInit() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _isTunableInit); } \
	FORCEINLINE static uint32 __PPO___projectileClass() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _projectileClass); } \
	FORCEINLINE static uint32 __PPO___expirationCooldownTime() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _expirationCooldownTime); } \
	FORCEINLINE static uint32 __PPO___firedCooldownTimesPerCrow() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _firedCooldownTimesPerCrow); } \
	FORCEINLINE static uint32 __PPO___cooldownReductionPerCrowFired() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _cooldownReductionPerCrowFired); } \
	FORCEINLINE static uint32 __PPO___expirationTime() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _expirationTime); } \
	FORCEINLINE static uint32 __PPO___expirationWarningBufferTime() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _expirationWarningBufferTime); } \
	FORCEINLINE static uint32 __PPO___maxAmmo() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _maxAmmo); } \
	FORCEINLINE static uint32 __PPO___currentAmmo() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _currentAmmo); } \
	FORCEINLINE static uint32 __PPO___lastCooldownReason() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _lastCooldownReason); } \
	FORCEINLINE static uint32 __PPO___currentAmmoState() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _currentAmmoState); } \
	FORCEINLINE static uint32 __PPO___pathHandler() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _pathHandler); } \
	FORCEINLINE static uint32 __PPO___statusHandler() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _statusHandler); } \
	FORCEINLINE static uint32 __PPO___authoritativeActorPoolComponent() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _authoritativeActorPoolComponent); } \
	FORCEINLINE static uint32 __PPO___isOutOfAmmo() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _isOutOfAmmo); } \
	FORCEINLINE static uint32 __PPO___fallbackFireCooldown() { return STRUCT_OFFSET(UK26AmmoHandlerComponent, _fallbackFireCooldown); }


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_22_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class UK26AmmoHandlerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26AmmoHandlerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
