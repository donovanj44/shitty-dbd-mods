// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
#ifdef DBDCOMPETENCE_SoleSurvivor_generated_h
#error "SoleSurvivor.generated.h already included, missing '#pragma once' in SoleSurvivor.h"
#endif
#define DBDCOMPETENCE_SoleSurvivor_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorAdded);


#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorAdded);


#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoleSurvivor(); \
	friend struct Z_Construct_UClass_USoleSurvivor_Statics; \
public: \
	DECLARE_CLASS(USoleSurvivor, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USoleSurvivor)


#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSoleSurvivor(); \
	friend struct Z_Construct_UClass_USoleSurvivor_Statics; \
public: \
	DECLARE_CLASS(USoleSurvivor, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USoleSurvivor)


#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoleSurvivor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoleSurvivor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoleSurvivor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoleSurvivor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoleSurvivor(USoleSurvivor&&); \
	NO_API USoleSurvivor(const USoleSurvivor&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoleSurvivor(USoleSurvivor&&); \
	NO_API USoleSurvivor(const USoleSurvivor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoleSurvivor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoleSurvivor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoleSurvivor)


#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___auraHideDistancePerDeadOrDisconnectedSurvivor() { return STRUCT_OFFSET(USoleSurvivor, _auraHideDistancePerDeadOrDisconnectedSurvivor); } \
	FORCEINLINE static uint32 __PPO___otherSurvivors() { return STRUCT_OFFSET(USoleSurvivor, _otherSurvivors); }


#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_8_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class USoleSurvivor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_SoleSurvivor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
