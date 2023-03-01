// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGBaseRootStorefrontWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGBaseRootStorefrontWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseRootStorefrontWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseRootStorefrontWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_ECurrencyType();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTooltipPressedData();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UNamedSlot_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGBaseRootStorefrontWidget::execOnBackButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBaseRootStorefrontWidget::execOnCurrencyButtonLongPressed)
	{
		P_GET_STRUCT_REF(FTooltipPressedData,Z_Param_Out_tooltipPressedData);
		P_GET_ENUM(ECurrencyType,Z_Param_currencyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCurrencyButtonLongPressed(Z_Param_Out_tooltipPressedData,ECurrencyType(Z_Param_currencyType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGBaseRootStorefrontWidget::execOnPurchaseAuricCellButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPurchaseAuricCellButtonPressed();
		P_NATIVE_END;
	}
	void UUMGBaseRootStorefrontWidget::StaticRegisterNativesUUMGBaseRootStorefrontWidget()
	{
		UClass* Class = UUMGBaseRootStorefrontWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnBackButtonPressed", &UUMGBaseRootStorefrontWidget::execOnBackButtonPressed },
			{ "OnCurrencyButtonLongPressed", &UUMGBaseRootStorefrontWidget::execOnCurrencyButtonLongPressed },
			{ "OnPurchaseAuricCellButtonPressed", &UUMGBaseRootStorefrontWidget::execOnPurchaseAuricCellButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnBackButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnBackButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseRootStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnBackButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseRootStorefrontWidget, nullptr, "OnBackButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnBackButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnBackButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnBackButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnBackButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics
	{
		struct UMGBaseRootStorefrontWidget_eventOnCurrencyButtonLongPressed_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_currencyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_currencyType = { "currencyType", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBaseRootStorefrontWidget_eventOnCurrencyButtonLongPressed_Parms, currencyType), Z_Construct_UEnum_DBDSharedTypes_ECurrencyType, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_currencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_currencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_currencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_tooltipPressedData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_tooltipPressedData = { "tooltipPressedData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGBaseRootStorefrontWidget_eventOnCurrencyButtonLongPressed_Parms, tooltipPressedData), Z_Construct_UScriptStruct_FTooltipPressedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_tooltipPressedData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_tooltipPressedData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_currencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_currencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::NewProp_tooltipPressedData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseRootStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseRootStorefrontWidget, nullptr, "OnCurrencyButtonLongPressed", nullptr, nullptr, sizeof(UMGBaseRootStorefrontWidget_eventOnCurrencyButtonLongPressed_Parms), Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnPurchaseAuricCellButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnPurchaseAuricCellButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGBaseRootStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnPurchaseAuricCellButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGBaseRootStorefrontWidget, nullptr, "OnPurchaseAuricCellButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnPurchaseAuricCellButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnPurchaseAuricCellButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnPurchaseAuricCellButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnPurchaseAuricCellButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGBaseRootStorefrontWidget_NoRegister()
	{
		return UUMGBaseRootStorefrontWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorefrontTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorefrontTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyButtonsPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyButtonsPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BackButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorePageSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorePageSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnBackButtonPressed, "OnBackButtonPressed" }, // 3075623722
		{ &Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnCurrencyButtonLongPressed, "OnCurrencyButtonLongPressed" }, // 4197445461
		{ &Z_Construct_UFunction_UUMGBaseRootStorefrontWidget_OnPurchaseAuricCellButtonPressed, "OnPurchaseAuricCellButtonPressed" }, // 1504781756
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGBaseRootStorefrontWidget.h" },
		{ "ModuleRelativePath", "Public/UMGBaseRootStorefrontWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorefrontTitle_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseRootStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorefrontTitle = { "StorefrontTitle", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseRootStorefrontWidget, StorefrontTitle), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorefrontTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorefrontTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_CurrencyButtonsPanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseRootStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_CurrencyButtonsPanel = { "CurrencyButtonsPanel", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseRootStorefrontWidget, CurrencyButtonsPanel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_CurrencyButtonsPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_CurrencyButtonsPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_BackButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseRootStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_BackButton = { "BackButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseRootStorefrontWidget, BackButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_BackButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_BackButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorePageSlot_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGBaseRootStorefrontWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorePageSlot = { "StorePageSlot", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGBaseRootStorefrontWidget, StorePageSlot), Z_Construct_UClass_UNamedSlot_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorePageSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorePageSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorefrontTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_CurrencyButtonsPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_BackButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::NewProp_StorePageSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGBaseRootStorefrontWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::ClassParams = {
		&UUMGBaseRootStorefrontWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGBaseRootStorefrontWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGBaseRootStorefrontWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGBaseRootStorefrontWidget, 799701517);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGBaseRootStorefrontWidget>()
	{
		return UUMGBaseRootStorefrontWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGBaseRootStorefrontWidget(Z_Construct_UClass_UUMGBaseRootStorefrontWidget, &UUMGBaseRootStorefrontWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGBaseRootStorefrontWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGBaseRootStorefrontWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
