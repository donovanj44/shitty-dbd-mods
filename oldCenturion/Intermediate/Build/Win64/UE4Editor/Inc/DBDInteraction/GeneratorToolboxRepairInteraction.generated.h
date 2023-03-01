// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ADBDPlayer;
#ifdef DBDINTERACTION_GeneratorToolboxRepairInteraction_generated_h
#error "GeneratorToolboxRepairInteraction.generated.h already included, missing '#pragma once' in GeneratorToolboxRepairInteraction.h"
#endif
#define DBDINTERACTION_GeneratorToolboxRepairInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetInteractionTextWhenEmpty); \
	DECLARE_FUNCTION(execHasChargedToolBox);


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetInteractionTextWhenEmpty); \
	DECLARE_FUNCTION(execHasChargedToolBox);


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneratorToolboxRepairInteraction(); \
	friend struct Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics; \
public: \
	DECLARE_CLASS(UGeneratorToolboxRepairInteraction, UGeneratorRepairInteraction, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorToolboxRepairInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGeneratorToolboxRepairInteraction(); \
	friend struct Z_Construct_UClass_UGeneratorToolboxRepairInteraction_Statics; \
public: \
	DECLARE_CLASS(UGeneratorToolboxRepairInteraction, UGeneratorRepairInteraction, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorToolboxRepairInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneratorToolboxRepairInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratorToolboxRepairInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorToolboxRepairInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorToolboxRepairInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorToolboxRepairInteraction(UGeneratorToolboxRepairInteraction&&); \
	NO_API UGeneratorToolboxRepairInteraction(const UGeneratorToolboxRepairInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorToolboxRepairInteraction(UGeneratorToolboxRepairInteraction&&); \
	NO_API UGeneratorToolboxRepairInteraction(const UGeneratorToolboxRepairInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorToolboxRepairInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorToolboxRepairInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeneratorToolboxRepairInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___interactionTextWhenEmpty() { return STRUCT_OFFSET(UGeneratorToolboxRepairInteraction, _interactionTextWhenEmpty); } \
	FORCEINLINE static uint32 __PPO___repairSkillCheckDurationWhenEmpty() { return STRUCT_OFFSET(UGeneratorToolboxRepairInteraction, _repairSkillCheckDurationWhenEmpty); } \
	FORCEINLINE static uint32 __PPO___repairSkillCheckChanceWhenEmpty() { return STRUCT_OFFSET(UGeneratorToolboxRepairInteraction, _repairSkillCheckChanceWhenEmpty); }


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_9_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UGeneratorToolboxRepairInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_GeneratorToolboxRepairInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
