// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BaseTooltipWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseTooltipWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseTooltipWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGHtmlRichText_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UBaseTooltipWidget::execOnQuitButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitButtonClicked();
		P_NATIVE_END;
	}
	void UBaseTooltipWidget::StaticRegisterNativesUBaseTooltipWidget()
	{
		UClass* Class = UBaseTooltipWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnQuitButtonClicked", &UBaseTooltipWidget::execOnQuitButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBaseTooltipWidget_OnQuitButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBaseTooltipWidget_OnQuitButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBaseTooltipWidget_OnQuitButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBaseTooltipWidget, nullptr, "OnQuitButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBaseTooltipWidget_OnQuitButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBaseTooltipWidget_OnQuitButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBaseTooltipWidget_OnQuitButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBaseTooltipWidget_OnQuitButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBaseTooltipWidget_NoRegister()
	{
		return UBaseTooltipWidget::StaticClass();
	}
	struct Z_Construct_UClass_UBaseTooltipWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipOpeningSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TooltipOpeningSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DescriptionLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TooltipContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TitleLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TitleLabel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseTooltipWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBaseTooltipWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBaseTooltipWidget_OnQuitButtonClicked, "OnQuitButtonClicked" }, // 994126831
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BaseTooltipWidget.h" },
		{ "ModuleRelativePath", "Public/BaseTooltipWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipOpeningSound_MetaData[] = {
		{ "Category", "BaseTooltipWidget" },
		{ "ModuleRelativePath", "Public/BaseTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipOpeningSound = { "TooltipOpeningSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTooltipWidget, TooltipOpeningSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipOpeningSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipOpeningSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_CloseButton_MetaData[] = {
		{ "Category", "BaseTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTooltipWidget, CloseButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_CloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_CloseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_DescriptionLabel_MetaData[] = {
		{ "Category", "BaseTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_DescriptionLabel = { "DescriptionLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTooltipWidget, DescriptionLabel), Z_Construct_UClass_UUMGHtmlRichText_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_DescriptionLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_DescriptionLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipContainer_MetaData[] = {
		{ "Category", "BaseTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipContainer = { "TooltipContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTooltipWidget, TooltipContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TitleLabel_MetaData[] = {
		{ "Category", "BaseTooltipWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BaseTooltipWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TitleLabel = { "TitleLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBaseTooltipWidget, TitleLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TitleLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TitleLabel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBaseTooltipWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipOpeningSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_CloseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_DescriptionLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TooltipContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBaseTooltipWidget_Statics::NewProp_TitleLabel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseTooltipWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseTooltipWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseTooltipWidget_Statics::ClassParams = {
		&UBaseTooltipWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UBaseTooltipWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseTooltipWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBaseTooltipWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseTooltipWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseTooltipWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseTooltipWidget, 971182669);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBaseTooltipWidget>()
	{
		return UBaseTooltipWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseTooltipWidget(Z_Construct_UClass_UBaseTooltipWidget, &UBaseTooltipWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBaseTooltipWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseTooltipWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
