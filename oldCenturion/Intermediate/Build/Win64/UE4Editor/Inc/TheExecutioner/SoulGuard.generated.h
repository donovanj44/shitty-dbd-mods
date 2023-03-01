// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCamperHealResult;
#ifdef THEEXECUTIONER_SoulGuard_generated_h
#error "SoulGuard.generated.h already included, missing '#pragma once' in SoulGuard.h"
#endif
#define THEEXECUTIONER_SoulGuard_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorHealed);


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnSurvivorHealed);


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_EVENT_PARMS
#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSoulGuard(); \
	friend struct Z_Construct_UClass_USoulGuard_Statics; \
public: \
	DECLARE_CLASS(USoulGuard, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(USoulGuard)


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_INCLASS \
private: \
	static void StaticRegisterNativesUSoulGuard(); \
	friend struct Z_Construct_UClass_USoulGuard_Statics; \
public: \
	DECLARE_CLASS(USoulGuard, UPerk, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(USoulGuard)


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USoulGuard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USoulGuard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoulGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoulGuard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoulGuard(USoulGuard&&); \
	NO_API USoulGuard(const USoulGuard&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USoulGuard(USoulGuard&&); \
	NO_API USoulGuard(const USoulGuard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USoulGuard); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USoulGuard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USoulGuard)


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cooldownLevels() { return STRUCT_OFFSET(USoulGuard, _cooldownLevels); } \
	FORCEINLINE static uint32 __PPO___recover() { return STRUCT_OFFSET(USoulGuard, _recover); } \
	FORCEINLINE static uint32 __PPO___enduranceEffectDuration() { return STRUCT_OFFSET(USoulGuard, _enduranceEffectDuration); }


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_7_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class USoulGuard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_SoulGuard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
