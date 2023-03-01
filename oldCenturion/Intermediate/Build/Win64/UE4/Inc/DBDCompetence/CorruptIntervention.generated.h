// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_CorruptIntervention_generated_h
#error "CorruptIntervention.generated.h already included, missing '#pragma once' in CorruptIntervention.h"
#endif
#define DBDCOMPETENCE_CorruptIntervention_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_RPC_WRAPPERS \
	virtual bool Server_ActivatePerk_Validate(); \
	virtual void Server_ActivatePerk_Implementation(); \
 \
	DECLARE_FUNCTION(execLocal_OnIntroCompleted); \
	DECLARE_FUNCTION(execOnRep_BlockedGenerators); \
	DECLARE_FUNCTION(execServer_ActivatePerk);


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Server_ActivatePerk_Validate(); \
	virtual void Server_ActivatePerk_Implementation(); \
 \
	DECLARE_FUNCTION(execLocal_OnIntroCompleted); \
	DECLARE_FUNCTION(execOnRep_BlockedGenerators); \
	DECLARE_FUNCTION(execServer_ActivatePerk);


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_EVENT_PARMS
#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUCorruptIntervention(); \
	friend struct Z_Construct_UClass_UCorruptIntervention_Statics; \
public: \
	DECLARE_CLASS(UCorruptIntervention, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UCorruptIntervention) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_blockedGenerators=NETFIELD_REP_START, \
		NETFIELD_REP_END=_blockedGenerators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUCorruptIntervention(); \
	friend struct Z_Construct_UClass_UCorruptIntervention_Statics; \
public: \
	DECLARE_CLASS(UCorruptIntervention, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UCorruptIntervention) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_blockedGenerators=NETFIELD_REP_START, \
		NETFIELD_REP_END=_blockedGenerators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UCorruptIntervention(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UCorruptIntervention) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorruptIntervention); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorruptIntervention); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorruptIntervention(UCorruptIntervention&&); \
	NO_API UCorruptIntervention(const UCorruptIntervention&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UCorruptIntervention(UCorruptIntervention&&); \
	NO_API UCorruptIntervention(const UCorruptIntervention&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UCorruptIntervention); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UCorruptIntervention); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UCorruptIntervention)


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___blockedGeneratorCount() { return STRUCT_OFFSET(UCorruptIntervention, _blockedGeneratorCount); } \
	FORCEINLINE static uint32 __PPO___generatorBlockDuration() { return STRUCT_OFFSET(UCorruptIntervention, _generatorBlockDuration); } \
	FORCEINLINE static uint32 __PPO___generatorAuraColorForKiller() { return STRUCT_OFFSET(UCorruptIntervention, _generatorAuraColorForKiller); } \
	FORCEINLINE static uint32 __PPO___blockedGenerators() { return STRUCT_OFFSET(UCorruptIntervention, _blockedGenerators); }


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_9_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UCorruptIntervention>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_CorruptIntervention_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
