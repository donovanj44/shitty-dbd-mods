// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DEADBYDAYLIGHT_StalkerComponent_generated_h
#error "StalkerComponent.generated.h already included, missing '#pragma once' in StalkerComponent.h"
#endif
#define DEADBYDAYLIGHT_StalkerComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanStalk); \
	DECLARE_FUNCTION(execGetMaxStalkingPoints); \
	DECLARE_FUNCTION(execGetPercentStalkingPoints); \
	DECLARE_FUNCTION(execGetScoreMultiplier); \
	DECLARE_FUNCTION(execGetTotalStalkingPoints); \
	DECLARE_FUNCTION(execHasMaxStalkPoints); \
	DECLARE_FUNCTION(execIsStalkingSomeone); \
	DECLARE_FUNCTION(execOnPlayerBeingStalkedChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanStalk); \
	DECLARE_FUNCTION(execGetMaxStalkingPoints); \
	DECLARE_FUNCTION(execGetPercentStalkingPoints); \
	DECLARE_FUNCTION(execGetScoreMultiplier); \
	DECLARE_FUNCTION(execGetTotalStalkingPoints); \
	DECLARE_FUNCTION(execHasMaxStalkPoints); \
	DECLARE_FUNCTION(execIsStalkingSomeone); \
	DECLARE_FUNCTION(execOnPlayerBeingStalkedChanged);


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUStalkerComponent(); \
	friend struct Z_Construct_UClass_UStalkerComponent_Statics; \
public: \
	DECLARE_CLASS(UStalkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStalkerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUStalkerComponent(); \
	friend struct Z_Construct_UClass_UStalkerComponent_Statics; \
public: \
	DECLARE_CLASS(UStalkerComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UStalkerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UStalkerComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UStalkerComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStalkerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStalkerComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStalkerComponent(UStalkerComponent&&); \
	NO_API UStalkerComponent(const UStalkerComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UStalkerComponent(UStalkerComponent&&); \
	NO_API UStalkerComponent(const UStalkerComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UStalkerComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UStalkerComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UStalkerComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___distributeStalkRate() { return STRUCT_OFFSET(UStalkerComponent, _distributeStalkRate); } \
	FORCEINLINE static uint32 __PPO___canStalkWhileInChase() { return STRUCT_OFFSET(UStalkerComponent, _canStalkWhileInChase); } \
	FORCEINLINE static uint32 __PPO___playerStalkedComponents() { return STRUCT_OFFSET(UStalkerComponent, _playerStalkedComponents); } \
	FORCEINLINE static uint32 __PPO___stalkPointsChargeable() { return STRUCT_OFFSET(UStalkerComponent, _stalkPointsChargeable); }


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_9_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UStalkerComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_StalkerComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
