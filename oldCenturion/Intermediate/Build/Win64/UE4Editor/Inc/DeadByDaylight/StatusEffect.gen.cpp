// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StatusEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusEffect() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EEndPlayReason();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayNotificationData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectInitializationData();
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierData();
// End Cross Module References
	DEFINE_FUNCTION(UStatusEffect::execAuthority_EndSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_EndSelf_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execAuthority_OnOriginatingPlayerEndPlay)
	{
		P_GET_OBJECT(AActor,Z_Param_actor);
		P_GET_PROPERTY(FByteProperty,Z_Param_endPlayReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnOriginatingPlayerEndPlay(Z_Param_actor,EEndPlayReason::Type(Z_Param_endPlayReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execAuthority_RemoveSelf)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RemoveSelf();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execAuthority_SetRemainingLifetime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_SetRemainingLifetime(Z_Param_lifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execBroadcastGameEventNotification)
	{
		P_GET_STRUCT(FGameplayNotificationData,Z_Param_notificationData);
		P_GET_UBOOL(Z_Param_addToHistory);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastGameEventNotification(Z_Param_notificationData,Z_Param_addToHistory);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execBroadcastOriginatorGameEventNotification)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOriginatorGameEventNotification();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execFireActiveStatusEffectEvent)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_levelToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireActiveStatusEffectEvent(Z_Param_percentage,Z_Param_levelToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execGetCustomParam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetCustomParam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execGetLifetimeDuration)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetLifetimeDuration();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execGetOriginatingPlayer)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ADBDPlayer**)Z_Param__Result=P_THIS->GetOriginatingPlayer();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execGetShouldDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetShouldDisplay_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execGetStatusEffectCooldownRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetStatusEffectCooldownRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execGetStatusEffectType)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EStatusEffectType*)Z_Param__Result=P_THIS->GetStatusEffectType();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execInitializeLifetime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeLifetime(Z_Param_lifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execIsInOriginatorRange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInOriginatorRange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execIsKillerInOriginatorRange)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_AdditiveRangeModifier);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsKillerInOriginatorRange(Z_Param_AdditiveRangeModifier);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execIsOriginatorAlive)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOriginatorAlive();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execIsOriginatorHooked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsOriginatorHooked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execMulticast_SetRemainingLifetime)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_lifetime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetRemainingLifetime_Implementation(Z_Param_lifetime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execMulticast_SetRemainingLifetimeInitialized)
	{
		P_GET_UBOOL(Z_Param_remainingLifetimeInitialized);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetRemainingLifetimeInitialized_Implementation(Z_Param_remainingLifetimeInitialized);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execOnRep_ModifierData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ModifierData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execOnRep_ShouldDisplay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShouldDisplay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execOnRep_ShouldOriginatingPlayerChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ShouldOriginatingPlayerChange();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execOnRep_StatusInitializationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_StatusInitializationData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execOnShouldDisplayChanged)
	{
		P_GET_UBOOL(Z_Param_currentValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShouldDisplayChanged_Implementation(Z_Param_currentValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execOnShouldOriginatingPlayerChange)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShouldOriginatingPlayerChange_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execSetShouldDisplay)
	{
		P_GET_UBOOL(Z_Param_on);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetShouldDisplay(Z_Param_on);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execSetStatusEffectIconPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetStatusEffectIconPercentage(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UStatusEffect::execShouldDisplayStatusEffectIcon)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->ShouldDisplayStatusEffectIcon_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_UStatusEffect_Authority_EndSelf = FName(TEXT("Authority_EndSelf"));
	void UStatusEffect::Authority_EndSelf()
	{
		ProcessEvent(FindFunctionChecked(NAME_UStatusEffect_Authority_EndSelf),NULL);
	}
	static FName NAME_UStatusEffect_GetShouldDisplay = FName(TEXT("GetShouldDisplay"));
	bool UStatusEffect::GetShouldDisplay() const
	{
		StatusEffect_eventGetShouldDisplay_Parms Parms;
		const_cast<UStatusEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UStatusEffect_GetShouldDisplay),&Parms);
		return !!Parms.ReturnValue;
	}
	static FName NAME_UStatusEffect_Multicast_SetRemainingLifetime = FName(TEXT("Multicast_SetRemainingLifetime"));
	void UStatusEffect::Multicast_SetRemainingLifetime(float lifetime)
	{
		StatusEffect_eventMulticast_SetRemainingLifetime_Parms Parms;
		Parms.lifetime=lifetime;
		ProcessEvent(FindFunctionChecked(NAME_UStatusEffect_Multicast_SetRemainingLifetime),&Parms);
	}
	static FName NAME_UStatusEffect_Multicast_SetRemainingLifetimeInitialized = FName(TEXT("Multicast_SetRemainingLifetimeInitialized"));
	void UStatusEffect::Multicast_SetRemainingLifetimeInitialized(bool remainingLifetimeInitialized)
	{
		StatusEffect_eventMulticast_SetRemainingLifetimeInitialized_Parms Parms;
		Parms.remainingLifetimeInitialized=remainingLifetimeInitialized ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UStatusEffect_Multicast_SetRemainingLifetimeInitialized),&Parms);
	}
	static FName NAME_UStatusEffect_OnShouldDisplayChanged = FName(TEXT("OnShouldDisplayChanged"));
	void UStatusEffect::OnShouldDisplayChanged(bool currentValue)
	{
		StatusEffect_eventOnShouldDisplayChanged_Parms Parms;
		Parms.currentValue=currentValue ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UStatusEffect_OnShouldDisplayChanged),&Parms);
	}
	static FName NAME_UStatusEffect_OnShouldOriginatingPlayerChange = FName(TEXT("OnShouldOriginatingPlayerChange"));
	void UStatusEffect::OnShouldOriginatingPlayerChange()
	{
		ProcessEvent(FindFunctionChecked(NAME_UStatusEffect_OnShouldOriginatingPlayerChange),NULL);
	}
	static FName NAME_UStatusEffect_ShouldDisplayStatusEffectIcon = FName(TEXT("ShouldDisplayStatusEffectIcon"));
	bool UStatusEffect::ShouldDisplayStatusEffectIcon() const
	{
		StatusEffect_eventShouldDisplayStatusEffectIcon_Parms Parms;
		const_cast<UStatusEffect*>(this)->ProcessEvent(FindFunctionChecked(NAME_UStatusEffect_ShouldDisplayStatusEffectIcon),&Parms);
		return !!Parms.ReturnValue;
	}
	void UStatusEffect::StaticRegisterNativesUStatusEffect()
	{
		UClass* Class = UStatusEffect::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_EndSelf", &UStatusEffect::execAuthority_EndSelf },
			{ "Authority_OnOriginatingPlayerEndPlay", &UStatusEffect::execAuthority_OnOriginatingPlayerEndPlay },
			{ "Authority_RemoveSelf", &UStatusEffect::execAuthority_RemoveSelf },
			{ "Authority_SetRemainingLifetime", &UStatusEffect::execAuthority_SetRemainingLifetime },
			{ "BroadcastGameEventNotification", &UStatusEffect::execBroadcastGameEventNotification },
			{ "BroadcastOriginatorGameEventNotification", &UStatusEffect::execBroadcastOriginatorGameEventNotification },
			{ "FireActiveStatusEffectEvent", &UStatusEffect::execFireActiveStatusEffectEvent },
			{ "GetCustomParam", &UStatusEffect::execGetCustomParam },
			{ "GetLifetimeDuration", &UStatusEffect::execGetLifetimeDuration },
			{ "GetOriginatingPlayer", &UStatusEffect::execGetOriginatingPlayer },
			{ "GetShouldDisplay", &UStatusEffect::execGetShouldDisplay },
			{ "GetStatusEffectCooldownRate", &UStatusEffect::execGetStatusEffectCooldownRate },
			{ "GetStatusEffectType", &UStatusEffect::execGetStatusEffectType },
			{ "InitializeLifetime", &UStatusEffect::execInitializeLifetime },
			{ "IsInOriginatorRange", &UStatusEffect::execIsInOriginatorRange },
			{ "IsKillerInOriginatorRange", &UStatusEffect::execIsKillerInOriginatorRange },
			{ "IsOriginatorAlive", &UStatusEffect::execIsOriginatorAlive },
			{ "IsOriginatorHooked", &UStatusEffect::execIsOriginatorHooked },
			{ "Multicast_SetRemainingLifetime", &UStatusEffect::execMulticast_SetRemainingLifetime },
			{ "Multicast_SetRemainingLifetimeInitialized", &UStatusEffect::execMulticast_SetRemainingLifetimeInitialized },
			{ "OnRep_ModifierData", &UStatusEffect::execOnRep_ModifierData },
			{ "OnRep_ShouldDisplay", &UStatusEffect::execOnRep_ShouldDisplay },
			{ "OnRep_ShouldOriginatingPlayerChange", &UStatusEffect::execOnRep_ShouldOriginatingPlayerChange },
			{ "OnRep_StatusInitializationData", &UStatusEffect::execOnRep_StatusInitializationData },
			{ "OnShouldDisplayChanged", &UStatusEffect::execOnShouldDisplayChanged },
			{ "OnShouldOriginatingPlayerChange", &UStatusEffect::execOnShouldOriginatingPlayerChange },
			{ "SetShouldDisplay", &UStatusEffect::execSetShouldDisplay },
			{ "SetStatusEffectIconPercentage", &UStatusEffect::execSetStatusEffectIconPercentage },
			{ "ShouldDisplayStatusEffectIcon", &UStatusEffect::execShouldDisplayStatusEffectIcon },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UStatusEffect_Authority_EndSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_Authority_EndSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_Authority_EndSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "Authority_EndSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C04, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_Authority_EndSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Authority_EndSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_Authority_EndSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_Authority_EndSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics
	{
		struct StatusEffect_eventAuthority_OnOriginatingPlayerEndPlay_Parms
		{
			AActor* actor;
			TEnumAsByte<EEndPlayReason::Type> endPlayReason;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_endPlayReason;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::NewProp_endPlayReason = { "endPlayReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventAuthority_OnOriginatingPlayerEndPlay_Parms, endPlayReason), Z_Construct_UEnum_Engine_EEndPlayReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::NewProp_actor = { "actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventAuthority_OnOriginatingPlayerEndPlay_Parms, actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::NewProp_endPlayReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::NewProp_actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "Authority_OnOriginatingPlayerEndPlay", nullptr, nullptr, sizeof(StatusEffect_eventAuthority_OnOriginatingPlayerEndPlay_Parms), Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_Authority_RemoveSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_Authority_RemoveSelf_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_Authority_RemoveSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "Authority_RemoveSelf", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_Authority_RemoveSelf_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Authority_RemoveSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_Authority_RemoveSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_Authority_RemoveSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics
	{
		struct StatusEffect_eventAuthority_SetRemainingLifetime_Parms
		{
			float lifetime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::NewProp_lifetime = { "lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventAuthority_SetRemainingLifetime_Parms, lifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::NewProp_lifetime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "Authority_SetRemainingLifetime", nullptr, nullptr, sizeof(StatusEffect_eventAuthority_SetRemainingLifetime_Parms), Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics
	{
		struct StatusEffect_eventBroadcastGameEventNotification_Parms
		{
			FGameplayNotificationData notificationData;
			bool addToHistory;
		};
		static void NewProp_addToHistory_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_addToHistory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_notificationData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::NewProp_addToHistory_SetBit(void* Obj)
	{
		((StatusEffect_eventBroadcastGameEventNotification_Parms*)Obj)->addToHistory = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::NewProp_addToHistory = { "addToHistory", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventBroadcastGameEventNotification_Parms), &Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::NewProp_addToHistory_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::NewProp_notificationData = { "notificationData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventBroadcastGameEventNotification_Parms, notificationData), Z_Construct_UScriptStruct_FGameplayNotificationData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::NewProp_addToHistory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::NewProp_notificationData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "BroadcastGameEventNotification", nullptr, nullptr, sizeof(StatusEffect_eventBroadcastGameEventNotification_Parms), Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_BroadcastOriginatorGameEventNotification_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_BroadcastOriginatorGameEventNotification_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_BroadcastOriginatorGameEventNotification_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "BroadcastOriginatorGameEventNotification", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_BroadcastOriginatorGameEventNotification_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_BroadcastOriginatorGameEventNotification_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_BroadcastOriginatorGameEventNotification()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_BroadcastOriginatorGameEventNotification_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics
	{
		struct StatusEffect_eventFireActiveStatusEffectEvent_Parms
		{
			float percentage;
			int32 levelToDisplay;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelToDisplay;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::NewProp_levelToDisplay = { "levelToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventFireActiveStatusEffectEvent_Parms, levelToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventFireActiveStatusEffectEvent_Parms, percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::NewProp_levelToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "FireActiveStatusEffectEvent", nullptr, nullptr, sizeof(StatusEffect_eventFireActiveStatusEffectEvent_Parms), Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics
	{
		struct StatusEffect_eventGetCustomParam_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventGetCustomParam_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "GetCustomParam", nullptr, nullptr, sizeof(StatusEffect_eventGetCustomParam_Parms), Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_GetCustomParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_GetCustomParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics
	{
		struct StatusEffect_eventGetLifetimeDuration_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventGetLifetimeDuration_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "GetLifetimeDuration", nullptr, nullptr, sizeof(StatusEffect_eventGetLifetimeDuration_Parms), Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics
	{
		struct StatusEffect_eventGetOriginatingPlayer_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventGetOriginatingPlayer_Parms, ReturnValue), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "GetOriginatingPlayer", nullptr, nullptr, sizeof(StatusEffect_eventGetOriginatingPlayer_Parms), Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatusEffect_eventGetShouldDisplay_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventGetShouldDisplay_Parms), &Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "GetShouldDisplay", nullptr, nullptr, sizeof(StatusEffect_eventGetShouldDisplay_Parms), Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_GetShouldDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_GetShouldDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics
	{
		struct StatusEffect_eventGetStatusEffectCooldownRate_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventGetStatusEffectCooldownRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "GetStatusEffectCooldownRate", nullptr, nullptr, sizeof(StatusEffect_eventGetStatusEffectCooldownRate_Parms), Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics
	{
		struct StatusEffect_eventGetStatusEffectType_Parms
		{
			EStatusEffectType ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventGetStatusEffectType_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "GetStatusEffectType", nullptr, nullptr, sizeof(StatusEffect_eventGetStatusEffectType_Parms), Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_GetStatusEffectType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_GetStatusEffectType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics
	{
		struct StatusEffect_eventInitializeLifetime_Parms
		{
			float lifetime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::NewProp_lifetime = { "lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventInitializeLifetime_Parms, lifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::NewProp_lifetime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "InitializeLifetime", nullptr, nullptr, sizeof(StatusEffect_eventInitializeLifetime_Parms), Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_InitializeLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_InitializeLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics
	{
		struct StatusEffect_eventIsInOriginatorRange_Parms
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
	void Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatusEffect_eventIsInOriginatorRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventIsInOriginatorRange_Parms), &Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "IsInOriginatorRange", nullptr, nullptr, sizeof(StatusEffect_eventIsInOriginatorRange_Parms), Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics
	{
		struct StatusEffect_eventIsKillerInOriginatorRange_Parms
		{
			float AdditiveRangeModifier;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AdditiveRangeModifier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatusEffect_eventIsKillerInOriginatorRange_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventIsKillerInOriginatorRange_Parms), &Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::NewProp_AdditiveRangeModifier = { "AdditiveRangeModifier", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventIsKillerInOriginatorRange_Parms, AdditiveRangeModifier), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::NewProp_AdditiveRangeModifier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "IsKillerInOriginatorRange", nullptr, nullptr, sizeof(StatusEffect_eventIsKillerInOriginatorRange_Parms), Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics
	{
		struct StatusEffect_eventIsOriginatorAlive_Parms
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
	void Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatusEffect_eventIsOriginatorAlive_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventIsOriginatorAlive_Parms), &Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "IsOriginatorAlive", nullptr, nullptr, sizeof(StatusEffect_eventIsOriginatorAlive_Parms), Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics
	{
		struct StatusEffect_eventIsOriginatorHooked_Parms
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
	void Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatusEffect_eventIsOriginatorHooked_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventIsOriginatorHooked_Parms), &Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "IsOriginatorHooked", nullptr, nullptr, sizeof(StatusEffect_eventIsOriginatorHooked_Parms), Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_lifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::NewProp_lifetime = { "lifetime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventMulticast_SetRemainingLifetime_Parms, lifetime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::NewProp_lifetime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "Multicast_SetRemainingLifetime", nullptr, nullptr, sizeof(StatusEffect_eventMulticast_SetRemainingLifetime_Parms), Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics
	{
		static void NewProp_remainingLifetimeInitialized_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_remainingLifetimeInitialized;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::NewProp_remainingLifetimeInitialized_SetBit(void* Obj)
	{
		((StatusEffect_eventMulticast_SetRemainingLifetimeInitialized_Parms*)Obj)->remainingLifetimeInitialized = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::NewProp_remainingLifetimeInitialized = { "remainingLifetimeInitialized", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventMulticast_SetRemainingLifetimeInitialized_Parms), &Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::NewProp_remainingLifetimeInitialized_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::NewProp_remainingLifetimeInitialized,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "Multicast_SetRemainingLifetimeInitialized", nullptr, nullptr, sizeof(StatusEffect_eventMulticast_SetRemainingLifetimeInitialized_Parms), Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_OnRep_ModifierData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_OnRep_ModifierData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_OnRep_ModifierData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "OnRep_ModifierData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_OnRep_ModifierData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_OnRep_ModifierData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_OnRep_ModifierData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_OnRep_ModifierData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_OnRep_ShouldDisplay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_OnRep_ShouldDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_OnRep_ShouldDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "OnRep_ShouldDisplay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_OnRep_ShouldDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_OnRep_ShouldDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_OnRep_ShouldDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_OnRep_ShouldDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_OnRep_ShouldOriginatingPlayerChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_OnRep_ShouldOriginatingPlayerChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_OnRep_ShouldOriginatingPlayerChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "OnRep_ShouldOriginatingPlayerChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_OnRep_ShouldOriginatingPlayerChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_OnRep_ShouldOriginatingPlayerChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_OnRep_ShouldOriginatingPlayerChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_OnRep_ShouldOriginatingPlayerChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_OnRep_StatusInitializationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_OnRep_StatusInitializationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_OnRep_StatusInitializationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "OnRep_StatusInitializationData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_OnRep_StatusInitializationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_OnRep_StatusInitializationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_OnRep_StatusInitializationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_OnRep_StatusInitializationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics
	{
		static void NewProp_currentValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_currentValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::NewProp_currentValue_SetBit(void* Obj)
	{
		((StatusEffect_eventOnShouldDisplayChanged_Parms*)Obj)->currentValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::NewProp_currentValue = { "currentValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventOnShouldDisplayChanged_Parms), &Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::NewProp_currentValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::NewProp_currentValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "OnShouldDisplayChanged", nullptr, nullptr, sizeof(StatusEffect_eventOnShouldDisplayChanged_Parms), Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_OnShouldOriginatingPlayerChange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_OnShouldOriginatingPlayerChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_OnShouldOriginatingPlayerChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "OnShouldOriginatingPlayerChange", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_OnShouldOriginatingPlayerChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_OnShouldOriginatingPlayerChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_OnShouldOriginatingPlayerChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_OnShouldOriginatingPlayerChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics
	{
		struct StatusEffect_eventSetShouldDisplay_Parms
		{
			bool on;
		};
		static void NewProp_on_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_on;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::NewProp_on_SetBit(void* Obj)
	{
		((StatusEffect_eventSetShouldDisplay_Parms*)Obj)->on = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::NewProp_on = { "on", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventSetShouldDisplay_Parms), &Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::NewProp_on_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::NewProp_on,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "SetShouldDisplay", nullptr, nullptr, sizeof(StatusEffect_eventSetShouldDisplay_Parms), Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_SetShouldDisplay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_SetShouldDisplay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics
	{
		struct StatusEffect_eventSetStatusEffectIconPercentage_Parms
		{
			float value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(StatusEffect_eventSetStatusEffectIconPercentage_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "SetStatusEffectIconPercentage", nullptr, nullptr, sizeof(StatusEffect_eventSetStatusEffectIconPercentage_Parms), Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics
	{
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((StatusEffect_eventShouldDisplayStatusEffectIcon_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(StatusEffect_eventShouldDisplayStatusEffectIcon_Parms), &Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffect, nullptr, "ShouldDisplayStatusEffectIcon", nullptr, nullptr, sizeof(StatusEffect_eventShouldDisplayStatusEffectIcon_Parms), Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UStatusEffect_NoRegister()
	{
		return UStatusEffect::StaticClass();
	}
	struct Z_Construct_UClass_UStatusEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nonStackingEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__nonStackingEffects;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__nonStackingEffects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statusInitializationData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__statusInitializationData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable_MetaData[];
#endif
		static void NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastAsStatusEffectAlways_MetaData[];
#endif
		static void NewProp_BroadcastAsStatusEffectAlways_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastAsStatusEffectAlways;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastAsStatusEffectByFunction_MetaData[];
#endif
		static void NewProp_BroadcastAsStatusEffectByFunction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastAsStatusEffectByFunction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastAsStatusEffectWhenLifeRemains_MetaData[];
#endif
		static void NewProp_BroadcastAsStatusEffectWhenLifeRemains_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastAsStatusEffectWhenLifeRemains;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastAsStatusEffectByActivationTimer_MetaData[];
#endif
		static void NewProp_BroadcastAsStatusEffectByActivationTimer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastAsStatusEffectByActivationTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BroadcastAsStatusEffectWhenApplicable_MetaData[];
#endif
		static void NewProp_BroadcastAsStatusEffectWhenApplicable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BroadcastAsStatusEffectWhenApplicable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__removeOnRemainingLifetimeEnded_MetaData[];
#endif
		static void NewProp__removeOnRemainingLifetimeEnded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__removeOnRemainingLifetimeEnded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomParam_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CustomParam;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldDisplay_MetaData[];
#endif
		static void NewProp_ShouldDisplay_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldDisplay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ModifierData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ModifierData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStatusEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierContainer,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UStatusEffect_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatusEffect_Authority_EndSelf, "Authority_EndSelf" }, // 500788986
		{ &Z_Construct_UFunction_UStatusEffect_Authority_OnOriginatingPlayerEndPlay, "Authority_OnOriginatingPlayerEndPlay" }, // 2087434667
		{ &Z_Construct_UFunction_UStatusEffect_Authority_RemoveSelf, "Authority_RemoveSelf" }, // 4244396339
		{ &Z_Construct_UFunction_UStatusEffect_Authority_SetRemainingLifetime, "Authority_SetRemainingLifetime" }, // 3373372202
		{ &Z_Construct_UFunction_UStatusEffect_BroadcastGameEventNotification, "BroadcastGameEventNotification" }, // 2569704786
		{ &Z_Construct_UFunction_UStatusEffect_BroadcastOriginatorGameEventNotification, "BroadcastOriginatorGameEventNotification" }, // 978998503
		{ &Z_Construct_UFunction_UStatusEffect_FireActiveStatusEffectEvent, "FireActiveStatusEffectEvent" }, // 692890162
		{ &Z_Construct_UFunction_UStatusEffect_GetCustomParam, "GetCustomParam" }, // 3793820657
		{ &Z_Construct_UFunction_UStatusEffect_GetLifetimeDuration, "GetLifetimeDuration" }, // 3734817400
		{ &Z_Construct_UFunction_UStatusEffect_GetOriginatingPlayer, "GetOriginatingPlayer" }, // 3447984466
		{ &Z_Construct_UFunction_UStatusEffect_GetShouldDisplay, "GetShouldDisplay" }, // 2299153197
		{ &Z_Construct_UFunction_UStatusEffect_GetStatusEffectCooldownRate, "GetStatusEffectCooldownRate" }, // 2739629141
		{ &Z_Construct_UFunction_UStatusEffect_GetStatusEffectType, "GetStatusEffectType" }, // 69612213
		{ &Z_Construct_UFunction_UStatusEffect_InitializeLifetime, "InitializeLifetime" }, // 3832469355
		{ &Z_Construct_UFunction_UStatusEffect_IsInOriginatorRange, "IsInOriginatorRange" }, // 3170545490
		{ &Z_Construct_UFunction_UStatusEffect_IsKillerInOriginatorRange, "IsKillerInOriginatorRange" }, // 879061089
		{ &Z_Construct_UFunction_UStatusEffect_IsOriginatorAlive, "IsOriginatorAlive" }, // 3571107619
		{ &Z_Construct_UFunction_UStatusEffect_IsOriginatorHooked, "IsOriginatorHooked" }, // 1268845947
		{ &Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetime, "Multicast_SetRemainingLifetime" }, // 3780641991
		{ &Z_Construct_UFunction_UStatusEffect_Multicast_SetRemainingLifetimeInitialized, "Multicast_SetRemainingLifetimeInitialized" }, // 3041226454
		{ &Z_Construct_UFunction_UStatusEffect_OnRep_ModifierData, "OnRep_ModifierData" }, // 1478578612
		{ &Z_Construct_UFunction_UStatusEffect_OnRep_ShouldDisplay, "OnRep_ShouldDisplay" }, // 385510473
		{ &Z_Construct_UFunction_UStatusEffect_OnRep_ShouldOriginatingPlayerChange, "OnRep_ShouldOriginatingPlayerChange" }, // 2402849141
		{ &Z_Construct_UFunction_UStatusEffect_OnRep_StatusInitializationData, "OnRep_StatusInitializationData" }, // 2151669681
		{ &Z_Construct_UFunction_UStatusEffect_OnShouldDisplayChanged, "OnShouldDisplayChanged" }, // 2361191664
		{ &Z_Construct_UFunction_UStatusEffect_OnShouldOriginatingPlayerChange, "OnShouldOriginatingPlayerChange" }, // 2623408027
		{ &Z_Construct_UFunction_UStatusEffect_SetShouldDisplay, "SetShouldDisplay" }, // 2770488038
		{ &Z_Construct_UFunction_UStatusEffect_SetStatusEffectIconPercentage, "SetStatusEffectIconPercentage" }, // 3455631299
		{ &Z_Construct_UFunction_UStatusEffect_ShouldDisplayStatusEffectIcon, "ShouldDisplayStatusEffectIcon" }, // 3086260352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StatusEffect.h" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp__nonStackingEffects_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp__nonStackingEffects = { "_nonStackingEffects", nullptr, (EPropertyFlags)0x0044000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusEffect, _nonStackingEffects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp__nonStackingEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp__nonStackingEffects_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp__nonStackingEffects_Inner = { "_nonStackingEffects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp__statusInitializationData_MetaData[] = {
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp__statusInitializationData = { "_statusInitializationData", "OnRep_StatusInitializationData", (EPropertyFlags)0x0040008100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusEffect, _statusInitializationData), Z_Construct_UScriptStruct_FStatusEffectInitializationData, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp__statusInitializationData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp__statusInitializationData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable_SetBit(void* Obj)
	{
		((UStatusEffect*)Obj)->BroadcastOriginatorGameEventNotificationWhenFirstApplicable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable = { "BroadcastOriginatorGameEventNotificationWhenFirstApplicable", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatusEffect), &Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectAlways_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectAlways_SetBit(void* Obj)
	{
		((UStatusEffect*)Obj)->BroadcastAsStatusEffectAlways = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectAlways = { "BroadcastAsStatusEffectAlways", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatusEffect), &Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectAlways_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectAlways_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectAlways_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByFunction_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByFunction_SetBit(void* Obj)
	{
		((UStatusEffect*)Obj)->BroadcastAsStatusEffectByFunction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByFunction = { "BroadcastAsStatusEffectByFunction", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatusEffect), &Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByFunction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByFunction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByFunction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenLifeRemains_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenLifeRemains_SetBit(void* Obj)
	{
		((UStatusEffect*)Obj)->BroadcastAsStatusEffectWhenLifeRemains = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenLifeRemains = { "BroadcastAsStatusEffectWhenLifeRemains", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatusEffect), &Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenLifeRemains_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenLifeRemains_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenLifeRemains_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByActivationTimer_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByActivationTimer_SetBit(void* Obj)
	{
		((UStatusEffect*)Obj)->BroadcastAsStatusEffectByActivationTimer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByActivationTimer = { "BroadcastAsStatusEffectByActivationTimer", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatusEffect), &Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByActivationTimer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByActivationTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByActivationTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenApplicable_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenApplicable_SetBit(void* Obj)
	{
		((UStatusEffect*)Obj)->BroadcastAsStatusEffectWhenApplicable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenApplicable = { "BroadcastAsStatusEffectWhenApplicable", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatusEffect), &Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenApplicable_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenApplicable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenApplicable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp__removeOnRemainingLifetimeEnded_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UStatusEffect_Statics::NewProp__removeOnRemainingLifetimeEnded_SetBit(void* Obj)
	{
		((UStatusEffect*)Obj)->_removeOnRemainingLifetimeEnded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp__removeOnRemainingLifetimeEnded = { "_removeOnRemainingLifetimeEnded", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatusEffect), &Z_Construct_UClass_UStatusEffect_Statics::NewProp__removeOnRemainingLifetimeEnded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp__removeOnRemainingLifetimeEnded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp__removeOnRemainingLifetimeEnded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_CustomParam_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_CustomParam = { "CustomParam", nullptr, (EPropertyFlags)0x0020080000022015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusEffect, CustomParam), METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_CustomParam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_CustomParam_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_ShouldDisplay_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	void Z_Construct_UClass_UStatusEffect_Statics::NewProp_ShouldDisplay_SetBit(void* Obj)
	{
		((UStatusEffect*)Obj)->ShouldDisplay = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_ShouldDisplay = { "ShouldDisplay", "OnRep_ShouldDisplay", (EPropertyFlags)0x0020080100000035, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UStatusEffect), &Z_Construct_UClass_UStatusEffect_Statics::NewProp_ShouldDisplay_SetBit, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_ShouldDisplay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_ShouldDisplay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStatusEffect_Statics::NewProp_ModifierData_MetaData[] = {
		{ "Category", "StatusEffect" },
		{ "ModuleRelativePath", "Public/StatusEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStatusEffect_Statics::NewProp_ModifierData = { "ModifierData", "OnRep_ModifierData", (EPropertyFlags)0x0020080100000021, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStatusEffect, ModifierData), Z_Construct_UScriptStruct_FGameplayModifierData, METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::NewProp_ModifierData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::NewProp_ModifierData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStatusEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp__nonStackingEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp__nonStackingEffects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp__statusInitializationData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastOriginatorGameEventNotificationWhenFirstApplicable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectAlways,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByFunction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenLifeRemains,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectByActivationTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_BroadcastAsStatusEffectWhenApplicable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp__removeOnRemainingLifetimeEnded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_CustomParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_ShouldDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStatusEffect_Statics::NewProp_ModifierData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStatusEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStatusEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStatusEffect_Statics::ClassParams = {
		&UStatusEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UStatusEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStatusEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStatusEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStatusEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStatusEffect, 1897342112);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UStatusEffect>()
	{
		return UStatusEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStatusEffect(Z_Construct_UClass_UStatusEffect, &UStatusEffect::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UStatusEffect"), false, nullptr, nullptr, nullptr);

	void UStatusEffect::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_ModifierData(TEXT("ModifierData"));
		static const FName Name_ShouldDisplay(TEXT("ShouldDisplay"));
		static const FName Name__statusInitializationData(TEXT("_statusInitializationData"));

		const bool bIsValid = true
			&& Name_ModifierData == ClassReps[(int32)ENetFields_Private::ModifierData].Property->GetFName()
			&& Name_ShouldDisplay == ClassReps[(int32)ENetFields_Private::ShouldDisplay].Property->GetFName()
			&& Name__statusInitializationData == ClassReps[(int32)ENetFields_Private::_statusInitializationData].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UStatusEffect"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
