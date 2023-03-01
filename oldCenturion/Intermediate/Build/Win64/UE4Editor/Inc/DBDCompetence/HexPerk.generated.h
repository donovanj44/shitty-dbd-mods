// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
enum class EDBDScoreTypes : uint8;
class AActor;
class ATotem;
#ifdef DBDCOMPETENCE_HexPerk_generated_h
#error "HexPerk.generated.h already included, missing '#pragma once' in HexPerk.h"
#endif
#define DBDCOMPETENCE_HexPerk_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_RPC_WRAPPERS \
	virtual void ReceiveGameplayEvent_Implementation(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target); \
 \
	DECLARE_FUNCTION(execAuthority_RevealCurseToAllSurvivors); \
	DECLARE_FUNCTION(execAuthority_SetCurseRevealedToPlayer); \
	DECLARE_FUNCTION(execIsCurseRevealedToPlayer); \
	DECLARE_FUNCTION(execOnHexPerkGameplayEvent); \
	DECLARE_FUNCTION(execOnRep_PlayersWhoKnowCurse); \
	DECLARE_FUNCTION(execReceiveGameplayEvent); \
	DECLARE_FUNCTION(execUpdateCursedStatusViewOnLocalPlayer);


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveGameplayEvent_Implementation(EDBDScoreTypes gameplayEventType, float amount, AActor* instigator, AActor* target); \
 \
	DECLARE_FUNCTION(execAuthority_RevealCurseToAllSurvivors); \
	DECLARE_FUNCTION(execAuthority_SetCurseRevealedToPlayer); \
	DECLARE_FUNCTION(execIsCurseRevealedToPlayer); \
	DECLARE_FUNCTION(execOnHexPerkGameplayEvent); \
	DECLARE_FUNCTION(execOnRep_PlayersWhoKnowCurse); \
	DECLARE_FUNCTION(execReceiveGameplayEvent); \
	DECLARE_FUNCTION(execUpdateCursedStatusViewOnLocalPlayer);


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_EVENT_PARMS \
	struct HexPerk_eventAuthority_Reactivate_BP_Parms \
	{ \
		ATotem* totem; \
	}; \
	struct HexPerk_eventReceiveGameplayEvent_Parms \
	{ \
		EDBDScoreTypes gameplayEventType; \
		float amount; \
		AActor* instigator; \
		AActor* target; \
	};


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHexPerk(); \
	friend struct Z_Construct_UClass_UHexPerk_Statics; \
public: \
	DECLARE_CLASS(UHexPerk, UTotemBoundPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UHexPerk) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_playersWhoKnowCurse=NETFIELD_REP_START, \
		NETFIELD_REP_END=_playersWhoKnowCurse	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUHexPerk(); \
	friend struct Z_Construct_UClass_UHexPerk_Statics; \
public: \
	DECLARE_CLASS(UHexPerk, UTotemBoundPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UHexPerk) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_playersWhoKnowCurse=NETFIELD_REP_START, \
		NETFIELD_REP_END=_playersWhoKnowCurse	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHexPerk(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHexPerk) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHexPerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHexPerk); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHexPerk(UHexPerk&&); \
	NO_API UHexPerk(const UHexPerk&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHexPerk(UHexPerk&&); \
	NO_API UHexPerk(const UHexPerk&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHexPerk); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHexPerk); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHexPerk)


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___playersWhoKnowCurse() { return STRUCT_OFFSET(UHexPerk, _playersWhoKnowCurse); }


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_11_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UHexPerk>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_HexPerk_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
