// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
class AActor;
class ASlasherPlayer;
#ifdef DEADBYDAYLIGHT_CamperDreamworldComponent_generated_h
#error "CamperDreamworldComponent.generated.h already included, missing '#pragma once' in CamperDreamworldComponent.h"
#endif
#define DEADBYDAYLIGHT_CamperDreamworldComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_13_DELEGATE \
struct _Script_DeadByDaylight_eventCamperDreamworldComponentOnCamperTriggeredDreamTrap_Parms \
{ \
	ADBDPlayer* camper; \
	AActor* triggeredDreamTrap; \
}; \
static inline void FCamperDreamworldComponentOnCamperTriggeredDreamTrap_DelegateWrapper(const FMulticastScriptDelegate& CamperDreamworldComponentOnCamperTriggeredDreamTrap, ADBDPlayer* camper, AActor* triggeredDreamTrap) \
{ \
	_Script_DeadByDaylight_eventCamperDreamworldComponentOnCamperTriggeredDreamTrap_Parms Parms; \
	Parms.camper=camper; \
	Parms.triggeredDreamTrap=triggeredDreamTrap; \
	CamperDreamworldComponentOnCamperTriggeredDreamTrap.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_GetFellAsleepCount); \
	DECLARE_FUNCTION(execAuthority_GetWakeUpBySkillCheckCount); \
	DECLARE_FUNCTION(execAuthority_HandleSkillCheckFailure); \
	DECLARE_FUNCTION(execAuthority_OnAttacked); \
	DECLARE_FUNCTION(execAuthority_PutAsleep); \
	DECLARE_FUNCTION(execAuthority_SpawnDreamworldStatusEffect); \
	DECLARE_FUNCTION(execAuthority_WakeUpByHook); \
	DECLARE_FUNCTION(execAuthority_WakeUpByOther); \
	DECLARE_FUNCTION(execAuthority_WakeUpByWakerObject); \
	DECLARE_FUNCTION(execBroadcastCamperTriggeredDreamTrap); \
	DECLARE_FUNCTION(execCanWakeUp); \
	DECLARE_FUNCTION(execCanWakeUpBySkillCheck); \
	DECLARE_FUNCTION(execGetWakeUpByOtherCount); \
	DECLARE_FUNCTION(execInitializeTunableValues); \
	DECLARE_FUNCTION(execLocal_SetShowKiller); \
	DECLARE_FUNCTION(execOnRep_ShowKiller); \
	DECLARE_FUNCTION(execSetScriptedKillerVisibility); \
	DECLARE_FUNCTION(execShouldLookSleepyToLocalPlayer);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_GetFellAsleepCount); \
	DECLARE_FUNCTION(execAuthority_GetWakeUpBySkillCheckCount); \
	DECLARE_FUNCTION(execAuthority_HandleSkillCheckFailure); \
	DECLARE_FUNCTION(execAuthority_OnAttacked); \
	DECLARE_FUNCTION(execAuthority_PutAsleep); \
	DECLARE_FUNCTION(execAuthority_SpawnDreamworldStatusEffect); \
	DECLARE_FUNCTION(execAuthority_WakeUpByHook); \
	DECLARE_FUNCTION(execAuthority_WakeUpByOther); \
	DECLARE_FUNCTION(execAuthority_WakeUpByWakerObject); \
	DECLARE_FUNCTION(execBroadcastCamperTriggeredDreamTrap); \
	DECLARE_FUNCTION(execCanWakeUp); \
	DECLARE_FUNCTION(execCanWakeUpBySkillCheck); \
	DECLARE_FUNCTION(execGetWakeUpByOtherCount); \
	DECLARE_FUNCTION(execInitializeTunableValues); \
	DECLARE_FUNCTION(execLocal_SetShowKiller); \
	DECLARE_FUNCTION(execOnRep_ShowKiller); \
	DECLARE_FUNCTION(execSetScriptedKillerVisibility); \
	DECLARE_FUNCTION(execShouldLookSleepyToLocalPlayer);


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_EVENT_PARMS \
	struct CamperDreamworldComponent_eventHandleShowKillerChanged_Parms \
	{ \
		bool showKiller; \
		bool instantly; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCamperDreamworldComponent(); \
	friend struct Z_Construct_UClass_UCamperDreamworldComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperDreamworldComponent, UCharacterDreamworldComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperDreamworldComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_survivorSleepiness=NETFIELD_REP_START, \
		_sleepinessProtectionRemainingDuration, \
		_wakeUpByOtherCount, \
		_showKiller, \
		_forcedAsleep, \
		_showKillerInstantly, \
		NETFIELD_REP_END=_showKillerInstantly	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUCamperDreamworldComponent(); \
	friend struct Z_Construct_UClass_UCamperDreamworldComponent_Statics; \
public: \
	DECLARE_CLASS(UCamperDreamworldComponent, UCharacterDreamworldComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UCamperDreamworldComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_survivorSleepiness=NETFIELD_REP_START, \
		_sleepinessProtectionRemainingDuration, \
		_wakeUpByOtherCount, \
		_showKiller, \
		_forcedAsleep, \
		_showKillerInstantly, \
		NETFIELD_REP_END=_showKillerInstantly	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCamperDreamworldComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCamperDreamworldComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperDreamworldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperDreamworldComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperDreamworldComponent(UCamperDreamworldComponent&&); \
	NO_API UCamperDreamworldComponent(const UCamperDreamworldComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCamperDreamworldComponent(UCamperDreamworldComponent&&); \
	NO_API UCamperDreamworldComponent(const UCamperDreamworldComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCamperDreamworldComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCamperDreamworldComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCamperDreamworldComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___survivorSleepiness() { return STRUCT_OFFSET(UCamperDreamworldComponent, _survivorSleepiness); } \
	FORCEINLINE static uint32 __PPO___sleepinessProtectionRemainingDuration() { return STRUCT_OFFSET(UCamperDreamworldComponent, _sleepinessProtectionRemainingDuration); } \
	FORCEINLINE static uint32 __PPO___sleepGainPerSecond() { return STRUCT_OFFSET(UCamperDreamworldComponent, _sleepGainPerSecond); } \
	FORCEINLINE static uint32 __PPO___wakeUpByOtherCount() { return STRUCT_OFFSET(UCamperDreamworldComponent, _wakeUpByOtherCount); } \
	FORCEINLINE static uint32 __PPO___showKiller() { return STRUCT_OFFSET(UCamperDreamworldComponent, _showKiller); } \
	FORCEINLINE static uint32 __PPO___killerGlimpseDurationTimer() { return STRUCT_OFFSET(UCamperDreamworldComponent, _killerGlimpseDurationTimer); } \
	FORCEINLINE static uint32 __PPO___killerGlimpseCooldownTimer() { return STRUCT_OFFSET(UCamperDreamworldComponent, _killerGlimpseCooldownTimer); } \
	FORCEINLINE static uint32 __PPO___glimpseMinDistance() { return STRUCT_OFFSET(UCamperDreamworldComponent, _glimpseMinDistance); } \
	FORCEINLINE static uint32 __PPO___glimpseMaxDistance() { return STRUCT_OFFSET(UCamperDreamworldComponent, _glimpseMaxDistance); } \
	FORCEINLINE static uint32 __PPO___killerGlimpseCooldown() { return STRUCT_OFFSET(UCamperDreamworldComponent, _killerGlimpseCooldown); } \
	FORCEINLINE static uint32 __PPO___killerGlimpseDuration() { return STRUCT_OFFSET(UCamperDreamworldComponent, _killerGlimpseDuration); } \
	FORCEINLINE static uint32 __PPO___wakeUpBySkillCheckCount() { return STRUCT_OFFSET(UCamperDreamworldComponent, _wakeUpBySkillCheckCount); } \
	FORCEINLINE static uint32 __PPO___fellAsleepCount() { return STRUCT_OFFSET(UCamperDreamworldComponent, _fellAsleepCount); } \
	FORCEINLINE static uint32 __PPO___forcedAsleep() { return STRUCT_OFFSET(UCamperDreamworldComponent, _forcedAsleep); } \
	FORCEINLINE static uint32 __PPO___linkedWaker() { return STRUCT_OFFSET(UCamperDreamworldComponent, _linkedWaker); } \
	FORCEINLINE static uint32 __PPO___useScriptedKillerVisibility() { return STRUCT_OFFSET(UCamperDreamworldComponent, _useScriptedKillerVisibility); } \
	FORCEINLINE static uint32 __PPO___showKillerInstantly() { return STRUCT_OFFSET(UCamperDreamworldComponent, _showKillerInstantly); }


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UCamperDreamworldComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_CamperDreamworldComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
