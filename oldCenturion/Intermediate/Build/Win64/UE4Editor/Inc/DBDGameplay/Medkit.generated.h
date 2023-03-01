// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDGAMEPLAY_Medkit_generated_h
#error "Medkit.generated.h already included, missing '#pragma once' in Medkit.h"
#endif
#define DBDGAMEPLAY_Medkit_generated_h

#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_SPARSE_DATA
#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_RPC_WRAPPERS \
	virtual void OnMedkitHealedCamper_Implementation(ADBDPlayer* healedPlayer); \
 \
	DECLARE_FUNCTION(execAuthority_ConsumeIfNotInteracting); \
	DECLARE_FUNCTION(execAuthority_OnAnyOngoingInteractionChanged); \
	DECLARE_FUNCTION(execAuthority_OnChargeStateChange); \
	DECLARE_FUNCTION(execGetChargeMultiplier); \
	DECLARE_FUNCTION(execHasCharge); \
	DECLARE_FUNCTION(execOnMedkitHealedCamper); \
	DECLARE_FUNCTION(execUseCharge);


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void OnMedkitHealedCamper_Implementation(ADBDPlayer* healedPlayer); \
 \
	DECLARE_FUNCTION(execAuthority_ConsumeIfNotInteracting); \
	DECLARE_FUNCTION(execAuthority_OnAnyOngoingInteractionChanged); \
	DECLARE_FUNCTION(execAuthority_OnChargeStateChange); \
	DECLARE_FUNCTION(execGetChargeMultiplier); \
	DECLARE_FUNCTION(execHasCharge); \
	DECLARE_FUNCTION(execOnMedkitHealedCamper); \
	DECLARE_FUNCTION(execUseCharge);


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_EVENT_PARMS \
	struct Medkit_eventOnMedkitHealedCamper_Parms \
	{ \
		ADBDPlayer* healedPlayer; \
	};


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMedkit(); \
	friend struct Z_Construct_UClass_AMedkit_Statics; \
public: \
	DECLARE_CLASS(AMedkit, ABaseCamperCollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(AMedkit)


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMedkit(); \
	friend struct Z_Construct_UClass_AMedkit_Statics; \
public: \
	DECLARE_CLASS(AMedkit, ABaseCamperCollectable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDGameplay"), NO_API) \
	DECLARE_SERIALIZER(AMedkit)


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMedkit(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMedkit) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedkit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedkit); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedkit(AMedkit&&); \
	NO_API AMedkit(const AMedkit&); \
public:


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMedkit(AMedkit&&); \
	NO_API AMedkit(const AMedkit&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMedkit); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMedkit); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMedkit)


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___akComponent() { return STRUCT_OFFSET(AMedkit, _akComponent); } \
	FORCEINLINE static uint32 __PPO___charger() { return STRUCT_OFFSET(AMedkit, _charger); } \
	FORCEINLINE static uint32 __PPO___dustRingTemplate() { return STRUCT_OFFSET(AMedkit, _dustRingTemplate); } \
	FORCEINLINE static uint32 __PPO___medkitGetAkEvent() { return STRUCT_OFFSET(AMedkit, _medkitGetAkEvent); } \
	FORCEINLINE static uint32 __PPO___medkitDropAkEvent() { return STRUCT_OFFSET(AMedkit, _medkitDropAkEvent); } \
	FORCEINLINE static uint32 __PPO___medkitBank() { return STRUCT_OFFSET(AMedkit, _medkitBank); } \
	FORCEINLINE static uint32 __PPO___healOtherChargeMultiplier() { return STRUCT_OFFSET(AMedkit, _healOtherChargeMultiplier); }


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_13_PROLOG \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_EVENT_PARMS


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_INCLASS \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_SPARSE_DATA \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDGameplay_Public_Medkit_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDGAMEPLAY_API UClass* StaticClass<class AMedkit>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDGameplay_Public_Medkit_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
