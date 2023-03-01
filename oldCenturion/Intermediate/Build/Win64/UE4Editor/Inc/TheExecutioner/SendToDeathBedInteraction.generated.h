// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class ADeathBedInteractable;
#ifdef THEEXECUTIONER_SendToDeathBedInteraction_generated_h
#error "SendToDeathBedInteraction.generated.h already included, missing '#pragma once' in SendToDeathBedInteraction.h"
#endif
#define THEEXECUTIONER_SendToDeathBedInteraction_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_RPC_WRAPPERS \
	virtual void Multicast_SendCamperToDeathBed_Implementation(ADeathBedInteractable* deathBed); \
 \
	DECLARE_FUNCTION(execGetOwningSurvivor); \
	DECLARE_FUNCTION(execMulticast_SendCamperToDeathBed);


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SendCamperToDeathBed_Implementation(ADeathBedInteractable* deathBed); \
 \
	DECLARE_FUNCTION(execGetOwningSurvivor); \
	DECLARE_FUNCTION(execMulticast_SendCamperToDeathBed);


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_EVENT_PARMS \
	struct SendToDeathBedInteraction_eventMulticast_SendCamperToDeathBed_Parms \
	{ \
		ADeathBedInteractable* deathBed; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSendToDeathBedInteraction(); \
	friend struct Z_Construct_UClass_USendToDeathBedInteraction_Statics; \
public: \
	DECLARE_CLASS(USendToDeathBedInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(USendToDeathBedInteraction)


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUSendToDeathBedInteraction(); \
	friend struct Z_Construct_UClass_USendToDeathBedInteraction_Statics; \
public: \
	DECLARE_CLASS(USendToDeathBedInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(USendToDeathBedInteraction)


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USendToDeathBedInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USendToDeathBedInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendToDeathBedInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendToDeathBedInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendToDeathBedInteraction(USendToDeathBedInteraction&&); \
	NO_API USendToDeathBedInteraction(const USendToDeathBedInteraction&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USendToDeathBedInteraction(USendToDeathBedInteraction&&); \
	NO_API USendToDeathBedInteraction(const USendToDeathBedInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USendToDeathBedInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USendToDeathBedInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(USendToDeathBedInteraction)


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___deathBed() { return STRUCT_OFFSET(USendToDeathBedInteraction, _deathBed); }


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_9_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class USendToDeathBedInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_SendToDeathBedInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
