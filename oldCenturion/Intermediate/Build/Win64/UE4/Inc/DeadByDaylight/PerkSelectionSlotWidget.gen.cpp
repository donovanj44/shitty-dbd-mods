// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkSelectionSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkSelectionSlotWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSelectionSlotWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSelectionSlotWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHtmlRichText_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkActionButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UPerkSelectionSlotWidget::execOnButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnButtonClicked();
		P_NATIVE_END;
	}
	void UPerkSelectionSlotWidget::StaticRegisterNativesUPerkSelectionSlotWidget()
	{
		UClass* Class = UPerkSelectionSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnButtonClicked", &UPerkSelectionSlotWidget::execOnButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPerkSelectionSlotWidget_OnButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPerkSelectionSlotWidget_OnButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPerkSelectionSlotWidget_OnButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPerkSelectionSlotWidget, nullptr, "OnButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPerkSelectionSlotWidget_OnButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPerkSelectionSlotWidget_OnButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPerkSelectionSlotWidget_OnButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPerkSelectionSlotWidget_OnButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPerkSelectionSlotWidget_NoRegister()
	{
		return UPerkSelectionSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UPerkSelectionSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionBackgroundLowOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DescriptionBackgroundLowOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkBackgroundLowOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PerkBackgroundLowOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LowOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LowOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HighOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PictureTopRightFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PictureTopRightFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PictureTopRightBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PictureTopRightBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PictureHighlightFrame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PictureHighlightFrame;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PicturePerkBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PicturePerkBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PictureBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PictureBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkActionButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerkActionButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextChoose_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextChoose;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerkName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPerkSelectionSlotWidget_OnButtonClicked, "OnButtonClicked" }, // 605571663
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PerkSelectionSlotWidget.h" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionBackgroundLowOpacity_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionBackgroundLowOpacity = { "DescriptionBackgroundLowOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, DescriptionBackgroundLowOpacity), METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionBackgroundLowOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionBackgroundLowOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkBackgroundLowOpacity_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkBackgroundLowOpacity = { "PerkBackgroundLowOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, PerkBackgroundLowOpacity), METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkBackgroundLowOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkBackgroundLowOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_LowOpacity_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_LowOpacity = { "LowOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, LowOpacity), METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_LowOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_LowOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_HighOpacity_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_HighOpacity = { "HighOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, HighOpacity), METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_HighOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_HighOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightFrame_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightFrame = { "PictureTopRightFrame", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, PictureTopRightFrame), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightBackground_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightBackground = { "PictureTopRightBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, PictureTopRightBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureHighlightFrame_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureHighlightFrame = { "PictureHighlightFrame", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, PictureHighlightFrame), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureHighlightFrame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureHighlightFrame_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PicturePerkBackground_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PicturePerkBackground = { "PicturePerkBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, PicturePerkBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PicturePerkBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PicturePerkBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureBackground_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureBackground = { "PictureBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, PictureBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionText_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionText = { "DescriptionText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, DescriptionText), Z_Construct_UClass_UUMGHtmlRichText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_SelectedIcon_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_SelectedIcon = { "SelectedIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, SelectedIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_SelectedIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_SelectedIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkActionButton_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkActionButton = { "PerkActionButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, PerkActionButton), Z_Construct_UClass_UPerkActionButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkActionButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkActionButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_TextChoose_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_TextChoose = { "TextChoose", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, TextChoose), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_TextChoose_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_TextChoose_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkName_MetaData[] = {
		{ "Category", "PerkSelectionSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/PerkSelectionSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkName = { "PerkName", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPerkSelectionSlotWidget, PerkName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionBackgroundLowOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkBackgroundLowOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_LowOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_HighOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureTopRightBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureHighlightFrame,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PicturePerkBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PictureBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_DescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_SelectedIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkActionButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_TextChoose,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::NewProp_PerkName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPerkSelectionSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::ClassParams = {
		&UPerkSelectionSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPerkSelectionSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPerkSelectionSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPerkSelectionSlotWidget, 2024676487);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPerkSelectionSlotWidget>()
	{
		return UPerkSelectionSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPerkSelectionSlotWidget(Z_Construct_UClass_UPerkSelectionSlotWidget, &UPerkSelectionSlotWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPerkSelectionSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPerkSelectionSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
