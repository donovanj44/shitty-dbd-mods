// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGScoreAlertWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGScoreAlertWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGScoreAlertWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGScoreAlertWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseAlertWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory();
// End Cross Module References
	static FName NAME_UUMGScoreAlertWidget_UpdateWidget = FName(TEXT("UpdateWidget"));
	void UUMGScoreAlertWidget::UpdateWidget(EDBDScoreCategory scoreType, const FString& title, int32 scoreValue, float progress, FText const& defaultScoreText)
	{
		UMGScoreAlertWidget_eventUpdateWidget_Parms Parms;
		Parms.scoreType=scoreType;
		Parms.title=title;
		Parms.scoreValue=scoreValue;
		Parms.progress=progress;
		Parms.defaultScoreText=defaultScoreText;
		ProcessEvent(FindFunctionChecked(NAME_UUMGScoreAlertWidget_UpdateWidget),&Parms);
	}
	void UUMGScoreAlertWidget::StaticRegisterNativesUUMGScoreAlertWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_defaultScoreText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_defaultScoreText;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_scoreValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_scoreType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_scoreType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_defaultScoreText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_defaultScoreText = { "defaultScoreText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGScoreAlertWidget_eventUpdateWidget_Parms, defaultScoreText), METADATA_PARAMS(Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_defaultScoreText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_defaultScoreText_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGScoreAlertWidget_eventUpdateWidget_Parms, progress), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_scoreValue = { "scoreValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGScoreAlertWidget_eventUpdateWidget_Parms, scoreValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGScoreAlertWidget_eventUpdateWidget_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_scoreType = { "scoreType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGScoreAlertWidget_eventUpdateWidget_Parms, scoreType), Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_scoreType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_defaultScoreText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_progress,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_scoreValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_title,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_scoreType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::NewProp_scoreType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGScoreAlertWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGScoreAlertWidget, nullptr, "UpdateWidget", nullptr, nullptr, sizeof(UMGScoreAlertWidget_eventUpdateWidget_Parms), Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGScoreAlertWidget_NoRegister()
	{
		return UUMGScoreAlertWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGScoreAlertWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGScoreAlertWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGBaseAlertWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGScoreAlertWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGScoreAlertWidget_UpdateWidget, "UpdateWidget" }, // 2608901368
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGScoreAlertWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGScoreAlertWidget.h" },
		{ "ModuleRelativePath", "Public/UMGScoreAlertWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGScoreAlertWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGScoreAlertWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGScoreAlertWidget_Statics::ClassParams = {
		&UUMGScoreAlertWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGScoreAlertWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGScoreAlertWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGScoreAlertWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGScoreAlertWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGScoreAlertWidget, 2253106082);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGScoreAlertWidget>()
	{
		return UUMGScoreAlertWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGScoreAlertWidget(Z_Construct_UClass_UUMGScoreAlertWidget, &UUMGScoreAlertWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGScoreAlertWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGScoreAlertWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
