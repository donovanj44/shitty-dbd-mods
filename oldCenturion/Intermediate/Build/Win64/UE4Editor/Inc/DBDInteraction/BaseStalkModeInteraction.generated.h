// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UStalkerComponent;
#ifdef DBDINTERACTION_BaseStalkModeInteraction_generated_h
#error "BaseStalkModeInteraction.generated.h already included, missing '#pragma once' in BaseStalkModeInteraction.h"
#endif
#define DBDINTERACTION_BaseStalkModeInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanStalk); \
	DECLARE_FUNCTION(execGetStalkerComponent);


#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanStalk); \
	DECLARE_FUNCTION(execGetStalkerComponent);


#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBaseStalkModeInteraction(); \
	friend struct Z_Construct_UClass_UBaseStalkModeInteraction_Statics; \
public: \
	DECLARE_CLASS(UBaseStalkModeInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UBaseStalkModeInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUBaseStalkModeInteraction(); \
	friend struct Z_Construct_UClass_UBaseStalkModeInteraction_Statics; \
public: \
	DECLARE_CLASS(UBaseStalkModeInteraction, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UBaseStalkModeInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBaseStalkModeInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBaseStalkModeInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseStalkModeInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseStalkModeInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseStalkModeInteraction(UBaseStalkModeInteraction&&); \
	NO_API UBaseStalkModeInteraction(const UBaseStalkModeInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBaseStalkModeInteraction(UBaseStalkModeInteraction&&); \
	NO_API UBaseStalkModeInteraction(const UBaseStalkModeInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBaseStalkModeInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBaseStalkModeInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UBaseStalkModeInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_PRIVATE_PROPERTY_OFFSET
#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_8_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h_10_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UBaseStalkModeInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_BaseStalkModeInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
