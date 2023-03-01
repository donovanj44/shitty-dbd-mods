// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DBDCOMPETENCE_BaseLingeringStatusEffect_generated_h
#error "BaseLingeringStatusEffect.generated.h already included, missing '#pragma once' in BaseLingeringStatusEffect.h"
#endif
#define DBDCOMPETENCE_BaseLingeringStatusEffect_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_ActivateEffect); \
	DECLARE_FUNCTION(execAuthority_DeactivateEffect); \
	DECLARE_FUNCTION(execSetLingerDuration);


#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_ActivateEffect); \
	DECLARE_FUNCTION(execAuthority_DeactivateEffect); \
	DECLARE_FUNCTION(execSetLingerDuration);


#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseLingeringStatusEffect(); \
	friend struct Z_Construct_UClass_UBaseLingeringStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UBaseLingeringStatusEffect, UStatusEffect, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UBaseLingeringStatusEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_INCLASS \
private: \
	static void StaticRegisterNativesUBaseLingeringStatusEffect(); \
	friend struct Z_Construct_UClass_UBaseLingeringStatusEffect_Statics; \
public: \
	DECLARE_CLASS(UBaseLingeringStatusEffect, UStatusEffect, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UBaseLingeringStatusEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseLingeringStatusEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseLingeringStatusEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseLingeringStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseLingeringStatusEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseLingeringStatusEffect(UBaseLingeringStatusEffect&&); \
	NO_API UBaseLingeringStatusEffect(const UBaseLingeringStatusEffect&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseLingeringStatusEffect(UBaseLingeringStatusEffect&&); \
	NO_API UBaseLingeringStatusEffect(const UBaseLingeringStatusEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseLingeringStatusEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseLingeringStatusEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseLingeringStatusEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___lingerDuration() { return STRUCT_OFFSET(UBaseLingeringStatusEffect, _lingerDuration); }


#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_6_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h_8_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UBaseLingeringStatusEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_BaseLingeringStatusEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
