// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARespawnableInteractable;
#ifdef SPECIALEVENTUTILITIES_InteractionRespawnableTrigger_generated_h
#error "InteractionRespawnableTrigger.generated.h already included, missing '#pragma once' in InteractionRespawnableTrigger.h"
#endif
#define SPECIALEVENTUTILITIES_InteractionRespawnableTrigger_generated_h

#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_SPARSE_DATA
#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_OnInteractionEnded); \
	DECLARE_FUNCTION(execAuthority_OnNewRespawnableSubscribed);


#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_OnInteractionEnded); \
	DECLARE_FUNCTION(execAuthority_OnNewRespawnableSubscribed);


#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInteractionRespawnableTrigger(); \
	friend struct Z_Construct_UClass_UInteractionRespawnableTrigger_Statics; \
public: \
	DECLARE_CLASS(UInteractionRespawnableTrigger, URespawnableTrigger, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpecialEventUtilities"), NO_API) \
	DECLARE_SERIALIZER(UInteractionRespawnableTrigger)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUInteractionRespawnableTrigger(); \
	friend struct Z_Construct_UClass_UInteractionRespawnableTrigger_Statics; \
public: \
	DECLARE_CLASS(UInteractionRespawnableTrigger, URespawnableTrigger, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpecialEventUtilities"), NO_API) \
	DECLARE_SERIALIZER(UInteractionRespawnableTrigger)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UInteractionRespawnableTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UInteractionRespawnableTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionRespawnableTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionRespawnableTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionRespawnableTrigger(UInteractionRespawnableTrigger&&); \
	NO_API UInteractionRespawnableTrigger(const UInteractionRespawnableTrigger&); \
public:


#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UInteractionRespawnableTrigger(UInteractionRespawnableTrigger&&); \
	NO_API UInteractionRespawnableTrigger(const UInteractionRespawnableTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInteractionRespawnableTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInteractionRespawnableTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInteractionRespawnableTrigger)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___respawningEventComponent() { return STRUCT_OFFSET(UInteractionRespawnableTrigger, _respawningEventComponent); }


#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_9_PROLOG
#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_SPARSE_DATA \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_INCLASS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_SPARSE_DATA \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<class UInteractionRespawnableTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SpecialEventUtilities_Public_InteractionRespawnableTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
