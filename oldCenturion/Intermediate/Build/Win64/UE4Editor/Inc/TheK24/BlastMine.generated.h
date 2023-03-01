// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FTransform;
class UInteractionDefinition;
class AGenerator;
#ifdef THEK24_BlastMine_generated_h
#error "BlastMine.generated.h already included, missing '#pragma once' in BlastMine.h"
#endif
#define THEK24_BlastMine_generated_h

#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_SPARSE_DATA
#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_RPC_WRAPPERS \
	virtual void Client_TrapActivatedLoudNotification_Implementation(FTransform location); \
	virtual void Server_OnActionInputPressed_Implementation(AGenerator* generator); \
 \
	DECLARE_FUNCTION(execAuthority_OnRepairProgress); \
	DECLARE_FUNCTION(execClient_TrapActivatedLoudNotification); \
	DECLARE_FUNCTION(execOnRep_CurrentRepairInteractionWithAbility); \
	DECLARE_FUNCTION(execOnRep_TrappedGenerator); \
	DECLARE_FUNCTION(execServer_OnActionInputPressed);


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_TrapActivatedLoudNotification_Implementation(FTransform location); \
	virtual void Server_OnActionInputPressed_Implementation(AGenerator* generator); \
 \
	DECLARE_FUNCTION(execAuthority_OnRepairProgress); \
	DECLARE_FUNCTION(execClient_TrapActivatedLoudNotification); \
	DECLARE_FUNCTION(execOnRep_CurrentRepairInteractionWithAbility); \
	DECLARE_FUNCTION(execOnRep_TrappedGenerator); \
	DECLARE_FUNCTION(execServer_OnActionInputPressed);


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_EVENT_PARMS \
	struct BlastMine_eventClient_TrapActivatedLoudNotification_Parms \
	{ \
		FTransform location; \
	}; \
	struct BlastMine_eventOnActivateExplosion_Parms \
	{ \
		FTransform firecrackerTransform; \
		AGenerator* generator; \
	}; \
	struct BlastMine_eventServer_OnActionInputPressed_Parms \
	{ \
		AGenerator* generator; \
	}; \
	struct BlastMine_eventThrowBubbleIndicator_Cosmetic_Parms \
	{ \
		FTransform location; \
	}; \
	struct BlastMine_eventTrapAttachedToGenerator_Cosmetic_Parms \
	{ \
		AGenerator* trappedGenerator; \
	}; \
	struct BlastMine_eventTrapDettachedToGenerator_Cosmetic_Parms \
	{ \
		AGenerator* trappedGenerator; \
	};


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlastMine(); \
	friend struct Z_Construct_UClass_UBlastMine_Statics; \
public: \
	DECLARE_CLASS(UBlastMine, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UBlastMine) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentRepairInteractionWithAbility=NETFIELD_REP_START, \
		_trappedGenerator, \
		_progressPercent, \
		_trapActivated, \
		_repairTimerDone, \
		NETFIELD_REP_END=_repairTimerDone	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUBlastMine(); \
	friend struct Z_Construct_UClass_UBlastMine_Statics; \
public: \
	DECLARE_CLASS(UBlastMine, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK24"), NO_API) \
	DECLARE_SERIALIZER(UBlastMine) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_currentRepairInteractionWithAbility=NETFIELD_REP_START, \
		_trappedGenerator, \
		_progressPercent, \
		_trapActivated, \
		_repairTimerDone, \
		NETFIELD_REP_END=_repairTimerDone	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlastMine(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlastMine) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlastMine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlastMine); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlastMine(UBlastMine&&); \
	NO_API UBlastMine(const UBlastMine&); \
public:


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlastMine(UBlastMine&&); \
	NO_API UBlastMine(const UBlastMine&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlastMine); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlastMine); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlastMine)


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___firecrackerHeight() { return STRUCT_OFFSET(UBlastMine, _firecrackerHeight); } \
	FORCEINLINE static uint32 __PPO___secondaryActionProperties() { return STRUCT_OFFSET(UBlastMine, _secondaryActionProperties); } \
	FORCEINLINE static uint32 __PPO___secondsToActivatePerk() { return STRUCT_OFFSET(UBlastMine, _secondsToActivatePerk); } \
	FORCEINLINE static uint32 __PPO___kickChargePercentMin() { return STRUCT_OFFSET(UBlastMine, _kickChargePercentMin); } \
	FORCEINLINE static uint32 __PPO___kickChargePercentMax() { return STRUCT_OFFSET(UBlastMine, _kickChargePercentMax); } \
	FORCEINLINE static uint32 __PPO___progressPercentRequirementLevels() { return STRUCT_OFFSET(UBlastMine, _progressPercentRequirementLevels); } \
	FORCEINLINE static uint32 __PPO____generatorTrapDurationLevels() { return STRUCT_OFFSET(UBlastMine, __generatorTrapDurationLevels); } \
	FORCEINLINE static uint32 __PPO___canBeReusedOnTimerExpire() { return STRUCT_OFFSET(UBlastMine, _canBeReusedOnTimerExpire); } \
	FORCEINLINE static uint32 __PPO___canBeReusedAfterTrapActivation() { return STRUCT_OFFSET(UBlastMine, _canBeReusedAfterTrapActivation); } \
	FORCEINLINE static uint32 __PPO___currentRepairInteractionWithAbility() { return STRUCT_OFFSET(UBlastMine, _currentRepairInteractionWithAbility); } \
	FORCEINLINE static uint32 __PPO___trappedGenerator() { return STRUCT_OFFSET(UBlastMine, _trappedGenerator); } \
	FORCEINLINE static uint32 __PPO___progressPercent() { return STRUCT_OFFSET(UBlastMine, _progressPercent); } \
	FORCEINLINE static uint32 __PPO___trapActivated() { return STRUCT_OFFSET(UBlastMine, _trapActivated); } \
	FORCEINLINE static uint32 __PPO___repairTimerDone() { return STRUCT_OFFSET(UBlastMine, _repairTimerDone); } \
	FORCEINLINE static uint32 __PPO___kickInteractionPlayerOwner() { return STRUCT_OFFSET(UBlastMine, _kickInteractionPlayerOwner); } \
	FORCEINLINE static uint32 __PPO___kickInteraction() { return STRUCT_OFFSET(UBlastMine, _kickInteraction); } \
	FORCEINLINE static uint32 __PPO___repairProgressGenerator() { return STRUCT_OFFSET(UBlastMine, _repairProgressGenerator); }


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_14_PROLOG \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_EVENT_PARMS


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_INCLASS \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_SPARSE_DATA \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK24_Public_BlastMine_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK24_API UClass* StaticClass<class UBlastMine>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK24_Public_BlastMine_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
