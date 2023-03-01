// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UVomitStateComponent;
#ifdef DBDINTERACTION_LinkedVomitInteraction_generated_h
#error "LinkedVomitInteraction.generated.h already included, missing '#pragma once' in LinkedVomitInteraction.h"
#endif
#define DBDINTERACTION_LinkedVomitInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetVomitStateComponent); \
	DECLARE_FUNCTION(execIsChargeComplete); \
	DECLARE_FUNCTION(execIsVomiting);


#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetVomitStateComponent); \
	DECLARE_FUNCTION(execIsChargeComplete); \
	DECLARE_FUNCTION(execIsVomiting);


#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesULinkedVomitInteraction(); \
	friend struct Z_Construct_UClass_ULinkedVomitInteraction_Statics; \
public: \
	DECLARE_CLASS(ULinkedVomitInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(ULinkedVomitInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_INCLASS \
private: \
	static void StaticRegisterNativesULinkedVomitInteraction(); \
	friend struct Z_Construct_UClass_ULinkedVomitInteraction_Statics; \
public: \
	DECLARE_CLASS(ULinkedVomitInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(ULinkedVomitInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ULinkedVomitInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ULinkedVomitInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkedVomitInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkedVomitInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkedVomitInteraction(ULinkedVomitInteraction&&); \
	NO_API ULinkedVomitInteraction(const ULinkedVomitInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ULinkedVomitInteraction(ULinkedVomitInteraction&&); \
	NO_API ULinkedVomitInteraction(const ULinkedVomitInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ULinkedVomitInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ULinkedVomitInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ULinkedVomitInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___chargeComplete() { return STRUCT_OFFSET(ULinkedVomitInteraction, _chargeComplete); }


#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_8_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class ULinkedVomitInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_LinkedVomitInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
