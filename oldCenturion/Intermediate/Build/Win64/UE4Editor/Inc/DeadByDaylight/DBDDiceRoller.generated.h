// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UInteractionDefinition;
class ADBDPlayer;
enum class EDiceRollType : uint8;
#ifdef DEADBYDAYLIGHT_DBDDiceRoller_generated_h
#error "DBDDiceRoller.generated.h already included, missing '#pragma once' in DBDDiceRoller.h"
#endif
#define DEADBYDAYLIGHT_DBDDiceRoller_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalculateOverTimeRollResult); \
	DECLARE_FUNCTION(execCalculateRollResult); \
	DECLARE_FUNCTION(execCalculateTickedRollResult); \
	DECLARE_FUNCTION(execGetInteractionRollSuccessPercentageByDiceRollType); \
	DECLARE_FUNCTION(execGetRollResultByDiceRollType); \
	DECLARE_FUNCTION(execGetRollResultByTunableValue);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalculateOverTimeRollResult); \
	DECLARE_FUNCTION(execCalculateRollResult); \
	DECLARE_FUNCTION(execCalculateTickedRollResult); \
	DECLARE_FUNCTION(execGetInteractionRollSuccessPercentageByDiceRollType); \
	DECLARE_FUNCTION(execGetRollResultByDiceRollType); \
	DECLARE_FUNCTION(execGetRollResultByTunableValue);


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDBDDiceRoller(); \
	friend struct Z_Construct_UClass_UDBDDiceRoller_Statics; \
public: \
	DECLARE_CLASS(UDBDDiceRoller, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDDiceRoller)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUDBDDiceRoller(); \
	friend struct Z_Construct_UClass_UDBDDiceRoller_Statics; \
public: \
	DECLARE_CLASS(UDBDDiceRoller, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UDBDDiceRoller)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDBDDiceRoller(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDBDDiceRoller) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDDiceRoller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDDiceRoller); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDDiceRoller(UDBDDiceRoller&&); \
	NO_API UDBDDiceRoller(const UDBDDiceRoller&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDBDDiceRoller(UDBDDiceRoller&&); \
	NO_API UDBDDiceRoller(const UDBDDiceRoller&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDBDDiceRoller); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDBDDiceRoller); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDBDDiceRoller)


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_11_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UDBDDiceRoller>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DBDDiceRoller_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
