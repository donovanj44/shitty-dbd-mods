// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_TheMettleOfMan_generated_h
#error "TheMettleOfMan.generated.h already included, missing '#pragma once' in TheMettleOfMan.h"
#endif
#define DBDCOMPETENCE_TheMettleOfMan_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentPhase); \
	DECLARE_FUNCTION(execOnRep_NumTokenSoFar);


#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnRep_CurrentPhase); \
	DECLARE_FUNCTION(execOnRep_NumTokenSoFar);


#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTheMettleOfMan(); \
	friend struct Z_Construct_UClass_UTheMettleOfMan_Statics; \
public: \
	DECLARE_CLASS(UTheMettleOfMan, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UTheMettleOfMan) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_numTokenSoFar=NETFIELD_REP_START, \
		_currentPhase, \
		NETFIELD_REP_END=_currentPhase	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUTheMettleOfMan(); \
	friend struct Z_Construct_UClass_UTheMettleOfMan_Statics; \
public: \
	DECLARE_CLASS(UTheMettleOfMan, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UTheMettleOfMan) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_numTokenSoFar=NETFIELD_REP_START, \
		_currentPhase, \
		NETFIELD_REP_END=_currentPhase	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTheMettleOfMan(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTheMettleOfMan) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheMettleOfMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheMettleOfMan); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTheMettleOfMan(UTheMettleOfMan&&); \
	NO_API UTheMettleOfMan(const UTheMettleOfMan&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTheMettleOfMan(UTheMettleOfMan&&); \
	NO_API UTheMettleOfMan(const UTheMettleOfMan&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTheMettleOfMan); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTheMettleOfMan); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTheMettleOfMan)


#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___tokenNeededToActivate() { return STRUCT_OFFSET(UTheMettleOfMan, _tokenNeededToActivate); } \
	FORCEINLINE static uint32 __PPO___revealOutsideRange() { return STRUCT_OFFSET(UTheMettleOfMan, _revealOutsideRange); } \
	FORCEINLINE static uint32 __PPO___mustBeInjured() { return STRUCT_OFFSET(UTheMettleOfMan, _mustBeInjured); } \
	FORCEINLINE static uint32 __PPO___numTokenSoFar() { return STRUCT_OFFSET(UTheMettleOfMan, _numTokenSoFar); } \
	FORCEINLINE static uint32 __PPO___currentPhase() { return STRUCT_OFFSET(UTheMettleOfMan, _currentPhase); } \
	FORCEINLINE static uint32 __PPO___revealToKillerEffect() { return STRUCT_OFFSET(UTheMettleOfMan, _revealToKillerEffect); }


#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_9_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UTheMettleOfMan>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_TheMettleOfMan_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
