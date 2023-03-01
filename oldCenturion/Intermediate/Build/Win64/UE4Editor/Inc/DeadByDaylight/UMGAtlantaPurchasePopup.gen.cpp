// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaPurchasePopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaPurchasePopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaPurchasePopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaPurchasePopup();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPurchaseItemsInfo_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPurchaseSticker_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPurchaseBuyButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaPurchasePopup::execHandleBuyButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBuyButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaPurchasePopup::execHandleCloseButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCloseButtonClicked();
		P_NATIVE_END;
	}
	void UUMGAtlantaPurchasePopup::StaticRegisterNativesUUMGAtlantaPurchasePopup()
	{
		UClass* Class = UUMGAtlantaPurchasePopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBuyButtonClicked", &UUMGAtlantaPurchasePopup::execHandleBuyButtonClicked },
			{ "HandleCloseButtonClicked", &UUMGAtlantaPurchasePopup::execHandleCloseButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleBuyButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleBuyButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleBuyButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaPurchasePopup, nullptr, "HandleBuyButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleBuyButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleBuyButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleBuyButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleBuyButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleCloseButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleCloseButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleCloseButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaPurchasePopup, nullptr, "HandleCloseButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleCloseButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleCloseButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleCloseButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleCloseButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaPurchasePopup_NoRegister()
	{
		return UUMGAtlantaPurchasePopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseItemsInfoWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_PurchaseItemsInfoWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseSticker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseSticker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuyButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuyButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BuyButtonWithInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BuyButtonWithInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ItemsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleTextWithInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleTextWithInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OfferText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferTextWithInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OfferTextWithInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImagePopup_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ImagePopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LayoutSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LayoutSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleBuyButtonClicked, "HandleBuyButtonClicked" }, // 880158651
		{ &Z_Construct_UFunction_UUMGAtlantaPurchasePopup_HandleCloseButtonClicked, "HandleCloseButtonClicked" }, // 1927930913
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaPurchasePopup.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseItemsInfoWidgetClass_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseItemsInfoWidgetClass = { "PurchaseItemsInfoWidgetClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, PurchaseItemsInfoWidgetClass), Z_Construct_UClass_UUMGPurchaseItemsInfo_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseItemsInfoWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseItemsInfoWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseSticker_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseSticker = { "PurchaseSticker", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, PurchaseSticker), Z_Construct_UClass_UUMGPurchaseSticker_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseSticker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseSticker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_CloseButton_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, CloseButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_CloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_CloseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButton_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButton = { "BuyButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, BuyButton), Z_Construct_UClass_UUMGPurchaseBuyButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButtonWithInfo_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButtonWithInfo = { "BuyButtonWithInfo", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, BuyButtonWithInfo), Z_Construct_UClass_UUMGPurchaseBuyButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButtonWithInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButtonWithInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ItemsContainer_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ItemsContainer = { "ItemsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, ItemsContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ItemsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ItemsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, DescriptionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleText_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleText = { "TitleText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, TitleText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleTextWithInfo_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleTextWithInfo = { "TitleTextWithInfo", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, TitleTextWithInfo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleTextWithInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleTextWithInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferText_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferText = { "OfferText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, OfferText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferTextWithInfo_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferTextWithInfo = { "OfferTextWithInfo", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, OfferTextWithInfo), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferTextWithInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferTextWithInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ImagePopup_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ImagePopup = { "ImagePopup", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, ImagePopup), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ImagePopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ImagePopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_LayoutSwitcher_MetaData[] = {
		{ "Category", "UMGAtlantaPurchasePopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaPurchasePopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_LayoutSwitcher = { "LayoutSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaPurchasePopup, LayoutSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_LayoutSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_LayoutSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseItemsInfoWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_PurchaseSticker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_CloseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_BuyButtonWithInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ItemsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_DescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_TitleTextWithInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_OfferTextWithInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_ImagePopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::NewProp_LayoutSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaPurchasePopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::ClassParams = {
		&UUMGAtlantaPurchasePopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaPurchasePopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaPurchasePopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaPurchasePopup, 3349555254);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaPurchasePopup>()
	{
		return UUMGAtlantaPurchasePopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaPurchasePopup(Z_Construct_UClass_UUMGAtlantaPurchasePopup, &UUMGAtlantaPurchasePopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaPurchasePopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaPurchasePopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
