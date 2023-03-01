// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyBloodpointsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyBloodpointsWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyBloodpointsWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyBloodpointsWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyListElementWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTallyItemChangedData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScoreCategoryUIExtraData();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
// End Cross Module References
	static FName NAME_UUMGTallyBloodpointsWidget_ShowTallyItemWidget = FName(TEXT("ShowTallyItemWidget"));
	void UUMGTallyBloodpointsWidget::ShowTallyItemWidget(bool isShow)
	{
		UMGTallyBloodpointsWidget_eventShowTallyItemWidget_Parms Parms;
		Parms.isShow=isShow ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyBloodpointsWidget_ShowTallyItemWidget),&Parms);
	}
	static FName NAME_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget = FName(TEXT("UpdateTallyItemWidget"));
	void UUMGTallyBloodpointsWidget::UpdateTallyItemWidget(FTallyItemChangedData const& data)
	{
		UMGTallyBloodpointsWidget_eventUpdateTallyItemWidget_Parms Parms;
		Parms.data=data;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget),&Parms);
	}
	static FName NAME_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget = FName(TEXT("UpdateTallyRewardWidget"));
	void UUMGTallyBloodpointsWidget::UpdateTallyRewardWidget(const FString& rewardName, int32 existReward, int32 addReward)
	{
		UMGTallyBloodpointsWidget_eventUpdateTallyRewardWidget_Parms Parms;
		Parms.rewardName=rewardName;
		Parms.existReward=existReward;
		Parms.addReward=addReward;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget),&Parms);
	}
	static FName NAME_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints = FName(TEXT("UpdateTallyTotalBloodpoints"));
	void UUMGTallyBloodpointsWidget::UpdateTallyTotalBloodpoints(int32 totalValue)
	{
		UMGTallyBloodpointsWidget_eventUpdateTallyTotalBloodpoints_Parms Parms;
		Parms.totalValue=totalValue;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints),&Parms);
	}
	void UUMGTallyBloodpointsWidget::StaticRegisterNativesUUMGTallyBloodpointsWidget()
	{
	}
	struct Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics
	{
		static void NewProp_isShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::NewProp_isShow_SetBit(void* Obj)
	{
		((UMGTallyBloodpointsWidget_eventShowTallyItemWidget_Parms*)Obj)->isShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::NewProp_isShow = { "isShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGTallyBloodpointsWidget_eventShowTallyItemWidget_Parms), &Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::NewProp_isShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::NewProp_isShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyBloodpointsWidget, nullptr, "ShowTallyItemWidget", nullptr, nullptr, sizeof(UMGTallyBloodpointsWidget_eventShowTallyItemWidget_Parms), Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_data_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_data;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::NewProp_data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::NewProp_data = { "data", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyBloodpointsWidget_eventUpdateTallyItemWidget_Parms, data), Z_Construct_UScriptStruct_FTallyItemChangedData, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::NewProp_data_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::NewProp_data_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::NewProp_data,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyBloodpointsWidget, nullptr, "UpdateTallyItemWidget", nullptr, nullptr, sizeof(UMGTallyBloodpointsWidget_eventUpdateTallyItemWidget_Parms), Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_addReward;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_existReward;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_rewardName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_addReward = { "addReward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyBloodpointsWidget_eventUpdateTallyRewardWidget_Parms, addReward), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_existReward = { "existReward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyBloodpointsWidget_eventUpdateTallyRewardWidget_Parms, existReward), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_rewardName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_rewardName = { "rewardName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyBloodpointsWidget_eventUpdateTallyRewardWidget_Parms, rewardName), METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_rewardName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_rewardName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_addReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_existReward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::NewProp_rewardName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyBloodpointsWidget, nullptr, "UpdateTallyRewardWidget", nullptr, nullptr, sizeof(UMGTallyBloodpointsWidget_eventUpdateTallyRewardWidget_Parms), Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::NewProp_totalValue = { "totalValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyBloodpointsWidget_eventUpdateTallyTotalBloodpoints_Parms, totalValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::NewProp_totalValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyBloodpointsWidget, nullptr, "UpdateTallyTotalBloodpoints", nullptr, nullptr, sizeof(UMGTallyBloodpointsWidget_eventUpdateTallyTotalBloodpoints_Parms), Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyBloodpointsWidget_NoRegister()
	{
		return UUMGTallyBloodpointsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scoreCategoryExtraDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__scoreCategoryExtraDataMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__scoreCategoryExtraDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__scoreCategoryExtraDataMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__scoreCategoryExtraDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoxScoreCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BoxScoreCategory;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__labelItemTitleColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__labelItemTitleColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__labelItemAddOnTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__labelItemAddOnTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__labelItemTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__labelItemTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__labelTotalScore_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__labelTotalScore;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__itemBoxVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__itemBoxVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__itemBoxVisibility_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGTallyListElementWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyBloodpointsWidget_ShowTallyItemWidget, "ShowTallyItemWidget" }, // 1701594950
		{ &Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyItemWidget, "UpdateTallyItemWidget" }, // 893044323
		{ &Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyRewardWidget, "UpdateTallyRewardWidget" }, // 2207578029
		{ &Z_Construct_UFunction_UUMGTallyBloodpointsWidget_UpdateTallyTotalBloodpoints, "UpdateTallyTotalBloodpoints" }, // 3383682671
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyBloodpointsWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_MetaData[] = {
		{ "Category", "UMGTallyBloodpointsWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap = { "_scoreCategoryExtraDataMap", nullptr, (EPropertyFlags)0x0020080000002001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _scoreCategoryExtraDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_Key_KeyProp = { "_scoreCategoryExtraDataMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_ValueProp = { "_scoreCategoryExtraDataMap", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FScoreCategoryUIExtraData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp_BoxScoreCategory_MetaData[] = {
		{ "Category", "UMGTallyBloodpointsWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp_BoxScoreCategory = { "BoxScoreCategory", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBloodpointsWidget, BoxScoreCategory), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp_BoxScoreCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp_BoxScoreCategory_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitleColor_MetaData[] = {
		{ "Category", "UMGTallyBloodpointsWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitleColor = { "_labelItemTitleColor", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _labelItemTitleColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitleColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitleColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemAddOnTitle_MetaData[] = {
		{ "Category", "UMGTallyBloodpointsWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemAddOnTitle = { "_labelItemAddOnTitle", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _labelItemAddOnTitle), METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemAddOnTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemAddOnTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitle_MetaData[] = {
		{ "Category", "UMGTallyBloodpointsWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitle = { "_labelItemTitle", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _labelItemTitle), METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelTotalScore_MetaData[] = {
		{ "Category", "UMGTallyBloodpointsWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelTotalScore = { "_labelTotalScore", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _labelTotalScore), METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelTotalScore_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelTotalScore_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__itemBoxVisibility_MetaData[] = {
		{ "Category", "UMGTallyBloodpointsWidget" },
		{ "ModuleRelativePath", "Public/UMGTallyBloodpointsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__itemBoxVisibility = { "_itemBoxVisibility", nullptr, (EPropertyFlags)0x0020080000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGTallyBloodpointsWidget, _itemBoxVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__itemBoxVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__itemBoxVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__itemBoxVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__scoreCategoryExtraDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp_BoxScoreCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitleColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemAddOnTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelItemTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__labelTotalScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__itemBoxVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::NewProp__itemBoxVisibility_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyBloodpointsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::ClassParams = {
		&UUMGTallyBloodpointsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyBloodpointsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyBloodpointsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyBloodpointsWidget, 423263906);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyBloodpointsWidget>()
	{
		return UUMGTallyBloodpointsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyBloodpointsWidget(Z_Construct_UClass_UUMGTallyBloodpointsWidget, &UUMGTallyBloodpointsWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyBloodpointsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyBloodpointsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
