// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChargeableComponent;
class AActor;
class ADBDPlayer;
enum class ESkillCheckCustomType : uint8;
#ifdef DEADBYDAYLIGHT_ChargeableComponent_generated_h
#error "ChargeableComponent.generated.h already included, missing '#pragma once' in ChargeableComponent.h"
#endif
#define DEADBYDAYLIGHT_ChargeableComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_22_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableComponentDechargeEndDelegate_Parms \
{ \
	UChargeableComponent* ChargeableComponent; \
}; \
static inline void FChargeableComponentDechargeEndDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentDechargeEndDelegate, UChargeableComponent* ChargeableComponent) \
{ \
	_Script_DeadByDaylight_eventChargeableComponentDechargeEndDelegate_Parms Parms; \
	Parms.ChargeableComponent=ChargeableComponent; \
	ChargeableComponentDechargeEndDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_21_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableComponentChargeableCompletionPercentChangeAuthorityDelegate_Parms \
{ \
	UChargeableComponent* ChargeableComponent; \
	float PercentCompletionChange; \
	float TotalPercentComplete; \
}; \
static inline void FChargeableComponentChargeableCompletionPercentChangeAuthorityDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentChargeableCompletionPercentChangeAuthorityDelegate, UChargeableComponent* ChargeableComponent, float PercentCompletionChange, float TotalPercentComplete) \
{ \
	_Script_DeadByDaylight_eventChargeableComponentChargeableCompletionPercentChangeAuthorityDelegate_Parms Parms; \
	Parms.ChargeableComponent=ChargeableComponent; \
	Parms.PercentCompletionChange=PercentCompletionChange; \
	Parms.TotalPercentComplete=TotalPercentComplete; \
	ChargeableComponentChargeableCompletionPercentChangeAuthorityDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_20_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableComponentChargeableCompletionPercentChangeCosmeticDelegate_Parms \
{ \
	UChargeableComponent* ChargeableComponent; \
	float TotalPercentComplete; \
}; \
static inline void FChargeableComponentChargeableCompletionPercentChangeCosmeticDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentChargeableCompletionPercentChangeCosmeticDelegate, UChargeableComponent* ChargeableComponent, float TotalPercentComplete) \
{ \
	_Script_DeadByDaylight_eventChargeableComponentChargeableCompletionPercentChangeCosmeticDelegate_Parms Parms; \
	Parms.ChargeableComponent=ChargeableComponent; \
	Parms.TotalPercentComplete=TotalPercentComplete; \
	ChargeableComponentChargeableCompletionPercentChangeCosmeticDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_19_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableComponentChargeAppliedAuthorityDelegate_Parms \
{ \
	float IndividualChargeAmount; \
	float TotalChargeAmount; \
	AActor* ChargeInstigator; \
	bool WasCoop; \
	float DeltaTime; \
}; \
static inline void FChargeableComponentChargeAppliedAuthorityDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentChargeAppliedAuthorityDelegate, float IndividualChargeAmount, float TotalChargeAmount, AActor* ChargeInstigator, bool WasCoop, float DeltaTime) \
{ \
	_Script_DeadByDaylight_eventChargeableComponentChargeAppliedAuthorityDelegate_Parms Parms; \
	Parms.IndividualChargeAmount=IndividualChargeAmount; \
	Parms.TotalChargeAmount=TotalChargeAmount; \
	Parms.ChargeInstigator=ChargeInstigator; \
	Parms.WasCoop=WasCoop ? true : false; \
	Parms.DeltaTime=DeltaTime; \
	ChargeableComponentChargeAppliedAuthorityDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_18_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableComponentOnInteractionCompletionStateChanged_Parms \
{ \
	bool completed; \
	TArray<AActor*> instigatorsForCompletion; \
}; \
static inline void FChargeableComponentOnInteractionCompletionStateChanged_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentOnInteractionCompletionStateChanged, bool completed, TArray<AActor*> const& instigatorsForCompletion) \
{ \
	_Script_DeadByDaylight_eventChargeableComponentOnInteractionCompletionStateChanged_Parms Parms; \
	Parms.completed=completed ? true : false; \
	Parms.instigatorsForCompletion=instigatorsForCompletion; \
	ChargeableComponentOnInteractionCompletionStateChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_17_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableComponentSkillCheckResponseAuthorityDelegate_Parms \
{ \
	bool Success; \
	bool Bonus; \
	ADBDPlayer* Player; \
	bool TriggerLoudNoise; \
	bool hadInput; \
	ESkillCheckCustomType type; \
	float ChargeChange; \
}; \
static inline void FChargeableComponentSkillCheckResponseAuthorityDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentSkillCheckResponseAuthorityDelegate, bool Success, bool Bonus, ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float ChargeChange) \
{ \
	_Script_DeadByDaylight_eventChargeableComponentSkillCheckResponseAuthorityDelegate_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.Bonus=Bonus ? true : false; \
	Parms.Player=Player; \
	Parms.TriggerLoudNoise=TriggerLoudNoise ? true : false; \
	Parms.hadInput=hadInput ? true : false; \
	Parms.type=type; \
	Parms.ChargeChange=ChargeChange; \
	ChargeableComponentSkillCheckResponseAuthorityDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_16_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableComponentSkillCheckResponseAestheticDelegate_Parms \
{ \
	bool Success; \
	bool Bonus; \
	ADBDPlayer* Player; \
	bool TriggerLoudNoise; \
	bool hadInput; \
	ESkillCheckCustomType type; \
	float ChargeChange; \
}; \
static inline void FChargeableComponentSkillCheckResponseAestheticDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentSkillCheckResponseAestheticDelegate, bool Success, bool Bonus, ADBDPlayer* Player, bool TriggerLoudNoise, bool hadInput, ESkillCheckCustomType type, float ChargeChange) \
{ \
	_Script_DeadByDaylight_eventChargeableComponentSkillCheckResponseAestheticDelegate_Parms Parms; \
	Parms.Success=Success ? true : false; \
	Parms.Bonus=Bonus ? true : false; \
	Parms.Player=Player; \
	Parms.TriggerLoudNoise=TriggerLoudNoise ? true : false; \
	Parms.hadInput=hadInput ? true : false; \
	Parms.type=type; \
	Parms.ChargeChange=ChargeChange; \
	ChargeableComponentSkillCheckResponseAestheticDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_15_DELEGATE \
struct _Script_DeadByDaylight_eventChargeableComponentDechargeBeginDelegate_Parms \
{ \
	UChargeableComponent* ChargeableComponent; \
}; \
static inline void FChargeableComponentDechargeBeginDelegate_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentDechargeBeginDelegate, UChargeableComponent* ChargeableComponent) \
{ \
	_Script_DeadByDaylight_eventChargeableComponentDechargeBeginDelegate_Parms Parms; \
	Parms.ChargeableComponent=ChargeableComponent; \
	ChargeableComponentDechargeBeginDelegate.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_14_DELEGATE \
static inline void FChargeableComponentOnInteractionEmptiedEvent_DelegateWrapper(const FMulticastScriptDelegate& ChargeableComponentOnInteractionEmptiedEvent) \
{ \
	ChargeableComponentOnInteractionEmptiedEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_RPC_WRAPPERS \
	virtual void Multicast_OnCompleteChanged_Implementation(bool completed) const; \
	virtual void Multicast_OnEmptied_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_AddCharge); \
	DECLARE_FUNCTION(execAuthority_AddChargePercent); \
	DECLARE_FUNCTION(execAuthority_ApplyStartingCharge); \
	DECLARE_FUNCTION(execAuthority_Reset); \
	DECLARE_FUNCTION(execAuthority_SetEnableAddCharge); \
	DECLARE_FUNCTION(execAuthority_SetEnableSkillCheckFailurePenalty); \
	DECLARE_FUNCTION(execGetChargeRemaining); \
	DECLARE_FUNCTION(execGetCurrentCharge); \
	DECLARE_FUNCTION(execGetMaxCharge); \
	DECLARE_FUNCTION(execGetPercentComplete); \
	DECLARE_FUNCTION(execGetPlayerCountPenaltyModifier); \
	DECLARE_FUNCTION(execGetTunableValue); \
	DECLARE_FUNCTION(execHasPlayerDoneSkillCheck); \
	DECLARE_FUNCTION(execIncreaseMaxCharge); \
	DECLARE_FUNCTION(execIncreaseMaxChargeAdditive); \
	DECLARE_FUNCTION(execIsChargeComplete); \
	DECLARE_FUNCTION(execIsSkillCheckTimePenaltyActive); \
	DECLARE_FUNCTION(execMulticast_OnCompleteChanged); \
	DECLARE_FUNCTION(execMulticast_OnEmptied); \
	DECLARE_FUNCTION(execOnCurrentChargeChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentCharge); \
	DECLARE_FUNCTION(execSetDechargeRate); \
	DECLARE_FUNCTION(execSetSecondsToCharge);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnCompleteChanged_Implementation(bool completed) const; \
	virtual void Multicast_OnEmptied_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_AddCharge); \
	DECLARE_FUNCTION(execAuthority_AddChargePercent); \
	DECLARE_FUNCTION(execAuthority_ApplyStartingCharge); \
	DECLARE_FUNCTION(execAuthority_Reset); \
	DECLARE_FUNCTION(execAuthority_SetEnableAddCharge); \
	DECLARE_FUNCTION(execAuthority_SetEnableSkillCheckFailurePenalty); \
	DECLARE_FUNCTION(execGetChargeRemaining); \
	DECLARE_FUNCTION(execGetCurrentCharge); \
	DECLARE_FUNCTION(execGetMaxCharge); \
	DECLARE_FUNCTION(execGetPercentComplete); \
	DECLARE_FUNCTION(execGetPlayerCountPenaltyModifier); \
	DECLARE_FUNCTION(execGetTunableValue); \
	DECLARE_FUNCTION(execHasPlayerDoneSkillCheck); \
	DECLARE_FUNCTION(execIncreaseMaxCharge); \
	DECLARE_FUNCTION(execIncreaseMaxChargeAdditive); \
	DECLARE_FUNCTION(execIsChargeComplete); \
	DECLARE_FUNCTION(execIsSkillCheckTimePenaltyActive); \
	DECLARE_FUNCTION(execMulticast_OnCompleteChanged); \
	DECLARE_FUNCTION(execMulticast_OnEmptied); \
	DECLARE_FUNCTION(execOnCurrentChargeChanged); \
	DECLARE_FUNCTION(execOnRep_CurrentCharge); \
	DECLARE_FUNCTION(execSetDechargeRate); \
	DECLARE_FUNCTION(execSetSecondsToCharge);


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_EVENT_PARMS \
	struct ChargeableComponent_eventMulticast_OnCompleteChanged_Parms \
	{ \
		bool completed; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUChargeableComponent(); \
	friend struct Z_Construct_UClass_UChargeableComponent_Statics; \
public: \
	DECLARE_CLASS(UChargeableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChargeableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentCharge=NETFIELD_REP_START, \
		NETFIELD_REP_END=_currentCharge	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_INCLASS \
private: \
	static void StaticRegisterNativesUChargeableComponent(); \
	friend struct Z_Construct_UClass_UChargeableComponent_Statics; \
public: \
	DECLARE_CLASS(UChargeableComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UChargeableComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentCharge=NETFIELD_REP_START, \
		NETFIELD_REP_END=_currentCharge	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UChargeableComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UChargeableComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeableComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargeableComponent(UChargeableComponent&&); \
	NO_API UChargeableComponent(const UChargeableComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UChargeableComponent(UChargeableComponent&&); \
	NO_API UChargeableComponent(const UChargeableComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UChargeableComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UChargeableComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UChargeableComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentCharge() { return STRUCT_OFFSET(UChargeableComponent, _currentCharge); } \
	FORCEINLINE static uint32 __PPO___skillCheckFailurePenaltyTimer() { return STRUCT_OFFSET(UChargeableComponent, _skillCheckFailurePenaltyTimer); } \
	FORCEINLINE static uint32 __PPO___dechargeTimer() { return STRUCT_OFFSET(UChargeableComponent, _dechargeTimer); } \
	FORCEINLINE static uint32 __PPO___chargesThisFrame() { return STRUCT_OFFSET(UChargeableComponent, _chargesThisFrame); } \
	FORCEINLINE static uint32 __PPO___instigatorsSinceEmpty() { return STRUCT_OFFSET(UChargeableComponent, _instigatorsSinceEmpty); } \
	FORCEINLINE static uint32 __PPO___tunableValueMap() { return STRUCT_OFFSET(UChargeableComponent, _tunableValueMap); } \
	FORCEINLINE static uint32 __PPO___isCharging() { return STRUCT_OFFSET(UChargeableComponent, _isCharging); } \
	FORCEINLINE static uint32 __PPO___playersWhoDidSkillCheck() { return STRUCT_OFFSET(UChargeableComponent, _playersWhoDidSkillCheck); } \
	FORCEINLINE static uint32 __PPO___startingChargePercent() { return STRUCT_OFFSET(UChargeableComponent, _startingChargePercent); } \
	FORCEINLINE static uint32 __PPO___dechargeRate() { return STRUCT_OFFSET(UChargeableComponent, _dechargeRate); } \
	FORCEINLINE static uint32 __PPO___enableAddCharge() { return STRUCT_OFFSET(UChargeableComponent, _enableAddCharge); } \
	FORCEINLINE static uint32 __PPO___enableSkillCheckFailurePenalty() { return STRUCT_OFFSET(UChargeableComponent, _enableSkillCheckFailurePenalty); } \
	FORCEINLINE static uint32 __PPO___isDecharging() { return STRUCT_OFFSET(UChargeableComponent, _isDecharging); } \
	FORCEINLINE static uint32 __PPO___stopDechargingWhenComplete() { return STRUCT_OFFSET(UChargeableComponent, _stopDechargingWhenComplete); }


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_24_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h_26_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UChargeableComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_ChargeableComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
