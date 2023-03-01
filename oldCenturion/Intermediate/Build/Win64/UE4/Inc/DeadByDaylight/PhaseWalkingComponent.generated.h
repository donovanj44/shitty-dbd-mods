// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FPhaseWalkInfo;
class UDecoySlasherComponent;
class AActor;
struct FDBDTimer;
struct FTransform;
#ifdef DEADBYDAYLIGHT_PhaseWalkingComponent_generated_h
#error "PhaseWalkingComponent.generated.h already included, missing '#pragma once' in PhaseWalkingComponent.h"
#endif
#define DEADBYDAYLIGHT_PhaseWalkingComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_21_DELEGATE \
struct _Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms \
{ \
	bool wasPassivePhaseWalking; \
	bool wasActivePhaseWalking; \
	FPhaseWalkInfo phaseWalkInfo; \
}; \
static inline void FPhaseWalkingComponentTriggerKillerVisibilityVFX_DelegateWrapper(const FMulticastScriptDelegate& PhaseWalkingComponentTriggerKillerVisibilityVFX, bool wasPassivePhaseWalking, bool wasActivePhaseWalking, FPhaseWalkInfo const& phaseWalkInfo) \
{ \
	_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerKillerVisibilityVFX_Parms Parms; \
	Parms.wasPassivePhaseWalking=wasPassivePhaseWalking ? true : false; \
	Parms.wasActivePhaseWalking=wasActivePhaseWalking ? true : false; \
	Parms.phaseWalkInfo=phaseWalkInfo; \
	PhaseWalkingComponentTriggerKillerVisibilityVFX.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_20_DELEGATE \
static inline void FPhaseWalkingComponentOnGameEndedVFX_DelegateWrapper(const FMulticastScriptDelegate& PhaseWalkingComponentOnGameEndedVFX) \
{ \
	PhaseWalkingComponentOnGameEndedVFX.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_19_DELEGATE \
struct _Script_DeadByDaylight_eventPhaseWalkingComponentOnPhaseWalkInfoReceived_Parms \
{ \
	FPhaseWalkInfo phaseWalkInfo; \
}; \
static inline void FPhaseWalkingComponentOnPhaseWalkInfoReceived_DelegateWrapper(const FMulticastScriptDelegate& PhaseWalkingComponentOnPhaseWalkInfoReceived, FPhaseWalkInfo const& phaseWalkInfo) \
{ \
	_Script_DeadByDaylight_eventPhaseWalkingComponentOnPhaseWalkInfoReceived_Parms Parms; \
	Parms.phaseWalkInfo=phaseWalkInfo; \
	PhaseWalkingComponentOnPhaseWalkInfoReceived.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_18_DELEGATE \
struct _Script_DeadByDaylight_eventPhaseWalkingComponentTriggerSurvivorVisibilityVFX_Parms \
{ \
	bool visible; \
}; \
static inline void FPhaseWalkingComponentTriggerSurvivorVisibilityVFX_DelegateWrapper(const FMulticastScriptDelegate& PhaseWalkingComponentTriggerSurvivorVisibilityVFX, bool visible) \
{ \
	_Script_DeadByDaylight_eventPhaseWalkingComponentTriggerSurvivorVisibilityVFX_Parms Parms; \
	Parms.visible=visible ? true : false; \
	PhaseWalkingComponentTriggerSurvivorVisibilityVFX.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_17_DELEGATE \
static inline void FPhaseWalkingComponentOnMaxActivePhaseWalkCharges_DelegateWrapper(const FMulticastScriptDelegate& PhaseWalkingComponentOnMaxActivePhaseWalkCharges) \
{ \
	PhaseWalkingComponentOnMaxActivePhaseWalkCharges.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_RPC_WRAPPERS \
	virtual bool Multicast_Broadcast_PhaseWalk_Validate(FPhaseWalkInfo const& ); \
	virtual void Multicast_Broadcast_PhaseWalk_Implementation(FPhaseWalkInfo const& phaseWalkInfo); \
	virtual bool Server_Broadcast_PhaseWalk_Validate(FPhaseWalkInfo const& ); \
	virtual void Server_Broadcast_PhaseWalk_Implementation(FPhaseWalkInfo const& phaseWalkInfo); \
 \
	DECLARE_FUNCTION(execCanStartActivePhaseWalk); \
	DECLARE_FUNCTION(execGetActivePhaseWalkChargePercentage); \
	DECLARE_FUNCTION(execGetActivePhaseWalkCharges); \
	DECLARE_FUNCTION(execGetDecoySlasherComponent); \
	DECLARE_FUNCTION(execGetHusk); \
	DECLARE_FUNCTION(execGetPassivePhaseWalkTimer); \
	DECLARE_FUNCTION(execGetSpiritPassivePhaseWalkHusksCountToSpawn); \
	DECLARE_FUNCTION(execIsActivePhaseWalking); \
	DECLARE_FUNCTION(execIsDecoyActive); \
	DECLARE_FUNCTION(execIsPassivePhaseWalking); \
	DECLARE_FUNCTION(execIsPhaseWalking); \
	DECLARE_FUNCTION(execLocal_EndPhaseWalks); \
	DECLARE_FUNCTION(execLocal_PhaseWalk); \
	DECLARE_FUNCTION(execModifyActivePhaseWalkCharges); \
	DECLARE_FUNCTION(execMulticast_Broadcast_PhaseWalk); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execRefillActivePhaseWalkCharges); \
	DECLARE_FUNCTION(execServer_Broadcast_PhaseWalk); \
	DECLARE_FUNCTION(execUpdateKillerVisibility); \
	DECLARE_FUNCTION(execUpdateSurvivorVisibility);


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual bool Multicast_Broadcast_PhaseWalk_Validate(FPhaseWalkInfo const& ); \
	virtual void Multicast_Broadcast_PhaseWalk_Implementation(FPhaseWalkInfo const& phaseWalkInfo); \
	virtual bool Server_Broadcast_PhaseWalk_Validate(FPhaseWalkInfo const& ); \
	virtual void Server_Broadcast_PhaseWalk_Implementation(FPhaseWalkInfo const& phaseWalkInfo); \
 \
	DECLARE_FUNCTION(execCanStartActivePhaseWalk); \
	DECLARE_FUNCTION(execGetActivePhaseWalkChargePercentage); \
	DECLARE_FUNCTION(execGetActivePhaseWalkCharges); \
	DECLARE_FUNCTION(execGetDecoySlasherComponent); \
	DECLARE_FUNCTION(execGetHusk); \
	DECLARE_FUNCTION(execGetPassivePhaseWalkTimer); \
	DECLARE_FUNCTION(execGetSpiritPassivePhaseWalkHusksCountToSpawn); \
	DECLARE_FUNCTION(execIsActivePhaseWalking); \
	DECLARE_FUNCTION(execIsDecoyActive); \
	DECLARE_FUNCTION(execIsPassivePhaseWalking); \
	DECLARE_FUNCTION(execIsPhaseWalking); \
	DECLARE_FUNCTION(execLocal_EndPhaseWalks); \
	DECLARE_FUNCTION(execLocal_PhaseWalk); \
	DECLARE_FUNCTION(execModifyActivePhaseWalkCharges); \
	DECLARE_FUNCTION(execMulticast_Broadcast_PhaseWalk); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execRefillActivePhaseWalkCharges); \
	DECLARE_FUNCTION(execServer_Broadcast_PhaseWalk); \
	DECLARE_FUNCTION(execUpdateKillerVisibility); \
	DECLARE_FUNCTION(execUpdateSurvivorVisibility);


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_EVENT_PARMS \
	struct PhaseWalkingComponent_eventMakePassivePhaseWalkHusksVisible_Parms \
	{ \
		FTransform huskTransform; \
		float opacityValue; \
		float speedValue; \
	}; \
	struct PhaseWalkingComponent_eventMulticast_Broadcast_PhaseWalk_Parms \
	{ \
		FPhaseWalkInfo phaseWalkInfo; \
	}; \
	struct PhaseWalkingComponent_eventServer_Broadcast_PhaseWalk_Parms \
	{ \
		FPhaseWalkInfo phaseWalkInfo; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPhaseWalkingComponent(); \
	friend struct Z_Construct_UClass_UPhaseWalkingComponent_Statics; \
public: \
	DECLARE_CLASS(UPhaseWalkingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPhaseWalkingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_husk=NETFIELD_REP_START, \
		NETFIELD_REP_END=_husk	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUPhaseWalkingComponent(); \
	friend struct Z_Construct_UClass_UPhaseWalkingComponent_Statics; \
public: \
	DECLARE_CLASS(UPhaseWalkingComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UPhaseWalkingComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_husk=NETFIELD_REP_START, \
		NETFIELD_REP_END=_husk	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPhaseWalkingComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPhaseWalkingComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhaseWalkingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhaseWalkingComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhaseWalkingComponent(UPhaseWalkingComponent&&); \
	NO_API UPhaseWalkingComponent(const UPhaseWalkingComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPhaseWalkingComponent(UPhaseWalkingComponent&&); \
	NO_API UPhaseWalkingComponent(const UPhaseWalkingComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPhaseWalkingComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPhaseWalkingComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPhaseWalkingComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___huskClass() { return STRUCT_OFFSET(UPhaseWalkingComponent, _huskClass); } \
	FORCEINLINE static uint32 __PPO___isActivePhaseWalking() { return STRUCT_OFFSET(UPhaseWalkingComponent, _isActivePhaseWalking); } \
	FORCEINLINE static uint32 __PPO___isPassivePhaseWalking() { return STRUCT_OFFSET(UPhaseWalkingComponent, _isPassivePhaseWalking); } \
	FORCEINLINE static uint32 __PPO___isInteractionPhaseWalking() { return STRUCT_OFFSET(UPhaseWalkingComponent, _isInteractionPhaseWalking); } \
	FORCEINLINE static uint32 __PPO___husk() { return STRUCT_OFFSET(UPhaseWalkingComponent, _husk); } \
	FORCEINLINE static uint32 __PPO___activePhaseWalkCharges() { return STRUCT_OFFSET(UPhaseWalkingComponent, _activePhaseWalkCharges); } \
	FORCEINLINE static uint32 __PPO___survivorsAreVisible() { return STRUCT_OFFSET(UPhaseWalkingComponent, _survivorsAreVisible); } \
	FORCEINLINE static uint32 __PPO___passivePhaseWalkHusksCount() { return STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkHusksCount); } \
	FORCEINLINE static uint32 __PPO___activePhaseWalkChargeGainRate() { return STRUCT_OFFSET(UPhaseWalkingComponent, _activePhaseWalkChargeGainRate); } \
	FORCEINLINE static uint32 __PPO___passivePhaseWalkDuration() { return STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkDuration); } \
	FORCEINLINE static uint32 __PPO___passivePhaseWalkFirstCooldownDuration() { return STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkFirstCooldownDuration); } \
	FORCEINLINE static uint32 __PPO___passivePhaseWalkCooldownDurationMin() { return STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkCooldownDurationMin); } \
	FORCEINLINE static uint32 __PPO___passivePhaseWalkCooldownDurationMax() { return STRUCT_OFFSET(UPhaseWalkingComponent, _passivePhaseWalkCooldownDurationMax); } \
	FORCEINLINE static uint32 __PPO___activePhaseWalkMaxCharge() { return STRUCT_OFFSET(UPhaseWalkingComponent, _activePhaseWalkMaxCharge); } \
	FORCEINLINE static uint32 __PPO___activePhaseWalkMaxAcceleration() { return STRUCT_OFFSET(UPhaseWalkingComponent, _activePhaseWalkMaxAcceleration); } \
	FORCEINLINE static uint32 __PPO___defaultMaxAcceleration() { return STRUCT_OFFSET(UPhaseWalkingComponent, _defaultMaxAcceleration); }


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_23_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UPhaseWalkingComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_PhaseWalkingComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
