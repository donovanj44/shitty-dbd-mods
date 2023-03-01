// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UChargeableComponent;
class ADBDPlayer;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
enum class EDemogorgonPortalState : uint8;
class UAkAudioEvent;
#ifdef DEADBYDAYLIGHT_DemogorgonPortal_generated_h
#error "DemogorgonPortal.generated.h already included, missing '#pragma once' in DemogorgonPortal.h"
#endif
#define DEADBYDAYLIGHT_DemogorgonPortal_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_RPC_WRAPPERS \
	virtual void Multicast_SurvivorsInterruptedOnDestroy_Implementation(TArray<ADBDPlayer*> const& targets); \
 \
	DECLARE_FUNCTION(execAuthority_OnDestroyChargePercentChanged); \
	DECLARE_FUNCTION(execAuthority_OnTeleportChargePercentChanged); \
	DECLARE_FUNCTION(execAuthority_StopDestroyingPlayers); \
	DECLARE_FUNCTION(execIsTargeted); \
	DECLARE_FUNCTION(execMulticast_SurvivorsInterruptedOnDestroy); \
	DECLARE_FUNCTION(execOnBeginOverlapPortalArea); \
	DECLARE_FUNCTION(execOnEndOverlapPortalArea); \
	DECLARE_FUNCTION(execOnPortalDestroyed);


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_SurvivorsInterruptedOnDestroy_Implementation(TArray<ADBDPlayer*> const& targets); \
 \
	DECLARE_FUNCTION(execAuthority_OnDestroyChargePercentChanged); \
	DECLARE_FUNCTION(execAuthority_OnTeleportChargePercentChanged); \
	DECLARE_FUNCTION(execAuthority_StopDestroyingPlayers); \
	DECLARE_FUNCTION(execIsTargeted); \
	DECLARE_FUNCTION(execMulticast_SurvivorsInterruptedOnDestroy); \
	DECLARE_FUNCTION(execOnBeginOverlapPortalArea); \
	DECLARE_FUNCTION(execOnEndOverlapPortalArea); \
	DECLARE_FUNCTION(execOnPortalDestroyed);


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_EVENT_PARMS \
	struct DemogorgonPortal_eventMulticast_SurvivorsInterruptedOnDestroy_Parms \
	{ \
		TArray<ADBDPlayer*> targets; \
	}; \
	struct DemogorgonPortal_eventOnPortalStateChanged_Parms \
	{ \
		EDemogorgonPortalState state; \
	}; \
	struct DemogorgonPortal_eventOnTeleportAbilityCooldownChangedVFX_Parms \
	{ \
		bool isOnCooldown; \
	}; \
	struct DemogorgonPortal_eventPlaySoundFromPortal_Parms \
	{ \
		UAkAudioEvent* soundEvent; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADemogorgonPortal(); \
	friend struct Z_Construct_UClass_ADemogorgonPortal_Statics; \
public: \
	DECLARE_CLASS(ADemogorgonPortal, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADemogorgonPortal)


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_INCLASS \
private: \
	static void StaticRegisterNativesADemogorgonPortal(); \
	friend struct Z_Construct_UClass_ADemogorgonPortal_Statics; \
public: \
	DECLARE_CLASS(ADemogorgonPortal, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(ADemogorgonPortal)


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADemogorgonPortal(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADemogorgonPortal) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemogorgonPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemogorgonPortal); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemogorgonPortal(ADemogorgonPortal&&); \
	NO_API ADemogorgonPortal(const ADemogorgonPortal&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADemogorgonPortal(ADemogorgonPortal&&); \
	NO_API ADemogorgonPortal(const ADemogorgonPortal&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADemogorgonPortal); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADemogorgonPortal); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADemogorgonPortal)


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___portalAreaCollider() { return STRUCT_OFFSET(ADemogorgonPortal, _portalAreaCollider); } \
	FORCEINLINE static uint32 __PPO___destroyChargeable() { return STRUCT_OFFSET(ADemogorgonPortal, _destroyChargeable); } \
	FORCEINLINE static uint32 __PPO___teleportChargeable() { return STRUCT_OFFSET(ADemogorgonPortal, _teleportChargeable); } \
	FORCEINLINE static uint32 __PPO___portalState() { return STRUCT_OFFSET(ADemogorgonPortal, _portalState); } \
	FORCEINLINE static uint32 __PPO___portalIdleSound() { return STRUCT_OFFSET(ADemogorgonPortal, _portalIdleSound); } \
	FORCEINLINE static uint32 __PPO___portalDestroyingStart() { return STRUCT_OFFSET(ADemogorgonPortal, _portalDestroyingStart); } \
	FORCEINLINE static uint32 __PPO___portalTeleportingSound() { return STRUCT_OFFSET(ADemogorgonPortal, _portalTeleportingSound); } \
	FORCEINLINE static uint32 __PPO___destroyParticleSystem() { return STRUCT_OFFSET(ADemogorgonPortal, _destroyParticleSystem); } \
	FORCEINLINE static uint32 __PPO___destroyDuration() { return STRUCT_OFFSET(ADemogorgonPortal, _destroyDuration); }


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_15_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class ADemogorgonPortal>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_DemogorgonPortal_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
