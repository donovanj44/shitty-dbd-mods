// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AMeatHook;
#ifdef DBDINTERACTION_HookSurvivorDefinition_generated_h
#error "HookSurvivorDefinition.generated.h already included, missing '#pragma once' in HookSurvivorDefinition.h"
#endif
#define DBDINTERACTION_HookSurvivorDefinition_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetMeatHook);


#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetMeatHook);


#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHookSurvivorDefinition(); \
	friend struct Z_Construct_UClass_UHookSurvivorDefinition_Statics; \
public: \
	DECLARE_CLASS(UHookSurvivorDefinition, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UHookSurvivorDefinition)


#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUHookSurvivorDefinition(); \
	friend struct Z_Construct_UClass_UHookSurvivorDefinition_Statics; \
public: \
	DECLARE_CLASS(UHookSurvivorDefinition, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UHookSurvivorDefinition)


#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHookSurvivorDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHookSurvivorDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHookSurvivorDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHookSurvivorDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHookSurvivorDefinition(UHookSurvivorDefinition&&); \
	NO_API UHookSurvivorDefinition(const UHookSurvivorDefinition&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHookSurvivorDefinition(UHookSurvivorDefinition&&); \
	NO_API UHookSurvivorDefinition(const UHookSurvivorDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHookSurvivorDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHookSurvivorDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHookSurvivorDefinition)


#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___survivorBeingHooked() { return STRUCT_OFFSET(UHookSurvivorDefinition, _survivorBeingHooked); }


#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_9_PROLOG
#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UHookSurvivorDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_HookSurvivorDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
