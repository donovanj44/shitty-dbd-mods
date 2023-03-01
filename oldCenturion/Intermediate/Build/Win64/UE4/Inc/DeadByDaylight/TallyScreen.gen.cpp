// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TallyScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTallyScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTallyScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UTallyScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UTallyScreen::execOnBloodwebButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBloodwebButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnCustomerSupportButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomerSupportButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnLeaveButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLeaveButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnLevelingSequenceComplete)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelingSequenceComplete();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnPlayerInfoClick)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerInfoClick(Z_Param_playerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnPlayerOptionClick)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_krakenId);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_GET_PROPERTY(FByteProperty,Z_Param_option);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerOptionClick(Z_Param_krakenId,Z_Param_playerId,Z_Param_option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnRateMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_rateValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRateMatch(Z_Param_rateValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnReportPlayerButtonClick)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReportPlayerButtonClick(Z_Param_playerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnShowSlasherInfos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnShowSlasherInfos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UTallyScreen::execOnSpectateButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSpectateButtonClick();
		P_NATIVE_END;
	}
	void UTallyScreen::StaticRegisterNativesUTallyScreen()
	{
		UClass* Class = UTallyScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBloodwebButtonClick", &UTallyScreen::execOnBloodwebButtonClick },
			{ "OnCustomerSupportButtonClick", &UTallyScreen::execOnCustomerSupportButtonClick },
			{ "OnLeaveButtonClick", &UTallyScreen::execOnLeaveButtonClick },
			{ "OnLevelingSequenceComplete", &UTallyScreen::execOnLevelingSequenceComplete },
			{ "OnPlayerInfoClick", &UTallyScreen::execOnPlayerInfoClick },
			{ "OnPlayerOptionClick", &UTallyScreen::execOnPlayerOptionClick },
			{ "OnRateMatch", &UTallyScreen::execOnRateMatch },
			{ "OnReportPlayerButtonClick", &UTallyScreen::execOnReportPlayerButtonClick },
			{ "OnShowSlasherInfos", &UTallyScreen::execOnShowSlasherInfos },
			{ "OnSpectateButtonClick", &UTallyScreen::execOnSpectateButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UTallyScreen_OnBloodwebButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnBloodwebButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnBloodwebButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnBloodwebButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnBloodwebButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnBloodwebButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnBloodwebButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnBloodwebButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnCustomerSupportButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnCustomerSupportButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnCustomerSupportButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnCustomerSupportButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnCustomerSupportButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnCustomerSupportButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnCustomerSupportButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnCustomerSupportButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnLeaveButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnLeaveButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnLeaveButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnLeaveButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnLeaveButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnLeaveButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnLeaveButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnLeaveButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnLevelingSequenceComplete_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnLevelingSequenceComplete_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnLevelingSequenceComplete_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnLevelingSequenceComplete", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnLevelingSequenceComplete_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnLevelingSequenceComplete_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnLevelingSequenceComplete()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnLevelingSequenceComplete_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics
	{
		struct TallyScreen_eventOnPlayerInfoClick_Parms
		{
			FString playerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TallyScreen_eventOnPlayerInfoClick_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::NewProp_playerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnPlayerInfoClick", nullptr, nullptr, sizeof(TallyScreen_eventOnPlayerInfoClick_Parms), Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics
	{
		struct TallyScreen_eventOnPlayerOptionClick_Parms
		{
			FString krakenId;
			FString playerId;
			uint8 option;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_krakenId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_krakenId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_option = { "option", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TallyScreen_eventOnPlayerOptionClick_Parms, option), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TallyScreen_eventOnPlayerOptionClick_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_krakenId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_krakenId = { "krakenId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TallyScreen_eventOnPlayerOptionClick_Parms, krakenId), METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_krakenId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_krakenId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::NewProp_krakenId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnPlayerOptionClick", nullptr, nullptr, sizeof(TallyScreen_eventOnPlayerOptionClick_Parms), Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics
	{
		struct TallyScreen_eventOnRateMatch_Parms
		{
			int32 rateValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_rateValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::NewProp_rateValue = { "rateValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TallyScreen_eventOnRateMatch_Parms, rateValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::NewProp_rateValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnRateMatch", nullptr, nullptr, sizeof(TallyScreen_eventOnRateMatch_Parms), Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnRateMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnRateMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics
	{
		struct TallyScreen_eventOnReportPlayerButtonClick_Parms
		{
			FString playerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(TallyScreen_eventOnReportPlayerButtonClick_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::NewProp_playerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnReportPlayerButtonClick", nullptr, nullptr, sizeof(TallyScreen_eventOnReportPlayerButtonClick_Parms), Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnShowSlasherInfos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnShowSlasherInfos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnShowSlasherInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnShowSlasherInfos", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnShowSlasherInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnShowSlasherInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnShowSlasherInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnShowSlasherInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UTallyScreen_OnSpectateButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UTallyScreen_OnSpectateButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UTallyScreen_OnSpectateButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UTallyScreen, nullptr, "OnSpectateButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UTallyScreen_OnSpectateButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UTallyScreen_OnSpectateButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UTallyScreen_OnSpectateButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UTallyScreen_OnSpectateButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UTallyScreen_NoRegister()
	{
		return UTallyScreen::StaticClass();
	}
	struct Z_Construct_UClass_UTallyScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTallyScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UTallyScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UTallyScreen_OnBloodwebButtonClick, "OnBloodwebButtonClick" }, // 433115942
		{ &Z_Construct_UFunction_UTallyScreen_OnCustomerSupportButtonClick, "OnCustomerSupportButtonClick" }, // 1506064693
		{ &Z_Construct_UFunction_UTallyScreen_OnLeaveButtonClick, "OnLeaveButtonClick" }, // 1579763943
		{ &Z_Construct_UFunction_UTallyScreen_OnLevelingSequenceComplete, "OnLevelingSequenceComplete" }, // 810758858
		{ &Z_Construct_UFunction_UTallyScreen_OnPlayerInfoClick, "OnPlayerInfoClick" }, // 3821921878
		{ &Z_Construct_UFunction_UTallyScreen_OnPlayerOptionClick, "OnPlayerOptionClick" }, // 1586033267
		{ &Z_Construct_UFunction_UTallyScreen_OnRateMatch, "OnRateMatch" }, // 4274403589
		{ &Z_Construct_UFunction_UTallyScreen_OnReportPlayerButtonClick, "OnReportPlayerButtonClick" }, // 733947791
		{ &Z_Construct_UFunction_UTallyScreen_OnShowSlasherInfos, "OnShowSlasherInfos" }, // 2788615042
		{ &Z_Construct_UFunction_UTallyScreen_OnSpectateButtonClick, "OnSpectateButtonClick" }, // 461365457
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTallyScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TallyScreen.h" },
		{ "ModuleRelativePath", "Public/TallyScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTallyScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTallyScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTallyScreen_Statics::ClassParams = {
		&UTallyScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTallyScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTallyScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTallyScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTallyScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTallyScreen, 1139126310);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UTallyScreen>()
	{
		return UTallyScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTallyScreen(Z_Construct_UClass_UTallyScreen, &UTallyScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UTallyScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTallyScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
