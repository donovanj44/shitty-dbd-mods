// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
#ifdef DBDCOMPETENCE_Surge_generated_h
#error "Surge.generated.h already included, missing '#pragma once' in Surge.h"
#endif
#define DBDCOMPETENCE_Surge_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_RPC_WRAPPERS \
	virtual void Client_TriggerEffects_Implementation(TArray<AGenerator*> const& generators); \
 \
	DECLARE_FUNCTION(execClient_TriggerEffects);


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Client_TriggerEffects_Implementation(TArray<AGenerator*> const& generators); \
 \
	DECLARE_FUNCTION(execClient_TriggerEffects);


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_EVENT_PARMS \
	struct Surge_eventClient_TriggerEffects_Parms \
	{ \
		TArray<AGenerator*> generators; \
	};


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSurge(); \
	friend struct Z_Construct_UClass_USurge_Statics; \
public: \
	DECLARE_CLASS(USurge, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USurge)


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUSurge(); \
	friend struct Z_Construct_UClass_USurge_Statics; \
public: \
	DECLARE_CLASS(USurge, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(USurge)


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USurge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USurge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurge(USurge&&); \
	NO_API USurge(const USurge&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USurge(USurge&&); \
	NO_API USurge(const USurge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USurge); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USurge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USurge)


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___zoneRadius() { return STRUCT_OFFSET(USurge, _zoneRadius); } \
	FORCEINLINE static uint32 __PPO___instantRegression() { return STRUCT_OFFSET(USurge, _instantRegression); } \
	FORCEINLINE static uint32 __PPO___cooldownDuration() { return STRUCT_OFFSET(USurge, _cooldownDuration); } \
	FORCEINLINE static uint32 __PPO___hasCooldown() { return STRUCT_OFFSET(USurge, _hasCooldown); } \
	FORCEINLINE static uint32 __PPO___useTerrorRadiusInsteadOfFixedDistance() { return STRUCT_OFFSET(USurge, _useTerrorRadiusInsteadOfFixedDistance); }


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_8_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_Surge_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class USurge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_Surge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
