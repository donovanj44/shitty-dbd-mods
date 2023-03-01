// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGFogWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGFogWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGFogWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGFogWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTooltipPressedData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGFogWidget::execHandleOnSettingButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnSettingButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGFogWidget::execOnCurrencyTooltipTriggered)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrencyTooltipTriggered(Z_Param_Out_tooltipPressedData,ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGFogWidget::execOnLevelTooltipTriggered)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLevelTooltipTriggered(Z_Param_Out_tooltipPressedData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGFogWidget::execOnRankTooltipTriggered)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRankTooltipTriggered(Z_Param_Out_tooltipPressedData);
		P_NATIVE_END;
	}
	void UUMGFogWidget::StaticRegisterNativesUUMGFogWidget()
	{
		UClass* Class = UUMGFogWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleOnSettingButtonClick", &UUMGFogWidget::execHandleOnSettingButtonClick },
			{ "OnCurrencyTooltipTriggered", &UUMGFogWidget::execOnCurrencyTooltipTriggered },
			{ "OnLevelTooltipTriggered", &UUMGFogWidget::execOnLevelTooltipTriggered },
			{ "OnRankTooltipTriggered", &UUMGFogWidget::execOnRankTooltipTriggered },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGFogWidget_HandleOnSettingButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFogWidget_HandleOnSettingButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFogWidget_HandleOnSettingButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFogWidget, nullptr, "HandleOnSettingButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFogWidget_HandleOnSettingButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_HandleOnSettingButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFogWidget_HandleOnSettingButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFogWidget_HandleOnSettingButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics
	{
		struct UMGFogWidget_eventOnCurrencyTooltipTriggered_Parms
		{
			FTooltipPressedData tooltipPressedData;
			ECurrencyType currencyType;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currencyType_MetaData[];
#endif
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
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGFogWidget_eventOnCurrencyTooltipTriggered_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGFogWidget_eventOnCurrencyTooltipTriggered_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFogWidget, nullptr, "OnCurrencyTooltipTriggered", nullptr, nullptr, sizeof(UMGFogWidget_eventOnCurrencyTooltipTriggered_Parms), Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics
	{
		struct UMGFogWidget_eventOnLevelTooltipTriggered_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGFogWidget_eventOnLevelTooltipTriggered_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFogWidget, nullptr, "OnLevelTooltipTriggered", nullptr, nullptr, sizeof(UMGFogWidget_eventOnLevelTooltipTriggered_Parms), Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics
	{
		struct UMGFogWidget_eventOnRankTooltipTriggered_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGFogWidget_eventOnRankTooltipTriggered_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGFogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGFogWidget, nullptr, "OnRankTooltipTriggered", nullptr, nullptr, sizeof(UMGFogWidget_eventOnRankTooltipTriggered_Parms), Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGFogWidget_NoRegister()
	{
		return UUMGFogWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGFogWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankAndPlayerInfoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BankAndPlayerInfoWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGFogWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGFogWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGFogWidget_HandleOnSettingButtonClick, "HandleOnSettingButtonClick" }, // 2747343303
		{ &Z_Construct_UFunction_UUMGFogWidget_OnCurrencyTooltipTriggered, "OnCurrencyTooltipTriggered" }, // 1883281553
		{ &Z_Construct_UFunction_UUMGFogWidget_OnLevelTooltipTriggered, "OnLevelTooltipTriggered" }, // 4217895212
		{ &Z_Construct_UFunction_UUMGFogWidget_OnRankTooltipTriggered, "OnRankTooltipTriggered" }, // 1910937931
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFogWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGFogWidget.h" },
		{ "ModuleRelativePath", "Public/UMGFogWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGFogWidget_Statics::NewProp_BankAndPlayerInfoWidget_MetaData[] = {
		{ "Category", "UMGFogWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGFogWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGFogWidget_Statics::NewProp_BankAndPlayerInfoWidget = { "BankAndPlayerInfoWidget", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGFogWidget, BankAndPlayerInfoWidget), Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGFogWidget_Statics::NewProp_BankAndPlayerInfoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFogWidget_Statics::NewProp_BankAndPlayerInfoWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGFogWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGFogWidget_Statics::NewProp_BankAndPlayerInfoWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGFogWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGFogWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGFogWidget_Statics::ClassParams = {
		&UUMGFogWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGFogWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFogWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGFogWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGFogWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGFogWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGFogWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGFogWidget, 3128262342);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGFogWidget>()
	{
		return UUMGFogWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGFogWidget(Z_Construct_UClass_UUMGFogWidget, &UUMGFogWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGFogWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGFogWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
