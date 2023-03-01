// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGameplayTag;
struct FGameEventData;
#ifdef DBDCOMPETENCE_BetterTogether_generated_h
#error "BetterTogether.generated.h already included, missing '#pragma once' in BetterTogether.h"
#endif
#define DBDCOMPETENCE_BetterTogether_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnStartedGeneratorRepair);


#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnStartedGeneratorRepair);


#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBetterTogether(); \
	friend struct Z_Construct_UClass_UBetterTogether_Statics; \
public: \
	DECLARE_CLASS(UBetterTogether, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UBetterTogether)


#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBetterTogether(); \
	friend struct Z_Construct_UClass_UBetterTogether_Statics; \
public: \
	DECLARE_CLASS(UBetterTogether, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UBetterTogether)


#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBetterTogether(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBetterTogether) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterTogether); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterTogether); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBetterTogether(UBetterTogether&&); \
	NO_API UBetterTogether(const UBetterTogether&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBetterTogether(UBetterTogether&&); \
	NO_API UBetterTogether(const UBetterTogether&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBetterTogether); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBetterTogether); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBetterTogether)


#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShouldRevealKiller() { return STRUCT_OFFSET(UBetterTogether, ShouldRevealKiller); } \
	FORCEINLINE static uint32 __PPO__ShouldRevealSurvivors() { return STRUCT_OFFSET(UBetterTogether, ShouldRevealSurvivors); } \
	FORCEINLINE static uint32 __PPO__RevealDistance() { return STRUCT_OFFSET(UBetterTogether, RevealDistance); } \
	FORCEINLINE static uint32 __PPO___affectedCampers() { return STRUCT_OFFSET(UBetterTogether, _affectedCampers); } \
	FORCEINLINE static uint32 __PPO___genToReveal() { return STRUCT_OFFSET(UBetterTogether, _genToReveal); } \
	FORCEINLINE static uint32 __PPO___durationByLevel() { return STRUCT_OFFSET(UBetterTogether, _durationByLevel); }


#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_11_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UBetterTogether>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_BetterTogether_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
