// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_ThrillingTremors_generated_h
#error "ThrillingTremors.generated.h already included, missing '#pragma once' in ThrillingTremors.h"
#endif
#define DBDCOMPETENCE_ThrillingTremors_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_BlockedGenerators);


#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_BlockedGenerators);


#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUThrillingTremors(); \
	friend struct Z_Construct_UClass_UThrillingTremors_Statics; \
public: \
	DECLARE_CLASS(UThrillingTremors, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UThrillingTremors) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_blockedGenerators=NETFIELD_REP_START, \
		NETFIELD_REP_END=_blockedGenerators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUThrillingTremors(); \
	friend struct Z_Construct_UClass_UThrillingTremors_Statics; \
public: \
	DECLARE_CLASS(UThrillingTremors, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UThrillingTremors) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_blockedGenerators=NETFIELD_REP_START, \
		NETFIELD_REP_END=_blockedGenerators	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UThrillingTremors(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UThrillingTremors) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrillingTremors); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrillingTremors); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrillingTremors(UThrillingTremors&&); \
	NO_API UThrillingTremors(const UThrillingTremors&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UThrillingTremors(UThrillingTremors&&); \
	NO_API UThrillingTremors(const UThrillingTremors&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UThrillingTremors); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UThrillingTremors); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UThrillingTremors)


#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cooldownByLevel() { return STRUCT_OFFSET(UThrillingTremors, _cooldownByLevel); } \
	FORCEINLINE static uint32 __PPO___durationByLevel() { return STRUCT_OFFSET(UThrillingTremors, _durationByLevel); } \
	FORCEINLINE static uint32 __PPO___disableWhenSurvivorPutDownOrUnhooked() { return STRUCT_OFFSET(UThrillingTremors, _disableWhenSurvivorPutDownOrUnhooked); } \
	FORCEINLINE static uint32 __PPO___generatorAuraColorForKiller() { return STRUCT_OFFSET(UThrillingTremors, _generatorAuraColorForKiller); } \
	FORCEINLINE static uint32 __PPO___blockedGenerators() { return STRUCT_OFFSET(UThrillingTremors, _blockedGenerators); } \
	FORCEINLINE static uint32 __PPO___revealedGenerators() { return STRUCT_OFFSET(UThrillingTremors, _revealedGenerators); }


#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_9_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UThrillingTremors>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_ThrillingTremors_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
