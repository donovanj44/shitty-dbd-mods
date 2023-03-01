// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EPlayerRole : uint8;
class ADBDBasePlayer;
class ADBDPlayer;
#ifdef DEADBYDAYLIGHT_DBDCharacterUtilities_generated_h
#error "DBDCharacterUtilities.generated.h already included, missing '#pragma once' in DBDCharacterUtilities.h"
#endif
#define DEADBYDAYLIGHT_DBDCharacterUtilities_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLocallyObservedPlayerRole); \
	DECLARE_FUNCTION(execIsAceVisconti); \
	DECLARE_FUNCTION(execIsAdamFrancis); \
	DECLARE_FUNCTION(execIsAshleyWilliams); \
	DECLARE_FUNCTION(execIsClaudetteMorel); \
	DECLARE_FUNCTION(execIsDavidKing); \
	DECLARE_FUNCTION(execIsDavidTapp); \
	DECLARE_FUNCTION(execIsDwightFairfield); \
	DECLARE_FUNCTION(execIsFengMin); \
	DECLARE_FUNCTION(execIsInDreamworld); \
	DECLARE_FUNCTION(execIsJakePark); \
	DECLARE_FUNCTION(execIsJaneRomero); \
	DECLARE_FUNCTION(execIsJeffJohansen); \
	DECLARE_FUNCTION(execIsKateDenson); \
	DECLARE_FUNCTION(execIsLaurieStrode); \
	DECLARE_FUNCTION(execIsMegThomas); \
	DECLARE_FUNCTION(execIsNancyWheeler); \
	DECLARE_FUNCTION(execIsNeaKarlsson); \
	DECLARE_FUNCTION(execIsPlague); \
	DECLARE_FUNCTION(execIsQuentinSmith); \
	DECLARE_FUNCTION(execIsSlasherLocallyObserved); \
	DECLARE_FUNCTION(execIsSteveHarrington); \
	DECLARE_FUNCTION(execIsTheBlight); \
	DECLARE_FUNCTION(execIsTheCannibal); \
	DECLARE_FUNCTION(execIsTheClown); \
	DECLARE_FUNCTION(execIsTheDemogorgon); \
	DECLARE_FUNCTION(execIsTheDoctor); \
	DECLARE_FUNCTION(execIsTheExecutioner); \
	DECLARE_FUNCTION(execIsTheGhost); \
	DECLARE_FUNCTION(execIsTheHag); \
	DECLARE_FUNCTION(execIsTheHillBilly); \
	DECLARE_FUNCTION(execIsTheHuntress); \
	DECLARE_FUNCTION(execIsTheLegion); \
	DECLARE_FUNCTION(execIsTheNightmare); \
	DECLARE_FUNCTION(execIsTheNurse); \
	DECLARE_FUNCTION(execIsTheOni); \
	DECLARE_FUNCTION(execIsThePig); \
	DECLARE_FUNCTION(execIsTheShape); \
	DECLARE_FUNCTION(execIsTheSpirit); \
	DECLARE_FUNCTION(execIsTheTrapper); \
	DECLARE_FUNCTION(execIsTheTrickster); \
	DECLARE_FUNCTION(execIsTheTwins); \
	DECLARE_FUNCTION(execIsTheTwins_Brother); \
	DECLARE_FUNCTION(execIsTheTwins_Sister); \
	DECLARE_FUNCTION(execIsTheWraith); \
	DECLARE_FUNCTION(execIsWilliamBillOverbeck);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLocallyObservedPlayerRole); \
	DECLARE_FUNCTION(execIsAceVisconti); \
	DECLARE_FUNCTION(execIsAdamFrancis); \
	DECLARE_FUNCTION(execIsAshleyWilliams); \
	DECLARE_FUNCTION(execIsClaudetteMorel); \
	DECLARE_FUNCTION(execIsDavidKing); \
	DECLARE_FUNCTION(execIsDavidTapp); \
	DECLARE_FUNCTION(execIsDwightFairfield); \
	DECLARE_FUNCTION(execIsFengMin); \
	DECLARE_FUNCTION(execIsInDreamworld); \
	DECLARE_FUNCTION(execIsJakePark); \
	DECLARE_FUNCTION(execIsJaneRomero); \
	DECLARE_FUNCTION(execIsJeffJohansen); \
	DECLARE_FUNCTION(execIsKateDenson); \
	DECLARE_FUNCTION(execIsLaurieStrode); \
	DECLARE_FUNCTION(execIsMegThomas); \
	DECLARE_FUNCTION(execIsNancyWheeler); \
	DECLARE_FUNCTION(execIsNeaKarlsson); \
	DECLARE_FUNCTION(execIsPlague); \
	DECLARE_FUNCTION(execIsQuentinSmith); \
	DECLARE_FUNCTION(execIsSlasherLocallyObserved); \
	DECLARE_FUNCTION(execIsSteveHarrington); \
	DECLARE_FUNCTION(execIsTheBlight); \
	DECLARE_FUNCTION(execIsTheCannibal); \
	DECLARE_FUNCTION(execIsTheClown); \
	DECLARE_FUNCTION(execIsTheDemogorgon); \
	DECLARE_FUNCTION(execIsTheDoctor); \
	DECLARE_FUNCTION(execIsTheExecutioner); \
	DECLARE_FUNCTION(execIsTheGhost); \
	DECLARE_FUNCTION(execIsTheHag); \
	DECLARE_FUNCTION(execIsTheHillBilly); \
	DECLARE_FUNCTION(execIsTheHuntress); \
	DECLARE_FUNCTION(execIsTheLegion); \
	DECLARE_FUNCTION(execIsTheNightmare); \
	DECLARE_FUNCTION(execIsTheNurse); \
	DECLARE_FUNCTION(execIsTheOni); \
	DECLARE_FUNCTION(execIsThePig); \
	DECLARE_FUNCTION(execIsTheShape); \
	DECLARE_FUNCTION(execIsTheSpirit); \
	DECLARE_FUNCTION(execIsTheTrapper); \
	DECLARE_FUNCTION(execIsTheTrickster); \
	DECLARE_FUNCTION(execIsTheTwins); \
	DECLARE_FUNCTION(execIsTheTwins_Brother); \
	DECLARE_FUNCTION(execIsTheTwins_Sister); \
	DECLARE_FUNCTION(execIsTheWraith); \
	DECLARE_FUNCTION(execIsWilliamBillOverbeck);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDCharacterUtilities(); \
	friend struct Z_Construct_UClass_UDBDCharacterUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDCharacterUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDCharacterUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDBDCharacterUtilities(); \
	friend struct Z_Construct_UClass_UDBDCharacterUtilities_Statics; \
public: \
	DECLARE_CLASS(UDBDCharacterUtilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDCharacterUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDCharacterUtilities(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDCharacterUtilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDCharacterUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDCharacterUtilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDCharacterUtilities(UDBDCharacterUtilities&&); \
	NO_API UDBDCharacterUtilities(const UDBDCharacterUtilities&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDCharacterUtilities(UDBDCharacterUtilities&&); \
	NO_API UDBDCharacterUtilities(const UDBDCharacterUtilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDCharacterUtilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDCharacterUtilities); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDCharacterUtilities)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDCharacterUtilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDCharacterUtilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
