// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCamperHealResult;
enum class ECamperDamageState : uint8;
class ADBDPlayer;
class AActor;
class UChargeableComponent;
enum class ECamperImmobilizeState : uint8;
#ifdef DEADBYDAYLIGHT_CamperHealthComponent_generated_h
#error "CamperHealthComponent.generated.h already included, missing '#pragma once' in CamperHealthComponent.h"
#endif
#define DEADBYDAYLIGHT_CamperHealthComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_23_DELEGATE \
static inline void FCamperHealthComponentOnDamageStateChangedCosmetic_DelegateWrapper(const FMulticastScriptDelegate& CamperHealthComponentOnDamageStateChangedCosmetic) \
{ \
	CamperHealthComponentOnDamageStateChangedCosmetic.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_22_DELEGATE \
static inline void FCamperHealthComponentOnInjuredBleedoutKO_DelegateWrapper(const FMulticastScriptDelegate& CamperHealthComponentOnInjuredBleedoutKO) \
{ \
	CamperHealthComponentOnInjuredBleedoutKO.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_21_DELEGATE \
static inline void FCamperHealthComponentOnInjuredBleedoutEnded_DelegateWrapper(const FMulticastScriptDelegate& CamperHealthComponentOnInjuredBleedoutEnded) \
{ \
	CamperHealthComponentOnInjuredBleedoutEnded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_20_DELEGATE \
struct _Script_DeadByDaylight_eventCamperHealthComponentOnHealedDelegate_Parms \
{ \
	FCamperHealResult healResult; \
}; \
static inline void FCamperHealthComponentOnHealedDelegate_DelegateWrapper(const FMulticastScriptDelegate& CamperHealthComponentOnHealedDelegate, FCamperHealResult const& healResult) \
{ \
	_Script_DeadByDaylight_eventCamperHealthComponentOnHealedDelegate_Parms Parms; \
	Parms.healResult=healResult; \
	CamperHealthComponentOnHealedDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_19_DELEGATE \
static inline void FCamperHealthComponentOnInjuredBleedoutStarted_DelegateWrapper(const FMulticastScriptDelegate& CamperHealthComponentOnInjuredBleedoutStarted) \
{ \
	CamperHealthComponentOnInjuredBleedoutStarted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_18_DELEGATE \
struct _Script_DeadByDaylight_eventCamperHealthComponentOnDamageStateChanged_Parms \
{ \
	ECamperDamageState oldDamageState; \
	ECamperDamageState newDamageState; \
}; \
static inline void FCamperHealthComponentOnDamageStateChanged_DelegateWrapper(const FMulticastScriptDelegate& CamperHealthComponentOnDamageStateChanged, ECamperDamageState oldDamageState, ECamperDamageState newDamageState) \
{ \
	_Script_DeadByDaylight_eventCamperHealthComponentOnDamageStateChanged_Parms Parms; \
	Parms.oldDamageState=oldDamageState; \
	Parms.newDamageState=newDamageState; \
	CamperHealthComponentOnDamageStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_RPC_WRAPPERS \
	virtual void Multicast_OnHealed_Implementation(FCamperHealResult const& healResult); \
	virtual void Multicast_OnInjuredBleedoutKO_Implementation(ADBDPlayer* injuredBleedoutInstigator); \
	virtual void Multicast_SetCurrentHealthStateCount_Implementation(int32 newHealth, bool fireScoreEvent); \
	virtual void Multicast_SetDamageState_Implementation(ECamperDamageState damageState, bool fireScoreEvent, bool sacrificed); \
	virtual void Multicast_SetDead_Implementation(bool NewIsDead, bool isSacrificed, bool isLeaving); \
	virtual void Multicast_SetHealthStateFromDamageState_Implementation(ECamperDamageState damageState, bool fireScoreEvent); \
 \
	DECLARE_FUNCTION(execApplyHeal); \
	DECLARE_FUNCTION(execAuthority_ApplyDamage); \
	DECLARE_FUNCTION(execAuthority_ApplyDeepWound); \
	DECLARE_FUNCTION(execAuthority_ApplyDoubleDamage); \
	DECLARE_FUNCTION(execAuthority_EndInjuredBleedout); \
	DECLARE_FUNCTION(execAuthority_HealTryGrantScoresOnChargeApplied); \
	DECLARE_FUNCTION(execAuthority_MendTryGrantScoresOnChargeApplied); \
	DECLARE_FUNCTION(execAuthority_SetDamageState); \
	DECLARE_FUNCTION(execCanBecomeHealthy); \
	DECLARE_FUNCTION(execCanBeHealed); \
	DECLARE_FUNCTION(execCanBeHealedFromInjured); \
	DECLARE_FUNCTION(execCanHealSelf); \
	DECLARE_FUNCTION(execGetCurrentHPSlot); \
	DECLARE_FUNCTION(execGetCurrentTotalHealthBarPercent); \
	DECLARE_FUNCTION(execGetDamageState); \
	DECLARE_FUNCTION(execGetPercentDyingTimer); \
	DECLARE_FUNCTION(execGetPercentInjuredBleedoutTimer); \
	DECLARE_FUNCTION(execIncreaseHPSlotSize); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsDyingTimerExpired); \
	DECLARE_FUNCTION(execIsHealthy); \
	DECLARE_FUNCTION(execIsInInjuredBleedout); \
	DECLARE_FUNCTION(execIsInjured); \
	DECLARE_FUNCTION(execIsInjuredBleedoutTimerExpired); \
	DECLARE_FUNCTION(execIsKO); \
	DECLARE_FUNCTION(execMulticast_OnHealed); \
	DECLARE_FUNCTION(execMulticast_OnInjuredBleedoutKO); \
	DECLARE_FUNCTION(execMulticast_SetCurrentHealthStateCount); \
	DECLARE_FUNCTION(execMulticast_SetDamageState); \
	DECLARE_FUNCTION(execMulticast_SetDead); \
	DECLARE_FUNCTION(execMulticast_SetHealthStateFromDamageState); \
	DECLARE_FUNCTION(execOnHealthBarCharged); \
	DECLARE_FUNCTION(execOnImmobilizedStateChanged); \
	DECLARE_FUNCTION(execOnMendChargeCompletionStateChanged); \
	DECLARE_FUNCTION(execOnRep_InInjuredBleedOut); \
	DECLARE_FUNCTION(execSetCanBleedout);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnHealed_Implementation(FCamperHealResult const& healResult); \
	virtual void Multicast_OnInjuredBleedoutKO_Implementation(ADBDPlayer* injuredBleedoutInstigator); \
	virtual void Multicast_SetCurrentHealthStateCount_Implementation(int32 newHealth, bool fireScoreEvent); \
	virtual void Multicast_SetDamageState_Implementation(ECamperDamageState damageState, bool fireScoreEvent, bool sacrificed); \
	virtual void Multicast_SetDead_Implementation(bool NewIsDead, bool isSacrificed, bool isLeaving); \
	virtual void Multicast_SetHealthStateFromDamageState_Implementation(ECamperDamageState damageState, bool fireScoreEvent); \
 \
	DECLARE_FUNCTION(execApplyHeal); \
	DECLARE_FUNCTION(execAuthority_ApplyDamage); \
	DECLARE_FUNCTION(execAuthority_ApplyDeepWound); \
	DECLARE_FUNCTION(execAuthority_ApplyDoubleDamage); \
	DECLARE_FUNCTION(execAuthority_EndInjuredBleedout); \
	DECLARE_FUNCTION(execAuthority_HealTryGrantScoresOnChargeApplied); \
	DECLARE_FUNCTION(execAuthority_MendTryGrantScoresOnChargeApplied); \
	DECLARE_FUNCTION(execAuthority_SetDamageState); \
	DECLARE_FUNCTION(execCanBecomeHealthy); \
	DECLARE_FUNCTION(execCanBeHealed); \
	DECLARE_FUNCTION(execCanBeHealedFromInjured); \
	DECLARE_FUNCTION(execCanHealSelf); \
	DECLARE_FUNCTION(execGetCurrentHPSlot); \
	DECLARE_FUNCTION(execGetCurrentTotalHealthBarPercent); \
	DECLARE_FUNCTION(execGetDamageState); \
	DECLARE_FUNCTION(execGetPercentDyingTimer); \
	DECLARE_FUNCTION(execGetPercentInjuredBleedoutTimer); \
	DECLARE_FUNCTION(execIncreaseHPSlotSize); \
	DECLARE_FUNCTION(execIsDead); \
	DECLARE_FUNCTION(execIsDyingTimerExpired); \
	DECLARE_FUNCTION(execIsHealthy); \
	DECLARE_FUNCTION(execIsInInjuredBleedout); \
	DECLARE_FUNCTION(execIsInjured); \
	DECLARE_FUNCTION(execIsInjuredBleedoutTimerExpired); \
	DECLARE_FUNCTION(execIsKO); \
	DECLARE_FUNCTION(execMulticast_OnHealed); \
	DECLARE_FUNCTION(execMulticast_OnInjuredBleedoutKO); \
	DECLARE_FUNCTION(execMulticast_SetCurrentHealthStateCount); \
	DECLARE_FUNCTION(execMulticast_SetDamageState); \
	DECLARE_FUNCTION(execMulticast_SetDead); \
	DECLARE_FUNCTION(execMulticast_SetHealthStateFromDamageState); \
	DECLARE_FUNCTION(execOnHealthBarCharged); \
	DECLARE_FUNCTION(execOnImmobilizedStateChanged); \
	DECLARE_FUNCTION(execOnMendChargeCompletionStateChanged); \
	DECLARE_FUNCTION(execOnRep_InInjuredBleedOut); \
	DECLARE_FUNCTION(execSetCanBleedout);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_EVENT_PARMS \
	struct CamperHealthComponent_eventMulticast_OnHealed_Parms \
	{ \
		FCamperHealResult healResult; \
	}; \
	struct CamperHealthComponent_eventMulticast_OnInjuredBleedoutKO_Parms \
	{ \
		ADBDPlayer* injuredBleedoutInstigator; \
	}; \
	struct CamperHealthComponent_eventMulticast_SetCurrentHealthStateCount_Parms \
	{ \
		int32 newHealth; \
		bool fireScoreEvent; \
	}; \
	struct CamperHealthComponent_eventMulticast_SetDamageState_Parms \
	{ \
		ECamperDamageState damageState; \
		bool fireScoreEvent; \
		bool sacrificed; \
	}; \
	struct CamperHealthComponent_eventMulticast_SetDead_Parms \
	{ \
		bool NewIsDead; \
		bool isSacrificed; \
		bool isLeaving; \
	}; \
	struct CamperHealthComponent_eventMulticast_SetHealthStateFromDamageState_Parms \
	{ \
		ECamperDamageState damageState; \
		bool fireScoreEvent; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamperHealthComponent(); \
	friend struct Z_Construct_UClass_UCamperHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperHealthComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_inInjuredBleedOut=NETFIELD_REP_START, \
		_bleedOutTimer, \
		_numHealthyHeals, \
		_dyingTimer, \
		NETFIELD_REP_END=_dyingTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_INCLASS \
private: \
	static void StaticRegisterNativesUCamperHealthComponent(); \
	friend struct Z_Construct_UClass_UCamperHealthComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperHealthComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperHealthComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_inInjuredBleedOut=NETFIELD_REP_START, \
		_bleedOutTimer, \
		_numHealthyHeals, \
		_dyingTimer, \
		NETFIELD_REP_END=_dyingTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCamperHealthComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCamperHealthComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperHealthComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperHealthComponent(UCamperHealthComponent&&); \
	NO_API UCamperHealthComponent(const UCamperHealthComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperHealthComponent(UCamperHealthComponent&&); \
	NO_API UCamperHealthComponent(const UCamperHealthComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperHealthComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperHealthComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCamperHealthComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___bleedoutBaseDuration() { return STRUCT_OFFSET(UCamperHealthComponent, _bleedoutBaseDuration); } \
	FORCEINLINE static uint32 __PPO___inInjuredBleedOut() { return STRUCT_OFFSET(UCamperHealthComponent, _inInjuredBleedOut); } \
	FORCEINLINE static uint32 __PPO___bleedOutTimer() { return STRUCT_OFFSET(UCamperHealthComponent, _bleedOutTimer); } \
	FORCEINLINE static uint32 __PPO___canBleedout() { return STRUCT_OFFSET(UCamperHealthComponent, _canBleedout); } \
	FORCEINLINE static uint32 __PPO___pauseInjuredBleedoutTimerInteractions() { return STRUCT_OFFSET(UCamperHealthComponent, _pauseInjuredBleedoutTimerInteractions); } \
	FORCEINLINE static uint32 __PPO___currentHealthStateCount() { return STRUCT_OFFSET(UCamperHealthComponent, _currentHealthStateCount); } \
	FORCEINLINE static uint32 __PPO___numHealthyHeals() { return STRUCT_OFFSET(UCamperHealthComponent, _numHealthyHeals); } \
	FORCEINLINE static uint32 __PPO___dyingTimer() { return STRUCT_OFFSET(UCamperHealthComponent, _dyingTimer); } \
	FORCEINLINE static uint32 __PPO___healFromDyingChargeable() { return STRUCT_OFFSET(UCamperHealthComponent, _healFromDyingChargeable); } \
	FORCEINLINE static uint32 __PPO___healFromInjuredChargeable() { return STRUCT_OFFSET(UCamperHealthComponent, _healFromInjuredChargeable); } \
	FORCEINLINE static uint32 __PPO___mendChargeable() { return STRUCT_OFFSET(UCamperHealthComponent, _mendChargeable); } \
	FORCEINLINE static uint32 __PPO___injuredBleedoutInstigator() { return STRUCT_OFFSET(UCamperHealthComponent, _injuredBleedoutInstigator); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_25_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCamperHealthComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperHealthComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
