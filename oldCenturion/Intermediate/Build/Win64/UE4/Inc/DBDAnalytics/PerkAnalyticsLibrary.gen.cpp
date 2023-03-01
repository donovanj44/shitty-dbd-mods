// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/PerkAnalyticsLibrary.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkAnalyticsLibrary() {}
// Cross Module References
	DBDANALYTICS_API UClass* Z_Construct_UClass_UPerkAnalyticsLibrary_NoRegister();
	DBDANALYTICS_API UClass* Z_Construct_UClass_UPerkAnalyticsLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPerkAnalyticsLibrary::execSendFranklinsConsumeItemAnalytics)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_previousOwner);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPerkAnalyticsLibrary::SendFranklinsConsumeItemAnalytics(Z_Param_previousOwner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkAnalyticsLibrary::execSendFranklinsHitSurvivorNearDroppedItemAnalytics)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_hitSurvivor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPerkAnalyticsLibrary::SendFranklinsHitSurvivorNearDroppedItemAnalytics(Z_Param_hitSurvivor,Z_Param_slasher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkAnalyticsLibrary::execSendKnockoutSurvivorFoundAnalytics)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_findingSurvivor);
		P_GET_OBJECT(ADBDPlayer,Z_Param_foundSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPerkAnalyticsLibrary::SendKnockoutSurvivorFoundAnalytics(Z_Param_findingSurvivor,Z_Param_foundSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkAnalyticsLibrary::execSendLightbornAuraRevealedAnalytics)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_revealedPlayer);
		P_GET_OBJECT(ADBDPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPerkAnalyticsLibrary::SendLightbornAuraRevealedAnalytics(Z_Param_revealedPlayer,Z_Param_slasher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkAnalyticsLibrary::execSendTinkererUndetectableHitNearGeneratorAnalytics)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_hitPlayer);
		P_GET_OBJECT(ADBDPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPerkAnalyticsLibrary::SendTinkererUndetectableHitNearGeneratorAnalytics(Z_Param_hitPlayer,Z_Param_slasher);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPerkAnalyticsLibrary::execSendTinkererUndetectableInterruptAnalytics)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_interruptedPlayer);
		P_GET_OBJECT(ADBDPlayer,Z_Param_slasher);
		P_FINISH;
		P_NATIVE_BEGIN;
		UPerkAnalyticsLibrary::SendTinkererUndetectableInterruptAnalytics(Z_Param_interruptedPlayer,Z_Param_slasher);
		P_NATIVE_END;
	}
	void UPerkAnalyticsLibrary::StaticRegisterNativesUPerkAnalyticsLibrary()
	{
		UClass* Class = UPerkAnalyticsLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SendFranklinsConsumeItemAnalytics", &UPerkAnalyticsLibrary::execSendFranklinsConsumeItemAnalytics },
			{ "SendFranklinsHitSurvivorNearDroppedItemAnalytics", &UPerkAnalyticsLibrary::execSendFranklinsHitSurvivorNearDroppedItemAnalytics },
			{ "SendKnockoutSurvivorFoundAnalytics", &UPerkAnalyticsLibrary::execSendKnockoutSurvivorFoundAnalytics },
			{ "SendLightbornAuraRevealedAnalytics", &UPerkAnalyticsLibrary::execSendLightbornAuraRevealedAnalytics },
			{ "SendTinkererUndetectableHitNearGeneratorAnalytics", &UPerkAnalyticsLibrary::execSendTinkererUndetectableHitNearGeneratorAnalytics },
			{ "SendTinkererUndetectableInterruptAnalytics", &UPerkAnalyticsLibrary::execSendTinkererUndetectableInterruptAnalytics },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics
	{
		struct PerkAnalyticsLibrary_eventSendFranklinsConsumeItemAnalytics_Parms
		{
			ADBDPlayer* previousOwner;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_previousOwner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::NewProp_previousOwner = { "previousOwner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendFranklinsConsumeItemAnalytics_Parms, previousOwner), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::NewProp_previousOwner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkAnalyticsLibrary, nullptr, "SendFranklinsConsumeItemAnalytics", nullptr, nullptr, sizeof(PerkAnalyticsLibrary_eventSendFranklinsConsumeItemAnalytics_Parms), Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics
	{
		struct PerkAnalyticsLibrary_eventSendFranklinsHitSurvivorNearDroppedItemAnalytics_Parms
		{
			ADBDPlayer* hitSurvivor;
			ADBDPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendFranklinsHitSurvivorNearDroppedItemAnalytics_Parms, slasher), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::NewProp_hitSurvivor = { "hitSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendFranklinsHitSurvivorNearDroppedItemAnalytics_Parms, hitSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::NewProp_slasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::NewProp_hitSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkAnalyticsLibrary, nullptr, "SendFranklinsHitSurvivorNearDroppedItemAnalytics", nullptr, nullptr, sizeof(PerkAnalyticsLibrary_eventSendFranklinsHitSurvivorNearDroppedItemAnalytics_Parms), Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics
	{
		struct PerkAnalyticsLibrary_eventSendKnockoutSurvivorFoundAnalytics_Parms
		{
			ADBDPlayer* findingSurvivor;
			ADBDPlayer* foundSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foundSurvivor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_findingSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::NewProp_foundSurvivor = { "foundSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendKnockoutSurvivorFoundAnalytics_Parms, foundSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::NewProp_findingSurvivor = { "findingSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendKnockoutSurvivorFoundAnalytics_Parms, findingSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::NewProp_foundSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::NewProp_findingSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkAnalyticsLibrary, nullptr, "SendKnockoutSurvivorFoundAnalytics", nullptr, nullptr, sizeof(PerkAnalyticsLibrary_eventSendKnockoutSurvivorFoundAnalytics_Parms), Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics
	{
		struct PerkAnalyticsLibrary_eventSendLightbornAuraRevealedAnalytics_Parms
		{
			ADBDPlayer* revealedPlayer;
			ADBDPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_revealedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendLightbornAuraRevealedAnalytics_Parms, slasher), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::NewProp_revealedPlayer = { "revealedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendLightbornAuraRevealedAnalytics_Parms, revealedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::NewProp_slasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::NewProp_revealedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkAnalyticsLibrary, nullptr, "SendLightbornAuraRevealedAnalytics", nullptr, nullptr, sizeof(PerkAnalyticsLibrary_eventSendLightbornAuraRevealedAnalytics_Parms), Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics
	{
		struct PerkAnalyticsLibrary_eventSendTinkererUndetectableHitNearGeneratorAnalytics_Parms
		{
			ADBDPlayer* hitPlayer;
			ADBDPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_hitPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendTinkererUndetectableHitNearGeneratorAnalytics_Parms, slasher), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_hitPlayer = { "hitPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendTinkererUndetectableHitNearGeneratorAnalytics_Parms, hitPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_slasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::NewProp_hitPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkAnalyticsLibrary, nullptr, "SendTinkererUndetectableHitNearGeneratorAnalytics", nullptr, nullptr, sizeof(PerkAnalyticsLibrary_eventSendTinkererUndetectableHitNearGeneratorAnalytics_Parms), Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics
	{
		struct PerkAnalyticsLibrary_eventSendTinkererUndetectableInterruptAnalytics_Parms
		{
			ADBDPlayer* interruptedPlayer;
			ADBDPlayer* slasher;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_slasher;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_interruptedPlayer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::NewProp_slasher = { "slasher", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendTinkererUndetectableInterruptAnalytics_Parms, slasher), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::NewProp_interruptedPlayer = { "interruptedPlayer", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PerkAnalyticsLibrary_eventSendTinkererUndetectableInterruptAnalytics_Parms, interruptedPlayer), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::NewProp_slasher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::NewProp_interruptedPlayer,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkAnalyticsLibrary.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkAnalyticsLibrary, nullptr, "SendTinkererUndetectableInterruptAnalytics", nullptr, nullptr, sizeof(PerkAnalyticsLibrary_eventSendTinkererUndetectableInterruptAnalytics_Parms), Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkAnalyticsLibrary_NoRegister()
	{
		return UPerkAnalyticsLibrary::StaticClass();
	}
	struct Z_Construct_UClass_UPerkAnalyticsLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkAnalyticsLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkAnalyticsLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsConsumeItemAnalytics, "SendFranklinsConsumeItemAnalytics" }, // 2177194883
		{ &Z_Construct_UFunction_UPerkAnalyticsLibrary_SendFranklinsHitSurvivorNearDroppedItemAnalytics, "SendFranklinsHitSurvivorNearDroppedItemAnalytics" }, // 1304873459
		{ &Z_Construct_UFunction_UPerkAnalyticsLibrary_SendKnockoutSurvivorFoundAnalytics, "SendKnockoutSurvivorFoundAnalytics" }, // 1133053425
		{ &Z_Construct_UFunction_UPerkAnalyticsLibrary_SendLightbornAuraRevealedAnalytics, "SendLightbornAuraRevealedAnalytics" }, // 2967200824
		{ &Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableHitNearGeneratorAnalytics, "SendTinkererUndetectableHitNearGeneratorAnalytics" }, // 647686087
		{ &Z_Construct_UFunction_UPerkAnalyticsLibrary_SendTinkererUndetectableInterruptAnalytics, "SendTinkererUndetectableInterruptAnalytics" }, // 1659392674
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkAnalyticsLibrary_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "PerkAnalyticsLibrary.h" },
		{ "ModuleRelativePath", "Public/PerkAnalyticsLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkAnalyticsLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkAnalyticsLibrary>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkAnalyticsLibrary_Statics::ClassParams = {
		&UPerkAnalyticsLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkAnalyticsLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkAnalyticsLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkAnalyticsLibrary()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkAnalyticsLibrary_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkAnalyticsLibrary, 3591584529);
	template<> DBDANALYTICS_API UClass* StaticClass<UPerkAnalyticsLibrary>()
	{
		return UPerkAnalyticsLibrary::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkAnalyticsLibrary(Z_Construct_UClass_UPerkAnalyticsLibrary, &UPerkAnalyticsLibrary::StaticClass, TEXT("/Script/DBDAnalytics"), TEXT("UPerkAnalyticsLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkAnalyticsLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
