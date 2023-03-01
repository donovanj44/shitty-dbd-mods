// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDINTERACTION_ActivePhaseWalkInteraction_generated_h
#error "ActivePhaseWalkInteraction.generated.h already included, missing '#pragma once' in ActivePhaseWalkInteraction.h"
#endif
#define DBDINTERACTION_ActivePhaseWalkInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetChargeTime); \
	DECLARE_FUNCTION(execOnPlayerLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnPowerCollected);


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetChargeTime); \
	DECLARE_FUNCTION(execOnPlayerLocallyObservedChanged); \
	DECLARE_FUNCTION(execOnPowerCollected);


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_EVENT_PARMS \
	struct ActivePhaseWalkInteraction_eventCosmetic_ResetChargeVFX_Parms \
	{ \
		ADBDPlayer* player; \
	};


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUActivePhaseWalkInteraction(); \
	friend struct Z_Construct_UClass_UActivePhaseWalkInteraction_Statics; \
public: \
	DECLARE_CLASS(UActivePhaseWalkInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UActivePhaseWalkInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUActivePhaseWalkInteraction(); \
	friend struct Z_Construct_UClass_UActivePhaseWalkInteraction_Statics; \
public: \
	DECLARE_CLASS(UActivePhaseWalkInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UActivePhaseWalkInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UActivePhaseWalkInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UActivePhaseWalkInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivePhaseWalkInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivePhaseWalkInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivePhaseWalkInteraction(UActivePhaseWalkInteraction&&); \
	NO_API UActivePhaseWalkInteraction(const UActivePhaseWalkInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UActivePhaseWalkInteraction(UActivePhaseWalkInteraction&&); \
	NO_API UActivePhaseWalkInteraction(const UActivePhaseWalkInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UActivePhaseWalkInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UActivePhaseWalkInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UActivePhaseWalkInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___fullyChargedSpeed() { return STRUCT_OFFSET(UActivePhaseWalkInteraction, _fullyChargedSpeed); } \
	FORCEINLINE static uint32 __PPO___chargingSpeedCurve() { return STRUCT_OFFSET(UActivePhaseWalkInteraction, _chargingSpeedCurve); } \
	FORCEINLINE static uint32 __PPO___phaseWalkPenaltyThreshold() { return STRUCT_OFFSET(UActivePhaseWalkInteraction, _phaseWalkPenaltyThreshold); } \
	FORCEINLINE static uint32 __PPO___phaseWalkPenaltyValue() { return STRUCT_OFFSET(UActivePhaseWalkInteraction, _phaseWalkPenaltyValue); } \
	FORCEINLINE static uint32 __PPO___activePhaseWalkChargeDuration() { return STRUCT_OFFSET(UActivePhaseWalkInteraction, _activePhaseWalkChargeDuration); } \
	FORCEINLINE static uint32 __PPO___activePhaseWalkChargingMontage() { return STRUCT_OFFSET(UActivePhaseWalkInteraction, _activePhaseWalkChargingMontage); }


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_12_PROLOG \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_EVENT_PARMS


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UActivePhaseWalkInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_ActivePhaseWalkInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
