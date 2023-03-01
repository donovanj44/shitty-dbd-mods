// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AGenerator;
#ifdef DBDINTERACTION_GeneratorRepairInteraction_generated_h
#error "GeneratorRepairInteraction.generated.h already included, missing '#pragma once' in GeneratorRepairInteraction.h"
#endif
#define DBDINTERACTION_GeneratorRepairInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetOwningGenerator); \
	DECLARE_FUNCTION(execSetIsObstructed);


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetOwningGenerator); \
	DECLARE_FUNCTION(execSetIsObstructed);


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGeneratorRepairInteraction(); \
	friend struct Z_Construct_UClass_UGeneratorRepairInteraction_Statics; \
public: \
	DECLARE_CLASS(UGeneratorRepairInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorRepairInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUGeneratorRepairInteraction(); \
	friend struct Z_Construct_UClass_UGeneratorRepairInteraction_Statics; \
public: \
	DECLARE_CLASS(UGeneratorRepairInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UGeneratorRepairInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGeneratorRepairInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGeneratorRepairInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorRepairInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorRepairInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorRepairInteraction(UGeneratorRepairInteraction&&); \
	NO_API UGeneratorRepairInteraction(const UGeneratorRepairInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGeneratorRepairInteraction(UGeneratorRepairInteraction&&); \
	NO_API UGeneratorRepairInteraction(const UGeneratorRepairInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGeneratorRepairInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGeneratorRepairInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGeneratorRepairInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___penaltyPerRepairPlayerCount() { return STRUCT_OFFSET(UGeneratorRepairInteraction, _penaltyPerRepairPlayerCount); }


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_9_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UGeneratorRepairInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_GeneratorRepairInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
