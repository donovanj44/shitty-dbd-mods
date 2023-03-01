// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGStoreAuricCellButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGStoreAuricCellButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStoreAuricCellButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStoreAuricCellButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
	UMG_API UClass* Z_Construct_UClass_UOverlay_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyPurchaseData();
// End Cross Module References
	DEFINE_FUNCTION(UUMGStoreAuricCellButton::execHasBonusExpired)
	{
		P_GET_STRUCT(FDateTime,Z_Param_endDate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasBonusExpired(Z_Param_endDate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGStoreAuricCellButton::execReportInvalidPercentage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_percentage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReportInvalidPercentage(Z_Param_percentage);
		P_NATIVE_END;
	}
	static FName NAME_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI = FName(TEXT("UpdateFirstPurchaseEndInUI"));
	void UUMGStoreAuricCellButton::UpdateFirstPurchaseEndInUI(const FString& endInString)
	{
		UMGStoreAuricCellButton_eventUpdateFirstPurchaseEndInUI_Parms Parms;
		Parms.endInString=endInString;
		ProcessEvent(FindFunctionChecked(NAME_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI),&Parms);
	}
	static FName NAME_UUMGStoreAuricCellButton_UpdateWidget = FName(TEXT("UpdateWidget"));
	void UUMGStoreAuricCellButton::UpdateWidget(const int32 multiplier, const FDateTime endDate)
	{
		UMGStoreAuricCellButton_eventUpdateWidget_Parms Parms;
		Parms.multiplier=multiplier;
		Parms.endDate=endDate;
		ProcessEvent(FindFunctionChecked(NAME_UUMGStoreAuricCellButton_UpdateWidget),&Parms);
	}
	void UUMGStoreAuricCellButton::StaticRegisterNativesUUMGStoreAuricCellButton()
	{
		UClass* Class = UUMGStoreAuricCellButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HasBonusExpired", &UUMGStoreAuricCellButton::execHasBonusExpired },
			{ "ReportInvalidPercentage", &UUMGStoreAuricCellButton::execReportInvalidPercentage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics
	{
		struct UMGStoreAuricCellButton_eventHasBonusExpired_Parms
		{
			FDateTime endDate;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endDate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UMGStoreAuricCellButton_eventHasBonusExpired_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGStoreAuricCellButton_eventHasBonusExpired_Parms), &Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_endDate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGStoreAuricCellButton_eventHasBonusExpired_Parms, endDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_endDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_endDate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::NewProp_endDate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStoreAuricCellButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStoreAuricCellButton, nullptr, "HasBonusExpired", nullptr, nullptr, sizeof(UMGStoreAuricCellButton_eventHasBonusExpired_Parms), Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics
	{
		struct UMGStoreAuricCellButton_eventReportInvalidPercentage_Parms
		{
			float percentage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_percentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::NewProp_percentage = { "percentage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGStoreAuricCellButton_eventReportInvalidPercentage_Parms, percentage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::NewProp_percentage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStoreAuricCellButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStoreAuricCellButton, nullptr, "ReportInvalidPercentage", nullptr, nullptr, sizeof(UMGStoreAuricCellButton_eventReportInvalidPercentage_Parms), Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endInString_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_endInString;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::NewProp_endInString_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::NewProp_endInString = { "endInString", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGStoreAuricCellButton_eventUpdateFirstPurchaseEndInUI_Parms, endInString), METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::NewProp_endInString_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::NewProp_endInString_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::NewProp_endInString,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStoreAuricCellButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStoreAuricCellButton, nullptr, "UpdateFirstPurchaseEndInUI", nullptr, nullptr, sizeof(UMGStoreAuricCellButton_eventUpdateFirstPurchaseEndInUI_Parms), Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_endDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_endDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_multiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_multiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_endDate_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_endDate = { "endDate", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGStoreAuricCellButton_eventUpdateWidget_Parms, endDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_endDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_endDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_multiplier_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_multiplier = { "multiplier", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGStoreAuricCellButton_eventUpdateWidget_Parms, multiplier), METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_multiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_multiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_endDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::NewProp_multiplier,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStoreAuricCellButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStoreAuricCellButton, nullptr, "UpdateWidget", nullptr, nullptr, sizeof(UMGStoreAuricCellButton_eventUpdateWidget_Parms), Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGStoreAuricCellButton_NoRegister()
	{
		return UUMGStoreAuricCellButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGStoreAuricCellButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Timer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuricCellTitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuricCellTitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyPurchaseData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrencyPurchaseData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGStoreAuricCellButton_HasBonusExpired, "HasBonusExpired" }, // 2142233116
		{ &Z_Construct_UFunction_UUMGStoreAuricCellButton_ReportInvalidPercentage, "ReportInvalidPercentage" }, // 3729479224
		{ &Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateFirstPurchaseEndInUI, "UpdateFirstPurchaseEndInUI" }, // 1049186850
		{ &Z_Construct_UFunction_UUMGStoreAuricCellButton_UpdateWidget, "UpdateWidget" }, // 1155874258
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGStoreAuricCellButton.h" },
		{ "ModuleRelativePath", "Public/UMGStoreAuricCellButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_Timer_MetaData[] = {
		{ "Category", "UMGStoreAuricCellButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreAuricCellButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreAuricCellButton, Timer), Z_Construct_UClass_UOverlay_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_Timer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_Timer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_AuricCellTitleText_MetaData[] = {
		{ "Category", "UMGStoreAuricCellButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreAuricCellButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_AuricCellTitleText = { "AuricCellTitleText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreAuricCellButton, AuricCellTitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_AuricCellTitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_AuricCellTitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_CurrencyPurchaseData_MetaData[] = {
		{ "Category", "UMGStoreAuricCellButton" },
		{ "ModuleRelativePath", "Public/UMGStoreAuricCellButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_CurrencyPurchaseData = { "CurrencyPurchaseData", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreAuricCellButton, CurrencyPurchaseData), Z_Construct_UScriptStruct_FCurrencyPurchaseData, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_CurrencyPurchaseData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_CurrencyPurchaseData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_Timer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_AuricCellTitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::NewProp_CurrencyPurchaseData,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGStoreAuricCellButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::ClassParams = {
		&UUMGStoreAuricCellButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGStoreAuricCellButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGStoreAuricCellButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGStoreAuricCellButton, 3932229114);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGStoreAuricCellButton>()
	{
		return UUMGStoreAuricCellButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGStoreAuricCellButton(Z_Construct_UClass_UUMGStoreAuricCellButton, &UUMGStoreAuricCellButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGStoreAuricCellButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGStoreAuricCellButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
