// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSubscriptionPackButtonWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSubscriptionPackButtonWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSubscriptionPackButtonWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USubscriptionRewardDataAsset_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGSubscriptionPackButtonWidget::execOnInfoButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInfoButtonClicked();
		P_NATIVE_END;
	}
	void UUMGSubscriptionPackButtonWidget::StaticRegisterNativesUUMGSubscriptionPackButtonWidget()
	{
		UClass* Class = UUMGSubscriptionPackButtonWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnInfoButtonClicked", &UUMGSubscriptionPackButtonWidget::execOnInfoButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSubscriptionPackButtonWidget_OnInfoButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSubscriptionPackButtonWidget_OnInfoButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSubscriptionPackButtonWidget_OnInfoButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSubscriptionPackButtonWidget, nullptr, "OnInfoButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSubscriptionPackButtonWidget_OnInfoButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSubscriptionPackButtonWidget_OnInfoButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSubscriptionPackButtonWidget_OnInfoButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSubscriptionPackButtonWidget_OnInfoButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_NoRegister()
	{
		return UUMGSubscriptionPackButtonWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonActiveFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonActiveFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonActiveTitleBackgroundTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NonActiveTitleBackgroundTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTitleBackgroundTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveTitleBackgroundTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRewardsSmokeBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DailyRewardsSmokeBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseRewardsSmokeBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseRewardsSmokeBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonActiveSmokeBackgroundTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NonActiveSmokeBackgroundTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveSmokeBackgroundTint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveSmokeBackgroundTint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonActiveTextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NonActiveTextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveTextColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActiveTextColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonActiveBackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonActiveBackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActiveBackgroundImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActiveBackgroundImage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InfoButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InfoButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortraitBorder_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortraitBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRewardsGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DailyRewardsGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PurchaseRewardsGrid_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PurchaseRewardsGrid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenewalDateText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenewalDateText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RenewalDatePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RenewalDatePanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Title;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PricePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PricePanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonPressedVFX_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonPressedVFX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WidgetPerRewardType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WidgetPerRewardType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseButtonWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSubscriptionPackButtonWidget_OnInfoButtonClicked, "OnInfoButtonClicked" }, // 2773657625
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSubscriptionPackButtonWidget.h" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveFrame_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveFrame = { "NonActiveFrame", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveFrame), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveFrame_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveFrame = { "ActiveFrame", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveFrame), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleBackground_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleBackground = { "TitleBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, TitleBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTitleBackgroundTint_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTitleBackgroundTint = { "NonActiveTitleBackgroundTint", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveTitleBackgroundTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTitleBackgroundTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTitleBackgroundTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTitleBackgroundTint_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTitleBackgroundTint = { "ActiveTitleBackgroundTint", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveTitleBackgroundTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTitleBackgroundTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTitleBackgroundTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsSmokeBackground_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsSmokeBackground = { "DailyRewardsSmokeBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, DailyRewardsSmokeBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsSmokeBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsSmokeBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsSmokeBackground_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsSmokeBackground = { "PurchaseRewardsSmokeBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, PurchaseRewardsSmokeBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsSmokeBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsSmokeBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveSmokeBackgroundTint_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveSmokeBackgroundTint = { "NonActiveSmokeBackgroundTint", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveSmokeBackgroundTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveSmokeBackgroundTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveSmokeBackgroundTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveSmokeBackgroundTint_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveSmokeBackgroundTint = { "ActiveSmokeBackgroundTint", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveSmokeBackgroundTint), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveSmokeBackgroundTint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveSmokeBackgroundTint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TextColor_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TextColor = { "TextColor", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, TextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTextColor_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTextColor = { "NonActiveTextColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTextColor_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTextColor = { "ActiveTextColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveTextColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTextColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTextColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveBackgroundImage_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveBackgroundImage = { "NonActiveBackgroundImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, NonActiveBackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveBackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveBackgroundImage_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveBackgroundImage = { "ActiveBackgroundImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ActiveBackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveBackgroundImage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_InfoButton_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_InfoButton = { "InfoButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, InfoButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_InfoButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_InfoButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PortraitBorder_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PortraitBorder = { "PortraitBorder", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, PortraitBorder), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PortraitBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PortraitBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsGrid_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsGrid = { "DailyRewardsGrid", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, DailyRewardsGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsGrid_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsGrid = { "PurchaseRewardsGrid", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, PurchaseRewardsGrid), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsGrid_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsGrid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDateText_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDateText = { "RenewalDateText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, RenewalDateText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDateText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDateText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDatePanel_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDatePanel = { "RenewalDatePanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, RenewalDatePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDatePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDatePanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Price_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, Price), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Title_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, Title), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Title_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Title_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleIcon_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleIcon = { "TitleIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, TitleIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PricePanel_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PricePanel = { "PricePanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, PricePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PricePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PricePanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ButtonPressedVFX_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ButtonPressedVFX = { "ButtonPressedVFX", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, ButtonPressedVFX), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ButtonPressedVFX_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ButtonPressedVFX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_WidgetPerRewardType_MetaData[] = {
		{ "Category", "UMGSubscriptionPackButtonWidget" },
		{ "ModuleRelativePath", "Public/UMGSubscriptionPackButtonWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_WidgetPerRewardType = { "WidgetPerRewardType", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSubscriptionPackButtonWidget, WidgetPerRewardType), Z_Construct_UClass_USubscriptionRewardDataAsset_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_WidgetPerRewardType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_WidgetPerRewardType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTitleBackgroundTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTitleBackgroundTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsSmokeBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsSmokeBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveSmokeBackgroundTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveSmokeBackgroundTint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveTextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveTextColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_NonActiveBackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ActiveBackgroundImage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_InfoButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PortraitBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_DailyRewardsGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PurchaseRewardsGrid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDateText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_RenewalDatePanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_Title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_TitleIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_PricePanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_ButtonPressedVFX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::NewProp_WidgetPerRewardType,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSubscriptionPackButtonWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::ClassParams = {
		&UUMGSubscriptionPackButtonWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSubscriptionPackButtonWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSubscriptionPackButtonWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSubscriptionPackButtonWidget, 3531761204);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSubscriptionPackButtonWidget>()
	{
		return UUMGSubscriptionPackButtonWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSubscriptionPackButtonWidget(Z_Construct_UClass_UUMGSubscriptionPackButtonWidget, &UUMGSubscriptionPackButtonWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSubscriptionPackButtonWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSubscriptionPackButtonWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
