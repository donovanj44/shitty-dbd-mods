// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerState() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EGameState();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes();
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayerState();
	ENGINE_API UClass* Z_Construct_UClass_APlayerState();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScoreEventData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAwardedScore();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusViewSource();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayNotificationManager_NoRegister();
	PLATFORMSPROVIDERS_API UEnum* Z_Construct_UEnum_PlatformsProviders_EProviderFlag();
	PLATFORMSPROVIDERS_API UEnum* Z_Construct_UEnum_PlatformsProviders_EPlatformFlag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterStatsHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAchievementHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDRecentGameplayEvents();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOngoingScoreData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FUserGameStats();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAwardedScores();
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FEquippedPlayerCustomization();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerStateData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterStateData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDedicatedServerHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URitualHandlerComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel();
	GAMEFLOWNOTIFICATIONS_API UClass* Z_Construct_UClass_UPlayerflowEventsNotifier_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameStateChanged_Parms
		{
			EGameState gameState;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gameState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gameState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::NewProp_gameState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::NewProp_gameState = { "gameState", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameStateChanged_Parms, gameState), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::NewProp_gameState_MetaData, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::NewProp_gameState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::NewProp_gameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::NewProp_gameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::NewProp_gameState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameStateChanged_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDPlayerStateOnGameStateChanged__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics
	{
		struct _Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameplayEvent_Parms
		{
			EDBDScoreTypes playerGameplayEventType;
			float amount;
			AActor* effector;
			AActor* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerGameplayEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerGameplayEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameplayEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_effector = { "effector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameplayEvent_Parms, effector), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameplayEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType = { "playerGameplayEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameplayEvent_Parms, playerGameplayEventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_effector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::NewProp_playerGameplayEventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature", nullptr, nullptr, sizeof(_Script_DeadByDaylight_eventDBDPlayerStateOnPlayerGameplayEvent_Parms), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execAuthority_CancelOngoingScoreEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_scoreTypeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_CancelOngoingScoreEvent(Z_Param_scoreTypeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execAuthority_EndOngoingScoreEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_scoreTypeTag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_EndOngoingScoreEvent(Z_Param_scoreTypeTag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execAuthority_ForceCancelOngoingScoreEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_scoreType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ForceCancelOngoingScoreEvent(EDBDScoreTypes(Z_Param_scoreType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execAuthority_ForceEndOngoingScoreEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_scoreType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_ForceEndOngoingScoreEvent(EDBDScoreTypes(Z_Param_scoreType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execAuthority_HandleScoreEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_scoreTypeTag);
		P_GET_STRUCT(FScoreEventData,Z_Param_scoreEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_HandleScoreEvent(Z_Param_scoreTypeTag,Z_Param_scoreEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execClient_AtlantaUpdateInventoryItem)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_itemid);
		P_GET_PROPERTY(FIntProperty,Z_Param_newCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_AtlantaUpdateInventoryItem_Implementation(Z_Param_itemid,Z_Param_newCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execClient_HandleEscapeScoreEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_HandleEscapeScoreEvent_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execClient_RemotelyDispatchGameEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT(FGameEventData,Z_Param_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Client_RemotelyDispatchGameEvent_Validate(Z_Param_gameEventType,Z_Param_gameEventData))
		{
			RPC_ValidateFailed(TEXT("Client_RemotelyDispatchGameEvent_Validate"));
			return;
		}
		P_THIS->Client_RemotelyDispatchGameEvent_Implementation(Z_Param_gameEventType,Z_Param_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execClient_RemotelyDispatchGameEventWithScore)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT(FGameEventData,Z_Param_gameEventData);
		P_GET_STRUCT(FAwardedScore,Z_Param_awardedScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Client_RemotelyDispatchGameEventWithScore_Validate(Z_Param_gameEventType,Z_Param_gameEventData,Z_Param_awardedScore))
		{
			RPC_ValidateFailed(TEXT("Client_RemotelyDispatchGameEventWithScore_Validate"));
			return;
		}
		P_THIS->Client_RemotelyDispatchGameEventWithScore_Implementation(Z_Param_gameEventType,Z_Param_gameEventData,Z_Param_awardedScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execClient_RemoveItemFromInventory)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_toRemove);
		P_GET_UBOOL(Z_Param_updateLoadout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_RemoveItemFromInventory_Implementation(Z_Param_toRemove,Z_Param_updateLoadout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execClient_SetGameRole)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_newRole);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Client_SetGameRole_Validate(EPlayerRole(Z_Param_newRole)))
		{
			RPC_ValidateFailed(TEXT("Client_SetGameRole_Validate"));
			return;
		}
		P_THIS->Client_SetGameRole_Implementation(EPlayerRole(Z_Param_newRole));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execClient_SetInParadise)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_SetInParadise_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execClient_UpdateWallet)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_currencyId);
		P_GET_PROPERTY(FIntProperty,Z_Param_amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Client_UpdateWallet_Implementation(Z_Param_currencyId,Z_Param_amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execFireActiveStatusEffectEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusEffectID);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentage);
		P_GET_PROPERTY(FIntProperty,Z_Param_iconFilePathIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param_levelToDisplay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireActiveStatusEffectEvent(Z_Param_statusEffectID,Z_Param_percentage,Z_Param_iconFilePathIndex,Z_Param_levelToDisplay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execFireActiveStatusViewEvent)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_statusViewID);
		P_GET_PROPERTY(FNameProperty,Z_Param_uniqueSourceID);
		P_GET_STRUCT(FStatusViewSource,Z_Param_statusViewSource);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireActiveStatusViewEvent(Z_Param_statusViewID,Z_Param_uniqueSourceID,Z_Param_statusViewSource);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execFireScoreEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_scoreType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentToAward);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FireScoreEvent(EDBDScoreTypes(Z_Param_scoreType),Z_Param_percentToAward);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execGetGameplayNotificationManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UGameplayNotificationManager**)Z_Param__Result=P_THIS->GetGameplayNotificationManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execGetGameRole)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPlayerRole*)Z_Param__Result=P_THIS->GetGameRole();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execGetPlayerGameState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EGameState*)Z_Param__Result=P_THIS->GetPlayerGameState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execHasEscaped)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasEscaped();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execHasHappened)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_gameplayEventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_maxSecondsAgo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasHappened(EDBDScoreTypes(Z_Param_gameplayEventType),Z_Param_maxSecondsAgo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execIsInFinishedPlayingState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInFinishedPlayingState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execMulticast_FireGameplayEvent)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_playerGameplayEventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_effector);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_FireGameplayEvent_Validate(EDBDScoreTypes(Z_Param_playerGameplayEventType),Z_Param_amount,Z_Param_effector,Z_Param_target))
		{
			RPC_ValidateFailed(TEXT("Multicast_FireGameplayEvent_Validate"));
			return;
		}
		P_THIS->Multicast_FireGameplayEvent_Implementation(EDBDScoreTypes(Z_Param_playerGameplayEventType),Z_Param_amount,Z_Param_effector,Z_Param_target);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execMulticast_FireGameplayEventWithScore)
	{
		P_GET_ENUM(EDBDScoreTypes,Z_Param_playerGameplayEventType);
		P_GET_PROPERTY(FFloatProperty,Z_Param_amount);
		P_GET_OBJECT(AActor,Z_Param_effector);
		P_GET_OBJECT(AActor,Z_Param_target);
		P_GET_STRUCT(FAwardedScore,Z_Param_awardedScore);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_FireGameplayEventWithScore_Validate(EDBDScoreTypes(Z_Param_playerGameplayEventType),Z_Param_amount,Z_Param_effector,Z_Param_target,Z_Param_awardedScore))
		{
			RPC_ValidateFailed(TEXT("Multicast_FireGameplayEventWithScore_Validate"));
			return;
		}
		P_THIS->Multicast_FireGameplayEventWithScore_Implementation(EDBDScoreTypes(Z_Param_playerGameplayEventType),Z_Param_amount,Z_Param_effector,Z_Param_target,Z_Param_awardedScore);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execMulticast_SetAsDisconnected)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetAsDisconnected_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execMulticast_SetAsLeftMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetAsLeftMatch_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execMulticast_SetInParadise)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Multicast_SetInParadise_Validate())
		{
			RPC_ValidateFailed(TEXT("Multicast_SetInParadise_Validate"));
			return;
		}
		P_THIS->Multicast_SetInParadise_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execMulticast_SetPlayerGameState)
	{
		P_GET_ENUM(EGameState,Z_Param_newGameState);
		P_GET_UBOOL(Z_Param_isEscapeHatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetPlayerGameState_Implementation(EGameState(Z_Param_newGameState),Z_Param_isEscapeHatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execMulticast_SetSelectedCharacterId)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_forRole);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_UBOOL(Z_Param_updateDisplayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetSelectedCharacterId_Implementation(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_updateDisplayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execOnRep_BotDifficultyLevel)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_BotDifficultyLevel();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execOnRep_CustomizationData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_CustomizationData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execOnRep_DisplayData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_DisplayData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execServer_HandleScoreEvent)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_scoreTypeTag);
		P_GET_STRUCT(FScoreEventData,Z_Param_scoreEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_HandleScoreEvent_Validate(Z_Param_scoreTypeTag,Z_Param_scoreEventData))
		{
			RPC_ValidateFailed(TEXT("Server_HandleScoreEvent_Validate"));
			return;
		}
		P_THIS->Server_HandleScoreEvent_Implementation(Z_Param_scoreTypeTag,Z_Param_scoreEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execServer_SelectKiller)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_slasherIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SelectKiller_Validate(Z_Param_slasherIndex))
		{
			RPC_ValidateFailed(TEXT("Server_SelectKiller_Validate"));
			return;
		}
		P_THIS->Server_SelectKiller_Implementation(Z_Param_slasherIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execServer_SelectSurvivor)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_camperIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SelectSurvivor_Validate(Z_Param_camperIndex))
		{
			RPC_ValidateFailed(TEXT("Server_SelectSurvivor_Validate"));
			return;
		}
		P_THIS->Server_SelectSurvivor_Implementation(Z_Param_camperIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execServer_SetGameRole)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_newPlayerRole);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetGameRole_Validate(EPlayerRole(Z_Param_newPlayerRole)))
		{
			RPC_ValidateFailed(TEXT("Server_SetGameRole_Validate"));
			return;
		}
		P_THIS->Server_SetGameRole_Implementation(EPlayerRole(Z_Param_newPlayerRole));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execServer_SetPlayerGameState)
	{
		P_GET_ENUM(EGameState,Z_Param_newGameState);
		P_GET_UBOOL(Z_Param_isEscapeHatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetPlayerGameState_Validate(EGameState(Z_Param_newGameState),Z_Param_isEscapeHatch))
		{
			RPC_ValidateFailed(TEXT("Server_SetPlayerGameState_Validate"));
			return;
		}
		P_THIS->Server_SetPlayerGameState_Implementation(EGameState(Z_Param_newGameState),Z_Param_isEscapeHatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execServer_SetSelectedCharacterId)
	{
		P_GET_ENUM(EPlayerRole,Z_Param_forRole);
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_UBOOL(Z_Param_updateDisplayData);
		P_FINISH;
		P_NATIVE_BEGIN;
		if (!P_THIS->Server_SetSelectedCharacterId_Validate(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_updateDisplayData))
		{
			RPC_ValidateFailed(TEXT("Server_SetSelectedCharacterId_Validate"));
			return;
		}
		P_THIS->Server_SetSelectedCharacterId_Implementation(EPlayerRole(Z_Param_forRole),Z_Param_id,Z_Param_updateDisplayData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ADBDPlayerState::execUpdateOngoingScores)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateOngoingScores();
		P_NATIVE_END;
	}
	static FName NAME_ADBDPlayerState_Client_AtlantaUpdateInventoryItem = FName(TEXT("Client_AtlantaUpdateInventoryItem"));
	void ADBDPlayerState::Client_AtlantaUpdateInventoryItem(FName const& itemid, int32 newCount)
	{
		DBDPlayerState_eventClient_AtlantaUpdateInventoryItem_Parms Parms;
		Parms.itemid=itemid;
		Parms.newCount=newCount;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Client_AtlantaUpdateInventoryItem),&Parms);
	}
	static FName NAME_ADBDPlayerState_Client_HandleEscapeScoreEvent = FName(TEXT("Client_HandleEscapeScoreEvent"));
	void ADBDPlayerState::Client_HandleEscapeScoreEvent()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Client_HandleEscapeScoreEvent),NULL);
	}
	static FName NAME_ADBDPlayerState_Client_RemotelyDispatchGameEvent = FName(TEXT("Client_RemotelyDispatchGameEvent"));
	void ADBDPlayerState::Client_RemotelyDispatchGameEvent(FGameplayTag const& gameEventType, FGameEventData const& gameEventData)
	{
		DBDPlayerState_eventClient_RemotelyDispatchGameEvent_Parms Parms;
		Parms.gameEventType=gameEventType;
		Parms.gameEventData=gameEventData;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Client_RemotelyDispatchGameEvent),&Parms);
	}
	static FName NAME_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore = FName(TEXT("Client_RemotelyDispatchGameEventWithScore"));
	void ADBDPlayerState::Client_RemotelyDispatchGameEventWithScore(FGameplayTag const& gameEventType, FGameEventData const& gameEventData, FAwardedScore const& awardedScore)
	{
		DBDPlayerState_eventClient_RemotelyDispatchGameEventWithScore_Parms Parms;
		Parms.gameEventType=gameEventType;
		Parms.gameEventData=gameEventData;
		Parms.awardedScore=awardedScore;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore),&Parms);
	}
	static FName NAME_ADBDPlayerState_Client_RemoveItemFromInventory = FName(TEXT("Client_RemoveItemFromInventory"));
	void ADBDPlayerState::Client_RemoveItemFromInventory(FName toRemove, bool updateLoadout)
	{
		DBDPlayerState_eventClient_RemoveItemFromInventory_Parms Parms;
		Parms.toRemove=toRemove;
		Parms.updateLoadout=updateLoadout ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Client_RemoveItemFromInventory),&Parms);
	}
	static FName NAME_ADBDPlayerState_Client_SetGameRole = FName(TEXT("Client_SetGameRole"));
	void ADBDPlayerState::Client_SetGameRole(EPlayerRole newRole)
	{
		DBDPlayerState_eventClient_SetGameRole_Parms Parms;
		Parms.newRole=newRole;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Client_SetGameRole),&Parms);
	}
	static FName NAME_ADBDPlayerState_Client_SetInParadise = FName(TEXT("Client_SetInParadise"));
	void ADBDPlayerState::Client_SetInParadise()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Client_SetInParadise),NULL);
	}
	static FName NAME_ADBDPlayerState_Client_UpdateWallet = FName(TEXT("Client_UpdateWallet"));
	void ADBDPlayerState::Client_UpdateWallet(const FString& currencyId, int32 amount)
	{
		DBDPlayerState_eventClient_UpdateWallet_Parms Parms;
		Parms.currencyId=currencyId;
		Parms.amount=amount;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Client_UpdateWallet),&Parms);
	}
	static FName NAME_ADBDPlayerState_Multicast_FireGameplayEvent = FName(TEXT("Multicast_FireGameplayEvent"));
	void ADBDPlayerState::Multicast_FireGameplayEvent(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target)
	{
		DBDPlayerState_eventMulticast_FireGameplayEvent_Parms Parms;
		Parms.playerGameplayEventType=playerGameplayEventType;
		Parms.amount=amount;
		Parms.effector=effector;
		Parms.target=target;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Multicast_FireGameplayEvent),&Parms);
	}
	static FName NAME_ADBDPlayerState_Multicast_FireGameplayEventWithScore = FName(TEXT("Multicast_FireGameplayEventWithScore"));
	void ADBDPlayerState::Multicast_FireGameplayEventWithScore(EDBDScoreTypes playerGameplayEventType, float amount, AActor* effector, AActor* target, FAwardedScore const& awardedScore)
	{
		DBDPlayerState_eventMulticast_FireGameplayEventWithScore_Parms Parms;
		Parms.playerGameplayEventType=playerGameplayEventType;
		Parms.amount=amount;
		Parms.effector=effector;
		Parms.target=target;
		Parms.awardedScore=awardedScore;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Multicast_FireGameplayEventWithScore),&Parms);
	}
	static FName NAME_ADBDPlayerState_Multicast_SetAsDisconnected = FName(TEXT("Multicast_SetAsDisconnected"));
	void ADBDPlayerState::Multicast_SetAsDisconnected()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Multicast_SetAsDisconnected),NULL);
	}
	static FName NAME_ADBDPlayerState_Multicast_SetAsLeftMatch = FName(TEXT("Multicast_SetAsLeftMatch"));
	void ADBDPlayerState::Multicast_SetAsLeftMatch()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Multicast_SetAsLeftMatch),NULL);
	}
	static FName NAME_ADBDPlayerState_Multicast_SetInParadise = FName(TEXT("Multicast_SetInParadise"));
	void ADBDPlayerState::Multicast_SetInParadise()
	{
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Multicast_SetInParadise),NULL);
	}
	static FName NAME_ADBDPlayerState_Multicast_SetPlayerGameState = FName(TEXT("Multicast_SetPlayerGameState"));
	void ADBDPlayerState::Multicast_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch)
	{
		DBDPlayerState_eventMulticast_SetPlayerGameState_Parms Parms;
		Parms.newGameState=newGameState;
		Parms.isEscapeHatch=isEscapeHatch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Multicast_SetPlayerGameState),&Parms);
	}
	static FName NAME_ADBDPlayerState_Multicast_SetSelectedCharacterId = FName(TEXT("Multicast_SetSelectedCharacterId"));
	void ADBDPlayerState::Multicast_SetSelectedCharacterId(EPlayerRole forRole, int32 id, bool updateDisplayData)
	{
		DBDPlayerState_eventMulticast_SetSelectedCharacterId_Parms Parms;
		Parms.forRole=forRole;
		Parms.id=id;
		Parms.updateDisplayData=updateDisplayData ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Multicast_SetSelectedCharacterId),&Parms);
	}
	static FName NAME_ADBDPlayerState_Server_HandleScoreEvent = FName(TEXT("Server_HandleScoreEvent"));
	void ADBDPlayerState::Server_HandleScoreEvent(FGameplayTag scoreTypeTag, FScoreEventData scoreEventData)
	{
		DBDPlayerState_eventServer_HandleScoreEvent_Parms Parms;
		Parms.scoreTypeTag=scoreTypeTag;
		Parms.scoreEventData=scoreEventData;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Server_HandleScoreEvent),&Parms);
	}
	static FName NAME_ADBDPlayerState_Server_SelectKiller = FName(TEXT("Server_SelectKiller"));
	void ADBDPlayerState::Server_SelectKiller(int32 slasherIndex)
	{
		DBDPlayerState_eventServer_SelectKiller_Parms Parms;
		Parms.slasherIndex=slasherIndex;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Server_SelectKiller),&Parms);
	}
	static FName NAME_ADBDPlayerState_Server_SelectSurvivor = FName(TEXT("Server_SelectSurvivor"));
	void ADBDPlayerState::Server_SelectSurvivor(int32 camperIndex)
	{
		DBDPlayerState_eventServer_SelectSurvivor_Parms Parms;
		Parms.camperIndex=camperIndex;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Server_SelectSurvivor),&Parms);
	}
	static FName NAME_ADBDPlayerState_Server_SetGameRole = FName(TEXT("Server_SetGameRole"));
	void ADBDPlayerState::Server_SetGameRole(EPlayerRole newPlayerRole)
	{
		DBDPlayerState_eventServer_SetGameRole_Parms Parms;
		Parms.newPlayerRole=newPlayerRole;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Server_SetGameRole),&Parms);
	}
	static FName NAME_ADBDPlayerState_Server_SetPlayerGameState = FName(TEXT("Server_SetPlayerGameState"));
	void ADBDPlayerState::Server_SetPlayerGameState(EGameState newGameState, bool isEscapeHatch)
	{
		DBDPlayerState_eventServer_SetPlayerGameState_Parms Parms;
		Parms.newGameState=newGameState;
		Parms.isEscapeHatch=isEscapeHatch ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Server_SetPlayerGameState),&Parms);
	}
	static FName NAME_ADBDPlayerState_Server_SetSelectedCharacterId = FName(TEXT("Server_SetSelectedCharacterId"));
	void ADBDPlayerState::Server_SetSelectedCharacterId(EPlayerRole forRole, int32 id, bool updateDisplayData)
	{
		DBDPlayerState_eventServer_SetSelectedCharacterId_Parms Parms;
		Parms.forRole=forRole;
		Parms.id=id;
		Parms.updateDisplayData=updateDisplayData ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ADBDPlayerState_Server_SetSelectedCharacterId),&Parms);
	}
	void ADBDPlayerState::StaticRegisterNativesADBDPlayerState()
	{
		UClass* Class = ADBDPlayerState::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_CancelOngoingScoreEvent", &ADBDPlayerState::execAuthority_CancelOngoingScoreEvent },
			{ "Authority_EndOngoingScoreEvent", &ADBDPlayerState::execAuthority_EndOngoingScoreEvent },
			{ "Authority_ForceCancelOngoingScoreEvent", &ADBDPlayerState::execAuthority_ForceCancelOngoingScoreEvent },
			{ "Authority_ForceEndOngoingScoreEvent", &ADBDPlayerState::execAuthority_ForceEndOngoingScoreEvent },
			{ "Authority_HandleScoreEvent", &ADBDPlayerState::execAuthority_HandleScoreEvent },
			{ "Client_AtlantaUpdateInventoryItem", &ADBDPlayerState::execClient_AtlantaUpdateInventoryItem },
			{ "Client_HandleEscapeScoreEvent", &ADBDPlayerState::execClient_HandleEscapeScoreEvent },
			{ "Client_RemotelyDispatchGameEvent", &ADBDPlayerState::execClient_RemotelyDispatchGameEvent },
			{ "Client_RemotelyDispatchGameEventWithScore", &ADBDPlayerState::execClient_RemotelyDispatchGameEventWithScore },
			{ "Client_RemoveItemFromInventory", &ADBDPlayerState::execClient_RemoveItemFromInventory },
			{ "Client_SetGameRole", &ADBDPlayerState::execClient_SetGameRole },
			{ "Client_SetInParadise", &ADBDPlayerState::execClient_SetInParadise },
			{ "Client_UpdateWallet", &ADBDPlayerState::execClient_UpdateWallet },
			{ "FireActiveStatusEffectEvent", &ADBDPlayerState::execFireActiveStatusEffectEvent },
			{ "FireActiveStatusViewEvent", &ADBDPlayerState::execFireActiveStatusViewEvent },
			{ "FireScoreEvent", &ADBDPlayerState::execFireScoreEvent },
			{ "GetGameplayNotificationManager", &ADBDPlayerState::execGetGameplayNotificationManager },
			{ "GetGameRole", &ADBDPlayerState::execGetGameRole },
			{ "GetPlayerGameState", &ADBDPlayerState::execGetPlayerGameState },
			{ "HasEscaped", &ADBDPlayerState::execHasEscaped },
			{ "HasHappened", &ADBDPlayerState::execHasHappened },
			{ "IsInFinishedPlayingState", &ADBDPlayerState::execIsInFinishedPlayingState },
			{ "Multicast_FireGameplayEvent", &ADBDPlayerState::execMulticast_FireGameplayEvent },
			{ "Multicast_FireGameplayEventWithScore", &ADBDPlayerState::execMulticast_FireGameplayEventWithScore },
			{ "Multicast_SetAsDisconnected", &ADBDPlayerState::execMulticast_SetAsDisconnected },
			{ "Multicast_SetAsLeftMatch", &ADBDPlayerState::execMulticast_SetAsLeftMatch },
			{ "Multicast_SetInParadise", &ADBDPlayerState::execMulticast_SetInParadise },
			{ "Multicast_SetPlayerGameState", &ADBDPlayerState::execMulticast_SetPlayerGameState },
			{ "Multicast_SetSelectedCharacterId", &ADBDPlayerState::execMulticast_SetSelectedCharacterId },
			{ "OnRep_BotDifficultyLevel", &ADBDPlayerState::execOnRep_BotDifficultyLevel },
			{ "OnRep_CustomizationData", &ADBDPlayerState::execOnRep_CustomizationData },
			{ "OnRep_DisplayData", &ADBDPlayerState::execOnRep_DisplayData },
			{ "Server_HandleScoreEvent", &ADBDPlayerState::execServer_HandleScoreEvent },
			{ "Server_SelectKiller", &ADBDPlayerState::execServer_SelectKiller },
			{ "Server_SelectSurvivor", &ADBDPlayerState::execServer_SelectSurvivor },
			{ "Server_SetGameRole", &ADBDPlayerState::execServer_SetGameRole },
			{ "Server_SetPlayerGameState", &ADBDPlayerState::execServer_SetPlayerGameState },
			{ "Server_SetSelectedCharacterId", &ADBDPlayerState::execServer_SetSelectedCharacterId },
			{ "UpdateOngoingScores", &ADBDPlayerState::execUpdateOngoingScores },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics
	{
		struct DBDPlayerState_eventAuthority_CancelOngoingScoreEvent_Parms
		{
			FGameplayTag scoreTypeTag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scoreTypeTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::NewProp_scoreTypeTag = { "scoreTypeTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventAuthority_CancelOngoingScoreEvent_Parms, scoreTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::NewProp_scoreTypeTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Authority_CancelOngoingScoreEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventAuthority_CancelOngoingScoreEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics
	{
		struct DBDPlayerState_eventAuthority_EndOngoingScoreEvent_Parms
		{
			FGameplayTag scoreTypeTag;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scoreTypeTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::NewProp_scoreTypeTag = { "scoreTypeTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventAuthority_EndOngoingScoreEvent_Parms, scoreTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::NewProp_scoreTypeTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Authority_EndOngoingScoreEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventAuthority_EndOngoingScoreEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics
	{
		struct DBDPlayerState_eventAuthority_ForceCancelOngoingScoreEvent_Parms
		{
			EDBDScoreTypes scoreType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_scoreType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_scoreType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventAuthority_ForceCancelOngoingScoreEvent_Parms, scoreType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::NewProp_scoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::NewProp_scoreType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Authority_ForceCancelOngoingScoreEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventAuthority_ForceCancelOngoingScoreEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics
	{
		struct DBDPlayerState_eventAuthority_ForceEndOngoingScoreEvent_Parms
		{
			EDBDScoreTypes scoreType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_scoreType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_scoreType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventAuthority_ForceEndOngoingScoreEvent_Parms, scoreType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::NewProp_scoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::NewProp_scoreType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Authority_ForceEndOngoingScoreEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventAuthority_ForceEndOngoingScoreEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics
	{
		struct DBDPlayerState_eventAuthority_HandleScoreEvent_Parms
		{
			FGameplayTag scoreTypeTag;
			FScoreEventData scoreEventData;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scoreEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scoreTypeTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::NewProp_scoreEventData = { "scoreEventData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventAuthority_HandleScoreEvent_Parms, scoreEventData), Z_Construct_UScriptStruct_FScoreEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::NewProp_scoreTypeTag = { "scoreTypeTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventAuthority_HandleScoreEvent_Parms, scoreTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::NewProp_scoreEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::NewProp_scoreTypeTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Authority_HandleScoreEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventAuthority_HandleScoreEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemid_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_itemid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::NewProp_newCount = { "newCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_AtlantaUpdateInventoryItem_Parms, newCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::NewProp_itemid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::NewProp_itemid = { "itemid", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_AtlantaUpdateInventoryItem_Parms, itemid), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::NewProp_itemid_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::NewProp_itemid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::NewProp_newCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::NewProp_itemid,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Client_AtlantaUpdateInventoryItem", nullptr, nullptr, sizeof(DBDPlayerState_eventClient_AtlantaUpdateInventoryItem_Parms), Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Client_HandleEscapeScoreEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_HandleEscapeScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Client_HandleEscapeScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Client_HandleEscapeScoreEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_HandleEscapeScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_HandleEscapeScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Client_HandleEscapeScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Client_HandleEscapeScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_RemotelyDispatchGameEvent_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_RemotelyDispatchGameEvent_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Client_RemotelyDispatchGameEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventClient_RemotelyDispatchGameEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_awardedScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_awardedScore;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_awardedScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_awardedScore = { "awardedScore", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_RemotelyDispatchGameEventWithScore_Parms, awardedScore), Z_Construct_UScriptStruct_FAwardedScore, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_awardedScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_awardedScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_RemotelyDispatchGameEventWithScore_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_RemotelyDispatchGameEventWithScore_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_awardedScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Client_RemotelyDispatchGameEventWithScore", nullptr, nullptr, sizeof(DBDPlayerState_eventClient_RemotelyDispatchGameEventWithScore_Parms), Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics
	{
		static void NewProp_updateLoadout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_updateLoadout;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_toRemove;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::NewProp_updateLoadout_SetBit(void* Obj)
	{
		((DBDPlayerState_eventClient_RemoveItemFromInventory_Parms*)Obj)->updateLoadout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::NewProp_updateLoadout = { "updateLoadout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_eventClient_RemoveItemFromInventory_Parms), &Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::NewProp_updateLoadout_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::NewProp_toRemove = { "toRemove", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_RemoveItemFromInventory_Parms, toRemove), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::NewProp_updateLoadout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::NewProp_toRemove,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Client_RemoveItemFromInventory", nullptr, nullptr, sizeof(DBDPlayerState_eventClient_RemoveItemFromInventory_Parms), Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01020CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::NewProp_newRole = { "newRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_SetGameRole_Parms, newRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::NewProp_newRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::NewProp_newRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::NewProp_newRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Client_SetGameRole", nullptr, nullptr, sizeof(DBDPlayerState_eventClient_SetGameRole_Parms), Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x81080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Client_SetInParadise_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_SetInParadise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Client_SetInParadise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Client_SetInParadise", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_SetInParadise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_SetInParadise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Client_SetInParadise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Client_SetInParadise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_amount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_currencyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_UpdateWallet_Parms, amount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::NewProp_currencyId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::NewProp_currencyId = { "currencyId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventClient_UpdateWallet_Parms, currencyId), METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::NewProp_currencyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::NewProp_currencyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::NewProp_currencyId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Client_UpdateWallet", nullptr, nullptr, sizeof(DBDPlayerState_eventClient_UpdateWallet_Parms), Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01040CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics
	{
		struct DBDPlayerState_eventFireActiveStatusEffectEvent_Parms
		{
			FName statusEffectID;
			float percentage;
			int32 iconFilePathIndex;
			int32 levelToDisplay;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_levelToDisplay;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_iconFilePathIndex;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusEffectID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::NewProp_levelToDisplay = { "levelToDisplay", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireActiveStatusEffectEvent_Parms, levelToDisplay), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::NewProp_iconFilePathIndex = { "iconFilePathIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireActiveStatusEffectEvent_Parms, iconFilePathIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireActiveStatusEffectEvent_Parms, percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::NewProp_statusEffectID = { "statusEffectID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireActiveStatusEffectEvent_Parms, statusEffectID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::NewProp_levelToDisplay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::NewProp_iconFilePathIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::NewProp_percentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::NewProp_statusEffectID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "FireActiveStatusEffectEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventFireActiveStatusEffectEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics
	{
		struct DBDPlayerState_eventFireActiveStatusViewEvent_Parms
		{
			FName statusViewID;
			FName uniqueSourceID;
			FStatusViewSource statusViewSource;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_statusViewSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_statusViewSource;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_uniqueSourceID;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_statusViewID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource = { "statusViewSource", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireActiveStatusViewEvent_Parms, statusViewSource), Z_Construct_UScriptStruct_FStatusViewSource, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_uniqueSourceID = { "uniqueSourceID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireActiveStatusViewEvent_Parms, uniqueSourceID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_statusViewID = { "statusViewID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireActiveStatusViewEvent_Parms, statusViewID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_statusViewSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_uniqueSourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::NewProp_statusViewID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "FireActiveStatusViewEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventFireActiveStatusViewEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics
	{
		struct DBDPlayerState_eventFireScoreEvent_Parms
		{
			EDBDScoreTypes scoreType;
			float percentToAward;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentToAward;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_scoreType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_scoreType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::NewProp_percentToAward = { "percentToAward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireScoreEvent_Parms, percentToAward), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventFireScoreEvent_Parms, scoreType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::NewProp_scoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::NewProp_percentToAward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::NewProp_scoreType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "FireScoreEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventFireScoreEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics
	{
		struct DBDPlayerState_eventGetGameplayNotificationManager_Parms
		{
			UGameplayNotificationManager* ReturnValue;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventGetGameplayNotificationManager_Parms, ReturnValue), Z_Construct_UClass_UGameplayNotificationManager_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "GetGameplayNotificationManager", nullptr, nullptr, sizeof(DBDPlayerState_eventGetGameplayNotificationManager_Parms), Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics
	{
		struct DBDPlayerState_eventGetGameRole_Parms
		{
			EPlayerRole ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventGetGameRole_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "GetGameRole", nullptr, nullptr, sizeof(DBDPlayerState_eventGetGameRole_Parms), Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_GetGameRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_GetGameRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics
	{
		struct DBDPlayerState_eventGetPlayerGameState_Parms
		{
			EGameState ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventGetPlayerGameState_Parms, ReturnValue), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "GetPlayerGameState", nullptr, nullptr, sizeof(DBDPlayerState_eventGetPlayerGameState_Parms), Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics
	{
		struct DBDPlayerState_eventHasEscaped_Parms
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
	void Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerState_eventHasEscaped_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_eventHasEscaped_Parms), &Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "HasEscaped", nullptr, nullptr, sizeof(DBDPlayerState_eventHasEscaped_Parms), Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_HasEscaped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_HasEscaped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics
	{
		struct DBDPlayerState_eventHasHappened_Parms
		{
			EDBDScoreTypes gameplayEventType;
			float maxSecondsAgo;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_maxSecondsAgo;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gameplayEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gameplayEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerState_eventHasHappened_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_eventHasHappened_Parms), &Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_maxSecondsAgo = { "maxSecondsAgo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventHasHappened_Parms, maxSecondsAgo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_gameplayEventType = { "gameplayEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventHasHappened_Parms, gameplayEventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_gameplayEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_maxSecondsAgo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_gameplayEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::NewProp_gameplayEventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "HasHappened", nullptr, nullptr, sizeof(DBDPlayerState_eventHasHappened_Parms), Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_HasHappened()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_HasHappened_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics
	{
		struct DBDPlayerState_eventIsInFinishedPlayingState_Parms
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
	void Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDPlayerState_eventIsInFinishedPlayingState_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_eventIsInFinishedPlayingState_Parms), &Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "IsInFinishedPlayingState", nullptr, nullptr, sizeof(DBDPlayerState_eventIsInFinishedPlayingState_Parms), Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerGameplayEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerGameplayEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEvent_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_effector = { "effector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEvent_Parms, effector), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEvent_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_playerGameplayEventType = { "playerGameplayEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEvent_Parms, playerGameplayEventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_playerGameplayEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_effector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_playerGameplayEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::NewProp_playerGameplayEventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Multicast_FireGameplayEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventMulticast_FireGameplayEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_awardedScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_awardedScore;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_effector;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_amount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_playerGameplayEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_playerGameplayEventType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_awardedScore_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_awardedScore = { "awardedScore", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEventWithScore_Parms, awardedScore), Z_Construct_UScriptStruct_FAwardedScore, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_awardedScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_awardedScore_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEventWithScore_Parms, target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_effector = { "effector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEventWithScore_Parms, effector), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_amount = { "amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEventWithScore_Parms, amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_playerGameplayEventType = { "playerGameplayEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_FireGameplayEventWithScore_Parms, playerGameplayEventType), Z_Construct_UEnum_DeadByDaylight_EDBDScoreTypes, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_playerGameplayEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_awardedScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_target,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_effector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_playerGameplayEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::NewProp_playerGameplayEventType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Multicast_FireGameplayEventWithScore", nullptr, nullptr, sizeof(DBDPlayerState_eventMulticast_FireGameplayEventWithScore_Parms), Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsDisconnected_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsDisconnected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsDisconnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Multicast_SetAsDisconnected", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsDisconnected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsDisconnected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsDisconnected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsDisconnected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsLeftMatch_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsLeftMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsLeftMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Multicast_SetAsLeftMatch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsLeftMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsLeftMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsLeftMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsLeftMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Multicast_SetInParadise_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Multicast_SetInParadise_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetInParadise_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Multicast_SetInParadise", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetInParadise_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetInParadise_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Multicast_SetInParadise()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Multicast_SetInParadise_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics
	{
		static void NewProp_isEscapeHatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEscapeHatch;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newGameState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newGameState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::NewProp_isEscapeHatch_SetBit(void* Obj)
	{
		((DBDPlayerState_eventMulticast_SetPlayerGameState_Parms*)Obj)->isEscapeHatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::NewProp_isEscapeHatch = { "isEscapeHatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_eventMulticast_SetPlayerGameState_Parms), &Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::NewProp_isEscapeHatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::NewProp_newGameState = { "newGameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_SetPlayerGameState_Parms, newGameState), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::NewProp_newGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::NewProp_isEscapeHatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::NewProp_newGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::NewProp_newGameState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Multicast_SetPlayerGameState", nullptr, nullptr, sizeof(DBDPlayerState_eventMulticast_SetPlayerGameState_Parms), Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics
	{
		static void NewProp_updateDisplayData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_updateDisplayData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_forRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_forRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_updateDisplayData_SetBit(void* Obj)
	{
		((DBDPlayerState_eventMulticast_SetSelectedCharacterId_Parms*)Obj)->updateDisplayData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_updateDisplayData = { "updateDisplayData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_eventMulticast_SetSelectedCharacterId_Parms), &Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_updateDisplayData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_SetSelectedCharacterId_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_forRole = { "forRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventMulticast_SetSelectedCharacterId_Parms, forRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_forRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_updateDisplayData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_forRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::NewProp_forRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Multicast_SetSelectedCharacterId", nullptr, nullptr, sizeof(DBDPlayerState_eventMulticast_SetSelectedCharacterId_Parms), Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00084CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_OnRep_BotDifficultyLevel_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_OnRep_BotDifficultyLevel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_OnRep_BotDifficultyLevel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "OnRep_BotDifficultyLevel", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_OnRep_BotDifficultyLevel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_OnRep_BotDifficultyLevel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_OnRep_BotDifficultyLevel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_OnRep_BotDifficultyLevel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_OnRep_CustomizationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_OnRep_CustomizationData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_OnRep_CustomizationData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "OnRep_CustomizationData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_OnRep_CustomizationData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_OnRep_CustomizationData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_OnRep_CustomizationData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_OnRep_CustomizationData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_OnRep_DisplayData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_OnRep_DisplayData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_OnRep_DisplayData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "OnRep_DisplayData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_OnRep_DisplayData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_OnRep_DisplayData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_OnRep_DisplayData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_OnRep_DisplayData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scoreEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_scoreTypeTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::NewProp_scoreEventData = { "scoreEventData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventServer_HandleScoreEvent_Parms, scoreEventData), Z_Construct_UScriptStruct_FScoreEventData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::NewProp_scoreTypeTag = { "scoreTypeTag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventServer_HandleScoreEvent_Parms, scoreTypeTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::NewProp_scoreEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::NewProp_scoreTypeTag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Server_HandleScoreEvent", nullptr, nullptr, sizeof(DBDPlayerState_eventServer_HandleScoreEvent_Parms), Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_slasherIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::NewProp_slasherIndex = { "slasherIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventServer_SelectKiller_Parms, slasherIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::NewProp_slasherIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Server_SelectKiller", nullptr, nullptr, sizeof(DBDPlayerState_eventServer_SelectKiller_Parms), Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_camperIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::NewProp_camperIndex = { "camperIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventServer_SelectSurvivor_Parms, camperIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::NewProp_camperIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Server_SelectSurvivor", nullptr, nullptr, sizeof(DBDPlayerState_eventServer_SelectSurvivor_Parms), Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newPlayerRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newPlayerRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::NewProp_newPlayerRole = { "newPlayerRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventServer_SetGameRole_Parms, newPlayerRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::NewProp_newPlayerRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::NewProp_newPlayerRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::NewProp_newPlayerRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Server_SetGameRole", nullptr, nullptr, sizeof(DBDPlayerState_eventServer_SetGameRole_Parms), Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics
	{
		static void NewProp_isEscapeHatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isEscapeHatch;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newGameState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newGameState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::NewProp_isEscapeHatch_SetBit(void* Obj)
	{
		((DBDPlayerState_eventServer_SetPlayerGameState_Parms*)Obj)->isEscapeHatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::NewProp_isEscapeHatch = { "isEscapeHatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_eventServer_SetPlayerGameState_Parms), &Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::NewProp_isEscapeHatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::NewProp_newGameState = { "newGameState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventServer_SetPlayerGameState_Parms, newGameState), Z_Construct_UEnum_DBDSharedTypes_EGameState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::NewProp_newGameState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::NewProp_isEscapeHatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::NewProp_newGameState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::NewProp_newGameState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Server_SetPlayerGameState", nullptr, nullptr, sizeof(DBDPlayerState_eventServer_SetPlayerGameState_Parms), Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics
	{
		static void NewProp_updateDisplayData_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_updateDisplayData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_forRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_forRole_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_updateDisplayData_SetBit(void* Obj)
	{
		((DBDPlayerState_eventServer_SetSelectedCharacterId_Parms*)Obj)->updateDisplayData = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_updateDisplayData = { "updateDisplayData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDPlayerState_eventServer_SetSelectedCharacterId_Parms), &Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_updateDisplayData_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventServer_SetSelectedCharacterId_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_forRole = { "forRole", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDPlayerState_eventServer_SetSelectedCharacterId_Parms, forRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_forRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_updateDisplayData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_forRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::NewProp_forRole_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "Server_SetSelectedCharacterId", nullptr, nullptr, sizeof(DBDPlayerState_eventServer_SetSelectedCharacterId_Parms), Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x80220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ADBDPlayerState_UpdateOngoingScores_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ADBDPlayerState_UpdateOngoingScores_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ADBDPlayerState_UpdateOngoingScores_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ADBDPlayerState, nullptr, "UpdateOngoingScores", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ADBDPlayerState_UpdateOngoingScores_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ADBDPlayerState_UpdateOngoingScores_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ADBDPlayerState_UpdateOngoingScores()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ADBDPlayerState_UpdateOngoingScores_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ADBDPlayerState_NoRegister()
	{
		return ADBDPlayerState::StaticClass();
	}
	struct Z_Construct_UClass_ADBDPlayerState_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasActiveSubscription_MetaData[];
#endif
		static void NewProp__hasActiveSubscription_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasActiveSubscription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showPortraitBorder_MetaData[];
#endif
		static void NewProp__showPortraitBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__showPortraitBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameLevelLoaded_MetaData[];
#endif
		static void NewProp__gameLevelLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__gameLevelLoaded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offNetworkFlag_MetaData[];
#endif
		static void NewProp__offNetworkFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__offNetworkFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__crossplayAllowed_MetaData[];
#endif
		static void NewProp__crossplayAllowed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__crossplayAllowed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__provider;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__provider_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__platform_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__platform;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__platform_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedSlasherIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__selectedSlasherIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectedCamperIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__selectedCamperIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__platformAccountId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__platformAccountId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterStatsHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__characterStatsHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__achievementHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__achievementHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameplayNotificationManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gameplayNotificationManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inParadise_MetaData[];
#endif
		static void NewProp__inParadise_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__inParadise;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recentGameplayEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__recentGameplayEvents;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__ongoingScoreEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__ongoingScoreEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ongoingScoreEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedUserGameStats_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__cachedUserGameStats;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__awardedScoresByType_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__awardedScoresByType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__awardedScoresByType_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__awardedScoresByType_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerGameStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerGameStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnGameStateChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGameStateChanged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnPlayerGameplayEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnPlayerGameplayEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerCustomization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlasherData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SlasherData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CamperData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CamperData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DedicatedServerHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DedicatedServerHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RitualHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RitualHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameRole;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameRole_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPlayerReady_MetaData[];
#endif
		static void NewProp_IsPlayerReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPlayerReady;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__difficultyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__difficultyLevel;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__difficultyLevel_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentVersion_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentVersion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnAIFinishedPlayingEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAIFinishedPlayingEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADBDPlayerState_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerState,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ADBDPlayerState_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ADBDPlayerState_Authority_CancelOngoingScoreEvent, "Authority_CancelOngoingScoreEvent" }, // 2951652895
		{ &Z_Construct_UFunction_ADBDPlayerState_Authority_EndOngoingScoreEvent, "Authority_EndOngoingScoreEvent" }, // 2666663378
		{ &Z_Construct_UFunction_ADBDPlayerState_Authority_ForceCancelOngoingScoreEvent, "Authority_ForceCancelOngoingScoreEvent" }, // 2106971876
		{ &Z_Construct_UFunction_ADBDPlayerState_Authority_ForceEndOngoingScoreEvent, "Authority_ForceEndOngoingScoreEvent" }, // 597529599
		{ &Z_Construct_UFunction_ADBDPlayerState_Authority_HandleScoreEvent, "Authority_HandleScoreEvent" }, // 3561238236
		{ &Z_Construct_UFunction_ADBDPlayerState_Client_AtlantaUpdateInventoryItem, "Client_AtlantaUpdateInventoryItem" }, // 2537265651
		{ &Z_Construct_UFunction_ADBDPlayerState_Client_HandleEscapeScoreEvent, "Client_HandleEscapeScoreEvent" }, // 969064105
		{ &Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEvent, "Client_RemotelyDispatchGameEvent" }, // 2360643981
		{ &Z_Construct_UFunction_ADBDPlayerState_Client_RemotelyDispatchGameEventWithScore, "Client_RemotelyDispatchGameEventWithScore" }, // 3089251137
		{ &Z_Construct_UFunction_ADBDPlayerState_Client_RemoveItemFromInventory, "Client_RemoveItemFromInventory" }, // 3020204075
		{ &Z_Construct_UFunction_ADBDPlayerState_Client_SetGameRole, "Client_SetGameRole" }, // 3870015349
		{ &Z_Construct_UFunction_ADBDPlayerState_Client_SetInParadise, "Client_SetInParadise" }, // 1248076667
		{ &Z_Construct_UFunction_ADBDPlayerState_Client_UpdateWallet, "Client_UpdateWallet" }, // 1739891718
		{ &Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusEffectEvent, "FireActiveStatusEffectEvent" }, // 385026446
		{ &Z_Construct_UFunction_ADBDPlayerState_FireActiveStatusViewEvent, "FireActiveStatusViewEvent" }, // 1208585468
		{ &Z_Construct_UFunction_ADBDPlayerState_FireScoreEvent, "FireScoreEvent" }, // 185628031
		{ &Z_Construct_UFunction_ADBDPlayerState_GetGameplayNotificationManager, "GetGameplayNotificationManager" }, // 16685124
		{ &Z_Construct_UFunction_ADBDPlayerState_GetGameRole, "GetGameRole" }, // 729689481
		{ &Z_Construct_UFunction_ADBDPlayerState_GetPlayerGameState, "GetPlayerGameState" }, // 2794807629
		{ &Z_Construct_UFunction_ADBDPlayerState_HasEscaped, "HasEscaped" }, // 502632913
		{ &Z_Construct_UFunction_ADBDPlayerState_HasHappened, "HasHappened" }, // 278680583
		{ &Z_Construct_UFunction_ADBDPlayerState_IsInFinishedPlayingState, "IsInFinishedPlayingState" }, // 4222426060
		{ &Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEvent, "Multicast_FireGameplayEvent" }, // 4166735151
		{ &Z_Construct_UFunction_ADBDPlayerState_Multicast_FireGameplayEventWithScore, "Multicast_FireGameplayEventWithScore" }, // 237288561
		{ &Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsDisconnected, "Multicast_SetAsDisconnected" }, // 3335119599
		{ &Z_Construct_UFunction_ADBDPlayerState_Multicast_SetAsLeftMatch, "Multicast_SetAsLeftMatch" }, // 1025831506
		{ &Z_Construct_UFunction_ADBDPlayerState_Multicast_SetInParadise, "Multicast_SetInParadise" }, // 2420991524
		{ &Z_Construct_UFunction_ADBDPlayerState_Multicast_SetPlayerGameState, "Multicast_SetPlayerGameState" }, // 2021052342
		{ &Z_Construct_UFunction_ADBDPlayerState_Multicast_SetSelectedCharacterId, "Multicast_SetSelectedCharacterId" }, // 158077750
		{ &Z_Construct_UFunction_ADBDPlayerState_OnRep_BotDifficultyLevel, "OnRep_BotDifficultyLevel" }, // 3599942577
		{ &Z_Construct_UFunction_ADBDPlayerState_OnRep_CustomizationData, "OnRep_CustomizationData" }, // 3845713559
		{ &Z_Construct_UFunction_ADBDPlayerState_OnRep_DisplayData, "OnRep_DisplayData" }, // 1796093632
		{ &Z_Construct_UFunction_ADBDPlayerState_Server_HandleScoreEvent, "Server_HandleScoreEvent" }, // 3202528473
		{ &Z_Construct_UFunction_ADBDPlayerState_Server_SelectKiller, "Server_SelectKiller" }, // 45125866
		{ &Z_Construct_UFunction_ADBDPlayerState_Server_SelectSurvivor, "Server_SelectSurvivor" }, // 1215309431
		{ &Z_Construct_UFunction_ADBDPlayerState_Server_SetGameRole, "Server_SetGameRole" }, // 3332280917
		{ &Z_Construct_UFunction_ADBDPlayerState_Server_SetPlayerGameState, "Server_SetPlayerGameState" }, // 2458784529
		{ &Z_Construct_UFunction_ADBDPlayerState_Server_SetSelectedCharacterId, "Server_SetSelectedCharacterId" }, // 1321577482
		{ &Z_Construct_UFunction_ADBDPlayerState_UpdateOngoingScores, "UpdateOngoingScores" }, // 4122821321
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DBDPlayerState.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__hasActiveSubscription_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__hasActiveSubscription_SetBit(void* Obj)
	{
		((ADBDPlayerState*)Obj)->_hasActiveSubscription = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__hasActiveSubscription = { "_hasActiveSubscription", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDPlayerState), &Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__hasActiveSubscription_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__hasActiveSubscription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__hasActiveSubscription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__showPortraitBorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__showPortraitBorder_SetBit(void* Obj)
	{
		((ADBDPlayerState*)Obj)->_showPortraitBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__showPortraitBorder = { "_showPortraitBorder", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDPlayerState), &Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__showPortraitBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__showPortraitBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__showPortraitBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameLevelLoaded_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameLevelLoaded_SetBit(void* Obj)
	{
		((ADBDPlayerState*)Obj)->_gameLevelLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameLevelLoaded = { "_gameLevelLoaded", nullptr, (EPropertyFlags)0x0040000000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDPlayerState), &Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameLevelLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameLevelLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameLevelLoaded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__offNetworkFlag_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__offNetworkFlag_SetBit(void* Obj)
	{
		((ADBDPlayerState*)Obj)->_offNetworkFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__offNetworkFlag = { "_offNetworkFlag", "OnRep_DisplayData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDPlayerState), &Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__offNetworkFlag_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__offNetworkFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__offNetworkFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__crossplayAllowed_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__crossplayAllowed_SetBit(void* Obj)
	{
		((ADBDPlayerState*)Obj)->_crossplayAllowed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__crossplayAllowed = { "_crossplayAllowed", "OnRep_DisplayData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDPlayerState), &Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__crossplayAllowed_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__crossplayAllowed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__crossplayAllowed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__provider_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__provider = { "_provider", "OnRep_DisplayData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _provider), Z_Construct_UEnum_PlatformsProviders_EProviderFlag, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__provider_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__provider_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platform_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platform = { "_platform", "OnRep_DisplayData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _platform), Z_Construct_UEnum_PlatformsProviders_EPlatformFlag, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platform_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platform_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedSlasherIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedSlasherIndex = { "_selectedSlasherIndex", "OnRep_DisplayData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _selectedSlasherIndex), METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedSlasherIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedSlasherIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedCamperIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedCamperIndex = { "_selectedCamperIndex", "OnRep_DisplayData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _selectedCamperIndex), METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedCamperIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedCamperIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platformAccountId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platformAccountId = { "_platformAccountId", "OnRep_DisplayData", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _platformAccountId), METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platformAccountId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platformAccountId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__characterStatsHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__characterStatsHandler = { "_characterStatsHandler", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _characterStatsHandler), Z_Construct_UClass_UCharacterStatsHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__characterStatsHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__characterStatsHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__achievementHandler_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__achievementHandler = { "_achievementHandler", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _achievementHandler), Z_Construct_UClass_UAchievementHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__achievementHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__achievementHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameplayNotificationManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameplayNotificationManager = { "_gameplayNotificationManager", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _gameplayNotificationManager), Z_Construct_UClass_UGameplayNotificationManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameplayNotificationManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameplayNotificationManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__inParadise_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__inParadise_SetBit(void* Obj)
	{
		((ADBDPlayerState*)Obj)->_inParadise = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__inParadise = { "_inParadise", nullptr, (EPropertyFlags)0x0020080000002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDPlayerState), &Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__inParadise_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__inParadise_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__inParadise_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__recentGameplayEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__recentGameplayEvents = { "_recentGameplayEvents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _recentGameplayEvents), Z_Construct_UScriptStruct_FDBDRecentGameplayEvents, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__recentGameplayEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__recentGameplayEvents_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__ongoingScoreEvents_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__ongoingScoreEvents = { "_ongoingScoreEvents", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _ongoingScoreEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__ongoingScoreEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__ongoingScoreEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__ongoingScoreEvents_Inner = { "_ongoingScoreEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOngoingScoreData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__cachedUserGameStats_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__cachedUserGameStats = { "_cachedUserGameStats", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _cachedUserGameStats), Z_Construct_UScriptStruct_FUserGameStats, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__cachedUserGameStats_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__cachedUserGameStats_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType = { "_awardedScoresByType", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _awardedScoresByType), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType_Key_KeyProp = { "_awardedScoresByType_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType_ValueProp = { "_awardedScoresByType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAwardedScores, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameStateChanged = { "OnPlayerGameStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, OnPlayerGameStateChanged), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnGameStateChanged_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnGameStateChanged = { "OnGameStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, OnGameStateChanged), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnGameStateChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnGameStateChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnGameStateChanged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameplayEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameplayEvent = { "OnPlayerGameplayEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, OnPlayerGameplayEvent), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnPlayerGameplayEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameplayEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameplayEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerCustomization_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerCustomization = { "PlayerCustomization", "OnRep_CustomizationData", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, PlayerCustomization), Z_Construct_UScriptStruct_FEquippedPlayerCustomization, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerCustomization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerData = { "PlayerData", "OnRep_DisplayData", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, PlayerData), Z_Construct_UScriptStruct_FPlayerStateData, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_SlasherData_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_SlasherData = { "SlasherData", "OnRep_DisplayData", (EPropertyFlags)0x0010000100000020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, SlasherData), Z_Construct_UScriptStruct_FCharacterStateData, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_SlasherData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_SlasherData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_CamperData_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_CamperData = { "CamperData", "OnRep_DisplayData", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, CamperData), Z_Construct_UScriptStruct_FCharacterStateData, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_CamperData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_CamperData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_DedicatedServerHandler_MetaData[] = {
		{ "Category", "DBDPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_DedicatedServerHandler = { "DedicatedServerHandler", nullptr, (EPropertyFlags)0x001000000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, DedicatedServerHandler), Z_Construct_UClass_UDedicatedServerHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_DedicatedServerHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_DedicatedServerHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_RitualHandler_MetaData[] = {
		{ "Category", "DBDPlayerState" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_RitualHandler = { "RitualHandler", nullptr, (EPropertyFlags)0x001000000008201c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, RitualHandler), Z_Construct_UClass_URitualHandlerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_RitualHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_RitualHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_GameRole_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_GameRole = { "GameRole", "OnRep_DisplayData", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, GameRole), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_GameRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_GameRole_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_GameRole_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_IsPlayerReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	void Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_IsPlayerReady_SetBit(void* Obj)
	{
		((ADBDPlayerState*)Obj)->IsPlayerReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_IsPlayerReady = { "IsPlayerReady", "OnRep_DisplayData", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ADBDPlayerState), &Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_IsPlayerReady_SetBit, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_IsPlayerReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_IsPlayerReady_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__difficultyLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__difficultyLevel = { "_difficultyLevel", "OnRep_BotDifficultyLevel", (EPropertyFlags)0x0010000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, _difficultyLevel), Z_Construct_UEnum_DeadByDaylight_EAIDifficultyLevel, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__difficultyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__difficultyLevel_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__difficultyLevel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_ContentVersion_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_ContentVersion = { "ContentVersion", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, ContentVersion), METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_ContentVersion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_ContentVersion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_MirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_MirrorsId = { "MirrorsId", nullptr, (EPropertyFlags)0x0010000000002020, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, MirrorsId), METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_MirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_MirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnAIFinishedPlayingEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerState.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnAIFinishedPlayingEvent = { "OnAIFinishedPlayingEvent", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADBDPlayerState, OnAIFinishedPlayingEvent), Z_Construct_UDelegateFunction_DeadByDaylight_DBDPlayerStateOnAIFinishedPlayingEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnAIFinishedPlayingEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnAIFinishedPlayingEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADBDPlayerState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__hasActiveSubscription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__showPortraitBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameLevelLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__offNetworkFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__crossplayAllowed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__provider_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platform_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedSlasherIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__selectedCamperIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__platformAccountId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__characterStatsHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__achievementHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__gameplayNotificationManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__inParadise,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__recentGameplayEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__ongoingScoreEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__ongoingScoreEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__cachedUserGameStats,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__awardedScoresByType_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnGameStateChanged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnPlayerGameplayEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_PlayerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_SlasherData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_CamperData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_DedicatedServerHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_RitualHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_GameRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_GameRole_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_IsPlayerReady,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__difficultyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp__difficultyLevel_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_ContentVersion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_MirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADBDPlayerState_Statics::NewProp_OnAIFinishedPlayingEvent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ADBDPlayerState_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UPlayerflowEventsNotifier_NoRegister, (int32)VTABLE_OFFSET(ADBDPlayerState, IPlayerflowEventsNotifier), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADBDPlayerState_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADBDPlayerState>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADBDPlayerState_Statics::ClassParams = {
		&ADBDPlayerState::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ADBDPlayerState_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADBDPlayerState_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADBDPlayerState_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADBDPlayerState()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADBDPlayerState_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADBDPlayerState, 2908596290);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<ADBDPlayerState>()
	{
		return ADBDPlayerState::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADBDPlayerState(Z_Construct_UClass_ADBDPlayerState, &ADBDPlayerState::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("ADBDPlayerState"), false, nullptr, nullptr, nullptr);

	void ADBDPlayerState::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name_MirrorsId(TEXT("MirrorsId"));
		static const FName Name__difficultyLevel(TEXT("_difficultyLevel"));
		static const FName Name_IsPlayerReady(TEXT("IsPlayerReady"));
		static const FName Name_GameRole(TEXT("GameRole"));
		static const FName Name_CamperData(TEXT("CamperData"));
		static const FName Name_SlasherData(TEXT("SlasherData"));
		static const FName Name_PlayerData(TEXT("PlayerData"));
		static const FName Name_PlayerCustomization(TEXT("PlayerCustomization"));
		static const FName Name__inParadise(TEXT("_inParadise"));
		static const FName Name__platformAccountId(TEXT("_platformAccountId"));
		static const FName Name__selectedCamperIndex(TEXT("_selectedCamperIndex"));
		static const FName Name__selectedSlasherIndex(TEXT("_selectedSlasherIndex"));
		static const FName Name__platform(TEXT("_platform"));
		static const FName Name__provider(TEXT("_provider"));
		static const FName Name__crossplayAllowed(TEXT("_crossplayAllowed"));
		static const FName Name__offNetworkFlag(TEXT("_offNetworkFlag"));
		static const FName Name__gameLevelLoaded(TEXT("_gameLevelLoaded"));
		static const FName Name__showPortraitBorder(TEXT("_showPortraitBorder"));
		static const FName Name__hasActiveSubscription(TEXT("_hasActiveSubscription"));

		const bool bIsValid = true
			&& Name_MirrorsId == ClassReps[(int32)ENetFields_Private::MirrorsId].Property->GetFName()
			&& Name__difficultyLevel == ClassReps[(int32)ENetFields_Private::_difficultyLevel].Property->GetFName()
			&& Name_IsPlayerReady == ClassReps[(int32)ENetFields_Private::IsPlayerReady].Property->GetFName()
			&& Name_GameRole == ClassReps[(int32)ENetFields_Private::GameRole].Property->GetFName()
			&& Name_CamperData == ClassReps[(int32)ENetFields_Private::CamperData].Property->GetFName()
			&& Name_SlasherData == ClassReps[(int32)ENetFields_Private::SlasherData].Property->GetFName()
			&& Name_PlayerData == ClassReps[(int32)ENetFields_Private::PlayerData].Property->GetFName()
			&& Name_PlayerCustomization == ClassReps[(int32)ENetFields_Private::PlayerCustomization].Property->GetFName()
			&& Name__inParadise == ClassReps[(int32)ENetFields_Private::_inParadise].Property->GetFName()
			&& Name__platformAccountId == ClassReps[(int32)ENetFields_Private::_platformAccountId].Property->GetFName()
			&& Name__selectedCamperIndex == ClassReps[(int32)ENetFields_Private::_selectedCamperIndex].Property->GetFName()
			&& Name__selectedSlasherIndex == ClassReps[(int32)ENetFields_Private::_selectedSlasherIndex].Property->GetFName()
			&& Name__platform == ClassReps[(int32)ENetFields_Private::_platform].Property->GetFName()
			&& Name__provider == ClassReps[(int32)ENetFields_Private::_provider].Property->GetFName()
			&& Name__crossplayAllowed == ClassReps[(int32)ENetFields_Private::_crossplayAllowed].Property->GetFName()
			&& Name__offNetworkFlag == ClassReps[(int32)ENetFields_Private::_offNetworkFlag].Property->GetFName()
			&& Name__gameLevelLoaded == ClassReps[(int32)ENetFields_Private::_gameLevelLoaded].Property->GetFName()
			&& Name__showPortraitBorder == ClassReps[(int32)ENetFields_Private::_showPortraitBorder].Property->GetFName()
			&& Name__hasActiveSubscription == ClassReps[(int32)ENetFields_Private::_hasActiveSubscription].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ADBDPlayerState"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADBDPlayerState);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
