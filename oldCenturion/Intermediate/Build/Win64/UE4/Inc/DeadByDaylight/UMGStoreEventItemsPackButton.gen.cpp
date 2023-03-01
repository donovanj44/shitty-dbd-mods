// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGStoreEventItemsPackButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGStoreEventItemsPackButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStoreEventItemsPackButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStoreEventItemsPackButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlEventItemWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlEndDateTimerWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlStorePriceWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGStoreEventItemsPackButton::execHandleButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGStoreEventItemsPackButton::execHandleEndDateTimerReached)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleEndDateTimerReached();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGStoreEventItemsPackButton::execHideSelectedCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HideSelectedCanvas();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGStoreEventItemsPackButton::execShowSelectedCanvas)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ShowSelectedCanvas();
		P_NATIVE_END;
	}
	void UUMGStoreEventItemsPackButton::StaticRegisterNativesUUMGStoreEventItemsPackButton()
	{
		UClass* Class = UUMGStoreEventItemsPackButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleButtonClicked", &UUMGStoreEventItemsPackButton::execHandleButtonClicked },
			{ "HandleEndDateTimerReached", &UUMGStoreEventItemsPackButton::execHandleEndDateTimerReached },
			{ "HideSelectedCanvas", &UUMGStoreEventItemsPackButton::execHideSelectedCanvas },
			{ "ShowSelectedCanvas", &UUMGStoreEventItemsPackButton::execShowSelectedCanvas },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStoreEventItemsPackButton, nullptr, "HandleButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleEndDateTimerReached_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleEndDateTimerReached_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleEndDateTimerReached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStoreEventItemsPackButton, nullptr, "HandleEndDateTimerReached", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleEndDateTimerReached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleEndDateTimerReached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleEndDateTimerReached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleEndDateTimerReached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HideSelectedCanvas_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HideSelectedCanvas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HideSelectedCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStoreEventItemsPackButton, nullptr, "HideSelectedCanvas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HideSelectedCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HideSelectedCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HideSelectedCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HideSelectedCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGStoreEventItemsPackButton_ShowSelectedCanvas_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStoreEventItemsPackButton_ShowSelectedCanvas_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStoreEventItemsPackButton_ShowSelectedCanvas_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStoreEventItemsPackButton, nullptr, "ShowSelectedCanvas", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStoreEventItemsPackButton_ShowSelectedCanvas_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStoreEventItemsPackButton_ShowSelectedCanvas_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStoreEventItemsPackButton_ShowSelectedCanvas()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStoreEventItemsPackButton_ShowSelectedCanvas_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGStoreEventItemsPackButton_NoRegister()
	{
		return UUMGStoreEventItemsPackButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nbColumns_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_nbColumns;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventItemWidgetClassPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_EventItemWidgetClassPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedImageBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedImageBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDateTimerWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EndDateTimerWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StorePriceWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StorePriceWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuyButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniformGridPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_UniformGridPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyNameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyAmountText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrencyAmountText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImageIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleButtonClicked, "HandleButtonClicked" }, // 2706626887
		{ &Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HandleEndDateTimerReached, "HandleEndDateTimerReached" }, // 3708566470
		{ &Z_Construct_UFunction_UUMGStoreEventItemsPackButton_HideSelectedCanvas, "HideSelectedCanvas" }, // 680759594
		{ &Z_Construct_UFunction_UUMGStoreEventItemsPackButton_ShowSelectedCanvas, "ShowSelectedCanvas" }, // 3962893345
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGStoreEventItemsPackButton.h" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_nbColumns_MetaData[] = {
		{ "Category", "UMGStoreEventItemsPackButton" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_nbColumns = { "nbColumns", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, nbColumns), METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_nbColumns_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_nbColumns_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EventItemWidgetClassPtr_MetaData[] = {
		{ "Category", "UMGStoreEventItemsPackButton" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EventItemWidgetClassPtr = { "EventItemWidgetClassPtr", nullptr, (EPropertyFlags)0x0044000002010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, EventItemWidgetClassPtr), Z_Construct_UClass_UUMGAtlEventItemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EventItemWidgetClassPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EventItemWidgetClassPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_SelectedImageBox_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_SelectedImageBox = { "SelectedImageBox", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, SelectedImageBox), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_SelectedImageBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_SelectedImageBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EndDateTimerWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EndDateTimerWidget = { "EndDateTimerWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, EndDateTimerWidget), Z_Construct_UClass_UUMGAtlEndDateTimerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EndDateTimerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EndDateTimerWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_StorePriceWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_StorePriceWidget = { "StorePriceWidget", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, StorePriceWidget), Z_Construct_UClass_UUMGAtlStorePriceWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_StorePriceWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_StorePriceWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_BuyButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_BuyButton = { "BuyButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, BuyButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_BuyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_BuyButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_UniformGridPanel_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_UniformGridPanel = { "UniformGridPanel", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, UniformGridPanel), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_UniformGridPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_UniformGridPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyNameText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyNameText = { "CurrencyNameText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, CurrencyNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyNameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyAmountText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyAmountText = { "CurrencyAmountText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, CurrencyAmountText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyAmountText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyAmountText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_TitleText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_ImageIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStoreEventItemsPackButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_ImageIcon = { "ImageIcon", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStoreEventItemsPackButton, ImageIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_ImageIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_ImageIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_nbColumns,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EventItemWidgetClassPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_SelectedImageBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_EndDateTimerWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_StorePriceWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_BuyButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_UniformGridPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_CurrencyAmountText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::NewProp_ImageIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGStoreEventItemsPackButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::ClassParams = {
		&UUMGStoreEventItemsPackButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGStoreEventItemsPackButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGStoreEventItemsPackButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGStoreEventItemsPackButton, 3522723019);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGStoreEventItemsPackButton>()
	{
		return UUMGStoreEventItemsPackButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGStoreEventItemsPackButton(Z_Construct_UClass_UUMGStoreEventItemsPackButton, &UUMGStoreEventItemsPackButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGStoreEventItemsPackButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGStoreEventItemsPackButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
