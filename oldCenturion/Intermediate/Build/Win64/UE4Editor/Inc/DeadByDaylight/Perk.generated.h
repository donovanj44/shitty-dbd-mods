// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTimerObject;
#ifdef DEADBYDAYLIGHT_Perk_generated_h
#error "Perk.generated.h already included, missing '#pragma once' in Perk.h"
#endif
#define DEADBYDAYLIGHT_Perk_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_12_DELEGATE \
struct _Script_DeadByDaylight_eventPerkOnTokenCountChangedBP_Parms \
{ \
	int32 tokenCount; \
}; \
static inline void FPerkOnTokenCountChangedBP_DelegateWrapper(const FMulticastScriptDelegate& PerkOnTokenCountChangedBP, int32 tokenCount) \
{ \
	_Script_DeadByDaylight_eventPerkOnTokenCountChangedBP_Parms Parms; \
	Parms.tokenCount=tokenCount; \
	PerkOnTokenCountChangedBP.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_DecrementToken); \
	DECLARE_FUNCTION(execAuthority_IncrementToken); \
	DECLARE_FUNCTION(execAuthority_SetIsUsable); \
	DECLARE_FUNCTION(execAuthority_SetMaxTokenCount); \
	DECLARE_FUNCTION(execAuthority_SetTokenCount); \
	DECLARE_FUNCTION(execAuthority_TriggerCooldownTimer); \
	DECLARE_FUNCTION(execAuthority_TriggerHudIconTimer); \
	DECLARE_FUNCTION(execFireActivePerkEvent); \
	DECLARE_FUNCTION(execGetCooldownTimer); \
	DECLARE_FUNCTION(execGetHudIconTimerElapsedTimePercent); \
	DECLARE_FUNCTION(execGetIsUsable); \
	DECLARE_FUNCTION(execGetMaxTokenCount); \
	DECLARE_FUNCTION(execGetPerkLevel); \
	DECLARE_FUNCTION(execGetTokenCount); \
	DECLARE_FUNCTION(execIsCooldownTimerDone); \
	DECLARE_FUNCTION(execIsHudIconTimerDone); \
	DECLARE_FUNCTION(execOnRep_CooldownTimer); \
	DECLARE_FUNCTION(execOnRep_IsUsable); \
	DECLARE_FUNCTION(execOnRep_PerkInitializationData); \
	DECLARE_FUNCTION(execOnRep_PerkLevelData); \
	DECLARE_FUNCTION(execOnRep_TokenCount); \
	DECLARE_FUNCTION(execSetIsUsable);


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_DecrementToken); \
	DECLARE_FUNCTION(execAuthority_IncrementToken); \
	DECLARE_FUNCTION(execAuthority_SetIsUsable); \
	DECLARE_FUNCTION(execAuthority_SetMaxTokenCount); \
	DECLARE_FUNCTION(execAuthority_SetTokenCount); \
	DECLARE_FUNCTION(execAuthority_TriggerCooldownTimer); \
	DECLARE_FUNCTION(execAuthority_TriggerHudIconTimer); \
	DECLARE_FUNCTION(execFireActivePerkEvent); \
	DECLARE_FUNCTION(execGetCooldownTimer); \
	DECLARE_FUNCTION(execGetHudIconTimerElapsedTimePercent); \
	DECLARE_FUNCTION(execGetIsUsable); \
	DECLARE_FUNCTION(execGetMaxTokenCount); \
	DECLARE_FUNCTION(execGetPerkLevel); \
	DECLARE_FUNCTION(execGetTokenCount); \
	DECLARE_FUNCTION(execIsCooldownTimerDone); \
	DECLARE_FUNCTION(execIsHudIconTimerDone); \
	DECLARE_FUNCTION(execOnRep_CooldownTimer); \
	DECLARE_FUNCTION(execOnRep_IsUsable); \
	DECLARE_FUNCTION(execOnRep_PerkInitializationData); \
	DECLARE_FUNCTION(execOnRep_PerkLevelData); \
	DECLARE_FUNCTION(execOnRep_TokenCount); \
	DECLARE_FUNCTION(execSetIsUsable);


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerk(); \
	friend struct Z_Construct_UClass_UPerk_Statics; \
public: \
	DECLARE_CLASS(UPerk, UGameplayModifierContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerk) \
	enum class EArrayDims_Private : uint16 \
	{ \
		PerkLevelData=3, \
	}; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PerkLevelData_STATIC_ARRAY=NETFIELD_REP_START, \
		PerkLevelData_STATIC_ARRAY_END=((uint16)PerkLevelData_STATIC_ARRAY + (uint16)EArrayDims_Private::PerkLevelData - (uint16)1), \
		_isUsable, \
		_perkInitializationData, \
		_tokenCount, \
		_maxTokenCount, \
		_cooldownTimer, \
		_hudIconTimer, \
		NETFIELD_REP_END=_hudIconTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUPerk(); \
	friend struct Z_Construct_UClass_UPerk_Statics; \
public: \
	DECLARE_CLASS(UPerk, UGameplayModifierContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPerk) \
	enum class EArrayDims_Private : uint16 \
	{ \
		PerkLevelData=3, \
	}; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		PerkLevelData_STATIC_ARRAY=NETFIELD_REP_START, \
		PerkLevelData_STATIC_ARRAY_END=((uint16)PerkLevelData_STATIC_ARRAY + (uint16)EArrayDims_Private::PerkLevelData - (uint16)1), \
		_isUsable, \
		_perkInitializationData, \
		_tokenCount, \
		_maxTokenCount, \
		_cooldownTimer, \
		_hudIconTimer, \
		NETFIELD_REP_END=_hudIconTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerk(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerk(UPerk&&); \
	NO_API UPerk(const UPerk&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerk(UPerk&&); \
	NO_API UPerk(const UPerk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerk)


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PerkLevelData() { return STRUCT_OFFSET(UPerk, PerkLevelData); } \
	FORCEINLINE static uint32 __PPO__PerkIconStrategyClass() { return STRUCT_OFFSET(UPerk, PerkIconStrategyClass); } \
	FORCEINLINE static uint32 __PPO__OnTokenCountChangedBP() { return STRUCT_OFFSET(UPerk, OnTokenCountChangedBP); } \
	FORCEINLINE static uint32 __PPO___isUsable() { return STRUCT_OFFSET(UPerk, _isUsable); } \
	FORCEINLINE static uint32 __PPO__BroadcastWhenApplicable() { return STRUCT_OFFSET(UPerk, BroadcastWhenApplicable); } \
	FORCEINLINE static uint32 __PPO__BroadcastOnTimer() { return STRUCT_OFFSET(UPerk, BroadcastOnTimer); } \
	FORCEINLINE static uint32 __PPO__BroadcastCooldownTimer() { return STRUCT_OFFSET(UPerk, BroadcastCooldownTimer); } \
	FORCEINLINE static uint32 __PPO__BroadcastInactiveCooldownTimer() { return STRUCT_OFFSET(UPerk, BroadcastInactiveCooldownTimer); } \
	FORCEINLINE static uint32 __PPO__BroadcastAlways() { return STRUCT_OFFSET(UPerk, BroadcastAlways); } \
	FORCEINLINE static uint32 __PPO___perkIconStrategy() { return STRUCT_OFFSET(UPerk, _perkIconStrategy); } \
	FORCEINLINE static uint32 __PPO___perkInitializationData() { return STRUCT_OFFSET(UPerk, _perkInitializationData); } \
	FORCEINLINE static uint32 __PPO___tokenCount() { return STRUCT_OFFSET(UPerk, _tokenCount); } \
	FORCEINLINE static uint32 __PPO___maxTokenCount() { return STRUCT_OFFSET(UPerk, _maxTokenCount); } \
	FORCEINLINE static uint32 __PPO___cooldownTimer() { return STRUCT_OFFSET(UPerk, _cooldownTimer); } \
	FORCEINLINE static uint32 __PPO___hudIconTimer() { return STRUCT_OFFSET(UPerk, _hudIconTimer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_14_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_Perk_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPerk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_Perk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
