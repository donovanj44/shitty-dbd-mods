// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGTallyPlayerLevelWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGTallyPlayerLevelWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyPlayerLevelWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyPlayerLevelWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGTallyListElementWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLevelData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRewardItemData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FXpBonusData();
// End Cross Module References
	DEFINE_FUNCTION(UUMGTallyPlayerLevelWidget::execGetFinalXp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFinalXp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyPlayerLevelWidget::execGetInitialXp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetInitialXp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyPlayerLevelWidget::execGetReachedLevels)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPlayerLevelData>*)Z_Param__Result=P_THIS->GetReachedLevels();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyPlayerLevelWidget::execGetRewardsEarned)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FRewardItemData>*)Z_Param__Result=P_THIS->GetRewardsEarned();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGTallyPlayerLevelWidget::execGetXpBonuses)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FXpBonusData>*)Z_Param__Result=P_THIS->GetXpBonuses();
		P_NATIVE_END;
	}
	static FName NAME_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp = FName(TEXT("OnSetFinalPlayerXp"));
	void UUMGTallyPlayerLevelWidget::OnSetFinalPlayerXp(int32 finalXp, TArray<FPlayerLevelData> const& reachedLevels, TArray<FXpBonusData> const& xpBonuses, TArray<FRewardItemData> const& rewardsEarned)
	{
		UMGTallyPlayerLevelWidget_eventOnSetFinalPlayerXp_Parms Parms;
		Parms.finalXp=finalXp;
		Parms.reachedLevels=reachedLevels;
		Parms.xpBonuses=xpBonuses;
		Parms.rewardsEarned=rewardsEarned;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp),&Parms);
	}
	static FName NAME_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp = FName(TEXT("OnSetInitialPlayerXp"));
	void UUMGTallyPlayerLevelWidget::OnSetInitialPlayerXp(int32 initialXp, FPlayerLevelData const& initialLevelData)
	{
		UMGTallyPlayerLevelWidget_eventOnSetInitialPlayerXp_Parms Parms;
		Parms.initialXp=initialXp;
		Parms.initialLevelData=initialLevelData;
		ProcessEvent(FindFunctionChecked(NAME_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp),&Parms);
	}
	void UUMGTallyPlayerLevelWidget::StaticRegisterNativesUUMGTallyPlayerLevelWidget()
	{
		UClass* Class = UUMGTallyPlayerLevelWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetFinalXp", &UUMGTallyPlayerLevelWidget::execGetFinalXp },
			{ "GetInitialXp", &UUMGTallyPlayerLevelWidget::execGetInitialXp },
			{ "GetReachedLevels", &UUMGTallyPlayerLevelWidget::execGetReachedLevels },
			{ "GetRewardsEarned", &UUMGTallyPlayerLevelWidget::execGetRewardsEarned },
			{ "GetXpBonuses", &UUMGTallyPlayerLevelWidget::execGetXpBonuses },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics
	{
		struct UMGTallyPlayerLevelWidget_eventGetFinalXp_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventGetFinalXp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyPlayerLevelWidget, nullptr, "GetFinalXp", nullptr, nullptr, sizeof(UMGTallyPlayerLevelWidget_eventGetFinalXp_Parms), Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics
	{
		struct UMGTallyPlayerLevelWidget_eventGetInitialXp_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventGetInitialXp_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyPlayerLevelWidget, nullptr, "GetInitialXp", nullptr, nullptr, sizeof(UMGTallyPlayerLevelWidget_eventGetInitialXp_Parms), Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics
	{
		struct UMGTallyPlayerLevelWidget_eventGetReachedLevels_Parms
		{
			TArray<FPlayerLevelData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventGetReachedLevels_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerLevelData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyPlayerLevelWidget, nullptr, "GetReachedLevels", nullptr, nullptr, sizeof(UMGTallyPlayerLevelWidget_eventGetReachedLevels_Parms), Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics
	{
		struct UMGTallyPlayerLevelWidget_eventGetRewardsEarned_Parms
		{
			TArray<FRewardItemData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventGetRewardsEarned_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardItemData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyPlayerLevelWidget, nullptr, "GetRewardsEarned", nullptr, nullptr, sizeof(UMGTallyPlayerLevelWidget_eventGetRewardsEarned_Parms), Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics
	{
		struct UMGTallyPlayerLevelWidget_eventGetXpBonuses_Parms
		{
			TArray<FXpBonusData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventGetXpBonuses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXpBonusData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyPlayerLevelWidget, nullptr, "GetXpBonuses", nullptr, nullptr, sizeof(UMGTallyPlayerLevelWidget_eventGetXpBonuses_Parms), Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rewardsEarned_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rewardsEarned;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rewardsEarned_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_xpBonuses_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_xpBonuses;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_xpBonuses_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_reachedLevels_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_reachedLevels;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_reachedLevels_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_finalXp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_rewardsEarned_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_rewardsEarned = { "rewardsEarned", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventOnSetFinalPlayerXp_Parms, rewardsEarned), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_rewardsEarned_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_rewardsEarned_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_rewardsEarned_Inner = { "rewardsEarned", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRewardItemData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_xpBonuses_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_xpBonuses = { "xpBonuses", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventOnSetFinalPlayerXp_Parms, xpBonuses), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_xpBonuses_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_xpBonuses_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_xpBonuses_Inner = { "xpBonuses", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FXpBonusData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_reachedLevels_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_reachedLevels = { "reachedLevels", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventOnSetFinalPlayerXp_Parms, reachedLevels), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_reachedLevels_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_reachedLevels_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_reachedLevels_Inner = { "reachedLevels", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPlayerLevelData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_finalXp = { "finalXp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventOnSetFinalPlayerXp_Parms, finalXp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_rewardsEarned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_rewardsEarned_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_xpBonuses,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_xpBonuses_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_reachedLevels,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_reachedLevels_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::NewProp_finalXp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyPlayerLevelWidget, nullptr, "OnSetFinalPlayerXp", nullptr, nullptr, sizeof(UMGTallyPlayerLevelWidget_eventOnSetFinalPlayerXp_Parms), Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_initialLevelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_initialLevelData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_initialXp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::NewProp_initialLevelData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::NewProp_initialLevelData = { "initialLevelData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventOnSetInitialPlayerXp_Parms, initialLevelData), Z_Construct_UScriptStruct_FPlayerLevelData, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::NewProp_initialLevelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::NewProp_initialLevelData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::NewProp_initialXp = { "initialXp", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGTallyPlayerLevelWidget_eventOnSetInitialPlayerXp_Parms, initialXp), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::NewProp_initialLevelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::NewProp_initialXp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGTallyPlayerLevelWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGTallyPlayerLevelWidget, nullptr, "OnSetInitialPlayerXp", nullptr, nullptr, sizeof(UMGTallyPlayerLevelWidget_eventOnSetInitialPlayerXp_Parms), Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGTallyPlayerLevelWidget_NoRegister()
	{
		return UUMGTallyPlayerLevelWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGTallyListElementWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetFinalXp, "GetFinalXp" }, // 1734773755
		{ &Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetInitialXp, "GetInitialXp" }, // 424568622
		{ &Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetReachedLevels, "GetReachedLevels" }, // 3645763602
		{ &Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetRewardsEarned, "GetRewardsEarned" }, // 4221312640
		{ &Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_GetXpBonuses, "GetXpBonuses" }, // 2031479095
		{ &Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetFinalPlayerXp, "OnSetFinalPlayerXp" }, // 747711381
		{ &Z_Construct_UFunction_UUMGTallyPlayerLevelWidget_OnSetInitialPlayerXp, "OnSetInitialPlayerXp" }, // 1374555113
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGTallyPlayerLevelWidget.h" },
		{ "ModuleRelativePath", "Public/UMGTallyPlayerLevelWidget.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGTallyPlayerLevelWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics::ClassParams = {
		&UUMGTallyPlayerLevelWidget::StaticClass,
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
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGTallyPlayerLevelWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGTallyPlayerLevelWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGTallyPlayerLevelWidget, 2721432768);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGTallyPlayerLevelWidget>()
	{
		return UUMGTallyPlayerLevelWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGTallyPlayerLevelWidget(Z_Construct_UClass_UUMGTallyPlayerLevelWidget, &UUMGTallyPlayerLevelWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGTallyPlayerLevelWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGTallyPlayerLevelWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
