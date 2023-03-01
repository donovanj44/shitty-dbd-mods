// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ACamperPlayer;
class UMontagePlayer;
struct FVector;
class ADeathBedInteractable;
class UPrimitiveComponent;
class AActor;
struct FHitResult;
#ifdef THEEXECUTIONER_DeathBedInteractable_generated_h
#error "DeathBedInteractable.generated.h already included, missing '#pragma once' in DeathBedInteractable.h"
#endif
#define THEEXECUTIONER_DeathBedInteractable_generated_h

#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_SPARSE_DATA
#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_RPC_WRAPPERS \
	virtual void Multicast_RelocateToOtherDeathBed_Implementation(ADeathBedInteractable* deathBed, ACamperPlayer* camperPlayer); \
 \
	DECLARE_FUNCTION(execActivateDeathBed); \
	DECLARE_FUNCTION(execCanRescueSurvivor); \
	DECLARE_FUNCTION(execGetInDeathBedCamper); \
	DECLARE_FUNCTION(execGetMontagePlayer); \
	DECLARE_FUNCTION(execGetRescuerSnapPosition); \
	DECLARE_FUNCTION(execMulticast_RelocateToOtherDeathBed); \
	DECLARE_FUNCTION(execOnDeathBedDeathEnd); \
	DECLARE_FUNCTION(execOnSkillCheckFailed); \
	DECLARE_FUNCTION(execPlayerOverlapZoneBeginOverlap); \
	DECLARE_FUNCTION(execPlayerOverlapZoneEndOverlap); \
	DECLARE_FUNCTION(execSetInDeathBedCamper); \
	DECLARE_FUNCTION(execTeleportCamperToDeathBed);


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_RelocateToOtherDeathBed_Implementation(ADeathBedInteractable* deathBed, ACamperPlayer* camperPlayer); \
 \
	DECLARE_FUNCTION(execActivateDeathBed); \
	DECLARE_FUNCTION(execCanRescueSurvivor); \
	DECLARE_FUNCTION(execGetInDeathBedCamper); \
	DECLARE_FUNCTION(execGetMontagePlayer); \
	DECLARE_FUNCTION(execGetRescuerSnapPosition); \
	DECLARE_FUNCTION(execMulticast_RelocateToOtherDeathBed); \
	DECLARE_FUNCTION(execOnDeathBedDeathEnd); \
	DECLARE_FUNCTION(execOnSkillCheckFailed); \
	DECLARE_FUNCTION(execPlayerOverlapZoneBeginOverlap); \
	DECLARE_FUNCTION(execPlayerOverlapZoneEndOverlap); \
	DECLARE_FUNCTION(execSetInDeathBedCamper); \
	DECLARE_FUNCTION(execTeleportCamperToDeathBed);


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_EVENT_PARMS \
	struct DeathBedInteractable_eventMulticast_RelocateToOtherDeathBed_Parms \
	{ \
		ADeathBedInteractable* deathBed; \
		ACamperPlayer* camperPlayer; \
	};


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesADeathBedInteractable(); \
	friend struct Z_Construct_UClass_ADeathBedInteractable_Statics; \
public: \
	DECLARE_CLASS(ADeathBedInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ADeathBedInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<ADeathBedInteractable*>(this); }


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_INCLASS \
private: \
	static void StaticRegisterNativesADeathBedInteractable(); \
	friend struct Z_Construct_UClass_ADeathBedInteractable_Statics; \
public: \
	DECLARE_CLASS(ADeathBedInteractable, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheExecutioner"), NO_API) \
	DECLARE_SERIALIZER(ADeathBedInteractable) \
	virtual UObject* _getUObject() const override { return const_cast<ADeathBedInteractable*>(this); }


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ADeathBedInteractable(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ADeathBedInteractable) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathBedInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathBedInteractable); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathBedInteractable(ADeathBedInteractable&&); \
	NO_API ADeathBedInteractable(const ADeathBedInteractable&); \
public:


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ADeathBedInteractable(ADeathBedInteractable&&); \
	NO_API ADeathBedInteractable(const ADeathBedInteractable&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ADeathBedInteractable); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ADeathBedInteractable); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ADeathBedInteractable)


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___root() { return STRUCT_OFFSET(ADeathBedInteractable, _root); } \
	FORCEINLINE static uint32 __PPO___inDeathBedCamper() { return STRUCT_OFFSET(ADeathBedInteractable, _inDeathBedCamper); } \
	FORCEINLINE static uint32 __PPO___rescueChargeableComponent() { return STRUCT_OFFSET(ADeathBedInteractable, _rescueChargeableComponent); } \
	FORCEINLINE static uint32 __PPO___deathBedSkeletalMesh() { return STRUCT_OFFSET(ADeathBedInteractable, _deathBedSkeletalMesh); } \
	FORCEINLINE static uint32 __PPO___interactionZone() { return STRUCT_OFFSET(ADeathBedInteractable, _interactionZone); } \
	FORCEINLINE static uint32 __PPO___playerOverlapZone() { return STRUCT_OFFSET(ADeathBedInteractable, _playerOverlapZone); } \
	FORCEINLINE static uint32 __PPO___montagePlayer() { return STRUCT_OFFSET(ADeathBedInteractable, _montagePlayer); } \
	FORCEINLINE static uint32 __PPO___deathBedCollision() { return STRUCT_OFFSET(ADeathBedInteractable, _deathBedCollision); } \
	FORCEINLINE static uint32 __PPO___animationMontageSlave() { return STRUCT_OFFSET(ADeathBedInteractable, _animationMontageSlave); } \
	FORCEINLINE static uint32 __PPO___montageToPlay() { return STRUCT_OFFSET(ADeathBedInteractable, _montageToPlay); } \
	FORCEINLINE static uint32 __PPO___rescuerSnapPosition() { return STRUCT_OFFSET(ADeathBedInteractable, _rescuerSnapPosition); } \
	FORCEINLINE static uint32 __PPO___deathBedAnticampComponent() { return STRUCT_OFFSET(ADeathBedInteractable, _deathBedAnticampComponent); } \
	FORCEINLINE static uint32 __PPO___anticampDrainCooldownTime() { return STRUCT_OFFSET(ADeathBedInteractable, _anticampDrainCooldownTime); } \
	FORCEINLINE static uint32 __PPO___perceptionStimuliComponent() { return STRUCT_OFFSET(ADeathBedInteractable, _perceptionStimuliComponent); }


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_25_PROLOG \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_EVENT_PARMS


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_RPC_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_INCLASS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_SPARSE_DATA \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEEXECUTIONER_API UClass* StaticClass<class ADeathBedInteractable>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheExecutioner_Public_DeathBedInteractable_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
