// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/ActivePhaseWalkInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActivePhaseWalkInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UActivePhaseWalkInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UActivePhaseWalkInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UActivePhaseWalkInteraction::execGetChargeTime)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetChargeTime();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivePhaseWalkInteraction::execOnPlayerLocallyObservedChanged)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_player);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerLocallyObservedChanged(Z_Param_player);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UActivePhaseWalkInteraction::execOnPowerCollected)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_collector);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPowerCollected(Z_Param_collector);
		P_NATIVE_END;
	}
	static FName NAME_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX = FName(TEXT("Cosmetic_ResetChargeVFX"));
	void UActivePhaseWalkInteraction::Cosmetic_ResetChargeVFX(ADBDPlayer* player)
	{
		ActivePhaseWalkInteraction_eventCosmetic_ResetChargeVFX_Parms Parms;
		Parms.player=player;
		ProcessEvent(FindFunctionChecked(NAME_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX),&Parms);
	}
	void UActivePhaseWalkInteraction::StaticRegisterNativesUActivePhaseWalkInteraction()
	{
		UClass* Class = UActivePhaseWalkInteraction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetChargeTime", &UActivePhaseWalkInteraction::execGetChargeTime },
			{ "OnPlayerLocallyObservedChanged", &UActivePhaseWalkInteraction::execOnPlayerLocallyObservedChanged },
			{ "OnPowerCollected", &UActivePhaseWalkInteraction::execOnPowerCollected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivePhaseWalkInteraction_eventCosmetic_ResetChargeVFX_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivePhaseWalkInteraction, nullptr, "Cosmetic_ResetChargeVFX", nullptr, nullptr, sizeof(ActivePhaseWalkInteraction_eventCosmetic_ResetChargeVFX_Parms), Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics
	{
		struct ActivePhaseWalkInteraction_eventGetChargeTime_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivePhaseWalkInteraction_eventGetChargeTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivePhaseWalkInteraction, nullptr, "GetChargeTime", nullptr, nullptr, sizeof(ActivePhaseWalkInteraction_eventGetChargeTime_Parms), Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics
	{
		struct ActivePhaseWalkInteraction_eventOnPlayerLocallyObservedChanged_Parms
		{
			ADBDPlayer* player;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::NewProp_player = { "player", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivePhaseWalkInteraction_eventOnPlayerLocallyObservedChanged_Parms, player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::NewProp_player,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivePhaseWalkInteraction, nullptr, "OnPlayerLocallyObservedChanged", nullptr, nullptr, sizeof(ActivePhaseWalkInteraction_eventOnPlayerLocallyObservedChanged_Parms), Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics
	{
		struct ActivePhaseWalkInteraction_eventOnPowerCollected_Parms
		{
			ADBDPlayer* collector;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_collector;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::NewProp_collector = { "collector", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ActivePhaseWalkInteraction_eventOnPowerCollected_Parms, collector), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::NewProp_collector,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UActivePhaseWalkInteraction, nullptr, "OnPowerCollected", nullptr, nullptr, sizeof(ActivePhaseWalkInteraction_eventOnPowerCollected_Parms), Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UActivePhaseWalkInteraction_NoRegister()
	{
		return UActivePhaseWalkInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UActivePhaseWalkInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activePhaseWalkChargingMontage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__activePhaseWalkChargingMontage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activePhaseWalkChargeDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__activePhaseWalkChargeDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__phaseWalkPenaltyValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__phaseWalkPenaltyValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__phaseWalkPenaltyThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__phaseWalkPenaltyThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargingSpeedCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__chargingSpeedCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__fullyChargedSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__fullyChargedSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UActivePhaseWalkInteraction_Cosmetic_ResetChargeVFX, "Cosmetic_ResetChargeVFX" }, // 3736179877
		{ &Z_Construct_UFunction_UActivePhaseWalkInteraction_GetChargeTime, "GetChargeTime" }, // 1079968600
		{ &Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPlayerLocallyObservedChanged, "OnPlayerLocallyObservedChanged" }, // 3123345211
		{ &Z_Construct_UFunction_UActivePhaseWalkInteraction_OnPowerCollected, "OnPowerCollected" }, // 635514557
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "ActivePhaseWalkInteraction.h" },
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargingMontage_MetaData[] = {
		{ "Category", "ActivePhaseWalkInteraction" },
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargingMontage = { "_activePhaseWalkChargingMontage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivePhaseWalkInteraction, _activePhaseWalkChargingMontage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargingMontage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargingMontage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargeDuration_MetaData[] = {
		{ "Category", "ActivePhaseWalkInteraction" },
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargeDuration = { "_activePhaseWalkChargeDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivePhaseWalkInteraction, _activePhaseWalkChargeDuration), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargeDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargeDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyValue_MetaData[] = {
		{ "Category", "ActivePhaseWalkInteraction" },
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyValue = { "_phaseWalkPenaltyValue", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivePhaseWalkInteraction, _phaseWalkPenaltyValue), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyThreshold_MetaData[] = {
		{ "Category", "ActivePhaseWalkInteraction" },
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyThreshold = { "_phaseWalkPenaltyThreshold", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivePhaseWalkInteraction, _phaseWalkPenaltyThreshold), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__chargingSpeedCurve_MetaData[] = {
		{ "Category", "ActivePhaseWalkInteraction" },
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__chargingSpeedCurve = { "_chargingSpeedCurve", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivePhaseWalkInteraction, _chargingSpeedCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__chargingSpeedCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__chargingSpeedCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__fullyChargedSpeed_MetaData[] = {
		{ "Category", "ActivePhaseWalkInteraction" },
		{ "ModuleRelativePath", "Public/ActivePhaseWalkInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__fullyChargedSpeed = { "_fullyChargedSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UActivePhaseWalkInteraction, _fullyChargedSpeed), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__fullyChargedSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__fullyChargedSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargingMontage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__activePhaseWalkChargeDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__phaseWalkPenaltyThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__chargingSpeedCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::NewProp__fullyChargedSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UActivePhaseWalkInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::ClassParams = {
		&UActivePhaseWalkInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UActivePhaseWalkInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UActivePhaseWalkInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UActivePhaseWalkInteraction, 1382572229);
	template<> DBDINTERACTION_API UClass* StaticClass<UActivePhaseWalkInteraction>()
	{
		return UActivePhaseWalkInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UActivePhaseWalkInteraction(Z_Construct_UClass_UActivePhaseWalkInteraction, &UActivePhaseWalkInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UActivePhaseWalkInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UActivePhaseWalkInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
