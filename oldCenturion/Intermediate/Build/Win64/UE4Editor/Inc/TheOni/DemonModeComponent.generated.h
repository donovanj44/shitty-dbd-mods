// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
class ACamperPlayer;
struct FAnimationMontageDescriptor;
class UInteractionDefinition;
enum class EDemonModeState : uint8;
#ifdef THEONI_DemonModeComponent_generated_h
#error "DemonModeComponent.generated.h already included, missing '#pragma once' in DemonModeComponent.h"
#endif
#define THEONI_DemonModeComponent_generated_h

#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_21_DELEGATE \
static inline void FDemonModeComponentOnDemonModeInterruptedDuringEnding_DelegateWrapper(const FMulticastScriptDelegate& DemonModeComponentOnDemonModeInterruptedDuringEnding) \
{ \
	DemonModeComponentOnDemonModeInterruptedDuringEnding.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_20_DELEGATE \
static inline void FDemonModeComponentOnDemonModeInterruptedDuringStartup_DelegateWrapper(const FMulticastScriptDelegate& DemonModeComponentOnDemonModeInterruptedDuringStartup) \
{ \
	DemonModeComponentOnDemonModeInterruptedDuringStartup.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_19_DELEGATE \
static inline void FDemonModeComponentOnDemonModeEnded_DelegateWrapper(const FMulticastScriptDelegate& DemonModeComponentOnDemonModeEnded) \
{ \
	DemonModeComponentOnDemonModeEnded.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_18_DELEGATE \
static inline void FDemonModeComponentOnDemonModeStarted_DelegateWrapper(const FMulticastScriptDelegate& DemonModeComponentOnDemonModeStarted) \
{ \
	DemonModeComponentOnDemonModeStarted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_17_DELEGATE \
struct _Script_TheOni_eventDemonModeComponentOnChargeGainedAfterAttackCosmetic_Parms \
{ \
	FVector targetLocation; \
}; \
static inline void FDemonModeComponentOnChargeGainedAfterAttackCosmetic_DelegateWrapper(const FMulticastScriptDelegate& DemonModeComponentOnChargeGainedAfterAttackCosmetic, FVector targetLocation) \
{ \
	_Script_TheOni_eventDemonModeComponentOnChargeGainedAfterAttackCosmetic_Parms Parms; \
	Parms.targetLocation=targetLocation; \
	DemonModeComponentOnChargeGainedAfterAttackCosmetic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_16_DELEGATE \
static inline void FDemonModeComponentOnDemonModeReady_DelegateWrapper(const FMulticastScriptDelegate& DemonModeComponentOnDemonModeReady) \
{ \
	DemonModeComponentOnDemonModeReady.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_15_DELEGATE \
struct _Script_TheOni_eventDemonModeComponentOnChargeGainedAfterLockerGrabCosmetic_Parms \
{ \
	ACamperPlayer* camperInLocker; \
}; \
static inline void FDemonModeComponentOnChargeGainedAfterLockerGrabCosmetic_DelegateWrapper(const FMulticastScriptDelegate& DemonModeComponentOnChargeGainedAfterLockerGrabCosmetic, ACamperPlayer* camperInLocker) \
{ \
	_Script_TheOni_eventDemonModeComponentOnChargeGainedAfterLockerGrabCosmetic_Parms Parms; \
	Parms.camperInLocker=camperInLocker; \
	DemonModeComponentOnChargeGainedAfterLockerGrabCosmetic.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_SPARSE_DATA
#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_RPC_WRAPPERS \
	virtual void Multicast_DemonModeInterruptedOnEnding_Implementation(); \
	virtual void Multicast_DemonModeInterruptedOnStartup_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_AddCharge); \
	DECLARE_FUNCTION(execAuthority_InterruptedMontage); \
	DECLARE_FUNCTION(execAuthority_OnChargeChanged); \
	DECLARE_FUNCTION(execAuthority_OnLevelReadyToPlay); \
	DECLARE_FUNCTION(execAuthority_SetDemonModeCooldownInteraction); \
	DECLARE_FUNCTION(execCanStartDemonMode); \
	DECLARE_FUNCTION(execDBD_DemonModeForever); \
	DECLARE_FUNCTION(execGetChargePercent); \
	DECLARE_FUNCTION(execGetCurrentCharge); \
	DECLARE_FUNCTION(execGetDemonModeState); \
	DECLARE_FUNCTION(execIsInDemonMode); \
	DECLARE_FUNCTION(execMulticast_DemonModeInterruptedOnEnding); \
	DECLARE_FUNCTION(execMulticast_DemonModeInterruptedOnStartup); \
	DECLARE_FUNCTION(execOnIsPowerChanged); \
	DECLARE_FUNCTION(execOnPowerChargeEmpty); \
	DECLARE_FUNCTION(execOnPowerChargeFull); \
	DECLARE_FUNCTION(execShouldLoseDemonModeOnStun);


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void Multicast_DemonModeInterruptedOnEnding_Implementation(); \
	virtual void Multicast_DemonModeInterruptedOnStartup_Implementation(); \
 \
	DECLARE_FUNCTION(execAuthority_AddCharge); \
	DECLARE_FUNCTION(execAuthority_InterruptedMontage); \
	DECLARE_FUNCTION(execAuthority_OnChargeChanged); \
	DECLARE_FUNCTION(execAuthority_OnLevelReadyToPlay); \
	DECLARE_FUNCTION(execAuthority_SetDemonModeCooldownInteraction); \
	DECLARE_FUNCTION(execCanStartDemonMode); \
	DECLARE_FUNCTION(execDBD_DemonModeForever); \
	DECLARE_FUNCTION(execGetChargePercent); \
	DECLARE_FUNCTION(execGetCurrentCharge); \
	DECLARE_FUNCTION(execGetDemonModeState); \
	DECLARE_FUNCTION(execIsInDemonMode); \
	DECLARE_FUNCTION(execMulticast_DemonModeInterruptedOnEnding); \
	DECLARE_FUNCTION(execMulticast_DemonModeInterruptedOnStartup); \
	DECLARE_FUNCTION(execOnIsPowerChanged); \
	DECLARE_FUNCTION(execOnPowerChargeEmpty); \
	DECLARE_FUNCTION(execOnPowerChargeFull); \
	DECLARE_FUNCTION(execShouldLoseDemonModeOnStun);


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_EVENT_PARMS
#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUDemonModeComponent(); \
	friend struct Z_Construct_UClass_UDemonModeComponent_Statics; \
public: \
	DECLARE_CLASS(UDemonModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UDemonModeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_demonModeState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_demonModeState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUDemonModeComponent(); \
	friend struct Z_Construct_UClass_UDemonModeComponent_Statics; \
public: \
	DECLARE_CLASS(UDemonModeComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TheOni"), NO_API) \
	DECLARE_SERIALIZER(UDemonModeComponent) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_demonModeState=NETFIELD_REP_START, \
		NETFIELD_REP_END=_demonModeState	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UDemonModeComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UDemonModeComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemonModeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemonModeComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemonModeComponent(UDemonModeComponent&&); \
	NO_API UDemonModeComponent(const UDemonModeComponent&); \
public:


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UDemonModeComponent(UDemonModeComponent&&); \
	NO_API UDemonModeComponent(const UDemonModeComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDemonModeComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDemonModeComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDemonModeComponent)


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___powerChargeComponent() { return STRUCT_OFFSET(UDemonModeComponent, _powerChargeComponent); } \
	FORCEINLINE static uint32 __PPO___powerToggleComponent() { return STRUCT_OFFSET(UDemonModeComponent, _powerToggleComponent); } \
	FORCEINLINE static uint32 __PPO___authority_demonModeCooldownStarterComponent() { return STRUCT_OFFSET(UDemonModeComponent, _authority_demonModeCooldownStarterComponent); } \
	FORCEINLINE static uint32 __PPO___demonModeCooldownInteraction() { return STRUCT_OFFSET(UDemonModeComponent, _demonModeCooldownInteraction); } \
	FORCEINLINE static uint32 __PPO___demonModeState() { return STRUCT_OFFSET(UDemonModeComponent, _demonModeState); }


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_23_PROLOG \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_EVENT_PARMS


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_RPC_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_INCLASS \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_SPARSE_DATA \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> THEONI_API UClass* StaticClass<class UDemonModeComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_TheOni_Public_DemonModeComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
