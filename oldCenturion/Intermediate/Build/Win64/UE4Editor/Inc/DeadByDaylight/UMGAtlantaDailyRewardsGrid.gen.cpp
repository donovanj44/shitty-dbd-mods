// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaDailyRewardsGrid.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaDailyRewardsGrid() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUniformGridPanel_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGDailyRewardWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaDailyRewardsGrid::execPlayNextRewardIntroAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayNextRewardIntroAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaDailyRewardsGrid::execStartIntroSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartIntroSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaDailyRewardsGrid::execStartRewardsIntroRewardSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartRewardsIntroRewardSequence();
		P_NATIVE_END;
	}
	static FName NAME_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP = FName(TEXT("InitializeLayouts_BP"));
	void UUMGAtlantaDailyRewardsGrid::InitializeLayouts_BP()
	{
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP),NULL);
	}
	void UUMGAtlantaDailyRewardsGrid::StaticRegisterNativesUUMGAtlantaDailyRewardsGrid()
	{
		UClass* Class = UUMGAtlantaDailyRewardsGrid::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PlayNextRewardIntroAnimation", &UUMGAtlantaDailyRewardsGrid::execPlayNextRewardIntroAnimation },
			{ "StartIntroSequence", &UUMGAtlantaDailyRewardsGrid::execStartIntroSequence },
			{ "StartRewardsIntroRewardSequence", &UUMGAtlantaDailyRewardsGrid::execStartRewardsIntroRewardSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid, nullptr, "InitializeLayouts_BP", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_PlayNextRewardIntroAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_PlayNextRewardIntroAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_PlayNextRewardIntroAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid, nullptr, "PlayNextRewardIntroAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_PlayNextRewardIntroAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_PlayNextRewardIntroAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_PlayNextRewardIntroAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_PlayNextRewardIntroAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartIntroSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartIntroSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartIntroSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid, nullptr, "StartIntroSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartIntroSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartIntroSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartIntroSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartIntroSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartRewardsIntroRewardSequence_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartRewardsIntroRewardSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartRewardsIntroRewardSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid, nullptr, "StartRewardsIntroRewardSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartRewardsIntroRewardSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartRewardsIntroRewardSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartRewardsIntroRewardSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartRewardsIntroRewardSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_NoRegister()
	{
		return UUMGAtlantaDailyRewardsGrid::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumberOfItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumberOfItems;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDailyRewardWidgetPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LastDailyRewardWidgetPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyRewardWidgetsGridPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DailyRewardWidgetsGridPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallDailyRewardWidgetTemplate_type_13_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SmallDailyRewardWidgetTemplate_type_13;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallDailyRewardWidgetTemplate_type_9_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SmallDailyRewardWidgetTemplate_type_9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallDailyRewardWidgetTemplate_type_7_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_SmallDailyRewardWidgetTemplate_type_7;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigDailyRewardWidgetTemplate_type_13_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_BigDailyRewardWidgetTemplate_type_13;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigDailyRewardWidgetTemplate_type_9_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_BigDailyRewardWidgetTemplate_type_9;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BigDailyRewardWidgetTemplate_type_7_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_BigDailyRewardWidgetTemplate_type_7;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_InitializeLayouts_BP, "InitializeLayouts_BP" }, // 2736538347
		{ &Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_PlayNextRewardIntroAnimation, "PlayNextRewardIntroAnimation" }, // 1350998266
		{ &Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartIntroSequence, "StartIntroSequence" }, // 2760194199
		{ &Z_Construct_UFunction_UUMGAtlantaDailyRewardsGrid_StartRewardsIntroRewardSequence, "StartRewardsIntroRewardSequence" }, // 2225996012
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaDailyRewardsGrid.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_NumberOfItems_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_NumberOfItems = { "NumberOfItems", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, NumberOfItems), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_NumberOfItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_NumberOfItems_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_LastDailyRewardWidgetPanel_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_LastDailyRewardWidgetPanel = { "LastDailyRewardWidgetPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, LastDailyRewardWidgetPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_LastDailyRewardWidgetPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_LastDailyRewardWidgetPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_DailyRewardWidgetsGridPanel_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_DailyRewardWidgetsGridPanel = { "DailyRewardWidgetsGridPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, DailyRewardWidgetsGridPanel), Z_Construct_UClass_UUniformGridPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_DailyRewardWidgetsGridPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_DailyRewardWidgetsGridPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_13_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_13 = { "SmallDailyRewardWidgetTemplate_type_13", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, SmallDailyRewardWidgetTemplate_type_13), Z_Construct_UClass_UUMGDailyRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_13_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_13_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_9_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_9 = { "SmallDailyRewardWidgetTemplate_type_9", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, SmallDailyRewardWidgetTemplate_type_9), Z_Construct_UClass_UUMGDailyRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_7_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_7 = { "SmallDailyRewardWidgetTemplate_type_7", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, SmallDailyRewardWidgetTemplate_type_7), Z_Construct_UClass_UUMGDailyRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_7_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_13_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_13 = { "BigDailyRewardWidgetTemplate_type_13", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, BigDailyRewardWidgetTemplate_type_13), Z_Construct_UClass_UUMGDailyRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_13_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_13_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_9_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_9 = { "BigDailyRewardWidgetTemplate_type_9", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, BigDailyRewardWidgetTemplate_type_9), Z_Construct_UClass_UUMGDailyRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_9_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_9_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_7_MetaData[] = {
		{ "Category", "UMGAtlantaDailyRewardsGrid" },
		{ "ModuleRelativePath", "Public/UMGAtlantaDailyRewardsGrid.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_7 = { "BigDailyRewardWidgetTemplate_type_7", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaDailyRewardsGrid, BigDailyRewardWidgetTemplate_type_7), Z_Construct_UClass_UUMGDailyRewardWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_7_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_7_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_NumberOfItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_LastDailyRewardWidgetPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_DailyRewardWidgetsGridPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_SmallDailyRewardWidgetTemplate_type_7,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_13,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_9,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::NewProp_BigDailyRewardWidgetTemplate_type_7,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaDailyRewardsGrid>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::ClassParams = {
		&UUMGAtlantaDailyRewardsGrid::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaDailyRewardsGrid, 920296172);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaDailyRewardsGrid>()
	{
		return UUMGAtlantaDailyRewardsGrid::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaDailyRewardsGrid(Z_Construct_UClass_UUMGAtlantaDailyRewardsGrid, &UUMGAtlantaDailyRewardsGrid::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaDailyRewardsGrid"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaDailyRewardsGrid);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
