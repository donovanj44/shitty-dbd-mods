// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ASlasherPlayer;
class UK26AmmoHandlerComponent;
class UK26PathHandlerComponent;
class UK26CooldownInteractionDefinition;
#ifdef THEK26_K26FireCrowProjectileInteractionDefinition_generated_h
#error "K26FireCrowProjectileInteractionDefinition.generated.h already included, missing '#pragma once' in K26FireCrowProjectileInteractionDefinition.h"
#endif
#define THEK26_K26FireCrowProjectileInteractionDefinition_generated_h

#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_11_DELEGATE \
static inline void FK26FireCrowProjectileInteractionDefinitionOnProjectileFired_DelegateWrapper(const FMulticastScriptDelegate& K26FireCrowProjectileInteractionDefinitionOnProjectileFired) \
{ \
	K26FireCrowProjectileInteractionDefinitionOnProjectileFired.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_SPARSE_DATA
#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_RPC_WRAPPERS \
	virtual void Multicast_OnProjectileFired_Implementation(const ASlasherPlayer* killer); \
	virtual void Server_RequestFireOnAmmo_Implementation(ASlasherPlayer* killer); \
 \
	DECLARE_FUNCTION(execMulticast_OnProjectileFired); \
	DECLARE_FUNCTION(execServer_RequestFireOnAmmo); \
	DECLARE_FUNCTION(execSetDependencies);


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_OnProjectileFired_Implementation(const ASlasherPlayer* killer); \
	virtual void Server_RequestFireOnAmmo_Implementation(ASlasherPlayer* killer); \
 \
	DECLARE_FUNCTION(execMulticast_OnProjectileFired); \
	DECLARE_FUNCTION(execServer_RequestFireOnAmmo); \
	DECLARE_FUNCTION(execSetDependencies);


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_EVENT_PARMS \
	struct K26FireCrowProjectileInteractionDefinition_eventMulticast_OnProjectileFired_Parms \
	{ \
		const ASlasherPlayer* killer; \
	}; \
	struct K26FireCrowProjectileInteractionDefinition_eventServer_RequestFireOnAmmo_Parms \
	{ \
		ASlasherPlayer* killer; \
	};


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUK26FireCrowProjectileInteractionDefinition(); \
	friend struct Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UK26FireCrowProjectileInteractionDefinition, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26FireCrowProjectileInteractionDefinition)


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUK26FireCrowProjectileInteractionDefinition(); \
	friend struct Z_Construct_UClass_UK26FireCrowProjectileInteractionDefinition_Statics; \
public: \
	DECLARE_CLASS(UK26FireCrowProjectileInteractionDefinition, UInteractionDefinition, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheK26"), NO_API) \
	DECLARE_SERIALIZER(UK26FireCrowProjectileInteractionDefinition)


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UK26FireCrowProjectileInteractionDefinition(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UK26FireCrowProjectileInteractionDefinition) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26FireCrowProjectileInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26FireCrowProjectileInteractionDefinition); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26FireCrowProjectileInteractionDefinition(UK26FireCrowProjectileInteractionDefinition&&); \
	NO_API UK26FireCrowProjectileInteractionDefinition(const UK26FireCrowProjectileInteractionDefinition&); \
public:


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UK26FireCrowProjectileInteractionDefinition(UK26FireCrowProjectileInteractionDefinition&&); \
	NO_API UK26FireCrowProjectileInteractionDefinition(const UK26FireCrowProjectileInteractionDefinition&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UK26FireCrowProjectileInteractionDefinition); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UK26FireCrowProjectileInteractionDefinition); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UK26FireCrowProjectileInteractionDefinition)


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___cooldownInteraction() { return STRUCT_OFFSET(UK26FireCrowProjectileInteractionDefinition, _cooldownInteraction); } \
	FORCEINLINE static uint32 __PPO___ammoHandler() { return STRUCT_OFFSET(UK26FireCrowProjectileInteractionDefinition, _ammoHandler); } \
	FORCEINLINE static uint32 __PPO___pathHandler() { return STRUCT_OFFSET(UK26FireCrowProjectileInteractionDefinition, _pathHandler); }


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_13_PROLOG \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_EVENT_PARMS


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_RPC_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_INCLASS \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_SPARSE_DATA \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEK26_API UClass* StaticClass<class UK26FireCrowProjectileInteractionDefinition>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheK26_Public_K26FireCrowProjectileInteractionDefinition_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
