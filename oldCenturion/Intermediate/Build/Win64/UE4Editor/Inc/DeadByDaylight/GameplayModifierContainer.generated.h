// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UBaseModifierCondition;
struct FStatusViewSource;
enum class EInventoryItemType : uint8;
struct FGameplayTag;
class UGameplayModifierContainer;
class ADBDPlayer;
enum class EDBDScoreTypes : uint8;
struct FGameEventData;
class AActor;
#ifdef DEADBYDAYLIGHT_GameplayModifierContainer_generated_h
#error "GameplayModifierContainer.generated.h already included, missing '#pragma once' in GameplayModifierContainer.h"
#endif
#define DEADBYDAYLIGHT_GameplayModifierContainer_generated_h

#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_SPARSE_DATA
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_RPC_WRAPPERS \
	virtual int32 GetIconFilePathIndex_Implementation() const; \
	virtual UGameplayModifierContainer* GetOriginatingEffect_Implementation() const; \
	virtual float GetPercentageFill_Implementation() const; \
	virtual float GetRemainingLifetime_Implementation() const; \
	virtual bool IsStatusViewActive_Implementation() const; \
	virtual void OnGameEventDispatched_Implementation(const FGameplayTag gameEventType, FGameEventData const& gameEventData); \
	virtual void OnInitialized_Implementation(); \
	virtual void OnLevelReadyToPlay_Implementation(); \
	virtual void OnListenedGameEvent_Implementation(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target); \
 \
	DECLARE_FUNCTION(execAddCondition); \
	DECLARE_FUNCTION(execAuthority_ClearActivationTimer); \
	DECLARE_FUNCTION(execAuthority_InstantiateGameplayModifierConditions); \
	DECLARE_FUNCTION(execAuthority_SetActivationTimerPaused); \
	DECLARE_FUNCTION(execAuthority_TriggerActivationTimer); \
	DECLARE_FUNCTION(execFireActiveStatusViewEvent); \
	DECLARE_FUNCTION(execGetActivationTimerDuration); \
	DECLARE_FUNCTION(execGetActivationTimerElapsedTime); \
	DECLARE_FUNCTION(execGetActivationTimerElapsedTimePercent); \
	DECLARE_FUNCTION(execGetActivationTimerPercentRemaining); \
	DECLARE_FUNCTION(execGetActivationTimerRemainingTime); \
	DECLARE_FUNCTION(execGetIconFilePathIndex); \
	DECLARE_FUNCTION(execGetInventoryItemType); \
	DECLARE_FUNCTION(execGetLevelToDisplay); \
	DECLARE_FUNCTION(execGetModifierValue); \
	DECLARE_FUNCTION(execGetOriginatingEffect); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetPercentageFill); \
	DECLARE_FUNCTION(execGetRemainingLifetime); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execHasModifierOfType); \
	DECLARE_FUNCTION(execIsActivationTimerActive); \
	DECLARE_FUNCTION(execIsActivationTimerDone); \
	DECLARE_FUNCTION(execIsStatusViewActive); \
	DECLARE_FUNCTION(execListenToDispatcherGameEvent); \
	DECLARE_FUNCTION(execListenToGameEvent); \
	DECLARE_FUNCTION(execOnGameEventDispatched); \
	DECLARE_FUNCTION(execOnGameplayEvent); \
	DECLARE_FUNCTION(execOnInitialized); \
	DECLARE_FUNCTION(execOnInitialized_Internal); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnListenedGameEvent); \
	DECLARE_FUNCTION(execOnRep_ActivationTimer); \
	DECLARE_FUNCTION(execOnRep_TickableConditionsData); \
	DECLARE_FUNCTION(execRemoveAllFlags); \
	DECLARE_FUNCTION(execRemoveAllModifiers); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execSetFlag); \
	DECLARE_FUNCTION(execSetModifierValue); \
	DECLARE_FUNCTION(execSetUseApplyFunction); \
	DECLARE_FUNCTION(execUnlistenToAllDispatcherGameEvents); \
	DECLARE_FUNCTION(execUnlistenToAllGameEvents); \
	DECLARE_FUNCTION(execUnlistenToDispatcherGameEvent); \
	DECLARE_FUNCTION(execUnlistenToGameEvent); \
	DECLARE_FUNCTION(execUpdateIsApplicable);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual int32 GetIconFilePathIndex_Implementation() const; \
	virtual UGameplayModifierContainer* GetOriginatingEffect_Implementation() const; \
	virtual float GetPercentageFill_Implementation() const; \
	virtual float GetRemainingLifetime_Implementation() const; \
	virtual bool IsStatusViewActive_Implementation() const; \
	virtual void OnGameEventDispatched_Implementation(const FGameplayTag gameEventType, FGameEventData const& gameEventData); \
	virtual void OnInitialized_Implementation(); \
	virtual void OnLevelReadyToPlay_Implementation(); \
	virtual void OnListenedGameEvent_Implementation(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target); \
 \
	DECLARE_FUNCTION(execAddCondition); \
	DECLARE_FUNCTION(execAuthority_ClearActivationTimer); \
	DECLARE_FUNCTION(execAuthority_InstantiateGameplayModifierConditions); \
	DECLARE_FUNCTION(execAuthority_SetActivationTimerPaused); \
	DECLARE_FUNCTION(execAuthority_TriggerActivationTimer); \
	DECLARE_FUNCTION(execFireActiveStatusViewEvent); \
	DECLARE_FUNCTION(execGetActivationTimerDuration); \
	DECLARE_FUNCTION(execGetActivationTimerElapsedTime); \
	DECLARE_FUNCTION(execGetActivationTimerElapsedTimePercent); \
	DECLARE_FUNCTION(execGetActivationTimerPercentRemaining); \
	DECLARE_FUNCTION(execGetActivationTimerRemainingTime); \
	DECLARE_FUNCTION(execGetIconFilePathIndex); \
	DECLARE_FUNCTION(execGetInventoryItemType); \
	DECLARE_FUNCTION(execGetLevelToDisplay); \
	DECLARE_FUNCTION(execGetModifierValue); \
	DECLARE_FUNCTION(execGetOriginatingEffect); \
	DECLARE_FUNCTION(execGetOwningPlayer); \
	DECLARE_FUNCTION(execGetPercentageFill); \
	DECLARE_FUNCTION(execGetRemainingLifetime); \
	DECLARE_FUNCTION(execHasFlag); \
	DECLARE_FUNCTION(execHasModifierOfType); \
	DECLARE_FUNCTION(execIsActivationTimerActive); \
	DECLARE_FUNCTION(execIsActivationTimerDone); \
	DECLARE_FUNCTION(execIsStatusViewActive); \
	DECLARE_FUNCTION(execListenToDispatcherGameEvent); \
	DECLARE_FUNCTION(execListenToGameEvent); \
	DECLARE_FUNCTION(execOnGameEventDispatched); \
	DECLARE_FUNCTION(execOnGameplayEvent); \
	DECLARE_FUNCTION(execOnInitialized); \
	DECLARE_FUNCTION(execOnInitialized_Internal); \
	DECLARE_FUNCTION(execOnLevelReadyToPlay); \
	DECLARE_FUNCTION(execOnListenedGameEvent); \
	DECLARE_FUNCTION(execOnRep_ActivationTimer); \
	DECLARE_FUNCTION(execOnRep_TickableConditionsData); \
	DECLARE_FUNCTION(execRemoveAllFlags); \
	DECLARE_FUNCTION(execRemoveAllModifiers); \
	DECLARE_FUNCTION(execRemoveModifier); \
	DECLARE_FUNCTION(execSetFlag); \
	DECLARE_FUNCTION(execSetModifierValue); \
	DECLARE_FUNCTION(execSetUseApplyFunction); \
	DECLARE_FUNCTION(execUnlistenToAllDispatcherGameEvents); \
	DECLARE_FUNCTION(execUnlistenToAllGameEvents); \
	DECLARE_FUNCTION(execUnlistenToDispatcherGameEvent); \
	DECLARE_FUNCTION(execUnlistenToGameEvent); \
	DECLARE_FUNCTION(execUpdateIsApplicable);


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_EVENT_PARMS \
	struct GameplayModifierContainer_eventApply_Parms \
	{ \
		float DeltaTime; \
	}; \
	struct GameplayModifierContainer_eventGetIconFilePathIndex_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameplayModifierContainer_eventGetIconFilePathIndex_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GameplayModifierContainer_eventGetOriginatingEffect_Parms \
	{ \
		UGameplayModifierContainer* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameplayModifierContainer_eventGetOriginatingEffect_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GameplayModifierContainer_eventGetPercentageFill_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameplayModifierContainer_eventGetPercentageFill_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GameplayModifierContainer_eventGetRemainingLifetime_Parms \
	{ \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameplayModifierContainer_eventGetRemainingLifetime_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct GameplayModifierContainer_eventIsStatusViewActive_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GameplayModifierContainer_eventIsStatusViewActive_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct GameplayModifierContainer_eventOnGameEventDispatched_Parms \
	{ \
		FGameplayTag gameEventType; \
		FGameEventData gameEventData; \
	}; \
	struct GameplayModifierContainer_eventOnListenedGameEvent_Parms \
	{ \
		EDBDScoreTypes eventType; \
		float amount; \
		AActor* instigator; \
		AActor* target; \
	};


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_CALLBACK_WRAPPERS
#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGameplayModifierContainer(); \
	friend struct Z_Construct_UClass_UGameplayModifierContainer_Statics; \
public: \
	DECLARE_CLASS(UGameplayModifierContainer, UBaseModifierContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameplayModifierContainer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_tickableConditionsData=NETFIELD_REP_START, \
		_activationTimer, \
		NETFIELD_REP_END=_activationTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUGameplayModifierContainer(); \
	friend struct Z_Construct_UClass_UGameplayModifierContainer_Statics; \
public: \
	DECLARE_CLASS(UGameplayModifierContainer, UBaseModifierContainer, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/DeadByDaylight"), NO_API) \
	DECLARE_SERIALIZER(UGameplayModifierContainer) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		_tickableConditionsData=NETFIELD_REP_START, \
		_activationTimer, \
		NETFIELD_REP_END=_activationTimer	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGameplayModifierContainer(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGameplayModifierContainer) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayModifierContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayModifierContainer); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayModifierContainer(UGameplayModifierContainer&&); \
	NO_API UGameplayModifierContainer(const UGameplayModifierContainer&); \
public:


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGameplayModifierContainer(UGameplayModifierContainer&&); \
	NO_API UGameplayModifierContainer(const UGameplayModifierContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGameplayModifierContainer); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGameplayModifierContainer); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGameplayModifierContainer)


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO___tickableConditionsData() { return STRUCT_OFFSET(UGameplayModifierContainer, _tickableConditionsData); } \
	FORCEINLINE static uint32 __PPO___tags() { return STRUCT_OFFSET(UGameplayModifierContainer, _tags); } \
	FORCEINLINE static uint32 __PPO__UseApplyFunction() { return STRUCT_OFFSET(UGameplayModifierContainer, UseApplyFunction); } \
	FORCEINLINE static uint32 __PPO__BroadcastStatusView() { return STRUCT_OFFSET(UGameplayModifierContainer, BroadcastStatusView); } \
	FORCEINLINE static uint32 __PPO__StatusViewID() { return STRUCT_OFFSET(UGameplayModifierContainer, StatusViewID); } \
	FORCEINLINE static uint32 __PPO___autoInitializeOnBeginPlay() { return STRUCT_OFFSET(UGameplayModifierContainer, _autoInitializeOnBeginPlay); } \
	FORCEINLINE static uint32 __PPO___canOptimizeTickActivation() { return STRUCT_OFFSET(UGameplayModifierContainer, _canOptimizeTickActivation); } \
	FORCEINLINE static uint32 __PPO___activationTimer() { return STRUCT_OFFSET(UGameplayModifierContainer, _activationTimer); }


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_19_PROLOG \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_EVENT_PARMS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_RPC_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_INCLASS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_PRIVATE_PROPERTY_OFFSET \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_SPARSE_DATA \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_CALLBACK_WRAPPERS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_INCLASS_NO_PURE_DECLS \
	DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DEADBYDAYLIGHT_API UClass* StaticClass<class UGameplayModifierContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID DeadByDaylight_Source_DeadByDaylight_Public_GameplayModifierContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
