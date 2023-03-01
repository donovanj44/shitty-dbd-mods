// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef THEEXECUTIONER_Deathbound_generated_h
#error "Deathbound.generated.h already included, missing '#pragma once' in Deathbound.h"
#endif
#define THEEXECUTIONER_Deathbound_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetRevealLocationDuration); \
	DECLARE_FUNCTION(execOnRep_SurvivorsToReveal);


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetRevealLocationDuration); \
	DECLARE_FUNCTION(execOnRep_SurvivorsToReveal);


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_EVENT_PARMS \
	struct Deathbound_eventMakeSurvivorScream_Parms \
	{ \
		const ACamperPlayer* survivor; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDeathbound(); \
	friend struct Z_Construct_UClass_UDeathbound_Statics; \
public: \
	DECLARE_CLASS(UDeathbound, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UDeathbound) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_survivorsToReveal=NETFIELD_REP_START, \
		NETFIELD_REP_END=_survivorsToReveal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUDeathbound(); \
	friend struct Z_Construct_UClass_UDeathbound_Statics; \
public: \
	DECLARE_CLASS(UDeathbound, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(UDeathbound) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_survivorsToReveal=NETFIELD_REP_START, \
		NETFIELD_REP_END=_survivorsToReveal	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDeathbound(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDeathbound) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeathbound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathbound); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeathbound(UDeathbound&&); \
	NO_API UDeathbound(const UDeathbound&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDeathbound(UDeathbound&&); \
	NO_API UDeathbound(const UDeathbound&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDeathbound); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDeathbound); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDeathbound)


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___distanceFromRescuedSurvivorForOblivious() { return STRUCT_OFFSET(UDeathbound, _distanceFromRescuedSurvivorForOblivious); } \
	FORCEINLINE static uint32 __PPO___activationDuration() { return STRUCT_OFFSET(UDeathbound, _activationDuration); } \
	FORCEINLINE static uint32 __PPO___rescueDistanceFromKillerToActivate() { return STRUCT_OFFSET(UDeathbound, _rescueDistanceFromKillerToActivate); } \
	FORCEINLINE static uint32 __PPO___revealLocationDuration() { return STRUCT_OFFSET(UDeathbound, _revealLocationDuration); } \
	FORCEINLINE static uint32 __PPO___unhook() { return STRUCT_OFFSET(UDeathbound, _unhook); } \
	FORCEINLINE static uint32 __PPO___fromDyingState() { return STRUCT_OFFSET(UDeathbound, _fromDyingState); } \
	FORCEINLINE static uint32 __PPO___obliviousStatusEffects() { return STRUCT_OFFSET(UDeathbound, _obliviousStatusEffects); } \
	FORCEINLINE static uint32 __PPO___survivorsToReveal() { return STRUCT_OFFSET(UDeathbound, _survivorsToReveal); }


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_10_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class UDeathbound>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_Deathbound_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
