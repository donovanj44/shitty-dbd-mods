// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EFrenzyEndReason : uint8;
struct FGameplayTag;
struct FGameEventData;
class UGameplayTagContainerComponent;
#ifdef DEADBYDAYLIGHT_FrenzyComponent_generated_h
#error "FrenzyComponent.generated.h already included, missing '#pragma once' in FrenzyComponent.h"
#endif
#define DEADBYDAYLIGHT_FrenzyComponent_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_17_DELEGATE \
static inline void FFrenzyComponentOnFrenzyReadyToStart_DelegateWrapper(const FMulticastScriptDelegate& FrenzyComponentOnFrenzyReadyToStart) \
{ \
	FrenzyComponentOnFrenzyReadyToStart.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_16_DELEGATE \
static inline void FFrenzyComponentOnInjuredBleedoutStartedDuringFrenzy_DelegateWrapper(const FMulticastScriptDelegate& FrenzyComponentOnInjuredBleedoutStartedDuringFrenzy) \
{ \
	FrenzyComponentOnInjuredBleedoutStartedDuringFrenzy.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_15_DELEGATE \
static inline void FFrenzyComponentOnFrenzyEndedNoCooldown_DelegateWrapper(const FMulticastScriptDelegate& FrenzyComponentOnFrenzyEndedNoCooldown) \
{ \
	FrenzyComponentOnFrenzyEndedNoCooldown.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_14_DELEGATE \
struct _Script_DeadByDaylight_eventFrenzyComponentOnFrenzyEnded_Parms \
{ \
	float cooldownTime; \
}; \
static inline void FFrenzyComponentOnFrenzyEnded_DelegateWrapper(const FMulticastScriptDelegate& FrenzyComponentOnFrenzyEnded, float cooldownTime) \
{ \
	_Script_DeadByDaylight_eventFrenzyComponentOnFrenzyEnded_Parms Parms; \
	Parms.cooldownTime=cooldownTime; \
	FrenzyComponentOnFrenzyEnded.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_13_DELEGATE \
static inline void FFrenzyComponentOnFrenzyStarted_DelegateWrapper(const FMulticastScriptDelegate& FrenzyComponentOnFrenzyStarted) \
{ \
	FrenzyComponentOnFrenzyStarted.ProcessMulticastDelegate<UObject>(NULL); \
}


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanManuallyEndFrenzy); \
	DECLARE_FUNCTION(execCanStartFrenzy); \
	DECLARE_FUNCTION(execEndFrenzy); \
	DECLARE_FUNCTION(execHasStartedInjuredBleedoutDuringThisFrenzy); \
	DECLARE_FUNCTION(execInitializeFrenzy); \
	DECLARE_FUNCTION(execIsInFrenzy); \
	DECLARE_FUNCTION(execIsInFrenzyCooldown); \
	DECLARE_FUNCTION(execOnFrenzyCooldownStarted); \
	DECLARE_FUNCTION(execOnGameEventDispatched); \
	DECLARE_FUNCTION(execOnMoriStarted); \
	DECLARE_FUNCTION(execPauseFrenzyChargeDepletion); \
	DECLARE_FUNCTION(execResumeFrenzyChargeDepletion); \
	DECLARE_FUNCTION(execSetObjectState); \
	DECLARE_FUNCTION(execSetStartingFrenzy); \
	DECLARE_FUNCTION(execStartFrenzy);


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanManuallyEndFrenzy); \
	DECLARE_FUNCTION(execCanStartFrenzy); \
	DECLARE_FUNCTION(execEndFrenzy); \
	DECLARE_FUNCTION(execHasStartedInjuredBleedoutDuringThisFrenzy); \
	DECLARE_FUNCTION(execInitializeFrenzy); \
	DECLARE_FUNCTION(execIsInFrenzy); \
	DECLARE_FUNCTION(execIsInFrenzyCooldown); \
	DECLARE_FUNCTION(execOnFrenzyCooldownStarted); \
	DECLARE_FUNCTION(execOnGameEventDispatched); \
	DECLARE_FUNCTION(execOnMoriStarted); \
	DECLARE_FUNCTION(execPauseFrenzyChargeDepletion); \
	DECLARE_FUNCTION(execResumeFrenzyChargeDepletion); \
	DECLARE_FUNCTION(execSetObjectState); \
	DECLARE_FUNCTION(execSetStartingFrenzy); \
	DECLARE_FUNCTION(execStartFrenzy);


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUFrenzyComponent(); \
	friend struct Z_Construct_UClass_UFrenzyComponent_Statics; \
public: \
	DECLARE_CLASS(UFrenzyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFrenzyComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUFrenzyComponent(); \
	friend struct Z_Construct_UClass_UFrenzyComponent_Statics; \
public: \
	DECLARE_CLASS(UFrenzyComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UFrenzyComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UFrenzyComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UFrenzyComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrenzyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrenzyComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFrenzyComponent(UFrenzyComponent&&); \
	NO_API UFrenzyComponent(const UFrenzyComponent&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UFrenzyComponent(UFrenzyComponent&&); \
	NO_API UFrenzyComponent(const UFrenzyComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UFrenzyComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UFrenzyComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UFrenzyComponent)


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___slasher() { return STRUCT_OFFSET(UFrenzyComponent, _slasher); } \
	FORCEINLINE static uint32 __PPO___cooldownInteraction() { return STRUCT_OFFSET(UFrenzyComponent, _cooldownInteraction); }


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_19_PROLOG
#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UFrenzyComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_FrenzyComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
