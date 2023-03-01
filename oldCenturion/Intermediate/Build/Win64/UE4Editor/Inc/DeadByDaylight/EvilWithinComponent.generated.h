// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_EvilWithinComponent_generated_h
#error "EvilWithinComponent.generated.h already included, missing '#pragma once' in EvilWithinComponent.h"
#endif
#define DEADBYDAYLIGHT_EvilWithinComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_8_DELEGATE \
struct _Script_DeadByDaylight_eventEvilWithinComponentOnTierChange_Parms \
{ \
	int32 previousTier; \
	int32 currentTier; \
	bool isFirstTime; \
}; \
static inline void FEvilWithinComponentOnTierChange_DelegateWrapper(const FMulticastScriptDelegate& EvilWithinComponentOnTierChange, int32 previousTier, int32 currentTier, bool isFirstTime) \
{ \
	_Script_DeadByDaylight_eventEvilWithinComponentOnTierChange_Parms Parms; \
	Parms.previousTier=previousTier; \
	Parms.currentTier=currentTier; \
	Parms.isFirstTime=isFirstTime ? true : false; \
	EvilWithinComponentOnTierChange.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_NotifyKill); \
	DECLARE_FUNCTION(execAuthority_OnPlayerDisconnect); \
	DECLARE_FUNCTION(execAuthority_OnStalkPointsAdded); \
	DECLARE_FUNCTION(execCanBeStandingKilled); \
	DECLARE_FUNCTION(execCanStandKill); \
	DECLARE_FUNCTION(execGetCurrentTier); \
	DECLARE_FUNCTION(execGetMaxTier); \
	DECLARE_FUNCTION(execGetPercentStalkingPointsInCurrentTier); \
	DECLARE_FUNCTION(execGetRequirementForTier); \
	DECLARE_FUNCTION(execIsAtLastTier); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_CurrentTier);


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_NotifyKill); \
	DECLARE_FUNCTION(execAuthority_OnPlayerDisconnect); \
	DECLARE_FUNCTION(execAuthority_OnStalkPointsAdded); \
	DECLARE_FUNCTION(execCanBeStandingKilled); \
	DECLARE_FUNCTION(execCanStandKill); \
	DECLARE_FUNCTION(execGetCurrentTier); \
	DECLARE_FUNCTION(execGetMaxTier); \
	DECLARE_FUNCTION(execGetPercentStalkingPointsInCurrentTier); \
	DECLARE_FUNCTION(execGetRequirementForTier); \
	DECLARE_FUNCTION(execIsAtLastTier); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnRep_CurrentTier);


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEvilWithinComponent(); \
	friend struct Z_Construct_UClass_UEvilWithinComponent_Statics; \
public: \
	DECLARE_CLASS(UEvilWithinComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UEvilWithinComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentTier=NETFIELD_REP_START, \
		_lastTierTimeStart, \
		NETFIELD_REP_END=_lastTierTimeStart	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUEvilWithinComponent(); \
	friend struct Z_Construct_UClass_UEvilWithinComponent_Statics; \
public: \
	DECLARE_CLASS(UEvilWithinComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UEvilWithinComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentTier=NETFIELD_REP_START, \
		_lastTierTimeStart, \
		NETFIELD_REP_END=_lastTierTimeStart	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEvilWithinComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEvilWithinComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvilWithinComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvilWithinComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvilWithinComponent(UEvilWithinComponent&&); \
	NO_API UEvilWithinComponent(const UEvilWithinComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEvilWithinComponent(UEvilWithinComponent&&); \
	NO_API UEvilWithinComponent(const UEvilWithinComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEvilWithinComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEvilWithinComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEvilWithinComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___currentTier() { return STRUCT_OFFSET(UEvilWithinComponent, _currentTier); } \
	FORCEINLINE static uint32 __PPO___lastTierTimeStart() { return STRUCT_OFFSET(UEvilWithinComponent, _lastTierTimeStart); } \
	FORCEINLINE static uint32 __PPO___allowedSurvivorInteractionsForKill() { return STRUCT_OFFSET(UEvilWithinComponent, _allowedSurvivorInteractionsForKill); }


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UEvilWithinComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EvilWithinComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
