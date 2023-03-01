// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECamperDamageState : uint8;
class ADBDPlayer;
#ifdef DBDCOMPETENCE_DelayedHealEffect_generated_h
#error "DelayedHealEffect.generated.h already included, missing '#pragma once' in DelayedHealEffect.h"
#endif
#define DBDCOMPETENCE_DelayedHealEffect_generated_h

#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnActivationTimerComplete); \
	DECLARE_FUNCTION(execAuthority_OnOwningCamperHealthChanged); \
	DECLARE_FUNCTION(execAuthority_OnOwningCamperPickedUp);


#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnActivationTimerComplete); \
	DECLARE_FUNCTION(execAuthority_OnOwningCamperHealthChanged); \
	DECLARE_FUNCTION(execAuthority_OnOwningCamperPickedUp);


#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDelayedHealEffect(); \
	friend struct Z_Construct_UClass_UDelayedHealEffect_Statics; \
public: \
	DECLARE_CLASS(UDelayedHealEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDelayedHealEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUDelayedHealEffect(); \
	friend struct Z_Construct_UClass_UDelayedHealEffect_Statics; \
public: \
	DECLARE_CLASS(UDelayedHealEffect, UStatusEffect, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDCompetence"), NO_API) \
	DECLARE_SERIALIZER(UDelayedHealEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDelayedHealEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDelayedHealEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDelayedHealEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDelayedHealEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDelayedHealEffect(UDelayedHealEffect&&); \
	NO_API UDelayedHealEffect(const UDelayedHealEffect&); \
public:


#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDelayedHealEffect(UDelayedHealEffect&&); \
	NO_API UDelayedHealEffect(const UDelayedHealEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDelayedHealEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDelayedHealEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDelayedHealEffect)


#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_9_PROLOG
#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_INCLASS \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDCOMPETENCE_API UClass* StaticClass<class UDelayedHealEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDCompetence_Public_DelayedHealEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
