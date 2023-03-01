// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainStrikeInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainStrikeInteraction() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeInteraction_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainStrikeInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EChainStrikeEndReason();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EChainStrikeCameraViewTarget();
	FINITESTATEMACHINE_API UClass* Z_Construct_UClass_UFiniteStateMachine_NoRegister();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
// End Cross Module References
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execMulticast_AddStateTagToPlayer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_AddStateTagToPlayer_Implementation(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execMulticast_RemoveStateTagFromPlayer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_RemoveStateTagFromPlayer_Implementation(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execMulticast_SetFallbackEndReason)
	{
		P_GET_ENUM(EChainStrikeEndReason,Z_Param_chainStrikeEndReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_SetFallbackEndReason_Implementation(EChainStrikeEndReason(Z_Param_chainStrikeEndReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execOnRep_ChainStrikeCameraViewTarget)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_ChainStrikeCameraViewTarget();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execServer_AddStateTagToPlayer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_AddStateTagToPlayer_Implementation(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execServer_RemoveStateTagFromPlayer)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_tag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_RemoveStateTagFromPlayer_Implementation(Z_Param_tag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execServer_SetCameraViewTarget)
	{
		P_GET_ENUM(EChainStrikeCameraViewTarget,Z_Param_newViewTarget);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetCameraViewTarget_Implementation(EChainStrikeCameraViewTarget(Z_Param_newViewTarget));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execServer_SetFallbackEndReason)
	{
		P_GET_ENUM(EChainStrikeEndReason,Z_Param_chainStrikeEndReason);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetFallbackEndReason_Implementation(EChainStrikeEndReason(Z_Param_chainStrikeEndReason));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UK25ChainStrikeInteraction::execServer_SetShouldIncrementChargeableComponent)
	{
		P_GET_UBOOL(Z_Param_shouldIncrement);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Server_SetShouldIncrementChargeableComponent_Implementation(Z_Param_shouldIncrement);
		P_NATIVE_END;
	}
	static FName NAME_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues = FName(TEXT("Cosmetic_ResetAllVignetteValues"));
	void UK25ChainStrikeInteraction::Cosmetic_ResetAllVignetteValues(ASlasherPlayer* killer)
	{
		K25ChainStrikeInteraction_eventCosmetic_ResetAllVignetteValues_Parms Parms;
		Parms.killer=killer;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects = FName(TEXT("Cosmetic_TriggerGatewayPossessionEffects"));
	void UK25ChainStrikeInteraction::Cosmetic_TriggerGatewayPossessionEffects(const float transitionTime)
	{
		K25ChainStrikeInteraction_eventCosmetic_TriggerGatewayPossessionEffects_Parms Parms;
		Parms.transitionTime=transitionTime;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX = FName(TEXT("Cosmetic_TriggerInvalidGatewayPlacementSFX"));
	void UK25ChainStrikeInteraction::Cosmetic_TriggerInvalidGatewayPlacementSFX(ASlasherPlayer* killer)
	{
		K25ChainStrikeInteraction_eventCosmetic_TriggerInvalidGatewayPlacementSFX_Parms Parms;
		Parms.killer=killer;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects = FName(TEXT("Cosmetic_TriggerKillerRepossessionFadeInEffects"));
	void UK25ChainStrikeInteraction::Cosmetic_TriggerKillerRepossessionFadeInEffects(ASlasherPlayer* killer, bool hasHitSurvivor, bool preventAudioTriggers)
	{
		K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeInEffects_Parms Parms;
		Parms.killer=killer;
		Parms.hasHitSurvivor=hasHitSurvivor ? true : false;
		Parms.preventAudioTriggers=preventAudioTriggers ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects = FName(TEXT("Cosmetic_TriggerKillerRepossessionFadeOutEffects"));
	void UK25ChainStrikeInteraction::Cosmetic_TriggerKillerRepossessionFadeOutEffects(ASlasherPlayer* killer, bool preventAudioTriggers)
	{
		K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeOutEffects_Parms Parms;
		Parms.killer=killer;
		Parms.preventAudioTriggers=preventAudioTriggers ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer = FName(TEXT("Multicast_AddStateTagToPlayer"));
	void UK25ChainStrikeInteraction::Multicast_AddStateTagToPlayer(FGameplayTag tag)
	{
		K25ChainStrikeInteraction_eventMulticast_AddStateTagToPlayer_Parms Parms;
		Parms.tag=tag;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer = FName(TEXT("Multicast_RemoveStateTagFromPlayer"));
	void UK25ChainStrikeInteraction::Multicast_RemoveStateTagFromPlayer(FGameplayTag tag)
	{
		K25ChainStrikeInteraction_eventMulticast_RemoveStateTagFromPlayer_Parms Parms;
		Parms.tag=tag;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason = FName(TEXT("Multicast_SetFallbackEndReason"));
	void UK25ChainStrikeInteraction::Multicast_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason)
	{
		K25ChainStrikeInteraction_eventMulticast_SetFallbackEndReason_Parms Parms;
		Parms.chainStrikeEndReason=chainStrikeEndReason;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer = FName(TEXT("Server_AddStateTagToPlayer"));
	void UK25ChainStrikeInteraction::Server_AddStateTagToPlayer(FGameplayTag tag)
	{
		K25ChainStrikeInteraction_eventServer_AddStateTagToPlayer_Parms Parms;
		Parms.tag=tag;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer = FName(TEXT("Server_RemoveStateTagFromPlayer"));
	void UK25ChainStrikeInteraction::Server_RemoveStateTagFromPlayer(FGameplayTag tag)
	{
		K25ChainStrikeInteraction_eventServer_RemoveStateTagFromPlayer_Parms Parms;
		Parms.tag=tag;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Server_SetCameraViewTarget = FName(TEXT("Server_SetCameraViewTarget"));
	void UK25ChainStrikeInteraction::Server_SetCameraViewTarget(EChainStrikeCameraViewTarget newViewTarget)
	{
		K25ChainStrikeInteraction_eventServer_SetCameraViewTarget_Parms Parms;
		Parms.newViewTarget=newViewTarget;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Server_SetCameraViewTarget),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Server_SetFallbackEndReason = FName(TEXT("Server_SetFallbackEndReason"));
	void UK25ChainStrikeInteraction::Server_SetFallbackEndReason(EChainStrikeEndReason chainStrikeEndReason)
	{
		K25ChainStrikeInteraction_eventServer_SetFallbackEndReason_Parms Parms;
		Parms.chainStrikeEndReason=chainStrikeEndReason;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Server_SetFallbackEndReason),&Parms);
	}
	static FName NAME_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent = FName(TEXT("Server_SetShouldIncrementChargeableComponent"));
	void UK25ChainStrikeInteraction::Server_SetShouldIncrementChargeableComponent(bool shouldIncrement)
	{
		K25ChainStrikeInteraction_eventServer_SetShouldIncrementChargeableComponent_Parms Parms;
		Parms.shouldIncrement=shouldIncrement ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent),&Parms);
	}
	void UK25ChainStrikeInteraction::StaticRegisterNativesUK25ChainStrikeInteraction()
	{
		UClass* Class = UK25ChainStrikeInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Multicast_AddStateTagToPlayer", &UK25ChainStrikeInteraction::execMulticast_AddStateTagToPlayer },
			{ "Multicast_RemoveStateTagFromPlayer", &UK25ChainStrikeInteraction::execMulticast_RemoveStateTagFromPlayer },
			{ "Multicast_SetFallbackEndReason", &UK25ChainStrikeInteraction::execMulticast_SetFallbackEndReason },
			{ "OnRep_ChainStrikeCameraViewTarget", &UK25ChainStrikeInteraction::execOnRep_ChainStrikeCameraViewTarget },
			{ "Server_AddStateTagToPlayer", &UK25ChainStrikeInteraction::execServer_AddStateTagToPlayer },
			{ "Server_RemoveStateTagFromPlayer", &UK25ChainStrikeInteraction::execServer_RemoveStateTagFromPlayer },
			{ "Server_SetCameraViewTarget", &UK25ChainStrikeInteraction::execServer_SetCameraViewTarget },
			{ "Server_SetFallbackEndReason", &UK25ChainStrikeInteraction::execServer_SetFallbackEndReason },
			{ "Server_SetShouldIncrementChargeableComponent", &UK25ChainStrikeInteraction::execServer_SetShouldIncrementChargeableComponent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventCosmetic_ResetAllVignetteValues_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Cosmetic_ResetAllVignetteValues", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventCosmetic_ResetAllVignetteValues_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_transitionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_transitionTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::NewProp_transitionTime_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::NewProp_transitionTime = { "transitionTime", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventCosmetic_TriggerGatewayPossessionEffects_Parms, transitionTime), METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::NewProp_transitionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::NewProp_transitionTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::NewProp_transitionTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Cosmetic_TriggerGatewayPossessionEffects", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventCosmetic_TriggerGatewayPossessionEffects_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventCosmetic_TriggerInvalidGatewayPlacementSFX_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Cosmetic_TriggerInvalidGatewayPlacementSFX", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventCosmetic_TriggerInvalidGatewayPlacementSFX_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preventAudioTriggers_MetaData[];
#endif
		static void NewProp_preventAudioTriggers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_preventAudioTriggers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hasHitSurvivor_MetaData[];
#endif
		static void NewProp_hasHitSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasHitSurvivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_preventAudioTriggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_preventAudioTriggers_SetBit(void* Obj)
	{
		((K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeInEffects_Parms*)Obj)->preventAudioTriggers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_preventAudioTriggers = { "preventAudioTriggers", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeInEffects_Parms), &Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_preventAudioTriggers_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_preventAudioTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_preventAudioTriggers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_hasHitSurvivor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_hasHitSurvivor_SetBit(void* Obj)
	{
		((K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeInEffects_Parms*)Obj)->hasHitSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_hasHitSurvivor = { "hasHitSurvivor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeInEffects_Parms), &Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_hasHitSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_hasHitSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_hasHitSurvivor_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeInEffects_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_preventAudioTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_hasHitSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Cosmetic_TriggerKillerRepossessionFadeInEffects", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeInEffects_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_preventAudioTriggers_MetaData[];
#endif
		static void NewProp_preventAudioTriggers_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_preventAudioTriggers;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_preventAudioTriggers_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_preventAudioTriggers_SetBit(void* Obj)
	{
		((K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeOutEffects_Parms*)Obj)->preventAudioTriggers = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_preventAudioTriggers = { "preventAudioTriggers", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeOutEffects_Parms), &Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_preventAudioTriggers_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_preventAudioTriggers_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_preventAudioTriggers_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeOutEffects_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_preventAudioTriggers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Cosmetic_TriggerKillerRepossessionFadeOutEffects", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventCosmetic_TriggerKillerRepossessionFadeOutEffects_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventMulticast_AddStateTagToPlayer_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Multicast_AddStateTagToPlayer", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventMulticast_AddStateTagToPlayer_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventMulticast_RemoveStateTagFromPlayer_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Multicast_RemoveStateTagFromPlayer", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventMulticast_RemoveStateTagFromPlayer_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_chainStrikeEndReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_chainStrikeEndReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::NewProp_chainStrikeEndReason = { "chainStrikeEndReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventMulticast_SetFallbackEndReason_Parms, chainStrikeEndReason), Z_Construct_UEnum_TheK25_EChainStrikeEndReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::NewProp_chainStrikeEndReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::NewProp_chainStrikeEndReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::NewProp_chainStrikeEndReason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Multicast_SetFallbackEndReason", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventMulticast_SetFallbackEndReason_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00024CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "OnRep_ChainStrikeCameraViewTarget", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventServer_AddStateTagToPlayer_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Server_AddStateTagToPlayer", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventServer_AddStateTagToPlayer_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics
	{
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::NewProp_tag = { "tag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventServer_RemoveStateTagFromPlayer_Parms, tag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::NewProp_tag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Server_RemoveStateTagFromPlayer", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventServer_RemoveStateTagFromPlayer_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_newViewTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_newViewTarget_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::NewProp_newViewTarget = { "newViewTarget", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventServer_SetCameraViewTarget_Parms, newViewTarget), Z_Construct_UEnum_TheK25_EChainStrikeCameraViewTarget, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::NewProp_newViewTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::NewProp_newViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::NewProp_newViewTarget_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Server_SetCameraViewTarget", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventServer_SetCameraViewTarget_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_chainStrikeEndReason;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_chainStrikeEndReason_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::NewProp_chainStrikeEndReason = { "chainStrikeEndReason", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(K25ChainStrikeInteraction_eventServer_SetFallbackEndReason_Parms, chainStrikeEndReason), Z_Construct_UEnum_TheK25_EChainStrikeEndReason, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::NewProp_chainStrikeEndReason_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::NewProp_chainStrikeEndReason,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::NewProp_chainStrikeEndReason_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Server_SetFallbackEndReason", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventServer_SetFallbackEndReason_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics
	{
		static void NewProp_shouldIncrement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_shouldIncrement;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::NewProp_shouldIncrement_SetBit(void* Obj)
	{
		((K25ChainStrikeInteraction_eventServer_SetShouldIncrementChargeableComponent_Parms*)Obj)->shouldIncrement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::NewProp_shouldIncrement = { "shouldIncrement", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(K25ChainStrikeInteraction_eventServer_SetShouldIncrementChargeableComponent_Parms), &Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::NewProp_shouldIncrement_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::NewProp_shouldIncrement,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UK25ChainStrikeInteraction, nullptr, "Server_SetShouldIncrementChargeableComponent", nullptr, nullptr, sizeof(K25ChainStrikeInteraction_eventServer_SetShouldIncrementChargeableComponent_Parms), Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00220CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UK25ChainStrikeInteraction_NoRegister()
	{
		return UK25ChainStrikeInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainStrikeInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasHitSurvivor_MetaData[];
#endif
		static void NewProp__hasHitSurvivor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hasHitSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainStrikeCameraViewTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__chainStrikeCameraViewTarget;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__chainStrikeCameraViewTarget_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__authority_shouldIncrementChargeableComponent_MetaData[];
#endif
		static void NewProp__authority_shouldIncrementChargeableComponent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__authority_shouldIncrementChargeableComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateMachine_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__stateMachine;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlledProjectilePossessionFovTimeChangeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__controlledProjectilePossessionFovTimeChangeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlledProjectilePossessionCameraPanTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__controlledProjectilePossessionCameraPanTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gatewayPossessionCameraPanTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gatewayPossessionCameraPanTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gatewayPossessionFovChangeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gatewayPossessionFovChangeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeTimeAfterControlledChainShot_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chargeTimeAfterControlledChainShot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeTimeAfterGatewayPossessionCancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chargeTimeAfterGatewayPossessionCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeTimeAfterGatewayPlacementCancelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chargeTimeAfterGatewayPlacementCancelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__controlledProjectilePossessionFovModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__controlledProjectilePossessionFovModifierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gatewayPossessionFovModifierCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__gatewayPossessionFovModifierCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repossessFadeInTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__repossessFadeInTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__repossessFadeOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__repossessFadeOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainStrikeStateMachineclass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__chainStrikeStateMachineclass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_ResetAllVignetteValues, "Cosmetic_ResetAllVignetteValues" }, // 2248904280
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerGatewayPossessionEffects, "Cosmetic_TriggerGatewayPossessionEffects" }, // 2865583512
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerInvalidGatewayPlacementSFX, "Cosmetic_TriggerInvalidGatewayPlacementSFX" }, // 3331600481
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeInEffects, "Cosmetic_TriggerKillerRepossessionFadeInEffects" }, // 3875007326
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Cosmetic_TriggerKillerRepossessionFadeOutEffects, "Cosmetic_TriggerKillerRepossessionFadeOutEffects" }, // 145988478
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_AddStateTagToPlayer, "Multicast_AddStateTagToPlayer" }, // 3816515857
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_RemoveStateTagFromPlayer, "Multicast_RemoveStateTagFromPlayer" }, // 1259889638
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Multicast_SetFallbackEndReason, "Multicast_SetFallbackEndReason" }, // 1846350829
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_OnRep_ChainStrikeCameraViewTarget, "OnRep_ChainStrikeCameraViewTarget" }, // 2743691209
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_AddStateTagToPlayer, "Server_AddStateTagToPlayer" }, // 4202309484
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_RemoveStateTagFromPlayer, "Server_RemoveStateTagFromPlayer" }, // 2396319518
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetCameraViewTarget, "Server_SetCameraViewTarget" }, // 152036337
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetFallbackEndReason, "Server_SetFallbackEndReason" }, // 1497064472
		{ &Z_Construct_UFunction_UK25ChainStrikeInteraction_Server_SetShouldIncrementChargeableComponent, "Server_SetShouldIncrementChargeableComponent" }, // 1318966544
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "K25ChainStrikeInteraction.h" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__hasHitSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	void Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__hasHitSurvivor_SetBit(void* Obj)
	{
		((UK25ChainStrikeInteraction*)Obj)->_hasHitSurvivor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__hasHitSurvivor = { "_hasHitSurvivor", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25ChainStrikeInteraction), &Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__hasHitSurvivor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__hasHitSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__hasHitSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeCameraViewTarget_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeCameraViewTarget = { "_chainStrikeCameraViewTarget", "OnRep_ChainStrikeCameraViewTarget", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _chainStrikeCameraViewTarget), Z_Construct_UEnum_TheK25_EChainStrikeCameraViewTarget, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeCameraViewTarget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeCameraViewTarget_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeCameraViewTarget_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__authority_shouldIncrementChargeableComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	void Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__authority_shouldIncrementChargeableComponent_SetBit(void* Obj)
	{
		((UK25ChainStrikeInteraction*)Obj)->_authority_shouldIncrementChargeableComponent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__authority_shouldIncrementChargeableComponent = { "_authority_shouldIncrementChargeableComponent", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UK25ChainStrikeInteraction), &Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__authority_shouldIncrementChargeableComponent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__authority_shouldIncrementChargeableComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__authority_shouldIncrementChargeableComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__stateMachine_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__stateMachine = { "_stateMachine", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _stateMachine), Z_Construct_UClass_UFiniteStateMachine_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__stateMachine_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__stateMachine_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovTimeChangeDuration_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovTimeChangeDuration = { "_controlledProjectilePossessionFovTimeChangeDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _controlledProjectilePossessionFovTimeChangeDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovTimeChangeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovTimeChangeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionCameraPanTime_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionCameraPanTime = { "_controlledProjectilePossessionCameraPanTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _controlledProjectilePossessionCameraPanTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionCameraPanTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionCameraPanTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionCameraPanTime_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionCameraPanTime = { "_gatewayPossessionCameraPanTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _gatewayPossessionCameraPanTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionCameraPanTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionCameraPanTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovChangeDuration_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovChangeDuration = { "_gatewayPossessionFovChangeDuration", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _gatewayPossessionFovChangeDuration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovChangeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovChangeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterControlledChainShot_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterControlledChainShot = { "_chargeTimeAfterControlledChainShot", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _chargeTimeAfterControlledChainShot), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterControlledChainShot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterControlledChainShot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPossessionCancelled_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPossessionCancelled = { "_chargeTimeAfterGatewayPossessionCancelled", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _chargeTimeAfterGatewayPossessionCancelled), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPossessionCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPossessionCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPlacementCancelled_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPlacementCancelled = { "_chargeTimeAfterGatewayPlacementCancelled", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _chargeTimeAfterGatewayPlacementCancelled), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPlacementCancelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPlacementCancelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovModifierCurve_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovModifierCurve = { "_controlledProjectilePossessionFovModifierCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _controlledProjectilePossessionFovModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovModifierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovModifierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovModifierCurve_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovModifierCurve = { "_gatewayPossessionFovModifierCurve", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _gatewayPossessionFovModifierCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovModifierCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovModifierCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeInTime_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeInTime = { "_repossessFadeInTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _repossessFadeInTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeInTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeInTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeOutTime_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeOutTime = { "_repossessFadeOutTime", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _repossessFadeOutTime), METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeStateMachineclass_MetaData[] = {
		{ "Category", "K25ChainStrikeInteraction" },
		{ "ModuleRelativePath", "Public/K25ChainStrikeInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeStateMachineclass = { "_chainStrikeStateMachineclass", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UK25ChainStrikeInteraction, _chainStrikeStateMachineclass), Z_Construct_UClass_UFiniteStateMachine_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeStateMachineclass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeStateMachineclass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__hasHitSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeCameraViewTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeCameraViewTarget_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__authority_shouldIncrementChargeableComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__stateMachine,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovTimeChangeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionCameraPanTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionCameraPanTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovChangeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterControlledChainShot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPossessionCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chargeTimeAfterGatewayPlacementCancelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__controlledProjectilePossessionFovModifierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__gatewayPossessionFovModifierCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeInTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__repossessFadeOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::NewProp__chainStrikeStateMachineclass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainStrikeInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::ClassParams = {
		&UK25ChainStrikeInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainStrikeInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainStrikeInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainStrikeInteraction, 441515829);
	template<> THEK25_API UClass* StaticClass<UK25ChainStrikeInteraction>()
	{
		return UK25ChainStrikeInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainStrikeInteraction(Z_Construct_UClass_UK25ChainStrikeInteraction, &UK25ChainStrikeInteraction::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainStrikeInteraction"), false, nullptr, nullptr, nullptr);

	void UK25ChainStrikeInteraction::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__chainStrikeCameraViewTarget(TEXT("_chainStrikeCameraViewTarget"));
		static const FName Name__hasHitSurvivor(TEXT("_hasHitSurvivor"));

		const bool bIsValid = true
			&& Name__chainStrikeCameraViewTarget == ClassReps[(int32)ENetFields_Private::_chainStrikeCameraViewTarget].Property->GetFName()
			&& Name__hasHitSurvivor == ClassReps[(int32)ENetFields_Private::_hasHitSurvivor].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UK25ChainStrikeInteraction"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainStrikeInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
