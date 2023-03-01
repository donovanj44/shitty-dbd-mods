// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FColor;
class AInteractable;
#ifdef DEADBYDAYLIGHT_SurvivorPlagueEffect_generated_h
#error "SurvivorPlagueEffect.generated.h already included, missing '#pragma once' in SurvivorPlagueEffect.h"
#endif
#define DEADBYDAYLIGHT_SurvivorPlagueEffect_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_RPC_WRAPPERS \
	virtual void Multicast_AddOnScreenDebugMessage_Implementation(uint64 key, float duration, FColor displayColor, const FString& debugMessage); \
	virtual void Multicast_OnMaxSicknessReached_Implementation(); \
	virtual void Multicast_OnSicknessChanged_Implementation(float newSickness); \
	virtual void Multicast_OnSicknessCured_Implementation(); \
	virtual void Multicast_OnSurvivorBecomesInfected_Implementation(); \
	virtual void Multicast_OnSurvivorVomit_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_AddSickness); \
	DECLARE_FUNCTION(execAuthority_OnHitBySuperVomitProjectile); \
	DECLARE_FUNCTION(execAuthority_OnHitByVomitProjectile); \
	DECLARE_FUNCTION(execAuthority_OnHitByVomitProjectileAesthetic); \
	DECLARE_FUNCTION(execAuthority_ResetSickness); \
	DECLARE_FUNCTION(execGetMaxSicknessLevel); \
	DECLARE_FUNCTION(execGetSicknessAmount); \
	DECLARE_FUNCTION(execGetSicknessLevel); \
	DECLARE_FUNCTION(execGetSicknessPercentage); \
	DECLARE_FUNCTION(execGetSicknessThresholds); \
	DECLARE_FUNCTION(execHasMaxLevelSickness); \
	DECLARE_FUNCTION(execIsDebugModeActive); \
	DECLARE_FUNCTION(execIsInfected); \
	DECLARE_FUNCTION(execMulticast_AddOnScreenDebugMessage); \
	DECLARE_FUNCTION(execMulticast_OnMaxSicknessReached); \
	DECLARE_FUNCTION(execMulticast_OnSicknessChanged); \
	DECLARE_FUNCTION(execMulticast_OnSicknessCured); \
	DECLARE_FUNCTION(execMulticast_OnSurvivorBecomesInfected); \
	DECLARE_FUNCTION(execMulticast_OnSurvivorVomit); \
	DECLARE_FUNCTION(execOnHitByVomit); \
	DECLARE_FUNCTION(execRefreshSicknessGainValues);


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_AddOnScreenDebugMessage_Implementation(uint64 key, float duration, FColor displayColor, const FString& debugMessage); \
	virtual void Multicast_OnMaxSicknessReached_Implementation(); \
	virtual void Multicast_OnSicknessChanged_Implementation(float newSickness); \
	virtual void Multicast_OnSicknessCured_Implementation(); \
	virtual void Multicast_OnSurvivorBecomesInfected_Implementation(); \
	virtual void Multicast_OnSurvivorVomit_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_AddSickness); \
	DECLARE_FUNCTION(execAuthority_OnHitBySuperVomitProjectile); \
	DECLARE_FUNCTION(execAuthority_OnHitByVomitProjectile); \
	DECLARE_FUNCTION(execAuthority_OnHitByVomitProjectileAesthetic); \
	DECLARE_FUNCTION(execAuthority_ResetSickness); \
	DECLARE_FUNCTION(execGetMaxSicknessLevel); \
	DECLARE_FUNCTION(execGetSicknessAmount); \
	DECLARE_FUNCTION(execGetSicknessLevel); \
	DECLARE_FUNCTION(execGetSicknessPercentage); \
	DECLARE_FUNCTION(execGetSicknessThresholds); \
	DECLARE_FUNCTION(execHasMaxLevelSickness); \
	DECLARE_FUNCTION(execIsDebugModeActive); \
	DECLARE_FUNCTION(execIsInfected); \
	DECLARE_FUNCTION(execMulticast_AddOnScreenDebugMessage); \
	DECLARE_FUNCTION(execMulticast_OnMaxSicknessReached); \
	DECLARE_FUNCTION(execMulticast_OnSicknessChanged); \
	DECLARE_FUNCTION(execMulticast_OnSicknessCured); \
	DECLARE_FUNCTION(execMulticast_OnSurvivorBecomesInfected); \
	DECLARE_FUNCTION(execMulticast_OnSurvivorVomit); \
	DECLARE_FUNCTION(execOnHitByVomit); \
	DECLARE_FUNCTION(execRefreshSicknessGainValues);


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_EVENT_PARMS \
	struct SurvivorPlagueEffect_eventAuthority_InfectInteractable_Parms \
	{ \
		AInteractable* interactable; \
	}; \
	struct SurvivorPlagueEffect_eventMulticast_AddOnScreenDebugMessage_Parms \
	{ \
		uint64 key; \
		float duration; \
		FColor displayColor; \
		FString debugMessage; \
	}; \
	struct SurvivorPlagueEffect_eventMulticast_OnSicknessChanged_Parms \
	{ \
		float newSickness; \
	}; \
	struct SurvivorPlagueEffect_eventOnSicknessChanged_Aesthetic_Parms \
	{ \
		float newSickness; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurvivorPlagueEffect(); \
	friend struct Z_Construct_UClass_USurvivorPlagueEffect_Statics; \
public: \
	DECLARE_CLASS(USurvivorPlagueEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USurvivorPlagueEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_sicknessAmount=NETFIELD_REP_START, \
		_wasRecentlyHitByVomit, \
		_debugMode, \
		NETFIELD_REP_END=_debugMode	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUSurvivorPlagueEffect(); \
	friend struct Z_Construct_UClass_USurvivorPlagueEffect_Statics; \
public: \
	DECLARE_CLASS(USurvivorPlagueEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(USurvivorPlagueEffect) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_sicknessAmount=NETFIELD_REP_START, \
		_wasRecentlyHitByVomit, \
		_debugMode, \
		NETFIELD_REP_END=_debugMode	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurvivorPlagueEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurvivorPlagueEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorPlagueEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorPlagueEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorPlagueEffect(USurvivorPlagueEffect&&); \
	NO_API USurvivorPlagueEffect(const USurvivorPlagueEffect&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurvivorPlagueEffect(USurvivorPlagueEffect&&); \
	NO_API USurvivorPlagueEffect(const USurvivorPlagueEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurvivorPlagueEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurvivorPlagueEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurvivorPlagueEffect)


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___sicknessAmount() { return STRUCT_OFFSET(USurvivorPlagueEffect, _sicknessAmount); } \
	FORCEINLINE static uint32 __PPO___sicknessCap() { return STRUCT_OFFSET(USurvivorPlagueEffect, _sicknessCap); } \
	FORCEINLINE static uint32 __PPO___vomitSlowDuration() { return STRUCT_OFFSET(USurvivorPlagueEffect, _vomitSlowDuration); } \
	FORCEINLINE static uint32 __PPO___vomitSlowAmount() { return STRUCT_OFFSET(USurvivorPlagueEffect, _vomitSlowAmount); } \
	FORCEINLINE static uint32 __PPO___sicknessThresholds() { return STRUCT_OFFSET(USurvivorPlagueEffect, _sicknessThresholds); } \
	FORCEINLINE static uint32 __PPO___wasRecentlyHitByVomit() { return STRUCT_OFFSET(USurvivorPlagueEffect, _wasRecentlyHitByVomit); } \
	FORCEINLINE static uint32 __PPO___nonNauseatingInteractions() { return STRUCT_OFFSET(USurvivorPlagueEffect, _nonNauseatingInteractions); } \
	FORCEINLINE static uint32 __PPO___sicknessGainPerSecondFromInfectedInteractable() { return STRUCT_OFFSET(USurvivorPlagueEffect, _sicknessGainPerSecondFromInfectedInteractable); } \
	FORCEINLINE static uint32 __PPO___debugMode() { return STRUCT_OFFSET(USurvivorPlagueEffect, _debugMode); }


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_10_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class USurvivorPlagueEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_SurvivorPlagueEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
