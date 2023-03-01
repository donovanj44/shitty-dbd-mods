// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyRankWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyRankWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyListElementWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTallyScorePipsData();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyRankBanner_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTallyRankWidget::execGetEmblems)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UUMGTallyEmblemWidget*>*)Z_Param__Result=P_THIS->GetEmblems();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyRankWidget::execGetScoreData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FTallyScorePipsData*)Z_Param__Result=P_THIS->GetScoreData();
		P_NATIVE_END;
	}
	void UUMGTallyRankWidget::StaticRegisterNativesUUMGTallyRankWidget()
	{
		UClass* Class = UUMGTallyRankWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetEmblems", &UUMGTallyRankWidget::execGetEmblems },
			{ "GetScoreData", &UUMGTallyRankWidget::execGetScoreData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics
	{
		struct UMGTallyRankWidget_eventGetEmblems_Parms
		{
			TArray<UUMGTallyEmblemWidget*> ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyRankWidget_eventGetEmblems_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyRankWidget, nullptr, "GetEmblems", nullptr, nullptr, sizeof(UMGTallyRankWidget_eventGetEmblems_Parms), Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics
	{
		struct UMGTallyRankWidget_eventGetScoreData_Parms
		{
			FTallyScorePipsData ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyRankWidget_eventGetScoreData_Parms, ReturnValue), Z_Construct_UScriptStruct_FTallyScorePipsData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyRankWidget, nullptr, "GetScoreData", nullptr, nullptr, sizeof(UMGTallyRankWidget_eventGetScoreData_Parms), Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyRankWidget_NoRegister()
	{
		return UUMGTallyRankWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyRankWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scoreData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__scoreData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__emblems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__emblems;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__emblems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankProgressLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankProgressLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RankBanner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RankBanner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EmblemsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_EmblemWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__emblemsPadding_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__emblemsPadding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyRankWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGTallyListElementWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyRankWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyRankWidget_GetEmblems, "GetEmblems" }, // 549540655
		{ &Z_Construct_UFunction_UUMGTallyRankWidget_GetScoreData, "GetScoreData" }, // 3782713191
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyRankWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__scoreData_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__scoreData = { "_scoreData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankWidget, _scoreData), Z_Construct_UScriptStruct_FTallyScorePipsData, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__scoreData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__scoreData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblems_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblems = { "_emblems", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankWidget, _emblems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblems_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblems_Inner = { "_emblems", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankProgressLabel_MetaData[] = {
		{ "Category", "UMGTallyRankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankProgressLabel = { "RankProgressLabel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankWidget, RankProgressLabel), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankProgressLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankProgressLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankBanner_MetaData[] = {
		{ "Category", "UMGTallyRankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankBanner = { "RankBanner", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankWidget, RankBanner), Z_Construct_UClass_UUMGTallyRankBanner_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankBanner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankBanner_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "Category", "UMGTallyRankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankWidget, ProgressBar), Z_Construct_UClass_UUMGTallyProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_ProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemsContainer_MetaData[] = {
		{ "Category", "UMGTallyRankWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemsContainer = { "EmblemsContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankWidget, EmblemsContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemWidgetClass_MetaData[] = {
		{ "Category", "UMGTallyRankWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemWidgetClass = { "EmblemWidgetClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankWidget, EmblemWidgetClass), Z_Construct_UClass_UUMGTallyEmblemWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblemsPadding_MetaData[] = {
		{ "Category", "UMGTallyRankWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyRankWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblemsPadding = { "_emblemsPadding", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyRankWidget, _emblemsPadding), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblemsPadding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblemsPadding_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyRankWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__scoreData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankProgressLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_RankBanner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_ProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp_EmblemWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyRankWidget_Statics::NewProp__emblemsPadding,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyRankWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyRankWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyRankWidget_Statics::ClassParams = {
		&UUMGTallyRankWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyRankWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyRankWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyRankWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyRankWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyRankWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyRankWidget, 3499209039);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyRankWidget>()
	{
		return UUMGTallyRankWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyRankWidget(Z_Construct_UClass_UUMGTallyRankWidget, &UUMGTallyRankWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyRankWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyRankWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
