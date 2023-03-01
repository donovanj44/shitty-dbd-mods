// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBankWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBankWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBankWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBankWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTooltipPressedData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCurrencyWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAuricCellsButton_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBankWidget::execOnCurrencyTooltipRequested)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrencyTooltipRequested(Z_Param_Out_tooltipPressedData,ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBankWidget::execOnPurchaseAuricCellsClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPurchaseAuricCellsClicked();
		P_NATIVE_END;
	}
	void UUMGBankWidget::StaticRegisterNativesUUMGBankWidget()
	{
		UClass* Class = UUMGBankWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCurrencyTooltipRequested", &UUMGBankWidget::execOnCurrencyTooltipRequested },
			{ "OnPurchaseAuricCellsClicked", &UUMGBankWidget::execOnPurchaseAuricCellsClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics
	{
		struct UMGBankWidget_eventOnCurrencyTooltipRequested_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankWidget_eventOnCurrencyTooltipRequested_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBankWidget_eventOnCurrencyTooltipRequested_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankWidget, nullptr, "OnCurrencyTooltipRequested", nullptr, nullptr, sizeof(UMGBankWidget_eventOnCurrencyTooltipRequested_Parms), Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBankWidget_OnPurchaseAuricCellsClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBankWidget_OnPurchaseAuricCellsClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBankWidget_OnPurchaseAuricCellsClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBankWidget, nullptr, "OnPurchaseAuricCellsClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBankWidget_OnPurchaseAuricCellsClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBankWidget_OnPurchaseAuricCellsClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBankWidget_OnPurchaseAuricCellsClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBankWidget_OnPurchaseAuricCellsClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBankWidget_NoRegister()
	{
		return UUMGBankWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBankWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IridescentShardsCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IridescentShardsCurrency;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellsButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CellsButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodPointsCurrency_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BloodPointsCurrency;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBankWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBankWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBankWidget_OnCurrencyTooltipRequested, "OnCurrencyTooltipRequested" }, // 1269908483
		{ &Z_Construct_UFunction_UUMGBankWidget_OnPurchaseAuricCellsClicked, "OnPurchaseAuricCellsClicked" }, // 1464844710
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBankWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBankWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_IridescentShardsCurrency_MetaData[] = {
		{ "Category", "UMGBankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_IridescentShardsCurrency = { "IridescentShardsCurrency", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankWidget, IridescentShardsCurrency), Z_Construct_UClass_UUMGCurrencyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_IridescentShardsCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_IridescentShardsCurrency_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_CellsButton_MetaData[] = {
		{ "Category", "UMGBankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_CellsButton = { "CellsButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankWidget, CellsButton), Z_Construct_UClass_UUMGAuricCellsButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_CellsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_CellsButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_BloodPointsCurrency_MetaData[] = {
		{ "Category", "UMGBankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_BloodPointsCurrency = { "BloodPointsCurrency", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBankWidget, BloodPointsCurrency), Z_Construct_UClass_UUMGCurrencyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_BloodPointsCurrency_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_BloodPointsCurrency_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBankWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_IridescentShardsCurrency,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_CellsButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBankWidget_Statics::NewProp_BloodPointsCurrency,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBankWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBankWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBankWidget_Statics::ClassParams = {
		&UUMGBankWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBankWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBankWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBankWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBankWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBankWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBankWidget, 459941768);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBankWidget>()
	{
		return UUMGBankWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBankWidget(Z_Construct_UClass_UUMGBankWidget, &UUMGBankWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBankWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBankWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
