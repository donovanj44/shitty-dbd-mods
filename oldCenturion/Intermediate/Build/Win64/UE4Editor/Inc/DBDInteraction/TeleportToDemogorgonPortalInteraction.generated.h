// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
#ifdef DBDINTERACTION_TeleportToDemogorgonPortalInteraction_generated_h
#error "TeleportToDemogorgonPortalInteraction.generated.h already included, missing '#pragma once' in TeleportToDemogorgonPortalInteraction.h"
#endif
#define DBDINTERACTION_TeleportToDemogorgonPortalInteraction_generated_h

#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_SPARSE_DATA
#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnSlasherSet);


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnSlasherSet);


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_EVENT_PARMS
#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTeleportToDemogorgonPortalInteraction(); \
	friend struct Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics; \
public: \
	DECLARE_CLASS(UTeleportToDemogorgonPortalInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UTeleportToDemogorgonPortalInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUTeleportToDemogorgonPortalInteraction(); \
	friend struct Z_Construct_UClass_UTeleportToDemogorgonPortalInteraction_Statics; \
public: \
	DECLARE_CLASS(UTeleportToDemogorgonPortalInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DBDInteraction"), NO_API) \
	DECLARE_SERIALIZER(UTeleportToDemogorgonPortalInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTeleportToDemogorgonPortalInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTeleportToDemogorgonPortalInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeleportToDemogorgonPortalInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeleportToDemogorgonPortalInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTeleportToDemogorgonPortalInteraction(UTeleportToDemogorgonPortalInteraction&&); \
	NO_API UTeleportToDemogorgonPortalInteraction(const UTeleportToDemogorgonPortalInteraction&); \
public:


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UTeleportToDemogorgonPortalInteraction(UTeleportToDemogorgonPortalInteraction&&); \
	NO_API UTeleportToDemogorgonPortalInteraction(const UTeleportToDemogorgonPortalInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTeleportToDemogorgonPortalInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTeleportToDemogorgonPortalInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTeleportToDemogorgonPortalInteraction)


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___enterPortalPhaseDuration() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _enterPortalPhaseDuration); } \
	FORCEINLINE static uint32 __PPO___cancelTeleportingPhaseDuration() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _cancelTeleportingPhaseDuration); } \
	FORCEINLINE static uint32 __PPO___portalTargetingComponent() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _portalTargetingComponent); } \
	FORCEINLINE static uint32 __PPO___portalPlacerState() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _portalPlacerState); } \
	FORCEINLINE static uint32 __PPO___startingPortal() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _startingPortal); } \
	FORCEINLINE static uint32 __PPO___targetedPortal() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _targetedPortal); } \
	FORCEINLINE static uint32 __PPO___interactingPlayer() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _interactingPlayer); } \
	FORCEINLINE static uint32 __PPO___huskRef() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, _huskRef); } \
	FORCEINLINE static uint32 __PPO__ClassToSpawnForHusk() { return STRUCT_OFFSET(UTeleportToDemogorgonPortalInteraction, ClassToSpawnForHusk); }


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_14_PROLOG \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_EVENT_PARMS


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_RPC_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_INCLASS \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_SPARSE_DATA \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DBDINTERACTION_API UClass* StaticClass<class UTeleportToDemogorgonPortalInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DBDInteraction_Public_TeleportToDemogorgonPortalInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
