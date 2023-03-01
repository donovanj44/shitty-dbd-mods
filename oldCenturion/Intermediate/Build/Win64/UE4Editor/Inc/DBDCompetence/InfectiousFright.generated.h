// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef DBDCOMPETENCE_InfectiousFright_generated_h
#error "InfectiousFright.generated.h already included, missing '#pragma once' in InfectiousFright.h"
#endif
#define DBDCOMPETENCE_InfectiousFright_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_PerkActivationCount);


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_PerkActivationCount);


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_EVENT_PARMS \
	struct InfectiousFright_eventRevealSurvivorLocation_Parms \
	{ \
		ACamperPlayer* target; \
	};


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInfectiousFright(); \
	friend struct Z_Construct_UClass_UInfectiousFright_Statics; \
public: \
	DECLARE_CLASS(UInfectiousFright, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UInfectiousFright) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_perkActivationCount=NETFIELD_REP_START, \
		_revealedSurvivors, \
		NETFIELD_REP_END=_revealedSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUInfectiousFright(); \
	friend struct Z_Construct_UClass_UInfectiousFright_Statics; \
public: \
	DECLARE_CLASS(UInfectiousFright, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UInfectiousFright) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_perkActivationCount=NETFIELD_REP_START, \
		_revealedSurvivors, \
		NETFIELD_REP_END=_revealedSurvivors	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInfectiousFright(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInfectiousFright) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfectiousFright); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfectiousFright); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfectiousFright(UInfectiousFright&&); \
	NO_API UInfectiousFright(const UInfectiousFright&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInfectiousFright(UInfectiousFright&&); \
	NO_API UInfectiousFright(const UInfectiousFright&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInfectiousFright); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInfectiousFright); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInfectiousFright)


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___revealPlayerInTerrorRadius() { return STRUCT_OFFSET(UInfectiousFright, _revealPlayerInTerrorRadius); } \
	FORCEINLINE static uint32 __PPO___perkActivationCount() { return STRUCT_OFFSET(UInfectiousFright, _perkActivationCount); } \
	FORCEINLINE static uint32 __PPO___revealedSurvivors() { return STRUCT_OFFSET(UInfectiousFright, _revealedSurvivors); } \
	FORCEINLINE static uint32 __PPO___targetSurvivor() { return STRUCT_OFFSET(UInfectiousFright, _targetSurvivor); }


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_8_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UInfectiousFright>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_InfectiousFright_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
