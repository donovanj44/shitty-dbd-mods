// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaRitualsScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaRitualsScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaRitualsScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaRitualsScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaRitualTab_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaRitualsScreen::execBroadcastOnBackButtonPressed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOnBackButtonPressed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaRitualsScreen::execBroadcastOnClaimRewardButtonPressed)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_ritualId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastOnClaimRewardButtonPressed(Z_Param_ritualId);
		P_NATIVE_END;
	}
	static FName NAME_UUMGAtlantaRitualsScreen_SetNewRitualNumbers = FName(TEXT("SetNewRitualNumbers"));
	void UUMGAtlantaRitualsScreen::SetNewRitualNumbers(int32 newDailyRitualNumber, int32 newWeeklyRitualNumber)
	{
		UMGAtlantaRitualsScreen_eventSetNewRitualNumbers_Parms Parms;
		Parms.newDailyRitualNumber=newDailyRitualNumber;
		Parms.newWeeklyRitualNumber=newWeeklyRitualNumber;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaRitualsScreen_SetNewRitualNumbers),&Parms);
	}
	void UUMGAtlantaRitualsScreen::StaticRegisterNativesUUMGAtlantaRitualsScreen()
	{
		UClass* Class = UUMGAtlantaRitualsScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastOnBackButtonPressed", &UUMGAtlantaRitualsScreen::execBroadcastOnBackButtonPressed },
			{ "BroadcastOnClaimRewardButtonPressed", &UUMGAtlantaRitualsScreen::execBroadcastOnClaimRewardButtonPressed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnBackButtonPressed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnBackButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnBackButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaRitualsScreen, nullptr, "BroadcastOnBackButtonPressed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnBackButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnBackButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnBackButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnBackButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics
	{
		struct UMGAtlantaRitualsScreen_eventBroadcastOnClaimRewardButtonPressed_Parms
		{
			int32 ritualId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ritualId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ritualId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::NewProp_ritualId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::NewProp_ritualId = { "ritualId", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaRitualsScreen_eventBroadcastOnClaimRewardButtonPressed_Parms, ritualId), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::NewProp_ritualId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::NewProp_ritualId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::NewProp_ritualId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaRitualsScreen, nullptr, "BroadcastOnClaimRewardButtonPressed", nullptr, nullptr, sizeof(UMGAtlantaRitualsScreen_eventBroadcastOnClaimRewardButtonPressed_Parms), Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newWeeklyRitualNumber;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_newDailyRitualNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::NewProp_newWeeklyRitualNumber = { "newWeeklyRitualNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaRitualsScreen_eventSetNewRitualNumbers_Parms, newWeeklyRitualNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::NewProp_newDailyRitualNumber = { "newDailyRitualNumber", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaRitualsScreen_eventSetNewRitualNumbers_Parms, newDailyRitualNumber), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::NewProp_newWeeklyRitualNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::NewProp_newDailyRitualNumber,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaRitualsScreen, nullptr, "SetNewRitualNumbers", nullptr, nullptr, sizeof(UMGAtlantaRitualsScreen_eventSetNewRitualNumbers_Parms), Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaRitualsScreen_NoRegister()
	{
		return UUMGAtlantaRitualsScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__weeklyRemainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__weeklyRemainingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dailyRemainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__dailyRemainingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__weeklyButtonLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__weeklyButtonLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dailyButtonLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__dailyButtonLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__endInLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__endInLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlantaRitualTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp__atlantaRitualTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeeklyTab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WeeklyTab;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DailyTab_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DailyTab;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnBackButtonPressed, "BroadcastOnBackButtonPressed" }, // 3612721780
		{ &Z_Construct_UFunction_UUMGAtlantaRitualsScreen_BroadcastOnClaimRewardButtonPressed, "BroadcastOnClaimRewardButtonPressed" }, // 1078041700
		{ &Z_Construct_UFunction_UUMGAtlantaRitualsScreen_SetNewRitualNumbers, "SetNewRitualNumbers" }, // 2027747836
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaRitualsScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyRemainingTime_MetaData[] = {
		{ "Category", "UMGAtlantaRitualsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyRemainingTime = { "_weeklyRemainingTime", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _weeklyRemainingTime), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyRemainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyRemainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyRemainingTime_MetaData[] = {
		{ "Category", "UMGAtlantaRitualsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyRemainingTime = { "_dailyRemainingTime", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _dailyRemainingTime), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyRemainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyRemainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyButtonLabel_MetaData[] = {
		{ "Category", "UMGAtlantaRitualsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyButtonLabel = { "_weeklyButtonLabel", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _weeklyButtonLabel), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyButtonLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyButtonLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyButtonLabel_MetaData[] = {
		{ "Category", "UMGAtlantaRitualsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyButtonLabel = { "_dailyButtonLabel", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _dailyButtonLabel), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyButtonLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyButtonLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__endInLabel_MetaData[] = {
		{ "Category", "UMGAtlantaRitualsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__endInLabel = { "_endInLabel", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _endInLabel), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__endInLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__endInLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__atlantaRitualTitle_MetaData[] = {
		{ "Category", "UMGAtlantaRitualsScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__atlantaRitualTitle = { "_atlantaRitualTitle", nullptr, (EPropertyFlags)0x0020080000000014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualsScreen, _atlantaRitualTitle), METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__atlantaRitualTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__atlantaRitualTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_WeeklyTab_MetaData[] = {
		{ "Category", "UMGAtlantaRitualsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_WeeklyTab = { "WeeklyTab", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualsScreen, WeeklyTab), Z_Construct_UClass_UUMGAtlantaRitualTab_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_WeeklyTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_WeeklyTab_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_DailyTab_MetaData[] = {
		{ "Category", "UMGAtlantaRitualsScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaRitualsScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_DailyTab = { "DailyTab", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaRitualsScreen, DailyTab), Z_Construct_UClass_UUMGAtlantaRitualTab_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_DailyTab_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_DailyTab_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyRemainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyRemainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__weeklyButtonLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__dailyButtonLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__endInLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp__atlantaRitualTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_WeeklyTab,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::NewProp_DailyTab,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaRitualsScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::ClassParams = {
		&UUMGAtlantaRitualsScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaRitualsScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaRitualsScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaRitualsScreen, 569721578);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaRitualsScreen>()
	{
		return UUMGAtlantaRitualsScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaRitualsScreen(Z_Construct_UClass_UUMGAtlantaRitualsScreen, &UUMGAtlantaRitualsScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaRitualsScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaRitualsScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
