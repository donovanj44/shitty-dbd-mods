// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameplayModifierContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayModifierContainer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer();
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierContainer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COMPETENCE_API UClass* Z_Construct_UClass_UBaseModifierCondition_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusViewSource();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInventoryItemType();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NETWORKUTILITIES_API UClass* Z_Construct_UClass_UTimerObject_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData();
// End Cross Module References
	DEFINE_FUNCTION(UGameplayModifierContainer::execAddCondition)
	{
		P_GET_OBJECT(UClass,Z_Param_conditionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UBaseModifierCondition**)Z_Param__Result=P_THIS->AddCondition(Z_Param_conditionType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execAuthority_ClearActivationTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ClearActivationTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execAuthority_InstantiateGameplayModifierConditions)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_InstantiateGameplayModifierConditions();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execAuthority_SetActivationTimerPaused)
	{
		P_GET_UBOOL(Z_Param_paused);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetActivationTimerPaused(Z_Param_paused);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execAuthority_TriggerActivationTimer)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_activationTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_TriggerActivationTimer(Z_Param_activationTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execFireActiveStatusViewEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_NewStatusViewID);
		P_GET_PROPERTY(FNameProperty,Z_Param_uniqueSourceID);
		P_GET_STRUCT(FStatusViewSource,Z_Param_statusViewSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireActiveStatusViewEvent(Z_Param_NewStatusViewID,Z_Param_uniqueSourceID,Z_Param_statusViewSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetActivationTimerDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActivationTimerDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetActivationTimerElapsedTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActivationTimerElapsedTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetActivationTimerElapsedTimePercent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActivationTimerElapsedTimePercent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetActivationTimerPercentRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActivationTimerPercentRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetActivationTimerRemainingTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetActivationTimerRemainingTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetIconFilePathIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetIconFilePathIndex_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetInventoryItemType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EInventoryItemType*)Z_Param__Result=P_THIS->GetInventoryItemType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetLevelToDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetLevelToDisplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetModifierValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetModifierValue(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetOriginatingEffect)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayModifierContainer**)Z_Param__Result=P_THIS->GetOriginatingEffect_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetOwningPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetOwningPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetPercentageFill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetPercentageFill_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execGetRemainingLifetime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetRemainingLifetime_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execHasFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasFlag(Z_Param_flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execHasModifierOfType)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasModifierOfType(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execIsActivationTimerActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivationTimerActive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execIsActivationTimerDone)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsActivationTimerDone();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execIsStatusViewActive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsStatusViewActive_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execListenToDispatcherGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_eventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenToDispatcherGameEvent(Z_Param_eventType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execListenToGameEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_eventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ListenToGameEvent(EDBDScoreTypes(Z_Param_eventType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execOnGameEventDispatched)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameEventDispatched_Implementation(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execOnGameplayEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_eventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnGameplayEvent(EDBDScoreTypes(Z_Param_eventType),Z_Param_amount,Z_Param_instigator,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execOnInitialized)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialized_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execOnInitialized_Internal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInitialized_Internal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execOnLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelReadyToPlay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execOnListenedGameEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_eventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_instigator);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnListenedGameEvent_Implementation(EDBDScoreTypes(Z_Param_eventType),Z_Param_amount,Z_Param_instigator,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execOnRep_ActivationTimer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ActivationTimer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execOnRep_TickableConditionsData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_TickableConditionsData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execRemoveAllFlags)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllFlags();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execRemoveAllModifiers)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllModifiers();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execRemoveModifier)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveModifier(Z_Param_type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execSetFlag)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_flag);
		P_GET_UBOOL(Z_Param_flagValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetFlag(Z_Param_flag,Z_Param_flagValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execSetModifierValue)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_type);
		P_GET_PROPERTY(FFloatProperty,Z_Param_GameplayModifierValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetModifierValue(Z_Param_type,Z_Param_GameplayModifierValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execSetUseApplyFunction)
	{
		P_GET_UBOOL(Z_Param_use);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseApplyFunction(Z_Param_use);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execUnlistenToAllDispatcherGameEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlistenToAllDispatcherGameEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execUnlistenToAllGameEvents)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlistenToAllGameEvents();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execUnlistenToDispatcherGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_eventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlistenToDispatcherGameEvent(Z_Param_eventType);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execUnlistenToGameEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_eventType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UnlistenToGameEvent(EDBDScoreTypes(Z_Param_eventType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGameplayModifierContainer::execUpdateIsApplicable)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateIsApplicable();
		P_NATIVE_END;
	}
	static FName NAME_UGameplayModifierContainer_Apply = FName(TEXT("Apply"));
	void UGameplayModifierContainer::Apply(float DeltaTime)
	{
		GameplayModifierContainer_eventApply_Parms Parms;
		Parms.DeltaTime=DeltaTime;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_Apply),&Parms);
	}
	static FName NAME_UGameplayModifierContainer_GetIconFilePathIndex = FName(TEXT("GetIconFilePathIndex"));
	int32 UGameplayModifierContainer::GetIconFilePathIndex() const
	{
		GameplayModifierContainer_eventGetIconFilePathIndex_Parms Parms;
		const_cast<UGameplayModifierContainer*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_GetIconFilePathIndex),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGameplayModifierContainer_GetOriginatingEffect = FName(TEXT("GetOriginatingEffect"));
	UGameplayModifierContainer* UGameplayModifierContainer::GetOriginatingEffect() const
	{
		GameplayModifierContainer_eventGetOriginatingEffect_Parms Parms;
		const_cast<UGameplayModifierContainer*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_GetOriginatingEffect),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGameplayModifierContainer_GetPercentageFill = FName(TEXT("GetPercentageFill"));
	float UGameplayModifierContainer::GetPercentageFill() const
	{
		GameplayModifierContainer_eventGetPercentageFill_Parms Parms;
		const_cast<UGameplayModifierContainer*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_GetPercentageFill),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGameplayModifierContainer_GetRemainingLifetime = FName(TEXT("GetRemainingLifetime"));
	float UGameplayModifierContainer::GetRemainingLifetime() const
	{
		GameplayModifierContainer_eventGetRemainingLifetime_Parms Parms;
		const_cast<UGameplayModifierContainer*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_GetRemainingLifetime),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGameplayModifierContainer_IsStatusViewActive = FName(TEXT("IsStatusViewActive"));
	bool UGameplayModifierContainer::IsStatusViewActive() const
	{
		GameplayModifierContainer_eventIsStatusViewActive_Parms Parms;
		const_cast<UGameplayModifierContainer*>(this)->ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_IsStatusViewActive),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UGameplayModifierContainer_OnApplyBegin = FName(TEXT("OnApplyBegin"));
	void UGameplayModifierContainer::OnApplyBegin()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_OnApplyBegin),NULL);
	}
	static FName NAME_UGameplayModifierContainer_OnApplyEnd = FName(TEXT("OnApplyEnd"));
	void UGameplayModifierContainer::OnApplyEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_OnApplyEnd),NULL);
	}
	static FName NAME_UGameplayModifierContainer_OnGameEventDispatched = FName(TEXT("OnGameEventDispatched"));
	void UGameplayModifierContainer::OnGameEventDispatched(const FGameplayTag gameEventType, FGameEventData const& gameEventData)
	{
		GameplayModifierContainer_eventOnGameEventDispatched_Parms Parms;
		Parms.gameEventType=gameEventType;
		Parms.gameEventData=gameEventData;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_OnGameEventDispatched),&Parms);
	}
	static FName NAME_UGameplayModifierContainer_OnInitialized = FName(TEXT("OnInitialized"));
	void UGameplayModifierContainer::OnInitialized()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_OnInitialized),NULL);
	}
	static FName NAME_UGameplayModifierContainer_OnLevelReadyToPlay = FName(TEXT("OnLevelReadyToPlay"));
	void UGameplayModifierContainer::OnLevelReadyToPlay()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_OnLevelReadyToPlay),NULL);
	}
	static FName NAME_UGameplayModifierContainer_OnListenedGameEvent = FName(TEXT("OnListenedGameEvent"));
	void UGameplayModifierContainer::OnListenedGameEvent(EDBDScoreTypes eventType, float amount, AActor* instigator, AActor* target)
	{
		GameplayModifierContainer_eventOnListenedGameEvent_Parms Parms;
		Parms.eventType=eventType;
		Parms.amount=amount;
		Parms.instigator=instigator;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_UGameplayModifierContainer_OnListenedGameEvent),&Parms);
	}
	void UGameplayModifierContainer::StaticRegisterNativesUGameplayModifierContainer()
	{
		UClass* Class = UGameplayModifierContainer::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCondition", &UGameplayModifierContainer::execAddCondition },
			{ "Authority_ClearActivationTimer", &UGameplayModifierContainer::execAuthority_ClearActivationTimer },
			{ "Authority_InstantiateGameplayModifierConditions", &UGameplayModifierContainer::execAuthority_InstantiateGameplayModifierConditions },
			{ "Authority_SetActivationTimerPaused", &UGameplayModifierContainer::execAuthority_SetActivationTimerPaused },
			{ "Authority_TriggerActivationTimer", &UGameplayModifierContainer::execAuthority_TriggerActivationTimer },
			{ "FireActiveStatusViewEvent", &UGameplayModifierContainer::execFireActiveStatusViewEvent },
			{ "GetActivationTimerDuration", &UGameplayModifierContainer::execGetActivationTimerDuration },
			{ "GetActivationTimerElapsedTime", &UGameplayModifierContainer::execGetActivationTimerElapsedTime },
			{ "GetActivationTimerElapsedTimePercent", &UGameplayModifierContainer::execGetActivationTimerElapsedTimePercent },
			{ "GetActivationTimerPercentRemaining", &UGameplayModifierContainer::execGetActivationTimerPercentRemaining },
			{ "GetActivationTimerRemainingTime", &UGameplayModifierContainer::execGetActivationTimerRemainingTime },
			{ "GetIconFilePathIndex", &UGameplayModifierContainer::execGetIconFilePathIndex },
			{ "GetInventoryItemType", &UGameplayModifierContainer::execGetInventoryItemType },
			{ "GetLevelToDisplay", &UGameplayModifierContainer::execGetLevelToDisplay },
			{ "GetModifierValue", &UGameplayModifierContainer::execGetModifierValue },
			{ "GetOriginatingEffect", &UGameplayModifierContainer::execGetOriginatingEffect },
			{ "GetOwningPlayer", &UGameplayModifierContainer::execGetOwningPlayer },
			{ "GetPercentageFill", &UGameplayModifierContainer::execGetPercentageFill },
			{ "GetRemainingLifetime", &UGameplayModifierContainer::execGetRemainingLifetime },
			{ "HasFlag", &UGameplayModifierContainer::execHasFlag },
			{ "HasModifierOfType", &UGameplayModifierContainer::execHasModifierOfType },
			{ "IsActivationTimerActive", &UGameplayModifierContainer::execIsActivationTimerActive },
			{ "IsActivationTimerDone", &UGameplayModifierContainer::execIsActivationTimerDone },
			{ "IsStatusViewActive", &UGameplayModifierContainer::execIsStatusViewActive },
			{ "ListenToDispatcherGameEvent", &UGameplayModifierContainer::execListenToDispatcherGameEvent },
			{ "ListenToGameEvent", &UGameplayModifierContainer::execListenToGameEvent },
			{ "OnGameEventDispatched", &UGameplayModifierContainer::execOnGameEventDispatched },
			{ "OnGameplayEvent", &UGameplayModifierContainer::execOnGameplayEvent },
			{ "OnInitialized", &UGameplayModifierContainer::execOnInitialized },
			{ "OnInitialized_Internal", &UGameplayModifierContainer::execOnInitialized_Internal },
			{ "OnLevelReadyToPlay", &UGameplayModifierContainer::execOnLevelReadyToPlay },
			{ "OnListenedGameEvent", &UGameplayModifierContainer::execOnListenedGameEvent },
			{ "OnRep_ActivationTimer", &UGameplayModifierContainer::execOnRep_ActivationTimer },
			{ "OnRep_TickableConditionsData", &UGameplayModifierContainer::execOnRep_TickableConditionsData },
			{ "RemoveAllFlags", &UGameplayModifierContainer::execRemoveAllFlags },
			{ "RemoveAllModifiers", &UGameplayModifierContainer::execRemoveAllModifiers },
			{ "RemoveModifier", &UGameplayModifierContainer::execRemoveModifier },
			{ "SetFlag", &UGameplayModifierContainer::execSetFlag },
			{ "SetModifierValue", &UGameplayModifierContainer::execSetModifierValue },
			{ "SetUseApplyFunction", &UGameplayModifierContainer::execSetUseApplyFunction },
			{ "UnlistenToAllDispatcherGameEvents", &UGameplayModifierContainer::execUnlistenToAllDispatcherGameEvents },
			{ "UnlistenToAllGameEvents", &UGameplayModifierContainer::execUnlistenToAllGameEvents },
			{ "UnlistenToDispatcherGameEvent", &UGameplayModifierContainer::execUnlistenToDispatcherGameEvent },
			{ "UnlistenToGameEvent", &UGameplayModifierContainer::execUnlistenToGameEvent },
			{ "UpdateIsApplicable", &UGameplayModifierContainer::execUpdateIsApplicable },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics
	{
		struct GameplayModifierContainer_eventAddCondition_Parms
		{
			TSubclassOf<UBaseModifierCondition>  conditionType;
			UBaseModifierCondition* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_conditionType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventAddCondition_Parms, ReturnValue), Z_Construct_UClass_UBaseModifierCondition_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::NewProp_conditionType = { "conditionType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventAddCondition_Parms, conditionType), Z_Construct_UClass_UBaseModifierCondition_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::NewProp_conditionType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "AddCondition", nullptr, nullptr, sizeof(GameplayModifierContainer_eventAddCondition_Parms), Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_AddCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_AddCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventApply_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "Apply", nullptr, nullptr, sizeof(GameplayModifierContainer_eventApply_Parms), Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_Apply()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_Apply_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_Authority_ClearActivationTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_Authority_ClearActivationTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_Authority_ClearActivationTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "Authority_ClearActivationTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_Authority_ClearActivationTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Authority_ClearActivationTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_Authority_ClearActivationTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_Authority_ClearActivationTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_Authority_InstantiateGameplayModifierConditions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_Authority_InstantiateGameplayModifierConditions_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_Authority_InstantiateGameplayModifierConditions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "Authority_InstantiateGameplayModifierConditions", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_Authority_InstantiateGameplayModifierConditions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Authority_InstantiateGameplayModifierConditions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_Authority_InstantiateGameplayModifierConditions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_Authority_InstantiateGameplayModifierConditions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics
	{
		struct GameplayModifierContainer_eventAuthority_SetActivationTimerPaused_Parms
		{
			bool paused;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_paused_MetaData[];
#endif
		static void NewProp_paused_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_paused;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::NewProp_paused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::NewProp_paused_SetBit(void* Obj)
	{
		((GameplayModifierContainer_eventAuthority_SetActivationTimerPaused_Parms*)Obj)->paused = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::NewProp_paused = { "paused", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayModifierContainer_eventAuthority_SetActivationTimerPaused_Parms), &Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::NewProp_paused_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::NewProp_paused_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::NewProp_paused_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::NewProp_paused,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "Authority_SetActivationTimerPaused", nullptr, nullptr, sizeof(GameplayModifierContainer_eventAuthority_SetActivationTimerPaused_Parms), Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics
	{
		struct GameplayModifierContainer_eventAuthority_TriggerActivationTimer_Parms
		{
			float activationTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_activationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::NewProp_activationTime = { "activationTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventAuthority_TriggerActivationTimer_Parms, activationTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::NewProp_activationTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "Authority_TriggerActivationTimer", nullptr, nullptr, sizeof(GameplayModifierContainer_eventAuthority_TriggerActivationTimer_Parms), Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics
	{
		struct GameplayModifierContainer_eventFireActiveStatusViewEvent_Parms
		{
			FName NewStatusViewID;
			FName uniqueSourceID;
			FStatusViewSource statusViewSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusViewSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_statusViewSource;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_uniqueSourceID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_NewStatusViewID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource = { "statusViewSource", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventFireActiveStatusViewEvent_Parms, statusViewSource), Z_Construct_UScriptStruct_FStatusViewSource, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_uniqueSourceID = { "uniqueSourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventFireActiveStatusViewEvent_Parms, uniqueSourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_NewStatusViewID = { "NewStatusViewID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventFireActiveStatusViewEvent_Parms, NewStatusViewID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_uniqueSourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::NewProp_NewStatusViewID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "FireActiveStatusViewEvent", nullptr, nullptr, sizeof(GameplayModifierContainer_eventFireActiveStatusViewEvent_Parms), Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics
	{
		struct GameplayModifierContainer_eventGetActivationTimerDuration_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetActivationTimerDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetActivationTimerDuration", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetActivationTimerDuration_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics
	{
		struct GameplayModifierContainer_eventGetActivationTimerElapsedTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetActivationTimerElapsedTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetActivationTimerElapsedTime", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetActivationTimerElapsedTime_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics
	{
		struct GameplayModifierContainer_eventGetActivationTimerElapsedTimePercent_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetActivationTimerElapsedTimePercent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetActivationTimerElapsedTimePercent", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetActivationTimerElapsedTimePercent_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics
	{
		struct GameplayModifierContainer_eventGetActivationTimerPercentRemaining_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetActivationTimerPercentRemaining_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetActivationTimerPercentRemaining", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetActivationTimerPercentRemaining_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics
	{
		struct GameplayModifierContainer_eventGetActivationTimerRemainingTime_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetActivationTimerRemainingTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetActivationTimerRemainingTime", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetActivationTimerRemainingTime_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetIconFilePathIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetIconFilePathIndex", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetIconFilePathIndex_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics
	{
		struct GameplayModifierContainer_eventGetInventoryItemType_Parms
		{
			EInventoryItemType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetInventoryItemType_Parms, ReturnValue), Z_Construct_UEnum_DeadByDaylight_EInventoryItemType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetInventoryItemType", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetInventoryItemType_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics
	{
		struct GameplayModifierContainer_eventGetLevelToDisplay_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetLevelToDisplay_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetLevelToDisplay", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetLevelToDisplay_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics
	{
		struct GameplayModifierContainer_eventGetModifierValue_Parms
		{
			FGameplayTag type;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetModifierValue_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetModifierValue_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetModifierValue", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetModifierValue_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetOriginatingEffect_Parms, ReturnValue), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetOriginatingEffect", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetOriginatingEffect_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics
	{
		struct GameplayModifierContainer_eventGetOwningPlayer_Parms
		{
			ADBDPlayer* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetOwningPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetOwningPlayer", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetOwningPlayer_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetPercentageFill_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetPercentageFill", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetPercentageFill_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventGetRemainingLifetime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "GetRemainingLifetime", nullptr, nullptr, sizeof(GameplayModifierContainer_eventGetRemainingLifetime_Parms), Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics
	{
		struct GameplayModifierContainer_eventHasFlag_Parms
		{
			FGameplayTag flag;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayModifierContainer_eventHasFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayModifierContainer_eventHasFlag_Parms), &Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventHasFlag_Parms, flag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "HasFlag", nullptr, nullptr, sizeof(GameplayModifierContainer_eventHasFlag_Parms), Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_HasFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_HasFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics
	{
		struct GameplayModifierContainer_eventHasModifierOfType_Parms
		{
			FGameplayTag type;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayModifierContainer_eventHasModifierOfType_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayModifierContainer_eventHasModifierOfType_Parms), &Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventHasModifierOfType_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "HasModifierOfType", nullptr, nullptr, sizeof(GameplayModifierContainer_eventHasModifierOfType_Parms), Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics
	{
		struct GameplayModifierContainer_eventIsActivationTimerActive_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayModifierContainer_eventIsActivationTimerActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayModifierContainer_eventIsActivationTimerActive_Parms), &Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "IsActivationTimerActive", nullptr, nullptr, sizeof(GameplayModifierContainer_eventIsActivationTimerActive_Parms), Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics
	{
		struct GameplayModifierContainer_eventIsActivationTimerDone_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayModifierContainer_eventIsActivationTimerDone_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayModifierContainer_eventIsActivationTimerDone_Parms), &Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "IsActivationTimerDone", nullptr, nullptr, sizeof(GameplayModifierContainer_eventIsActivationTimerDone_Parms), Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((GameplayModifierContainer_eventIsStatusViewActive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayModifierContainer_eventIsStatusViewActive_Parms), &Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "IsStatusViewActive", nullptr, nullptr, sizeof(GameplayModifierContainer_eventIsStatusViewActive_Parms), Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics
	{
		struct GameplayModifierContainer_eventListenToDispatcherGameEvent_Parms
		{
			FGameplayTag eventType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_eventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventListenToDispatcherGameEvent_Parms, eventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::NewProp_eventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "ListenToDispatcherGameEvent", nullptr, nullptr, sizeof(GameplayModifierContainer_eventListenToDispatcherGameEvent_Parms), Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics
	{
		struct GameplayModifierContainer_eventListenToGameEvent_Parms
		{
			EDBDScoreTypes eventType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventListenToGameEvent_Parms, eventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::NewProp_eventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::NewProp_eventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "ListenToGameEvent", nullptr, nullptr, sizeof(GameplayModifierContainer_eventListenToGameEvent_Parms), Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnApplyBegin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnApplyBegin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnApplyBegin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnApplyBegin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnApplyBegin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnApplyBegin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnApplyBegin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnApplyBegin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnApplyEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnApplyEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnApplyEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnApplyEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnApplyEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnApplyEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnApplyEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnApplyEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnGameEventDispatched_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnGameEventDispatched_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnGameEventDispatched", nullptr, nullptr, sizeof(GameplayModifierContainer_eventOnGameEventDispatched_Parms), Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics
	{
		struct GameplayModifierContainer_eventOnGameplayEvent_Parms
		{
			EDBDScoreTypes eventType;
			float amount;
			AActor* instigator;
			AActor* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnGameplayEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnGameplayEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnGameplayEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnGameplayEvent_Parms, eventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_eventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::NewProp_eventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnGameplayEvent", nullptr, nullptr, sizeof(GameplayModifierContainer_eventOnGameplayEvent_Parms), Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnInitialized", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Internal_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Internal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Internal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnInitialized_Internal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Internal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Internal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Internal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Internal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_instigator;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnListenedGameEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_instigator = { "instigator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnListenedGameEvent_Parms, instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnListenedGameEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventOnListenedGameEvent_Parms, eventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_instigator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_eventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::NewProp_eventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnListenedGameEvent", nullptr, nullptr, sizeof(GameplayModifierContainer_eventOnListenedGameEvent_Parms), Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnRep_ActivationTimer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnRep_ActivationTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnRep_ActivationTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnRep_ActivationTimer", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnRep_ActivationTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnRep_ActivationTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnRep_ActivationTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnRep_ActivationTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_OnRep_TickableConditionsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_OnRep_TickableConditionsData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_OnRep_TickableConditionsData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "OnRep_TickableConditionsData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_OnRep_TickableConditionsData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_OnRep_TickableConditionsData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_OnRep_TickableConditionsData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_OnRep_TickableConditionsData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllFlags_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllFlags_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllFlags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "RemoveAllFlags", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllFlags_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllFlags_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllFlags()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllFlags_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllModifiers_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllModifiers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllModifiers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "RemoveAllModifiers", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllModifiers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllModifiers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllModifiers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllModifiers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics
	{
		struct GameplayModifierContainer_eventRemoveModifier_Parms
		{
			FGameplayTag type;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventRemoveModifier_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "RemoveModifier", nullptr, nullptr, sizeof(GameplayModifierContainer_eventRemoveModifier_Parms), Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics
	{
		struct GameplayModifierContainer_eventSetFlag_Parms
		{
			FGameplayTag flag;
			bool flagValue;
		};
		static void NewProp_flagValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_flagValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::NewProp_flagValue_SetBit(void* Obj)
	{
		((GameplayModifierContainer_eventSetFlag_Parms*)Obj)->flagValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::NewProp_flagValue = { "flagValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayModifierContainer_eventSetFlag_Parms), &Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::NewProp_flagValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::NewProp_flag = { "flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventSetFlag_Parms, flag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::NewProp_flagValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::NewProp_flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "SetFlag", nullptr, nullptr, sizeof(GameplayModifierContainer_eventSetFlag_Parms), Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_SetFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_SetFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics
	{
		struct GameplayModifierContainer_eventSetModifierValue_Parms
		{
			FGameplayTag type;
			float GameplayModifierValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GameplayModifierValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_type;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::NewProp_GameplayModifierValue = { "GameplayModifierValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventSetModifierValue_Parms, GameplayModifierValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventSetModifierValue_Parms, type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::NewProp_GameplayModifierValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::NewProp_type,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "SetModifierValue", nullptr, nullptr, sizeof(GameplayModifierContainer_eventSetModifierValue_Parms), Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics
	{
		struct GameplayModifierContainer_eventSetUseApplyFunction_Parms
		{
			bool use;
		};
		static void NewProp_use_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_use;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::NewProp_use_SetBit(void* Obj)
	{
		((GameplayModifierContainer_eventSetUseApplyFunction_Parms*)Obj)->use = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::NewProp_use = { "use", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GameplayModifierContainer_eventSetUseApplyFunction_Parms), &Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::NewProp_use_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::NewProp_use,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "SetUseApplyFunction", nullptr, nullptr, sizeof(GameplayModifierContainer_eventSetUseApplyFunction_Parms), Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllDispatcherGameEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllDispatcherGameEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllDispatcherGameEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "UnlistenToAllDispatcherGameEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllDispatcherGameEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllDispatcherGameEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllDispatcherGameEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllDispatcherGameEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllGameEvents_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllGameEvents_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllGameEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "UnlistenToAllGameEvents", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllGameEvents_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllGameEvents_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllGameEvents()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllGameEvents_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics
	{
		struct GameplayModifierContainer_eventUnlistenToDispatcherGameEvent_Parms
		{
			FGameplayTag eventType;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_eventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventUnlistenToDispatcherGameEvent_Parms, eventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::NewProp_eventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "UnlistenToDispatcherGameEvent", nullptr, nullptr, sizeof(GameplayModifierContainer_eventUnlistenToDispatcherGameEvent_Parms), Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics
	{
		struct GameplayModifierContainer_eventUnlistenToGameEvent_Parms
		{
			EDBDScoreTypes eventType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::NewProp_eventType = { "eventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GameplayModifierContainer_eventUnlistenToGameEvent_Parms, eventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::NewProp_eventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::NewProp_eventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::NewProp_eventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "UnlistenToGameEvent", nullptr, nullptr, sizeof(GameplayModifierContainer_eventUnlistenToGameEvent_Parms), Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGameplayModifierContainer_UpdateIsApplicable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGameplayModifierContainer_UpdateIsApplicable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGameplayModifierContainer_UpdateIsApplicable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGameplayModifierContainer, nullptr, "UpdateIsApplicable", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGameplayModifierContainer_UpdateIsApplicable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGameplayModifierContainer_UpdateIsApplicable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGameplayModifierContainer_UpdateIsApplicable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGameplayModifierContainer_UpdateIsApplicable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister()
	{
		return UGameplayModifierContainer::StaticClass();
	}
	struct Z_Construct_UClass_UGameplayModifierContainer_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activationTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canOptimizeTickActivation_MetaData[];
#endif
		static void NewProp__canOptimizeTickActivation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canOptimizeTickActivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__autoInitializeOnBeginPlay_MetaData[];
#endif
		static void NewProp__autoInitializeOnBeginPlay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__autoInitializeOnBeginPlay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusViewID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StatusViewID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastStatusView_MetaData[];
#endif
		static void NewProp_BroadcastStatusView_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastStatusView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseApplyFunction_MetaData[];
#endif
		static void NewProp_UseApplyFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseApplyFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tickableConditionsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tickableConditionsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGameplayModifierContainer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseModifierContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGameplayModifierContainer_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGameplayModifierContainer_AddCondition, "AddCondition" }, // 1602123854
		{ &Z_Construct_UFunction_UGameplayModifierContainer_Apply, "Apply" }, // 2249967046
		{ &Z_Construct_UFunction_UGameplayModifierContainer_Authority_ClearActivationTimer, "Authority_ClearActivationTimer" }, // 1026428743
		{ &Z_Construct_UFunction_UGameplayModifierContainer_Authority_InstantiateGameplayModifierConditions, "Authority_InstantiateGameplayModifierConditions" }, // 2440088868
		{ &Z_Construct_UFunction_UGameplayModifierContainer_Authority_SetActivationTimerPaused, "Authority_SetActivationTimerPaused" }, // 2933327567
		{ &Z_Construct_UFunction_UGameplayModifierContainer_Authority_TriggerActivationTimer, "Authority_TriggerActivationTimer" }, // 1137477022
		{ &Z_Construct_UFunction_UGameplayModifierContainer_FireActiveStatusViewEvent, "FireActiveStatusViewEvent" }, // 1800746610
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerDuration, "GetActivationTimerDuration" }, // 823902037
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTime, "GetActivationTimerElapsedTime" }, // 3494590585
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerElapsedTimePercent, "GetActivationTimerElapsedTimePercent" }, // 1208400395
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerPercentRemaining, "GetActivationTimerPercentRemaining" }, // 1543052129
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetActivationTimerRemainingTime, "GetActivationTimerRemainingTime" }, // 2942340472
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetIconFilePathIndex, "GetIconFilePathIndex" }, // 686292417
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetInventoryItemType, "GetInventoryItemType" }, // 4052120102
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetLevelToDisplay, "GetLevelToDisplay" }, // 429070402
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetModifierValue, "GetModifierValue" }, // 1325871480
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetOriginatingEffect, "GetOriginatingEffect" }, // 1401790993
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetOwningPlayer, "GetOwningPlayer" }, // 1846264293
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetPercentageFill, "GetPercentageFill" }, // 4102952211
		{ &Z_Construct_UFunction_UGameplayModifierContainer_GetRemainingLifetime, "GetRemainingLifetime" }, // 2977925435
		{ &Z_Construct_UFunction_UGameplayModifierContainer_HasFlag, "HasFlag" }, // 1571808384
		{ &Z_Construct_UFunction_UGameplayModifierContainer_HasModifierOfType, "HasModifierOfType" }, // 2406514658
		{ &Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerActive, "IsActivationTimerActive" }, // 2404559487
		{ &Z_Construct_UFunction_UGameplayModifierContainer_IsActivationTimerDone, "IsActivationTimerDone" }, // 2621755461
		{ &Z_Construct_UFunction_UGameplayModifierContainer_IsStatusViewActive, "IsStatusViewActive" }, // 2064868724
		{ &Z_Construct_UFunction_UGameplayModifierContainer_ListenToDispatcherGameEvent, "ListenToDispatcherGameEvent" }, // 2296195931
		{ &Z_Construct_UFunction_UGameplayModifierContainer_ListenToGameEvent, "ListenToGameEvent" }, // 1482461356
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnApplyBegin, "OnApplyBegin" }, // 3126485159
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnApplyEnd, "OnApplyEnd" }, // 3893972503
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnGameEventDispatched, "OnGameEventDispatched" }, // 4209033044
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnGameplayEvent, "OnGameplayEvent" }, // 269829207
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized, "OnInitialized" }, // 627003744
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnInitialized_Internal, "OnInitialized_Internal" }, // 1106970454
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnLevelReadyToPlay, "OnLevelReadyToPlay" }, // 2876181830
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnListenedGameEvent, "OnListenedGameEvent" }, // 1343311819
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnRep_ActivationTimer, "OnRep_ActivationTimer" }, // 1694767093
		{ &Z_Construct_UFunction_UGameplayModifierContainer_OnRep_TickableConditionsData, "OnRep_TickableConditionsData" }, // 4272569353
		{ &Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllFlags, "RemoveAllFlags" }, // 1280404111
		{ &Z_Construct_UFunction_UGameplayModifierContainer_RemoveAllModifiers, "RemoveAllModifiers" }, // 1279257512
		{ &Z_Construct_UFunction_UGameplayModifierContainer_RemoveModifier, "RemoveModifier" }, // 606414579
		{ &Z_Construct_UFunction_UGameplayModifierContainer_SetFlag, "SetFlag" }, // 3467128902
		{ &Z_Construct_UFunction_UGameplayModifierContainer_SetModifierValue, "SetModifierValue" }, // 3173520276
		{ &Z_Construct_UFunction_UGameplayModifierContainer_SetUseApplyFunction, "SetUseApplyFunction" }, // 3627104329
		{ &Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllDispatcherGameEvents, "UnlistenToAllDispatcherGameEvents" }, // 1063083727
		{ &Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToAllGameEvents, "UnlistenToAllGameEvents" }, // 3473462904
		{ &Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToDispatcherGameEvent, "UnlistenToDispatcherGameEvent" }, // 3843013308
		{ &Z_Construct_UFunction_UGameplayModifierContainer_UnlistenToGameEvent, "UnlistenToGameEvent" }, // 1585896432
		{ &Z_Construct_UFunction_UGameplayModifierContainer_UpdateIsApplicable, "UpdateIsApplicable" }, // 139337623
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GameplayModifierContainer.h" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__activationTimer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__activationTimer = { "_activationTimer", "OnRep_ActivationTimer", (EPropertyFlags)0x0040000100082028, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayModifierContainer, _activationTimer), Z_Construct_UClass_UTimerObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__activationTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__activationTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__canOptimizeTickActivation_MetaData[] = {
		{ "Category", "GameplayModifierContainer" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__canOptimizeTickActivation_SetBit(void* Obj)
	{
		((UGameplayModifierContainer*)Obj)->_canOptimizeTickActivation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__canOptimizeTickActivation = { "_canOptimizeTickActivation", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameplayModifierContainer), &Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__canOptimizeTickActivation_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__canOptimizeTickActivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__canOptimizeTickActivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__autoInitializeOnBeginPlay_MetaData[] = {
		{ "Category", "GameplayModifierContainer" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__autoInitializeOnBeginPlay_SetBit(void* Obj)
	{
		((UGameplayModifierContainer*)Obj)->_autoInitializeOnBeginPlay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__autoInitializeOnBeginPlay = { "_autoInitializeOnBeginPlay", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameplayModifierContainer), &Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__autoInitializeOnBeginPlay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__autoInitializeOnBeginPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__autoInitializeOnBeginPlay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_StatusViewID_MetaData[] = {
		{ "Category", "GameplayModifierContainer" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_StatusViewID = { "StatusViewID", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayModifierContainer, StatusViewID), METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_StatusViewID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_StatusViewID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_BroadcastStatusView_MetaData[] = {
		{ "Category", "GameplayModifierContainer" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_BroadcastStatusView_SetBit(void* Obj)
	{
		((UGameplayModifierContainer*)Obj)->BroadcastStatusView = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_BroadcastStatusView = { "BroadcastStatusView", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameplayModifierContainer), &Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_BroadcastStatusView_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_BroadcastStatusView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_BroadcastStatusView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_UseApplyFunction_MetaData[] = {
		{ "Category", "GameplayModifierContainer" },
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	void Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_UseApplyFunction_SetBit(void* Obj)
	{
		((UGameplayModifierContainer*)Obj)->UseApplyFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_UseApplyFunction = { "UseApplyFunction", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGameplayModifierContainer), &Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_UseApplyFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_UseApplyFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_UseApplyFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tags_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tags = { "_tags", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayModifierContainer, _tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tags_Inner = { "_tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tickableConditionsData_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tickableConditionsData = { "_tickableConditionsData", "OnRep_TickableConditionsData", (EPropertyFlags)0x0020088100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGameplayModifierContainer, _tickableConditionsData), Z_Construct_UScriptStruct_FModifierTickableConditionReplicatedData, METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tickableConditionsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tickableConditionsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGameplayModifierContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__activationTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__canOptimizeTickActivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__autoInitializeOnBeginPlay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_StatusViewID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_BroadcastStatusView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp_UseApplyFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGameplayModifierContainer_Statics::NewProp__tickableConditionsData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGameplayModifierContainer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGameplayModifierContainer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGameplayModifierContainer_Statics::ClassParams = {
		&UGameplayModifierContainer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGameplayModifierContainer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGameplayModifierContainer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGameplayModifierContainer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGameplayModifierContainer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGameplayModifierContainer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGameplayModifierContainer, 4014677673);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGameplayModifierContainer>()
	{
		return UGameplayModifierContainer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGameplayModifierContainer(Z_Construct_UClass_UGameplayModifierContainer, &UGameplayModifierContainer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGameplayModifierContainer"), false, nullptr, nullptr, nullptr);

	void UGameplayModifierContainer::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__tickableConditionsData(TEXT("_tickableConditionsData"));
		static const FName Name__activationTimer(TEXT("_activationTimer"));

		const bool bIsValid = true
			&& Name__tickableConditionsData == ClassReps[(int32)ENetFields_Private::_tickableConditionsData].Property->GetFName()
			&& Name__activationTimer == ClassReps[(int32)ENetFields_Private::_activationTimer].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UGameplayModifierContainer"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGameplayModifierContainer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
