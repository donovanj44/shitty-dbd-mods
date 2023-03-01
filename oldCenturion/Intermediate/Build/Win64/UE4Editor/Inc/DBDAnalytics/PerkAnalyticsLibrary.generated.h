// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDANALYTICS_PerkAnalyticsLibrary_generated_h
#error "PerkAnalyticsLibrary.generated.h already included, missing '#pragma once' in PerkAnalyticsLibrary.h"
#endif
#define DBDANALYTICS_PerkAnalyticsLibrary_generated_h

#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSendFranklinsConsumeItemAnalytics); \
	DECLARE_FUNCTION(execSendFranklinsHitSurvivorNearDroppedItemAnalytics); \
	DECLARE_FUNCTION(execSendKnockoutSurvivorFoundAnalytics); \
	DECLARE_FUNCTION(execSendLightbornAuraRevealedAnalytics); \
	DECLARE_FUNCTION(execSendTinkererUndetectableHitNearGeneratorAnalytics); \
	DECLARE_FUNCTION(execSendTinkererUndetectableInterruptAnalytics);


#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSendFranklinsConsumeItemAnalytics); \
	DECLARE_FUNCTION(execSendFranklinsHitSurvivorNearDroppedItemAnalytics); \
	DECLARE_FUNCTION(execSendKnockoutSurvivorFoundAnalytics); \
	DECLARE_FUNCTION(execSendLightbornAuraRevealedAnalytics); \
	DECLARE_FUNCTION(execSendTinkererUndetectableHitNearGeneratorAnalytics); \
	DECLARE_FUNCTION(execSendTinkererUndetectableInterruptAnalytics);


#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPerkAnalyticsLibrary(); \
	friend struct Z_Construct_UClass_UPerkAnalyticsLibrary_Statics; \
public: \
	DECLARE_CLASS(UPerkAnalyticsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UPerkAnalyticsLibrary)


#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUPerkAnalyticsLibrary(); \
	friend struct Z_Construct_UClass_UPerkAnalyticsLibrary_Statics; \
public: \
	DECLARE_CLASS(UPerkAnalyticsLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DBDAnalytics"), NO_API) \
	DECLARE_SERIALIZER(UPerkAnalyticsLibrary)


#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPerkAnalyticsLibrary(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPerkAnalyticsLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkAnalyticsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkAnalyticsLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkAnalyticsLibrary(UPerkAnalyticsLibrary&&); \
	NO_API UPerkAnalyticsLibrary(const UPerkAnalyticsLibrary&); \
public:


#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPerkAnalyticsLibrary(UPerkAnalyticsLibrary&&); \
	NO_API UPerkAnalyticsLibrary(const UPerkAnalyticsLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPerkAnalyticsLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPerkAnalyticsLibrary); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPerkAnalyticsLibrary)


#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_8_PROLOG
#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_INCLASS \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDANALYTICS_API UClass* StaticClass<class UPerkAnalyticsLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDAnalytics_Public_PerkAnalyticsLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
