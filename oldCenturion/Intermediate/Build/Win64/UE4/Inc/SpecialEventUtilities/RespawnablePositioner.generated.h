// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ARespawnableInteractable;
#ifdef SPECIALEVENTUTILITIES_RespawnablePositioner_generated_h
#error "RespawnablePositioner.generated.h already included, missing '#pragma once' in RespawnablePositioner.h"
#endif
#define SPECIALEVENTUTILITIES_RespawnablePositioner_generated_h

#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_8_DELEGATE \
struct _Script_SpecialEventUtilities_eventRespawnablePositionerOnIsInteractingWithAnyRespawnableInteractableChangedEvent_Parms \
{ \
	ARespawnableInteractable* respawnableInteractable; \
	bool isInteracting; \
}; \
static inline void FRespawnablePositionerOnIsInteractingWithAnyRespawnableInteractableChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& RespawnablePositionerOnIsInteractingWithAnyRespawnableInteractableChangedEvent, ARespawnableInteractable* respawnableInteractable, bool isInteracting) \
{ \
	_Script_SpecialEventUtilities_eventRespawnablePositionerOnIsInteractingWithAnyRespawnableInteractableChangedEvent_Parms Parms; \
	Parms.respawnableInteractable=respawnableInteractable; \
	Parms.isInteracting=isInteracting ? true : false; \
	RespawnablePositionerOnIsInteractingWithAnyRespawnableInteractableChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_SPARSE_DATA
#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAuthority_GetRespawnables); \
	DECLARE_FUNCTION(execAuthority_OnIsInteractingChangedEvent);


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAuthority_GetRespawnables); \
	DECLARE_FUNCTION(execAuthority_OnIsInteractingChangedEvent);


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURespawnablePositioner(); \
	friend struct Z_Construct_UClass_URespawnablePositioner_Statics; \
public: \
	DECLARE_CLASS(URespawnablePositioner, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpecialEventUtilities"), NO_API) \
	DECLARE_SERIALIZER(URespawnablePositioner)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_INCLASS \
private: \
	static void StaticRegisterNativesURespawnablePositioner(); \
	friend struct Z_Construct_UClass_URespawnablePositioner_Statics; \
public: \
	DECLARE_CLASS(URespawnablePositioner, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/SpecialEventUtilities"), NO_API) \
	DECLARE_SERIALIZER(URespawnablePositioner)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URespawnablePositioner(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URespawnablePositioner) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URespawnablePositioner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URespawnablePositioner); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URespawnablePositioner(URespawnablePositioner&&); \
	NO_API URespawnablePositioner(const URespawnablePositioner&); \
public:


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API URespawnablePositioner(URespawnablePositioner&&); \
	NO_API URespawnablePositioner(const URespawnablePositioner&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URespawnablePositioner); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URespawnablePositioner); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(URespawnablePositioner)


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___respawnableInteractables() { return STRUCT_OFFSET(URespawnablePositioner, _respawnableInteractables); }


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_10_PROLOG
#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_SPARSE_DATA \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_RPC_WRAPPERS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_INCLASS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_SPARSE_DATA \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SPECIALEVENTUTILITIES_API UClass* StaticClass<class URespawnablePositioner>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_SpecialEventUtilities_Public_RespawnablePositioner_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
