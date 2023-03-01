// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLobbySearchingWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLobbySearchingWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbySearchingWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLobbySearchingWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLoadoutBaseWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTooltipPressedData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartySlotsWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGLobbySearchingWidget::execHandleLeaveButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLeaveButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLobbySearchingWidget::execOnCurrencyTooltipTriggered)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrencyTooltipTriggered(Z_Param_Out_tooltipPressedData,ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLobbySearchingWidget::execOnLevelTooltipTriggered)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelTooltipTriggered(Z_Param_Out_tooltipPressedData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLobbySearchingWidget::execOnRankTooltipTriggered)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRankTooltipTriggered(Z_Param_Out_tooltipPressedData);
		P_NATIVE_END;
	}
	static FName NAME_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer = FName(TEXT("SetEstimatedWaitingTimer"));
	void UUMGLobbySearchingWidget::SetEstimatedWaitingTimer(int32 seconds)
	{
		UMGLobbySearchingWidget_eventSetEstimatedWaitingTimer_Parms Parms;
		Parms.seconds=seconds;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer),&Parms);
	}
	static FName NAME_UUMGLobbySearchingWidget_SetWaitingTimer = FName(TEXT("SetWaitingTimer"));
	void UUMGLobbySearchingWidget::SetWaitingTimer(int32 seconds)
	{
		UMGLobbySearchingWidget_eventSetWaitingTimer_Parms Parms;
		Parms.seconds=seconds;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLobbySearchingWidget_SetWaitingTimer),&Parms);
	}
	void UUMGLobbySearchingWidget::StaticRegisterNativesUUMGLobbySearchingWidget()
	{
		UClass* Class = UUMGLobbySearchingWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleLeaveButtonClicked", &UUMGLobbySearchingWidget::execHandleLeaveButtonClicked },
			{ "OnCurrencyTooltipTriggered", &UUMGLobbySearchingWidget::execOnCurrencyTooltipTriggered },
			{ "OnLevelTooltipTriggered", &UUMGLobbySearchingWidget::execOnLevelTooltipTriggered },
			{ "OnRankTooltipTriggered", &UUMGLobbySearchingWidget::execOnRankTooltipTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLobbySearchingWidget_HandleLeaveButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_HandleLeaveButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbySearchingWidget_HandleLeaveButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbySearchingWidget, nullptr, "HandleLeaveButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_HandleLeaveButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_HandleLeaveButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbySearchingWidget_HandleLeaveButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbySearchingWidget_HandleLeaveButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics
	{
		struct UMGLobbySearchingWidget_eventOnCurrencyTooltipTriggered_Parms
		{
			FTooltipPressedData tooltipPressedData;
			ECurrencyType currencyType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_currencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_currencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipPressedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipPressedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbySearchingWidget_eventOnCurrencyTooltipTriggered_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbySearchingWidget_eventOnCurrencyTooltipTriggered_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbySearchingWidget, nullptr, "OnCurrencyTooltipTriggered", nullptr, nullptr, sizeof(UMGLobbySearchingWidget_eventOnCurrencyTooltipTriggered_Parms), Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics
	{
		struct UMGLobbySearchingWidget_eventOnLevelTooltipTriggered_Parms
		{
			FTooltipPressedData tooltipPressedData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipPressedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipPressedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbySearchingWidget_eventOnLevelTooltipTriggered_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbySearchingWidget, nullptr, "OnLevelTooltipTriggered", nullptr, nullptr, sizeof(UMGLobbySearchingWidget_eventOnLevelTooltipTriggered_Parms), Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics
	{
		struct UMGLobbySearchingWidget_eventOnRankTooltipTriggered_Parms
		{
			FTooltipPressedData tooltipPressedData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_tooltipPressedData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_tooltipPressedData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbySearchingWidget_eventOnRankTooltipTriggered_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbySearchingWidget, nullptr, "OnRankTooltipTriggered", nullptr, nullptr, sizeof(UMGLobbySearchingWidget_eventOnRankTooltipTriggered_Parms), Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbySearchingWidget_eventSetEstimatedWaitingTimer_Parms, seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::NewProp_seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbySearchingWidget, nullptr, "SetEstimatedWaitingTimer", nullptr, nullptr, sizeof(UMGLobbySearchingWidget_eventSetEstimatedWaitingTimer_Parms), Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_seconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::NewProp_seconds = { "seconds", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLobbySearchingWidget_eventSetWaitingTimer_Parms, seconds), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::NewProp_seconds,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLobbySearchingWidget, nullptr, "SetWaitingTimer", nullptr, nullptr, sizeof(UMGLobbySearchingWidget_eventSetWaitingTimer_Parms), Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLobbySearchingWidget_NoRegister()
	{
		return UUMGLobbySearchingWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLobbySearchingWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartySlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartySlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonCancelSearching_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonCancelSearching;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextEstimatedTimeTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextEstimatedTimeTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextWaitingForPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_TextWaitingForPlayers;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerksText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_PerksText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_OfferingText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_AddonText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemOrPowerText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_ItemOrPowerText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankAndPlayerInfoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BankAndPlayerInfoWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGLoadoutBaseWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLobbySearchingWidget_HandleLeaveButtonClicked, "HandleLeaveButtonClicked" }, // 2471679153
		{ &Z_Construct_UFunction_UUMGLobbySearchingWidget_OnCurrencyTooltipTriggered, "OnCurrencyTooltipTriggered" }, // 2347414419
		{ &Z_Construct_UFunction_UUMGLobbySearchingWidget_OnLevelTooltipTriggered, "OnLevelTooltipTriggered" }, // 3312769397
		{ &Z_Construct_UFunction_UUMGLobbySearchingWidget_OnRankTooltipTriggered, "OnRankTooltipTriggered" }, // 1428896734
		{ &Z_Construct_UFunction_UUMGLobbySearchingWidget_SetEstimatedWaitingTimer, "SetEstimatedWaitingTimer" }, // 4279036934
		{ &Z_Construct_UFunction_UUMGLobbySearchingWidget_SetWaitingTimer, "SetWaitingTimer" }, // 860601207
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLobbySearchingWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PartySlots_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PartySlots = { "PartySlots", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, PartySlots), Z_Construct_UClass_UUMGPartySlotsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PartySlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PartySlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ButtonCancelSearching_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ButtonCancelSearching = { "ButtonCancelSearching", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, ButtonCancelSearching), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ButtonCancelSearching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ButtonCancelSearching_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextEstimatedTimeTitle_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextEstimatedTimeTitle = { "TextEstimatedTimeTitle", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, TextEstimatedTimeTitle), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextEstimatedTimeTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextEstimatedTimeTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextWaitingForPlayers_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextWaitingForPlayers = { "TextWaitingForPlayers", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, TextWaitingForPlayers), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextWaitingForPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextWaitingForPlayers_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PerksText_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PerksText = { "PerksText", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, PerksText), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PerksText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PerksText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_OfferingText_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_OfferingText = { "OfferingText", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, OfferingText), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_OfferingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_OfferingText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_AddonText_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_AddonText = { "AddonText", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, AddonText), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_AddonText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_AddonText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ItemOrPowerText_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ItemOrPowerText = { "ItemOrPowerText", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, ItemOrPowerText), METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ItemOrPowerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ItemOrPowerText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_BankAndPlayerInfoWidget_MetaData[] = {
		{ "Category", "UMGLobbySearchingWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLobbySearchingWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_BankAndPlayerInfoWidget = { "BankAndPlayerInfoWidget", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLobbySearchingWidget, BankAndPlayerInfoWidget), Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_BankAndPlayerInfoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_BankAndPlayerInfoWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PartySlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ButtonCancelSearching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextEstimatedTimeTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_TextWaitingForPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_PerksText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_OfferingText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_AddonText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_ItemOrPowerText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::NewProp_BankAndPlayerInfoWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLobbySearchingWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::ClassParams = {
		&UUMGLobbySearchingWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLobbySearchingWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLobbySearchingWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLobbySearchingWidget, 1662233251);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLobbySearchingWidget>()
	{
		return UUMGLobbySearchingWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLobbySearchingWidget(Z_Construct_UClass_UUMGLobbySearchingWidget, &UUMGLobbySearchingWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLobbySearchingWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLobbySearchingWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
