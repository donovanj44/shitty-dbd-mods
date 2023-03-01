// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEndGameComponent;
#ifdef DEADBYDAYLIGHT_DBDBaseMatchGameMode_generated_h
#error "DBDBaseMatchGameMode.generated.h already included, missing '#pragma once' in DBDBaseMatchGameMode.h"
#endif
#define DEADBYDAYLIGHT_DBDBaseMatchGameMode_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetEndGameComponent);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetEndGameComponent);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADBDBaseMatchGameMode(); \
	friend struct Z_Construct_UClass_ADBDBaseMatchGameMode_Statics; \
public: \
	DECLARE_CLASS(ADBDBaseMatchGameMode, ADBDBaseGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDBaseMatchGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_INCLASS \
private: \
	static void StaticRegisterNativesADBDBaseMatchGameMode(); \
	friend struct Z_Construct_UClass_ADBDBaseMatchGameMode_Statics; \
public: \
	DECLARE_CLASS(ADBDBaseMatchGameMode, ADBDBaseGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADBDBaseMatchGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADBDBaseMatchGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADBDBaseMatchGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDBaseMatchGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDBaseMatchGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDBaseMatchGameMode(ADBDBaseMatchGameMode&&); \
	NO_API ADBDBaseMatchGameMode(const ADBDBaseMatchGameMode&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADBDBaseMatchGameMode(ADBDBaseMatchGameMode&&); \
	NO_API ADBDBaseMatchGameMode(const ADBDBaseMatchGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADBDBaseMatchGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADBDBaseMatchGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADBDBaseMatchGameMode)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___endGameComponent() { return STRUCT_OFFSET(ADBDBaseMatchGameMode, _endGameComponent); } \
	FORCEINLINE static uint32 __PPO___escapeRequirementTracker() { return STRUCT_OFFSET(ADBDBaseMatchGameMode, _escapeRequirementTracker); } \
	FORCEINLINE static uint32 __PPO___theFence() { return STRUCT_OFFSET(ADBDBaseMatchGameMode, _theFence); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_10_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADBDBaseMatchGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDBaseMatchGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
