// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
class ASlasherPlayer;
#ifdef THEK25_K25TeleportInteraction_generated_h
#error "K25TeleportInteraction.generated.h already included, missing '#pragma once' in K25TeleportInteraction.h"
#endif
#define THEK25_K25TeleportInteraction_generated_h

#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_SPARSE_DATA
#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_RPC_WRAPPERS \
	virtual void Multicast_InitializeHusk_Implementation(FVector location, FRotator rotation); \
	virtual void Multicast_TeleportKillerToTargetPosition_Implementation(ASlasherPlayer* killer, FVector location, FRotator rotation); \
 \
	DECLARE_FUNCTION(execMulticast_InitializeHusk); \
	DECLARE_FUNCTION(execMulticast_TeleportKillerToTargetPosition);


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_InitializeHusk_Implementation(FVector location, FRotator rotation); \
	virtual void Multicast_TeleportKillerToTargetPosition_Implementation(ASlasherPlayer* killer, FVector location, FRotator rotation); \
 \
	DECLARE_FUNCTION(execMulticast_InitializeHusk); \
	DECLARE_FUNCTION(execMulticast_TeleportKillerToTargetPosition);


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_EVENT_PARMS \
	struct K25TeleportInteraction_eventCosmetic_TeleportAbortedEffects_Parms \
	{ \
		ASlasherPlayer* killer; \
	}; \
	struct K25TeleportInteraction_eventCosmetic_TeleportEndEffects_Parms \
	{ \
		ASlasherPlayer* killer; \
	}; \
	struct K25TeleportInteraction_eventCosmetic_TeleportStartEffects_Parms \
	{ \
		ASlasherPlayer* killer; \
	}; \
	struct K25TeleportInteraction_eventMulticast_InitializeHusk_Parms \
	{ \
		FVector location; \
		FRotator rotation; \
	}; \
	struct K25TeleportInteraction_eventMulticast_TeleportKillerToTargetPosition_Parms \
	{ \
		ASlasherPlayer* killer; \
		FVector location; \
		FRotator rotation; \
	};


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK25TeleportInteraction(); \
	friend struct Z_Construct_UClass_UK25TeleportInteraction_Statics; \
public: \
	DECLARE_CLASS(UK25TeleportInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25TeleportInteraction)


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUK25TeleportInteraction(); \
	friend struct Z_Construct_UClass_UK25TeleportInteraction_Statics; \
public: \
	DECLARE_CLASS(UK25TeleportInteraction, UChargeableInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK25"), NO_API) \
	DECLARE_SERIALIZER(UK25TeleportInteraction)


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK25TeleportInteraction(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK25TeleportInteraction) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25TeleportInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25TeleportInteraction); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25TeleportInteraction(UK25TeleportInteraction&&); \
	NO_API UK25TeleportInteraction(const UK25TeleportInteraction&); \
public:


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK25TeleportInteraction(UK25TeleportInteraction&&); \
	NO_API UK25TeleportInteraction(const UK25TeleportInteraction&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK25TeleportInteraction); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK25TeleportInteraction); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK25TeleportInteraction)


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___maxNumberLocationQueriesPerTick() { return STRUCT_OFFSET(UK25TeleportInteraction, _maxNumberLocationQueriesPerTick); } \
	FORCEINLINE static uint32 __PPO___timeSensingLamentConfigurationAfterInteractionEnded() { return STRUCT_OFFSET(UK25TeleportInteraction, _timeSensingLamentConfigurationAfterInteractionEnded); } \
	FORCEINLINE static uint32 __PPO___slowdownAfterTeleportDuration() { return STRUCT_OFFSET(UK25TeleportInteraction, _slowdownAfterTeleportDuration); }


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_11_PROLOG \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_EVENT_PARMS


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_INCLASS \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_SPARSE_DATA \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK25_API UClass* StaticClass<class UK25TeleportInteraction>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK25_Public_K25TeleportInteraction_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
