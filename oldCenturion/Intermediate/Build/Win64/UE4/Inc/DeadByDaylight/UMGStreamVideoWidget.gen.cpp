// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGStreamVideoWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGStreamVideoWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStreamVideoWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGStreamVideoWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGStreamVideoWidget::execOnSkipButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSkipButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGStreamVideoWidget::execOnTapButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTapButtonClicked();
		P_NATIVE_END;
	}
	void UUMGStreamVideoWidget::StaticRegisterNativesUUMGStreamVideoWidget()
	{
		UClass* Class = UUMGStreamVideoWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSkipButtonClicked", &UUMGStreamVideoWidget::execOnSkipButtonClicked },
			{ "OnTapButtonClicked", &UUMGStreamVideoWidget::execOnTapButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGStreamVideoWidget_OnSkipButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStreamVideoWidget_OnSkipButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStreamVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStreamVideoWidget_OnSkipButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStreamVideoWidget, nullptr, "OnSkipButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStreamVideoWidget_OnSkipButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStreamVideoWidget_OnSkipButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStreamVideoWidget_OnSkipButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStreamVideoWidget_OnSkipButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGStreamVideoWidget_OnTapButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGStreamVideoWidget_OnTapButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGStreamVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGStreamVideoWidget_OnTapButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGStreamVideoWidget, nullptr, "OnTapButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGStreamVideoWidget_OnTapButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGStreamVideoWidget_OnTapButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGStreamVideoWidget_OnTapButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGStreamVideoWidget_OnTapButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGStreamVideoWidget_NoRegister()
	{
		return UUMGStreamVideoWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGStreamVideoWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__timerShowSkipButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__timerShowSkipButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkipButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SkipButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TapButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TapButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VideoImage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_VideoImage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGStreamVideoWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGStreamVideoWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGStreamVideoWidget_OnSkipButtonClicked, "OnSkipButtonClicked" }, // 26465201
		{ &Z_Construct_UFunction_UUMGStreamVideoWidget_OnTapButtonClicked, "OnTapButtonClicked" }, // 369668732
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStreamVideoWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGStreamVideoWidget.h" },
		{ "ModuleRelativePath", "Public/UMGStreamVideoWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp__timerShowSkipButton_MetaData[] = {
		{ "Category", "UMGStreamVideoWidget" },
		{ "ModuleRelativePath", "Public/UMGStreamVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp__timerShowSkipButton = { "_timerShowSkipButton", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStreamVideoWidget, _timerShowSkipButton), METADATA_PARAMS(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp__timerShowSkipButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp__timerShowSkipButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_SkipButton_MetaData[] = {
		{ "Category", "UMGStreamVideoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStreamVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_SkipButton = { "SkipButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStreamVideoWidget, SkipButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_SkipButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_SkipButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_TapButton_MetaData[] = {
		{ "Category", "UMGStreamVideoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStreamVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_TapButton = { "TapButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStreamVideoWidget, TapButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_TapButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_TapButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_VideoImage_MetaData[] = {
		{ "Category", "UMGStreamVideoWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGStreamVideoWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_VideoImage = { "VideoImage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGStreamVideoWidget, VideoImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_VideoImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_VideoImage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGStreamVideoWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp__timerShowSkipButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_SkipButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_TapButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGStreamVideoWidget_Statics::NewProp_VideoImage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGStreamVideoWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGStreamVideoWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGStreamVideoWidget_Statics::ClassParams = {
		&UUMGStreamVideoWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGStreamVideoWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGStreamVideoWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGStreamVideoWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGStreamVideoWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGStreamVideoWidget, 426175420);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGStreamVideoWidget>()
	{
		return UUMGStreamVideoWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGStreamVideoWidget(Z_Construct_UClass_UUMGStreamVideoWidget, &UUMGStreamVideoWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGStreamVideoWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGStreamVideoWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
