// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/HideNearKillerQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHideNearKillerQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UHideNearKillerQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UHideNearKillerQEEvaluator();
	ARCHIVES_API UClass* Z_Construct_UClass_UNearKillerQEEvaluator();
	UPackage* Z_Construct_UPackage__Script_Archives();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameEventData();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UHideNearKillerQEEvaluator::execOnCamperBreakFreeFromHarpoon)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCamperBreakFreeFromHarpoon(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHideNearKillerQEEvaluator::execOnChaseEnd)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_chasedSurvivor);
		P_GET_PROPERTY(FFloatProperty,Z_Param_chaseTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChaseEnd(Z_Param_chasedSurvivor,Z_Param_chaseTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHideNearKillerQEEvaluator::execOnChaseStart)
	{
		P_GET_OBJECT(ADBDPlayer,Z_Param_chasedSurvivor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChaseStart(Z_Param_chasedSurvivor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHideNearKillerQEEvaluator::execOnFinishedPlaying)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedPlaying(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHideNearKillerQEEvaluator::execOnHarpoonHit)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnHarpoonHit(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UHideNearKillerQEEvaluator::execOnSlashHarpoonedCamper)
	{
		P_GET_STRUCT(FGameplayTag,Z_Param_gameEventType);
		P_GET_STRUCT_REF(FGameEventData,Z_Param_Out_gameEventData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlashHarpoonedCamper(Z_Param_gameEventType,Z_Param_Out_gameEventData);
		P_NATIVE_END;
	}
	void UHideNearKillerQEEvaluator::StaticRegisterNativesUHideNearKillerQEEvaluator()
	{
		UClass* Class = UHideNearKillerQEEvaluator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCamperBreakFreeFromHarpoon", &UHideNearKillerQEEvaluator::execOnCamperBreakFreeFromHarpoon },
			{ "OnChaseEnd", &UHideNearKillerQEEvaluator::execOnChaseEnd },
			{ "OnChaseStart", &UHideNearKillerQEEvaluator::execOnChaseStart },
			{ "OnFinishedPlaying", &UHideNearKillerQEEvaluator::execOnFinishedPlaying },
			{ "OnHarpoonHit", &UHideNearKillerQEEvaluator::execOnHarpoonHit },
			{ "OnSlashHarpoonedCamper", &UHideNearKillerQEEvaluator::execOnSlashHarpoonedCamper },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics
	{
		struct HideNearKillerQEEvaluator_eventOnCamperBreakFreeFromHarpoon_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnCamperBreakFreeFromHarpoon_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnCamperBreakFreeFromHarpoon_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideNearKillerQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideNearKillerQEEvaluator, nullptr, "OnCamperBreakFreeFromHarpoon", nullptr, nullptr, sizeof(HideNearKillerQEEvaluator_eventOnCamperBreakFreeFromHarpoon_Parms), Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics
	{
		struct HideNearKillerQEEvaluator_eventOnChaseEnd_Parms
		{
			ADBDPlayer* chasedSurvivor;
			float chaseTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_chaseTime;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chasedSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::NewProp_chaseTime = { "chaseTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnChaseEnd_Parms, chaseTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::NewProp_chasedSurvivor = { "chasedSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnChaseEnd_Parms, chasedSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::NewProp_chaseTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::NewProp_chasedSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideNearKillerQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideNearKillerQEEvaluator, nullptr, "OnChaseEnd", nullptr, nullptr, sizeof(HideNearKillerQEEvaluator_eventOnChaseEnd_Parms), Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics
	{
		struct HideNearKillerQEEvaluator_eventOnChaseStart_Parms
		{
			ADBDPlayer* chasedSurvivor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_chasedSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::NewProp_chasedSurvivor = { "chasedSurvivor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnChaseStart_Parms, chasedSurvivor), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::NewProp_chasedSurvivor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideNearKillerQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideNearKillerQEEvaluator, nullptr, "OnChaseStart", nullptr, nullptr, sizeof(HideNearKillerQEEvaluator_eventOnChaseStart_Parms), Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics
	{
		struct HideNearKillerQEEvaluator_eventOnFinishedPlaying_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnFinishedPlaying_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnFinishedPlaying_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideNearKillerQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideNearKillerQEEvaluator, nullptr, "OnFinishedPlaying", nullptr, nullptr, sizeof(HideNearKillerQEEvaluator_eventOnFinishedPlaying_Parms), Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics
	{
		struct HideNearKillerQEEvaluator_eventOnHarpoonHit_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnHarpoonHit_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnHarpoonHit_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideNearKillerQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideNearKillerQEEvaluator, nullptr, "OnHarpoonHit", nullptr, nullptr, sizeof(HideNearKillerQEEvaluator_eventOnHarpoonHit_Parms), Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics
	{
		struct HideNearKillerQEEvaluator_eventOnSlashHarpoonedCamper_Parms
		{
			FGameplayTag gameEventType;
			FGameEventData gameEventData;
		};
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventData = { "gameEventData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnSlashHarpoonedCamper_Parms, gameEventData), Z_Construct_UScriptStruct_FGameEventData, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventType = { "gameEventType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HideNearKillerQEEvaluator_eventOnSlashHarpoonedCamper_Parms, gameEventType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::NewProp_gameEventType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HideNearKillerQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UHideNearKillerQEEvaluator, nullptr, "OnSlashHarpoonedCamper", nullptr, nullptr, sizeof(HideNearKillerQEEvaluator_eventOnSlashHarpoonedCamper_Parms), Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UHideNearKillerQEEvaluator_NoRegister()
	{
		return UHideNearKillerQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UNearKillerQEEvaluator,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnCamperBreakFreeFromHarpoon, "OnCamperBreakFreeFromHarpoon" }, // 2565877854
		{ &Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseEnd, "OnChaseEnd" }, // 4154818400
		{ &Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnChaseStart, "OnChaseStart" }, // 3995046207
		{ &Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnFinishedPlaying, "OnFinishedPlaying" }, // 685464843
		{ &Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnHarpoonHit, "OnHarpoonHit" }, // 2848933853
		{ &Z_Construct_UFunction_UHideNearKillerQEEvaluator_OnSlashHarpoonedCamper, "OnSlashHarpoonedCamper" }, // 3574820811
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HideNearKillerQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/HideNearKillerQEEvaluator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHideNearKillerQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics::ClassParams = {
		&UHideNearKillerQEEvaluator::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHideNearKillerQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHideNearKillerQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHideNearKillerQEEvaluator, 1758468627);
	template<> ARCHIVES_API UClass* StaticClass<UHideNearKillerQEEvaluator>()
	{
		return UHideNearKillerQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHideNearKillerQEEvaluator(Z_Construct_UClass_UHideNearKillerQEEvaluator, &UHideNearKillerQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UHideNearKillerQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHideNearKillerQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
