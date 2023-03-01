// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGDownloadProgressionWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGDownloadProgressionWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDownloadProgressionWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDownloadProgressionWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDownloadProgression();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGDownloadProgressionWidget::execUpdateProgression)
	{
		P_GET_STRUCT_REF(FDownloadProgression,Z_Param_Out_downloadProgression);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateProgression(Z_Param_Out_downloadProgression);
		P_NATIVE_END;
	}
	void UUMGDownloadProgressionWidget::StaticRegisterNativesUUMGDownloadProgressionWidget()
	{
		UClass* Class = UUMGDownloadProgressionWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateProgression", &UUMGDownloadProgressionWidget::execUpdateProgression },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics
	{
		struct UMGDownloadProgressionWidget_eventUpdateProgression_Parms
		{
			FDownloadProgression downloadProgression;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_downloadProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_downloadProgression;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::NewProp_downloadProgression_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::NewProp_downloadProgression = { "downloadProgression", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGDownloadProgressionWidget_eventUpdateProgression_Parms, downloadProgression), Z_Construct_UScriptStruct_FDownloadProgression, METADATA_PARAMS(Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::NewProp_downloadProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::NewProp_downloadProgression_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::NewProp_downloadProgression,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGDownloadProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGDownloadProgressionWidget, nullptr, "UpdateProgression", nullptr, nullptr, sizeof(UMGDownloadProgressionWidget_eventUpdateProgression_Parms), Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGDownloadProgressionWidget_NoRegister()
	{
		return UUMGDownloadProgressionWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownloadDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DownloadPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DownloadPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGDownloadProgressionWidget_UpdateProgression, "UpdateProgression" }, // 3300614632
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGDownloadProgressionWidget.h" },
		{ "ModuleRelativePath", "Public/UMGDownloadProgressionWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadDescription_MetaData[] = {
		{ "Category", "UMGDownloadProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGDownloadProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadDescription = { "DownloadDescription", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDownloadProgressionWidget, DownloadDescription), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadPercentage_MetaData[] = {
		{ "Category", "UMGDownloadProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGDownloadProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadPercentage = { "DownloadPercentage", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDownloadProgressionWidget, DownloadPercentage), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "Category", "UMGDownloadProgressionWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGDownloadProgressionWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGDownloadProgressionWidget, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_ProgressBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_DownloadPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::NewProp_ProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGDownloadProgressionWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::ClassParams = {
		&UUMGDownloadProgressionWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGDownloadProgressionWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGDownloadProgressionWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGDownloadProgressionWidget, 2235931350);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGDownloadProgressionWidget>()
	{
		return UUMGDownloadProgressionWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGDownloadProgressionWidget(Z_Construct_UClass_UUMGDownloadProgressionWidget, &UUMGDownloadProgressionWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGDownloadProgressionWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGDownloadProgressionWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
