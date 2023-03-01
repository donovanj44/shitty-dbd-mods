// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGChargeableInteractionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGChargeableInteractionWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGChargeableInteractionWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGChargeableInteractionWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EBarColor();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStatusEffectSlotData();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	static FName NAME_UUMGChargeableInteractionWidget_ClearProficienciesData = FName(TEXT("ClearProficienciesData"));
	void UUMGChargeableInteractionWidget::ClearProficienciesData()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_ClearProficienciesData),NULL);
	}
	static FName NAME_UUMGChargeableInteractionWidget_SetItemChargeColor = FName(TEXT("SetItemChargeColor"));
	void UUMGChargeableInteractionWidget::SetItemChargeColor(const EBarColor barColor)
	{
		UMGChargeableInteractionWidget_eventSetItemChargeColor_Parms Parms;
		Parms.barColor=barColor;
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_SetItemChargeColor),&Parms);
	}
	static FName NAME_UUMGChargeableInteractionWidget_SetItemChargeValue = FName(TEXT("SetItemChargeValue"));
	void UUMGChargeableInteractionWidget::SetItemChargeValue(float value)
	{
		UMGChargeableInteractionWidget_eventSetItemChargeValue_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_SetItemChargeValue),&Parms);
	}
	static FName NAME_UUMGChargeableInteractionWidget_SetMessage = FName(TEXT("SetMessage"));
	void UUMGChargeableInteractionWidget::SetMessage(const FString& message)
	{
		UMGChargeableInteractionWidget_eventSetMessage_Parms Parms;
		Parms.message=message;
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_SetMessage),&Parms);
	}
	static FName NAME_UUMGChargeableInteractionWidget_SetOpacity = FName(TEXT("SetOpacity"));
	void UUMGChargeableInteractionWidget::SetOpacity(float opacity)
	{
		UMGChargeableInteractionWidget_eventSetOpacity_Parms Parms;
		Parms.opacity=opacity;
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_SetOpacity),&Parms);
	}
	static FName NAME_UUMGChargeableInteractionWidget_SetProficiencyData = FName(TEXT("SetProficiencyData"));
	void UUMGChargeableInteractionWidget::SetProficiencyData(int32 index, FStatusEffectSlotData const& proficiencyData)
	{
		UMGChargeableInteractionWidget_eventSetProficiencyData_Parms Parms;
		Parms.index=index;
		Parms.proficiencyData=proficiencyData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_SetProficiencyData),&Parms);
	}
	static FName NAME_UUMGChargeableInteractionWidget_SetProgressBarColor = FName(TEXT("SetProgressBarColor"));
	void UUMGChargeableInteractionWidget::SetProgressBarColor(const EBarColor barColor)
	{
		UMGChargeableInteractionWidget_eventSetProgressBarColor_Parms Parms;
		Parms.barColor=barColor;
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_SetProgressBarColor),&Parms);
	}
	static FName NAME_UUMGChargeableInteractionWidget_SetProgressbarValue = FName(TEXT("SetProgressbarValue"));
	void UUMGChargeableInteractionWidget::SetProgressbarValue(float value)
	{
		UMGChargeableInteractionWidget_eventSetProgressbarValue_Parms Parms;
		Parms.value=value;
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_SetProgressbarValue),&Parms);
	}
	static FName NAME_UUMGChargeableInteractionWidget_SetSecondaryMessage = FName(TEXT("SetSecondaryMessage"));
	void UUMGChargeableInteractionWidget::SetSecondaryMessage(const FString& secondMessage)
	{
		UMGChargeableInteractionWidget_eventSetSecondaryMessage_Parms Parms;
		Parms.secondMessage=secondMessage;
		ProcessEvent(FindFunctionChecked(NAME_UUMGChargeableInteractionWidget_SetSecondaryMessage),&Parms);
	}
	void UUMGChargeableInteractionWidget::StaticRegisterNativesUUMGChargeableInteractionWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_ClearProficienciesData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_ClearProficienciesData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_ClearProficienciesData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "ClearProficienciesData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_ClearProficienciesData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_ClearProficienciesData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_ClearProficienciesData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_ClearProficienciesData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_barColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_barColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_barColor_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::NewProp_barColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::NewProp_barColor = { "barColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetItemChargeColor_Parms, barColor), Z_Construct_UEnum_DBDSharedTypes_EBarColor, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::NewProp_barColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::NewProp_barColor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::NewProp_barColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::NewProp_barColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::NewProp_barColor_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "SetItemChargeColor", nullptr, nullptr, sizeof(UMGChargeableInteractionWidget_eventSetItemChargeColor_Parms), Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetItemChargeValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "SetItemChargeValue", nullptr, nullptr, sizeof(UMGChargeableInteractionWidget_eventSetItemChargeValue_Parms), Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetMessage_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "SetMessage", nullptr, nullptr, sizeof(UMGChargeableInteractionWidget_eventSetMessage_Parms), Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_opacity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::NewProp_opacity = { "opacity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetOpacity_Parms, opacity), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::NewProp_opacity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "SetOpacity", nullptr, nullptr, sizeof(UMGChargeableInteractionWidget_eventSetOpacity_Parms), Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_proficiencyData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_proficiencyData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::NewProp_proficiencyData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::NewProp_proficiencyData = { "proficiencyData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetProficiencyData_Parms, proficiencyData), Z_Construct_UScriptStruct_FStatusEffectSlotData, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::NewProp_proficiencyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::NewProp_proficiencyData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetProficiencyData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::NewProp_proficiencyData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "SetProficiencyData", nullptr, nullptr, sizeof(UMGChargeableInteractionWidget_eventSetProficiencyData_Parms), Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_barColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_barColor;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_barColor_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::NewProp_barColor_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::NewProp_barColor = { "barColor", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetProgressBarColor_Parms, barColor), Z_Construct_UEnum_DBDSharedTypes_EBarColor, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::NewProp_barColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::NewProp_barColor_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::NewProp_barColor_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::NewProp_barColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::NewProp_barColor_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "SetProgressBarColor", nullptr, nullptr, sizeof(UMGChargeableInteractionWidget_eventSetProgressBarColor_Parms), Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetProgressbarValue_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "SetProgressbarValue", nullptr, nullptr, sizeof(UMGChargeableInteractionWidget_eventSetProgressbarValue_Parms), Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_secondMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_secondMessage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::NewProp_secondMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::NewProp_secondMessage = { "secondMessage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGChargeableInteractionWidget_eventSetSecondaryMessage_Parms, secondMessage), METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::NewProp_secondMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::NewProp_secondMessage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::NewProp_secondMessage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGChargeableInteractionWidget, nullptr, "SetSecondaryMessage", nullptr, nullptr, sizeof(UMGChargeableInteractionWidget_eventSetSecondaryMessage_Parms), Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGChargeableInteractionWidget_NoRegister()
	{
		return UUMGChargeableInteractionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionHudVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionHudVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionHudVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemChargeVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ItemChargeVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ItemChargeVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InteractionIconVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InteractionIconVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InteractionIconVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_ClearProficienciesData, "ClearProficienciesData" }, // 1956571250
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeColor, "SetItemChargeColor" }, // 3044190495
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetItemChargeValue, "SetItemChargeValue" }, // 2075853003
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetMessage, "SetMessage" }, // 583625985
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetOpacity, "SetOpacity" }, // 3125963302
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProficiencyData, "SetProficiencyData" }, // 3384554633
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressBarColor, "SetProgressBarColor" }, // 863929573
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetProgressbarValue, "SetProgressbarValue" }, // 3778852009
		{ &Z_Construct_UFunction_UUMGChargeableInteractionWidget_SetSecondaryMessage, "SetSecondaryMessage" }, // 975488078
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGChargeableInteractionWidget.h" },
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionHudVisibility_MetaData[] = {
		{ "Category", "UMGChargeableInteractionWidget" },
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionHudVisibility = { "InteractionHudVisibility", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGChargeableInteractionWidget, InteractionHudVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionHudVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionHudVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionHudVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemChargeVisibility_MetaData[] = {
		{ "Category", "UMGChargeableInteractionWidget" },
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemChargeVisibility = { "ItemChargeVisibility", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGChargeableInteractionWidget, ItemChargeVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemChargeVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemChargeVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemChargeVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionIconVisibility_MetaData[] = {
		{ "Category", "UMGChargeableInteractionWidget" },
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionIconVisibility = { "InteractionIconVisibility", nullptr, (EPropertyFlags)0x0020080000002005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGChargeableInteractionWidget, InteractionIconVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionIconVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionIconVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionIconVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemIcon_MetaData[] = {
		{ "Category", "UMGChargeableInteractionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGChargeableInteractionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemIcon = { "ItemIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGChargeableInteractionWidget, ItemIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionHudVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionHudVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemChargeVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemChargeVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionIconVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_InteractionIconVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::NewProp_ItemIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGChargeableInteractionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::ClassParams = {
		&UUMGChargeableInteractionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGChargeableInteractionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGChargeableInteractionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGChargeableInteractionWidget, 2982689561);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGChargeableInteractionWidget>()
	{
		return UUMGChargeableInteractionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGChargeableInteractionWidget(Z_Construct_UClass_UUMGChargeableInteractionWidget, &UUMGChargeableInteractionWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGChargeableInteractionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGChargeableInteractionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
