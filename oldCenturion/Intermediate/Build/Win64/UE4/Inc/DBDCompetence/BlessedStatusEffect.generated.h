// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class ATotem;
#ifdef DBDCOMPETENCE_BlessedStatusEffect_generated_h
#error "BlessedStatusEffect.generated.h already included, missing '#pragma once' in BlessedStatusEffect.h"
#endif
#define DBDCOMPETENCE_BlessedStatusEffect_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorRemovedFromGame); \
	DECLARE_FUNCTION(execGetBoonTotemBlessingRange); \
	DECLARE_FUNCTION(execGetBoundTotem);


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorRemovedFromGame); \
	DECLARE_FUNCTION(execGetBoonTotemBlessingRange); \
	DECLARE_FUNCTION(execGetBoundTotem);


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_EVENT_PARMS
#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBlessedStatusEffect(); \
	friend struct Z_Construct_UClass_UBlessedStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UBlessedStatusEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UBlessedStatusEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUBlessedStatusEffect(); \
	friend struct Z_Construct_UClass_UBlessedStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UBlessedStatusEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UBlessedStatusEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBlessedStatusEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBlessedStatusEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlessedStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlessedStatusEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlessedStatusEffect(UBlessedStatusEffect&&); \
	NO_API UBlessedStatusEffect(const UBlessedStatusEffect&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBlessedStatusEffect(UBlessedStatusEffect&&); \
	NO_API UBlessedStatusEffect(const UBlessedStatusEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBlessedStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBlessedStatusEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBlessedStatusEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___vignetteControllerBlueprint() { return STRUCT_OFFSET(UBlessedStatusEffect, _vignetteControllerBlueprint); }


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_11_PROLOG \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_EVENT_PARMS


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UBlessedStatusEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_BlessedStatusEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
