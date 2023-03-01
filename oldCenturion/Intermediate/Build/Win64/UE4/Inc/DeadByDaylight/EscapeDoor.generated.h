// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USkeletalMeshComponent;
struct FVector;
class ACamperPlayer;
class AActor;
class ADBDPlayer;
class AEscapeBlocker;
class UBoxComponent;
class UChargeableInteractionDefinition;
class USceneComponent;
#ifdef DEADBYDAYLIGHT_EscapeDoor_generated_h
#error "EscapeDoor.generated.h already included, missing '#pragma once' in EscapeDoor.h"
#endif
#define DEADBYDAYLIGHT_EscapeDoor_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_RPC_WRAPPERS \
	virtual USkeletalMeshComponent* GetDoorSkeletalMeshComponent_Implementation() const; \
	virtual FVector GetParadiseServerLocation_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_SetEscapeBlocker); \
	DECLARE_FUNCTION(execGetAtlantaExitOpeningIndicatorVisibility); \
	DECLARE_FUNCTION(execGetDoorSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetIsOpen); \
	DECLARE_FUNCTION(execGetOpenTime); \
	DECLARE_FUNCTION(execGetParadiseServerLocation); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execIsDoorSwitchBlocked); \
	DECLARE_FUNCTION(execOnCamperStartOpeningExitGate); \
	DECLARE_FUNCTION(execOnEscapeZoneBeginOverlap); \
	DECLARE_FUNCTION(execOnEscapeZoneEndOverlap); \
	DECLARE_FUNCTION(execOnExitGateOpened); \
	DECLARE_FUNCTION(execOnPlayerEnterExitArea); \
	DECLARE_FUNCTION(execOnPlayerExitExitArea); \
	DECLARE_FUNCTION(execOnRep_Activated); \
	DECLARE_FUNCTION(execOnRep_OnEscapeBlockerSet); \
	DECLARE_FUNCTION(execSetIsActivated); \
	DECLARE_FUNCTION(execStartAtlantaDoorBeepingSound); \
	DECLARE_FUNCTION(execStartAtlantaDoorOpeningSound);


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual USkeletalMeshComponent* GetDoorSkeletalMeshComponent_Implementation() const; \
	virtual FVector GetParadiseServerLocation_Implementation() const; \
 \
	DECLARE_FUNCTION(execAuthority_SetEscapeBlocker); \
	DECLARE_FUNCTION(execGetAtlantaExitOpeningIndicatorVisibility); \
	DECLARE_FUNCTION(execGetDoorSkeletalMeshComponent); \
	DECLARE_FUNCTION(execGetIsOpen); \
	DECLARE_FUNCTION(execGetOpenTime); \
	DECLARE_FUNCTION(execGetParadiseServerLocation); \
	DECLARE_FUNCTION(execIsActivated); \
	DECLARE_FUNCTION(execIsDoorSwitchBlocked); \
	DECLARE_FUNCTION(execOnCamperStartOpeningExitGate); \
	DECLARE_FUNCTION(execOnEscapeZoneBeginOverlap); \
	DECLARE_FUNCTION(execOnEscapeZoneEndOverlap); \
	DECLARE_FUNCTION(execOnExitGateOpened); \
	DECLARE_FUNCTION(execOnPlayerEnterExitArea); \
	DECLARE_FUNCTION(execOnPlayerExitExitArea); \
	DECLARE_FUNCTION(execOnRep_Activated); \
	DECLARE_FUNCTION(execOnRep_OnEscapeBlockerSet); \
	DECLARE_FUNCTION(execSetIsActivated); \
	DECLARE_FUNCTION(execStartAtlantaDoorBeepingSound); \
	DECLARE_FUNCTION(execStartAtlantaDoorOpeningSound);


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_EVENT_PARMS \
	struct EscapeDoor_eventGetDoorSkeletalMeshComponent_Parms \
	{ \
		USkeletalMeshComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EscapeDoor_eventGetDoorSkeletalMeshComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct EscapeDoor_eventGetEscapeSwitchFloorLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EscapeDoor_eventGetEscapeSwitchFloorLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct EscapeDoor_eventGetExitArea_Parms \
	{ \
		UBoxComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EscapeDoor_eventGetExitArea_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct EscapeDoor_eventGetOpenEscapeInteraction_Parms \
	{ \
		UChargeableInteractionDefinition* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EscapeDoor_eventGetOpenEscapeInteraction_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct EscapeDoor_eventGetParadiseServerLocation_Parms \
	{ \
		FVector ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EscapeDoor_eventGetParadiseServerLocation_Parms() \
			: ReturnValue(ForceInit) \
		{ \
		} \
	}; \
	struct EscapeDoor_eventGetSwitchSceneComponent_Parms \
	{ \
		USceneComponent* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		EscapeDoor_eventGetSwitchSceneComponent_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct EscapeDoor_eventOnExitActivationChanged_Parms \
	{ \
		bool activated; \
	}; \
	struct EscapeDoor_eventOnExitOpenChanged_Parms \
	{ \
		bool opened; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAEscapeDoor(); \
	friend struct Z_Construct_UClass_AEscapeDoor_Statics; \
public: \
	DECLARE_CLASS(AEscapeDoor, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AEscapeDoor) \
	virtual UObject* _getUObject() const override { return const_cast<AEscapeDoor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_activated=NETFIELD_REP_START, \
		_escapeBlockerInstance, \
		NETFIELD_REP_END=_escapeBlockerInstance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_INCLASS \
private: \
	static void StaticRegisterNativesAEscapeDoor(); \
	friend struct Z_Construct_UClass_AEscapeDoor_Statics; \
public: \
	DECLARE_CLASS(AEscapeDoor, AInteractable, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(AEscapeDoor) \
	virtual UObject* _getUObject() const override { return const_cast<AEscapeDoor*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_activated=NETFIELD_REP_START, \
		_escapeBlockerInstance, \
		NETFIELD_REP_END=_escapeBlockerInstance	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AEscapeDoor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AEscapeDoor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeDoor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeDoor(AEscapeDoor&&); \
	NO_API AEscapeDoor(const AEscapeDoor&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AEscapeDoor(AEscapeDoor&&); \
	NO_API AEscapeDoor(const AEscapeDoor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AEscapeDoor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AEscapeDoor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AEscapeDoor)


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___killerOpenChargeable() { return STRUCT_OFFSET(AEscapeDoor, _killerOpenChargeable); } \
	FORCEINLINE static uint32 __PPO___openChargeable() { return STRUCT_OFFSET(AEscapeDoor, _openChargeable); } \
	FORCEINLINE static uint32 __PPO___ak_audio_escape() { return STRUCT_OFFSET(AEscapeDoor, _ak_audio_escape); } \
	FORCEINLINE static uint32 __PPO___escapeDoorAnimInstance() { return STRUCT_OFFSET(AEscapeDoor, _escapeDoorAnimInstance); } \
	FORCEINLINE static uint32 __PPO___rootComponent() { return STRUCT_OFFSET(AEscapeDoor, _rootComponent); } \
	FORCEINLINE static uint32 __PPO___activated() { return STRUCT_OFFSET(AEscapeDoor, _activated); } \
	FORCEINLINE static uint32 __PPO___escapeBlockerInstance() { return STRUCT_OFFSET(AEscapeDoor, _escapeBlockerInstance); } \
	FORCEINLINE static uint32 __PPO___spotlight() { return STRUCT_OFFSET(AEscapeDoor, _spotlight); } \
	FORCEINLINE static uint32 __PPO___localOverlappingCamper() { return STRUCT_OFFSET(AEscapeDoor, _localOverlappingCamper); } \
	FORCEINLINE static uint32 __PPO___perceptionStimuliComponent() { return STRUCT_OFFSET(AEscapeDoor, _perceptionStimuliComponent); } \
	FORCEINLINE static uint32 __PPO___doorSwitchBlockableComponent() { return STRUCT_OFFSET(AEscapeDoor, _doorSwitchBlockableComponent); }


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_25_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class AEscapeDoor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_EscapeDoor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
