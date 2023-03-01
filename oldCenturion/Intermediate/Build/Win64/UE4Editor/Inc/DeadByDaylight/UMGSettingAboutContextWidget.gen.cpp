// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSettingAboutContextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSettingAboutContextWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingAboutContextWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingAboutContextWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextButton_NoRegister();
// End Cross Module References
	static FName NAME_UUMGSettingAboutContextWidget_SetVersionNumber = FName(TEXT("SetVersionNumber"));
	void UUMGSettingAboutContextWidget::SetVersionNumber(const FString& versionNumber)
	{
		UMGSettingAboutContextWidget_eventSetVersionNumber_Parms Parms;
		Parms.versionNumber=versionNumber;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSettingAboutContextWidget_SetVersionNumber),&Parms);
	}
	void UUMGSettingAboutContextWidget::StaticRegisterNativesUUMGSettingAboutContextWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_versionNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_versionNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::NewProp_versionNumber_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::NewProp_versionNumber = { "versionNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingAboutContextWidget_eventSetVersionNumber_Parms, versionNumber), METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::NewProp_versionNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::NewProp_versionNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::NewProp_versionNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingAboutContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingAboutContextWidget, nullptr, "SetVersionNumber", nullptr, nullptr, sizeof(UMGSettingAboutContextWidget_eventSetVersionNumber_Parms), Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSettingAboutContextWidget_NoRegister()
	{
		return UUMGSettingAboutContextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CreditsButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CreditsButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EULAButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EULAButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGSettingContextWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSettingAboutContextWidget_SetVersionNumber, "SetVersionNumber" }, // 111502986
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSettingAboutContextWidget.h" },
		{ "ModuleRelativePath", "Public/UMGSettingAboutContextWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_CreditsButton_MetaData[] = {
		{ "Category", "UMGSettingAboutContextWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSettingAboutContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_CreditsButton = { "CreditsButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingAboutContextWidget, CreditsButton), Z_Construct_UClass_UUMGSettingContextButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_CreditsButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_CreditsButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_EULAButton_MetaData[] = {
		{ "Category", "UMGSettingAboutContextWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSettingAboutContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_EULAButton = { "EULAButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingAboutContextWidget, EULAButton), Z_Construct_UClass_UUMGSettingContextButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_EULAButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_EULAButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_CreditsButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::NewProp_EULAButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSettingAboutContextWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::ClassParams = {
		&UUMGSettingAboutContextWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSettingAboutContextWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSettingAboutContextWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSettingAboutContextWidget, 127161301);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSettingAboutContextWidget>()
	{
		return UUMGSettingAboutContextWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSettingAboutContextWidget(Z_Construct_UClass_UUMGSettingAboutContextWidget, &UUMGSettingAboutContextWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSettingAboutContextWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSettingAboutContextWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
