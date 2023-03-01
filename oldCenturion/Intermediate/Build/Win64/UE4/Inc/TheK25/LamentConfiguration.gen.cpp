// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/LamentConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLamentConfiguration() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_ALamentConfiguration_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_ALamentConfiguration();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACollectable();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ASlasherPlayer_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	THEK25_API UClass* Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_AK25AnimationFollowerActor_NoRegister();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_ELamentConfigurationState();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMontagePlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAnimationMontageSlave_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAttachToSocketNameEnum();
	THEK25_API UClass* Z_Construct_UClass_ULamentConfigurationChainHuntComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_ULamentConfigurationSpawnStrategy_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_ULamentConfigurationOutlineStrategy_NoRegister();
	GFXUTILITIES_API UClass* Z_Construct_UClass_UMaterialHelper_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDOutlineComponent_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractor_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpherePlayerOverlapComponent_NoRegister();
	GAMEPLAYTAGUTILITIES_API UClass* Z_Construct_UClass_UObjectStateProvider_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ALamentConfiguration::execAuthority_OnEndGameOver)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnEndGameOver(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execAuthority_OnGameEnded)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnGameEnded(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execAuthority_OnIntroCompletedOrLevelReadyToPlay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnIntroCompletedOrLevelReadyToPlay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execAuthority_OnSurvivorHitByControlledProjectile)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_OnSurvivorHitByControlledProjectile(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execAuthority_RespawnLamentConfiguration)
	{
		P_GET_UBOOL(Z_Param_triggerChainHuntUponSpawning);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Authority_RespawnLamentConfiguration(Z_Param_triggerChainHuntUponSpawning);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execGetChainHuntProgressPercentage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChainHuntProgressPercentage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execMulticast_CorrectLamentConfigurationPosition)
	{
		P_GET_STRUCT(FVector,Z_Param_newPosition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_CorrectLamentConfigurationPosition_Implementation(Z_Param_newPosition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execMulticast_DownedSurvivorHoldingLamentConfiguration)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_survivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_DownedSurvivorHoldingLamentConfiguration_Implementation(Z_Param_survivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execMulticast_TriggerKillerPickUpSFX)
	{
		P_GET_TARRAY(ACamperPlayer*,Z_Param_affectedSurvivors);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TriggerKillerPickUpSFX_Implementation(Z_Param_affectedSurvivors);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execMulticast_TriggerSolvedSFX)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Multicast_TriggerSolvedSFX_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execOnCamperEscaped)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCamperEscaped(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execOnRep_LamentConfigurationState)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_LamentConfigurationState();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ALamentConfiguration::execOnRep_SurvivorHeldHostage)
	{
		P_GET_OBJECT(ACamperPlayer,Z_Param_oldSurvivorHeldHostage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRep_SurvivorHeldHostage(Z_Param_oldSurvivorHeldHostage);
		P_NATIVE_END;
	}
	static FName NAME_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX = FName(TEXT("Cosmetic_BeginSolvingCubeSFX"));
	void ALamentConfiguration::Cosmetic_BeginSolvingCubeSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX),NULL);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX = FName(TEXT("Cosmetic_EndSolvingCubeSFX"));
	void ALamentConfiguration::Cosmetic_EndSolvingCubeSFX(bool hasBeenSolved)
	{
		LamentConfiguration_eventCosmetic_EndSolvingCubeSFX_Parms Parms;
		Parms.hasBeenSolved=hasBeenSolved ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX),&Parms);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd = FName(TEXT("Cosmetic_OnChainHuntChargeEnd"));
	void ALamentConfiguration::Cosmetic_OnChainHuntChargeEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd),NULL);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart = FName(TEXT("Cosmetic_OnChainHuntChargeStart"));
	void ALamentConfiguration::Cosmetic_OnChainHuntChargeStart(float chargeTime)
	{
		LamentConfiguration_eventCosmetic_OnChainHuntChargeStart_Parms Parms;
		Parms.chargeTime=chargeTime;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart),&Parms);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects = FName(TEXT("Cosmetic_OnChainHuntEndedEffects"));
	void ALamentConfiguration::Cosmetic_OnChainHuntEndedEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects),NULL);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects = FName(TEXT("Cosmetic_OnChainHuntStartedEffects"));
	void ALamentConfiguration::Cosmetic_OnChainHuntStartedEffects()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects),NULL);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd = FName(TEXT("Cosmetic_OnHoldingSurvivorHostageEnd"));
	void ALamentConfiguration::Cosmetic_OnHoldingSurvivorHostageEnd(bool hasEndedThroughKillerAttack)
	{
		LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageEnd_Parms Parms;
		Parms.hasEndedThroughKillerAttack=hasEndedThroughKillerAttack ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd),&Parms);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart = FName(TEXT("Cosmetic_OnHoldingSurvivorHostageStart"));
	void ALamentConfiguration::Cosmetic_OnHoldingSurvivorHostageStart(float hostageDuration)
	{
		LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageStart_Parms Parms;
		Parms.hostageDuration=hostageDuration;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart),&Parms);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration = FName(TEXT("Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration"));
	void ALamentConfiguration::Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration(ASlasherPlayer* killer, ACamperPlayer* survivorDowned)
	{
		LamentConfiguration_eventCosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Parms Parms;
		Parms.killer=killer;
		Parms.survivorDowned=survivorDowned;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration),&Parms);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX = FName(TEXT("Cosmetic_TriggerDisappearsSFX"));
	void ALamentConfiguration::Cosmetic_TriggerDisappearsSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX),NULL);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX = FName(TEXT("Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX"));
	void ALamentConfiguration::Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX),NULL);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_TriggerSolvedSFX = FName(TEXT("Cosmetic_TriggerSolvedSFX"));
	void ALamentConfiguration::Cosmetic_TriggerSolvedSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_TriggerSolvedSFX),NULL);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX = FName(TEXT("Cosmetic_TriggerSpawnedSFX"));
	void ALamentConfiguration::Cosmetic_TriggerSpawnedSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX),NULL);
	}
	static FName NAME_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX = FName(TEXT("Cosmetic_TriggerSurvivorPickUpSFX"));
	void ALamentConfiguration::Cosmetic_TriggerSurvivorPickUpSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX),NULL);
	}
	static FName NAME_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition = FName(TEXT("Multicast_CorrectLamentConfigurationPosition"));
	void ALamentConfiguration::Multicast_CorrectLamentConfigurationPosition(FVector const& newPosition)
	{
		LamentConfiguration_eventMulticast_CorrectLamentConfigurationPosition_Parms Parms;
		Parms.newPosition=newPosition;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition),&Parms);
	}
	static FName NAME_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration = FName(TEXT("Multicast_DownedSurvivorHoldingLamentConfiguration"));
	void ALamentConfiguration::Multicast_DownedSurvivorHoldingLamentConfiguration(ACamperPlayer* survivor)
	{
		LamentConfiguration_eventMulticast_DownedSurvivorHoldingLamentConfiguration_Parms Parms;
		Parms.survivor=survivor;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration),&Parms);
	}
	static FName NAME_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX = FName(TEXT("Multicast_TriggerKillerPickUpSFX"));
	void ALamentConfiguration::Multicast_TriggerKillerPickUpSFX(TArray<ACamperPlayer*> const& affectedSurvivors)
	{
		LamentConfiguration_eventMulticast_TriggerKillerPickUpSFX_Parms Parms;
		Parms.affectedSurvivors=affectedSurvivors;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX),&Parms);
	}
	static FName NAME_ALamentConfiguration_Multicast_TriggerSolvedSFX = FName(TEXT("Multicast_TriggerSolvedSFX"));
	void ALamentConfiguration::Multicast_TriggerSolvedSFX()
	{
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_Multicast_TriggerSolvedSFX),NULL);
	}
	static FName NAME_ALamentConfiguration_TriggerKillerPickUpSFX = FName(TEXT("TriggerKillerPickUpSFX"));
	void ALamentConfiguration::TriggerKillerPickUpSFX(TArray<ACamperPlayer*> const& affectedSurvivors)
	{
		LamentConfiguration_eventTriggerKillerPickUpSFX_Parms Parms;
		Parms.affectedSurvivors=affectedSurvivors;
		ProcessEvent(FindFunctionChecked(NAME_ALamentConfiguration_TriggerKillerPickUpSFX),&Parms);
	}
	void ALamentConfiguration::StaticRegisterNativesALamentConfiguration()
	{
		UClass* Class = ALamentConfiguration::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Authority_OnEndGameOver", &ALamentConfiguration::execAuthority_OnEndGameOver },
			{ "Authority_OnGameEnded", &ALamentConfiguration::execAuthority_OnGameEnded },
			{ "Authority_OnIntroCompletedOrLevelReadyToPlay", &ALamentConfiguration::execAuthority_OnIntroCompletedOrLevelReadyToPlay },
			{ "Authority_OnSurvivorHitByControlledProjectile", &ALamentConfiguration::execAuthority_OnSurvivorHitByControlledProjectile },
			{ "Authority_RespawnLamentConfiguration", &ALamentConfiguration::execAuthority_RespawnLamentConfiguration },
			{ "GetChainHuntProgressPercentage", &ALamentConfiguration::execGetChainHuntProgressPercentage },
			{ "Multicast_CorrectLamentConfigurationPosition", &ALamentConfiguration::execMulticast_CorrectLamentConfigurationPosition },
			{ "Multicast_DownedSurvivorHoldingLamentConfiguration", &ALamentConfiguration::execMulticast_DownedSurvivorHoldingLamentConfiguration },
			{ "Multicast_TriggerKillerPickUpSFX", &ALamentConfiguration::execMulticast_TriggerKillerPickUpSFX },
			{ "Multicast_TriggerSolvedSFX", &ALamentConfiguration::execMulticast_TriggerSolvedSFX },
			{ "OnCamperEscaped", &ALamentConfiguration::execOnCamperEscaped },
			{ "OnRep_LamentConfigurationState", &ALamentConfiguration::execOnRep_LamentConfigurationState },
			{ "OnRep_SurvivorHeldHostage", &ALamentConfiguration::execOnRep_SurvivorHeldHostage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics
	{
		struct LamentConfiguration_eventAuthority_OnEndGameOver_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventAuthority_OnEndGameOver_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventAuthority_OnEndGameOver_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Authority_OnEndGameOver", nullptr, nullptr, sizeof(LamentConfiguration_eventAuthority_OnEndGameOver_Parms), Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics
	{
		struct LamentConfiguration_eventAuthority_OnGameEnded_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventAuthority_OnGameEnded_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventAuthority_OnGameEnded_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Authority_OnGameEnded", nullptr, nullptr, sizeof(LamentConfiguration_eventAuthority_OnGameEnded_Parms), Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Authority_OnIntroCompletedOrLevelReadyToPlay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics
	{
		struct LamentConfiguration_eventAuthority_OnSurvivorHitByControlledProjectile_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventAuthority_OnSurvivorHitByControlledProjectile_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventAuthority_OnSurvivorHitByControlledProjectile_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Authority_OnSurvivorHitByControlledProjectile", nullptr, nullptr, sizeof(LamentConfiguration_eventAuthority_OnSurvivorHitByControlledProjectile_Parms), Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics
	{
		struct LamentConfiguration_eventAuthority_RespawnLamentConfiguration_Parms
		{
			bool triggerChainHuntUponSpawning;
		};
		static void NewProp_triggerChainHuntUponSpawning_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_triggerChainHuntUponSpawning;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::NewProp_triggerChainHuntUponSpawning_SetBit(void* Obj)
	{
		((LamentConfiguration_eventAuthority_RespawnLamentConfiguration_Parms*)Obj)->triggerChainHuntUponSpawning = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::NewProp_triggerChainHuntUponSpawning = { "triggerChainHuntUponSpawning", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LamentConfiguration_eventAuthority_RespawnLamentConfiguration_Parms), &Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::NewProp_triggerChainHuntUponSpawning_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::NewProp_triggerChainHuntUponSpawning,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Authority_RespawnLamentConfiguration", nullptr, nullptr, sizeof(LamentConfiguration_eventAuthority_RespawnLamentConfiguration_Parms), Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_BeginSolvingCubeSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics
	{
		static void NewProp_hasBeenSolved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasBeenSolved;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::NewProp_hasBeenSolved_SetBit(void* Obj)
	{
		((LamentConfiguration_eventCosmetic_EndSolvingCubeSFX_Parms*)Obj)->hasBeenSolved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::NewProp_hasBeenSolved = { "hasBeenSolved", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LamentConfiguration_eventCosmetic_EndSolvingCubeSFX_Parms), &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::NewProp_hasBeenSolved_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::NewProp_hasBeenSolved,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_EndSolvingCubeSFX", nullptr, nullptr, sizeof(LamentConfiguration_eventCosmetic_EndSolvingCubeSFX_Parms), Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_OnChainHuntChargeEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chargeTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::NewProp_chargeTime = { "chargeTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventCosmetic_OnChainHuntChargeStart_Parms, chargeTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::NewProp_chargeTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_OnChainHuntChargeStart", nullptr, nullptr, sizeof(LamentConfiguration_eventCosmetic_OnChainHuntChargeStart_Parms), Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_OnChainHuntEndedEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_OnChainHuntStartedEffects", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics
	{
		static void NewProp_hasEndedThroughKillerAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasEndedThroughKillerAttack;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::NewProp_hasEndedThroughKillerAttack_SetBit(void* Obj)
	{
		((LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageEnd_Parms*)Obj)->hasEndedThroughKillerAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::NewProp_hasEndedThroughKillerAttack = { "hasEndedThroughKillerAttack", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageEnd_Parms), &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::NewProp_hasEndedThroughKillerAttack_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::NewProp_hasEndedThroughKillerAttack,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_OnHoldingSurvivorHostageEnd", nullptr, nullptr, sizeof(LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageEnd_Parms), Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_hostageDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::NewProp_hostageDuration = { "hostageDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageStart_Parms, hostageDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::NewProp_hostageDuration,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_OnHoldingSurvivorHostageStart", nullptr, nullptr, sizeof(LamentConfiguration_eventCosmetic_OnHoldingSurvivorHostageStart_Parms), Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivorDowned;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_killer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::NewProp_survivorDowned = { "survivorDowned", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventCosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Parms, survivorDowned), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::NewProp_killer = { "killer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventCosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Parms, killer), Z_Construct_UClass_ASlasherPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::NewProp_survivorDowned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::NewProp_killer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration", nullptr, nullptr, sizeof(LamentConfiguration_eventCosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Parms), Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_TriggerDisappearsSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSolvedSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSolvedSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSolvedSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_TriggerSolvedSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSolvedSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSolvedSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSolvedSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSolvedSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_TriggerSpawnedSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Cosmetic_TriggerSurvivorPickUpSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics
	{
		struct LamentConfiguration_eventGetChainHuntProgressPercentage_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventGetChainHuntProgressPercentage_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "GetChainHuntProgressPercentage", nullptr, nullptr, sizeof(LamentConfiguration_eventGetChainHuntProgressPercentage_Parms), Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_newPosition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::NewProp_newPosition_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::NewProp_newPosition = { "newPosition", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventMulticast_CorrectLamentConfigurationPosition_Parms, newPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::NewProp_newPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::NewProp_newPosition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::NewProp_newPosition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Multicast_CorrectLamentConfigurationPosition", nullptr, nullptr, sizeof(LamentConfiguration_eventMulticast_CorrectLamentConfigurationPosition_Parms), Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00844CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_survivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::NewProp_survivor = { "survivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventMulticast_DownedSurvivorHoldingLamentConfiguration_Parms, survivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::NewProp_survivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Multicast_DownedSurvivorHoldingLamentConfiguration", nullptr, nullptr, sizeof(LamentConfiguration_eventMulticast_DownedSurvivorHoldingLamentConfiguration_Parms), Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectedSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_affectedSurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_affectedSurvivors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors = { "affectedSurvivors", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventMulticast_TriggerKillerPickUpSFX_Parms, affectedSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_Inner = { "affectedSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Multicast_TriggerKillerPickUpSFX", nullptr, nullptr, sizeof(LamentConfiguration_eventMulticast_TriggerKillerPickUpSFX_Parms), Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerSolvedSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerSolvedSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerSolvedSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "Multicast_TriggerSolvedSFX", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00044CC1, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerSolvedSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerSolvedSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerSolvedSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerSolvedSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics
	{
		struct LamentConfiguration_eventOnCamperEscaped_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_gameEventData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_gameEventType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventOnCamperEscaped_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::NewProp_gameEventData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventOnCamperEscaped_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "OnCamperEscaped", nullptr, nullptr, sizeof(LamentConfiguration_eventOnCamperEscaped_Parms), Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_OnRep_LamentConfigurationState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_OnRep_LamentConfigurationState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_OnRep_LamentConfigurationState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "OnRep_LamentConfigurationState", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_OnRep_LamentConfigurationState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_OnRep_LamentConfigurationState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_OnRep_LamentConfigurationState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_OnRep_LamentConfigurationState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics
	{
		struct LamentConfiguration_eventOnRep_SurvivorHeldHostage_Parms
		{
			ACamperPlayer* oldSurvivorHeldHostage;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_oldSurvivorHeldHostage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::NewProp_oldSurvivorHeldHostage = { "oldSurvivorHeldHostage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventOnRep_SurvivorHeldHostage_Parms, oldSurvivorHeldHostage), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::NewProp_oldSurvivorHeldHostage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "OnRep_SurvivorHeldHostage", nullptr, nullptr, sizeof(LamentConfiguration_eventOnRep_SurvivorHeldHostage_Parms), Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_affectedSurvivors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_affectedSurvivors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_affectedSurvivors_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors = { "affectedSurvivors", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(LamentConfiguration_eventTriggerKillerPickUpSFX_Parms, affectedSurvivors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_Inner = { "affectedSurvivors", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::NewProp_affectedSurvivors_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ALamentConfiguration, nullptr, "TriggerKillerPickUpSFX", nullptr, nullptr, sizeof(LamentConfiguration_eventTriggerKillerPickUpSFX_Parms), Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ALamentConfiguration_NoRegister()
	{
		return ALamentConfiguration::StaticClass();
	}
	struct Z_Construct_UClass_ALamentConfiguration_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lamentConfigurationTeleportIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__lamentConfigurationTeleportIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__releasedByAttack_MetaData[];
#endif
		static void NewProp__releasedByAttack_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__releasedByAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__solved_MetaData[];
#endif
		static void NewProp__solved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__solved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__failedLamentConfigurationSolveDropDistanceToCollectorCentimeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__failedLamentConfigurationSolveDropDistanceToCollectorCentimeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__solvedLamentConfigurationDropDistanceToCollectorCentimeters_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__solvedLamentConfigurationDropDistanceToCollectorCentimeters;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorHeldHostage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorHeldHostage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAnimationActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainAnimationActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lamentconfigurationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__lamentconfigurationState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__lamentconfigurationState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__localLamentConfigurationState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__localLamentConfigurationState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__localLamentConfigurationState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hostageInteractionTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__hostageInteractionTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberChainsToLaunchUponKillerPickUpLamentConfiguration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__numberChainsToLaunchUponKillerPickUpLamentConfiguration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawnTimeAfterSurvivorFreeByAttack_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__respawnTimeAfterSurvivorFreeByAttack;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawnTimeAfterSurvivorFreeBySelf_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__respawnTimeAfterSurvivorFreeBySelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawnTimeAfterKillerPickUp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__respawnTimeAfterKillerPickUp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__respawnTimeAfterLamentConfigurationSolved_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__respawnTimeAfterLamentConfigurationSolved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__possessionSoundLoop_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__possessionSoundLoop;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAnimationFollowerAttachmentSocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__chainAnimationFollowerAttachmentSocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lamentConfigurationTeleportIndicatorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__lamentConfigurationTeleportIndicatorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainAnimationActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__chainAnimationActorClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montagePlayer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montagePlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montageFollower_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montageFollower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerAttachmentSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__killerAttachmentSocket;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__killerAttachmentSocket_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorAttachmentSocket_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__survivorAttachmentSocket;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__survivorAttachmentSocket_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dotProductMinValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__dotProductMinValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chainHuntComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chainHuntComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spawnStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineStrategy_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineStrategy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__materialHelper_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__materialHelper;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__outlineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__outlineComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerCollectItemInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerCollectItemInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__survivorCollectItemInteraction_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__survivorCollectItemInteraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__collectableInteractor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__collectableInteractor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__interactable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ALamentConfiguration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACollectable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ALamentConfiguration_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ALamentConfiguration_Authority_OnEndGameOver, "Authority_OnEndGameOver" }, // 1695187030
		{ &Z_Construct_UFunction_ALamentConfiguration_Authority_OnGameEnded, "Authority_OnGameEnded" }, // 3767170955
		{ &Z_Construct_UFunction_ALamentConfiguration_Authority_OnIntroCompletedOrLevelReadyToPlay, "Authority_OnIntroCompletedOrLevelReadyToPlay" }, // 47563088
		{ &Z_Construct_UFunction_ALamentConfiguration_Authority_OnSurvivorHitByControlledProjectile, "Authority_OnSurvivorHitByControlledProjectile" }, // 502997260
		{ &Z_Construct_UFunction_ALamentConfiguration_Authority_RespawnLamentConfiguration, "Authority_RespawnLamentConfiguration" }, // 931185354
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_BeginSolvingCubeSFX, "Cosmetic_BeginSolvingCubeSFX" }, // 145890911
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_EndSolvingCubeSFX, "Cosmetic_EndSolvingCubeSFX" }, // 421127979
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeEnd, "Cosmetic_OnChainHuntChargeEnd" }, // 3355797667
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntChargeStart, "Cosmetic_OnChainHuntChargeStart" }, // 4154250170
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntEndedEffects, "Cosmetic_OnChainHuntEndedEffects" }, // 2429436166
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnChainHuntStartedEffects, "Cosmetic_OnChainHuntStartedEffects" }, // 528004824
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageEnd, "Cosmetic_OnHoldingSurvivorHostageEnd" }, // 2951953168
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnHoldingSurvivorHostageStart, "Cosmetic_OnHoldingSurvivorHostageStart" }, // 2181036470
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration, "Cosmetic_OnKillerDownedSurvivorHoldingLamentConfiguration" }, // 3850435426
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerDisappearsSFX, "Cosmetic_TriggerDisappearsSFX" }, // 4096174799
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX, "Cosmetic_TriggerOnSurvivorEscapedWithLamentConfigurationSFX" }, // 2508680552
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSolvedSFX, "Cosmetic_TriggerSolvedSFX" }, // 1090325785
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSpawnedSFX, "Cosmetic_TriggerSpawnedSFX" }, // 1207720260
		{ &Z_Construct_UFunction_ALamentConfiguration_Cosmetic_TriggerSurvivorPickUpSFX, "Cosmetic_TriggerSurvivorPickUpSFX" }, // 2138152122
		{ &Z_Construct_UFunction_ALamentConfiguration_GetChainHuntProgressPercentage, "GetChainHuntProgressPercentage" }, // 229694893
		{ &Z_Construct_UFunction_ALamentConfiguration_Multicast_CorrectLamentConfigurationPosition, "Multicast_CorrectLamentConfigurationPosition" }, // 3484633244
		{ &Z_Construct_UFunction_ALamentConfiguration_Multicast_DownedSurvivorHoldingLamentConfiguration, "Multicast_DownedSurvivorHoldingLamentConfiguration" }, // 3676874248
		{ &Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerKillerPickUpSFX, "Multicast_TriggerKillerPickUpSFX" }, // 1813853144
		{ &Z_Construct_UFunction_ALamentConfiguration_Multicast_TriggerSolvedSFX, "Multicast_TriggerSolvedSFX" }, // 3741680108
		{ &Z_Construct_UFunction_ALamentConfiguration_OnCamperEscaped, "OnCamperEscaped" }, // 2177084291
		{ &Z_Construct_UFunction_ALamentConfiguration_OnRep_LamentConfigurationState, "OnRep_LamentConfigurationState" }, // 1738302502
		{ &Z_Construct_UFunction_ALamentConfiguration_OnRep_SurvivorHeldHostage, "OnRep_SurvivorHeldHostage" }, // 3347460836
		{ &Z_Construct_UFunction_ALamentConfiguration_TriggerKillerPickUpSFX, "TriggerKillerPickUpSFX" }, // 317300738
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LamentConfiguration.h" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicator = { "_lamentConfigurationTeleportIndicator", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _lamentConfigurationTeleportIndicator), Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__releasedByAttack_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	void Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__releasedByAttack_SetBit(void* Obj)
	{
		((ALamentConfiguration*)Obj)->_releasedByAttack = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__releasedByAttack = { "_releasedByAttack", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALamentConfiguration), &Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__releasedByAttack_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__releasedByAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__releasedByAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solved_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	void Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solved_SetBit(void* Obj)
	{
		((ALamentConfiguration*)Obj)->_solved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solved = { "_solved", nullptr, (EPropertyFlags)0x0040000000000020, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ALamentConfiguration), &Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solved_SetBit, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__failedLamentConfigurationSolveDropDistanceToCollectorCentimeters_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__failedLamentConfigurationSolveDropDistanceToCollectorCentimeters = { "_failedLamentConfigurationSolveDropDistanceToCollectorCentimeters", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _failedLamentConfigurationSolveDropDistanceToCollectorCentimeters), METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__failedLamentConfigurationSolveDropDistanceToCollectorCentimeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__failedLamentConfigurationSolveDropDistanceToCollectorCentimeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solvedLamentConfigurationDropDistanceToCollectorCentimeters_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solvedLamentConfigurationDropDistanceToCollectorCentimeters = { "_solvedLamentConfigurationDropDistanceToCollectorCentimeters", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _solvedLamentConfigurationDropDistanceToCollectorCentimeters), METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solvedLamentConfigurationDropDistanceToCollectorCentimeters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solvedLamentConfigurationDropDistanceToCollectorCentimeters_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorHeldHostage_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorHeldHostage = { "_survivorHeldHostage", "OnRep_SurvivorHeldHostage", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _survivorHeldHostage), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorHeldHostage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorHeldHostage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActor_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActor = { "_chainAnimationActor", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _chainAnimationActor), Z_Construct_UClass_AK25AnimationFollowerActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentconfigurationState_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentconfigurationState = { "_lamentconfigurationState", "OnRep_LamentConfigurationState", (EPropertyFlags)0x0040000100002020, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _lamentconfigurationState), Z_Construct_UEnum_TheK25_ELamentConfigurationState, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentconfigurationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentconfigurationState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentconfigurationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__localLamentConfigurationState_MetaData[] = {
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__localLamentConfigurationState = { "_localLamentConfigurationState", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _localLamentConfigurationState), Z_Construct_UEnum_TheK25_ELamentConfigurationState, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__localLamentConfigurationState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__localLamentConfigurationState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__localLamentConfigurationState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__hostageInteractionTime_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__hostageInteractionTime = { "_hostageInteractionTime", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _hostageInteractionTime), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__hostageInteractionTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__hostageInteractionTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__numberChainsToLaunchUponKillerPickUpLamentConfiguration_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__numberChainsToLaunchUponKillerPickUpLamentConfiguration = { "_numberChainsToLaunchUponKillerPickUpLamentConfiguration", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _numberChainsToLaunchUponKillerPickUpLamentConfiguration), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__numberChainsToLaunchUponKillerPickUpLamentConfiguration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__numberChainsToLaunchUponKillerPickUpLamentConfiguration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeByAttack_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeByAttack = { "_respawnTimeAfterSurvivorFreeByAttack", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _respawnTimeAfterSurvivorFreeByAttack), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeByAttack_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeByAttack_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeBySelf_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeBySelf = { "_respawnTimeAfterSurvivorFreeBySelf", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _respawnTimeAfterSurvivorFreeBySelf), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeBySelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeBySelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterKillerPickUp_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterKillerPickUp = { "_respawnTimeAfterKillerPickUp", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _respawnTimeAfterKillerPickUp), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterKillerPickUp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterKillerPickUp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterLamentConfigurationSolved_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterLamentConfigurationSolved = { "_respawnTimeAfterLamentConfigurationSolved", nullptr, (EPropertyFlags)0x0020080000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _respawnTimeAfterLamentConfigurationSolved), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterLamentConfigurationSolved_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterLamentConfigurationSolved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__possessionSoundLoop_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__possessionSoundLoop = { "_possessionSoundLoop", nullptr, (EPropertyFlags)0x0020088000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _possessionSoundLoop), Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__possessionSoundLoop_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__possessionSoundLoop_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationFollowerAttachmentSocketName_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationFollowerAttachmentSocketName = { "_chainAnimationFollowerAttachmentSocketName", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _chainAnimationFollowerAttachmentSocketName), METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationFollowerAttachmentSocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationFollowerAttachmentSocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicatorClass_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicatorClass = { "_lamentConfigurationTeleportIndicatorClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _lamentConfigurationTeleportIndicatorClass), Z_Construct_UClass_AK25LamentConfigurationTeleportIndicator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicatorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicatorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActorClass_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActorClass = { "_chainAnimationActorClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _chainAnimationActorClass), Z_Construct_UClass_AK25AnimationFollowerActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActorClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montagePlayer_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montagePlayer = { "_montagePlayer", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _montagePlayer), Z_Construct_UClass_UMontagePlayer_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montagePlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montagePlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montageFollower_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montageFollower = { "_montageFollower", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _montageFollower), Z_Construct_UClass_UAnimationMontageSlave_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montageFollower_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montageFollower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerAttachmentSocket_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerAttachmentSocket = { "_killerAttachmentSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _killerAttachmentSocket), Z_Construct_UEnum_DeadByDaylight_EAttachToSocketNameEnum, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerAttachmentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerAttachmentSocket_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerAttachmentSocket_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorAttachmentSocket_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorAttachmentSocket = { "_survivorAttachmentSocket", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _survivorAttachmentSocket), Z_Construct_UEnum_DeadByDaylight_EAttachToSocketNameEnum, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorAttachmentSocket_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorAttachmentSocket_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorAttachmentSocket_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__dotProductMinValue_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__dotProductMinValue = { "_dotProductMinValue", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _dotProductMinValue), METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__dotProductMinValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__dotProductMinValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainHuntComponent_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainHuntComponent = { "_chainHuntComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _chainHuntComponent), Z_Construct_UClass_ULamentConfigurationChainHuntComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainHuntComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainHuntComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__spawnStrategy_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__spawnStrategy = { "_spawnStrategy", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _spawnStrategy), Z_Construct_UClass_ULamentConfigurationSpawnStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__spawnStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__spawnStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineStrategy_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineStrategy = { "_outlineStrategy", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _outlineStrategy), Z_Construct_UClass_ULamentConfigurationOutlineStrategy_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineStrategy_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineStrategy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__materialHelper_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__materialHelper = { "_materialHelper", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _materialHelper), Z_Construct_UClass_UMaterialHelper_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__materialHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__materialHelper_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineComponent_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineComponent = { "_outlineComponent", nullptr, (EPropertyFlags)0x00200800000a0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _outlineComponent), Z_Construct_UClass_UDBDOutlineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerCollectItemInteraction_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerCollectItemInteraction = { "_killerCollectItemInteraction", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _killerCollectItemInteraction), Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerCollectItemInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerCollectItemInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorCollectItemInteraction_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorCollectItemInteraction = { "_survivorCollectItemInteraction", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _survivorCollectItemInteraction), Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorCollectItemInteraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorCollectItemInteraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__collectableInteractor_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__collectableInteractor = { "_collectableInteractor", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _collectableInteractor), Z_Construct_UClass_UInteractor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__collectableInteractor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__collectableInteractor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__interactable_MetaData[] = {
		{ "Category", "LamentConfiguration" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LamentConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__interactable = { "_interactable", nullptr, (EPropertyFlags)0x00200800000b001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ALamentConfiguration, _interactable), Z_Construct_UClass_USpherePlayerOverlapComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__interactable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__interactable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ALamentConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__releasedByAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__failedLamentConfigurationSolveDropDistanceToCollectorCentimeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__solvedLamentConfigurationDropDistanceToCollectorCentimeters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorHeldHostage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentconfigurationState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentconfigurationState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__localLamentConfigurationState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__localLamentConfigurationState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__hostageInteractionTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__numberChainsToLaunchUponKillerPickUpLamentConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeByAttack,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterSurvivorFreeBySelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterKillerPickUp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__respawnTimeAfterLamentConfigurationSolved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__possessionSoundLoop,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationFollowerAttachmentSocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__lamentConfigurationTeleportIndicatorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainAnimationActorClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montagePlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__montageFollower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerAttachmentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerAttachmentSocket_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorAttachmentSocket,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorAttachmentSocket_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__dotProductMinValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__chainHuntComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__spawnStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineStrategy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__materialHelper,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__outlineComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__killerCollectItemInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__survivorCollectItemInteraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__collectableInteractor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ALamentConfiguration_Statics::NewProp__interactable,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_ALamentConfiguration_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UObjectStateProvider_NoRegister, (int32)VTABLE_OFFSET(ALamentConfiguration, IObjectStateProvider), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ALamentConfiguration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ALamentConfiguration>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ALamentConfiguration_Statics::ClassParams = {
		&ALamentConfiguration::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ALamentConfiguration_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ALamentConfiguration_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ALamentConfiguration_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ALamentConfiguration()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ALamentConfiguration_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ALamentConfiguration, 974934750);
	template<> THEK25_API UClass* StaticClass<ALamentConfiguration>()
	{
		return ALamentConfiguration::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ALamentConfiguration(Z_Construct_UClass_ALamentConfiguration, &ALamentConfiguration::StaticClass, TEXT("/Script/TheK25"), TEXT("ALamentConfiguration"), false, nullptr, nullptr, nullptr);

	void ALamentConfiguration::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
	{
		static const FName Name__lamentconfigurationState(TEXT("_lamentconfigurationState"));
		static const FName Name__survivorHeldHostage(TEXT("_survivorHeldHostage"));
		static const FName Name__solved(TEXT("_solved"));
		static const FName Name__releasedByAttack(TEXT("_releasedByAttack"));

		const bool bIsValid = true
			&& Name__lamentconfigurationState == ClassReps[(int32)ENetFields_Private::_lamentconfigurationState].Property->GetFName()
			&& Name__survivorHeldHostage == ClassReps[(int32)ENetFields_Private::_survivorHeldHostage].Property->GetFName()
			&& Name__solved == ClassReps[(int32)ENetFields_Private::_solved].Property->GetFName()
			&& Name__releasedByAttack == ClassReps[(int32)ENetFields_Private::_releasedByAttack].Property->GetFName();

		checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in ALamentConfiguration"));
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ALamentConfiguration);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
