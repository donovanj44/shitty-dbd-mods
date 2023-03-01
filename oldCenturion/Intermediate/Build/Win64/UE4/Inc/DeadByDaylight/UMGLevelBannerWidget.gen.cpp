// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGLevelBannerWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGLevelBannerWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLevelBannerWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGLevelBannerWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHighlightable_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGLevelBannerWidget::execOnTooltipButtonLongPressEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTooltipButtonLongPressEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLevelBannerWidget::execSetInfo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerLevel);
		P_GET_PROPERTY(FIntProperty,Z_Param_playerPrestige);
		P_GET_PROPERTY(FIntProperty,Z_Param_currentExperience);
		P_GET_PROPERTY(FIntProperty,Z_Param_nextLevelExperience);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInfo(Z_Param_playerLevel,Z_Param_playerPrestige,Z_Param_currentExperience,Z_Param_nextLevelExperience);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLevelBannerWidget::execSetProgressBarValue)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_progress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProgressBarValue(Z_Param_progress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLevelBannerWidget::execStartHighlight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartHighlight();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGLevelBannerWidget::execStopHighlight)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopHighlight();
		P_NATIVE_END;
	}
	static FName NAME_UUMGLevelBannerWidget_SetExperienceVisibilityBP = FName(TEXT("SetExperienceVisibilityBP"));
	void UUMGLevelBannerWidget::SetExperienceVisibilityBP(bool isExperienceVisible, bool isBig)
	{
		UMGLevelBannerWidget_eventSetExperienceVisibilityBP_Parms Parms;
		Parms.isExperienceVisible=isExperienceVisible ? true : false;
		Parms.isBig=isBig ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLevelBannerWidget_SetExperienceVisibilityBP),&Parms);
	}
	static FName NAME_UUMGLevelBannerWidget_SetInfoBP = FName(TEXT("SetInfoBP"));
	void UUMGLevelBannerWidget::SetInfoBP(const int32 playerLevel, const int32 playerPrestige, const int32 currentExperience, const int32 nextLevelExperience)
	{
		UMGLevelBannerWidget_eventSetInfoBP_Parms Parms;
		Parms.playerLevel=playerLevel;
		Parms.playerPrestige=playerPrestige;
		Parms.currentExperience=currentExperience;
		Parms.nextLevelExperience=nextLevelExperience;
		ProcessEvent(FindFunctionChecked(NAME_UUMGLevelBannerWidget_SetInfoBP),&Parms);
	}
	void UUMGLevelBannerWidget::StaticRegisterNativesUUMGLevelBannerWidget()
	{
		UClass* Class = UUMGLevelBannerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnTooltipButtonLongPressEvent", &UUMGLevelBannerWidget::execOnTooltipButtonLongPressEvent },
			{ "SetInfo", &UUMGLevelBannerWidget::execSetInfo },
			{ "SetProgressBarValue", &UUMGLevelBannerWidget::execSetProgressBarValue },
			{ "StartHighlight", &UUMGLevelBannerWidget::execStartHighlight },
			{ "StopHighlight", &UUMGLevelBannerWidget::execStopHighlight },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGLevelBannerWidget_OnTooltipButtonLongPressEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_OnTooltipButtonLongPressEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLevelBannerWidget_OnTooltipButtonLongPressEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLevelBannerWidget, nullptr, "OnTooltipButtonLongPressEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_OnTooltipButtonLongPressEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_OnTooltipButtonLongPressEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLevelBannerWidget_OnTooltipButtonLongPressEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLevelBannerWidget_OnTooltipButtonLongPressEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isBig_MetaData[];
#endif
		static void NewProp_isBig_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isBig;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isExperienceVisible_MetaData[];
#endif
		static void NewProp_isExperienceVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isExperienceVisible;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isBig_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isBig_SetBit(void* Obj)
	{
		((UMGLevelBannerWidget_eventSetExperienceVisibilityBP_Parms*)Obj)->isBig = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isBig = { "isBig", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLevelBannerWidget_eventSetExperienceVisibilityBP_Parms), &Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isBig_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isBig_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isBig_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isExperienceVisible_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isExperienceVisible_SetBit(void* Obj)
	{
		((UMGLevelBannerWidget_eventSetExperienceVisibilityBP_Parms*)Obj)->isExperienceVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isExperienceVisible = { "isExperienceVisible", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGLevelBannerWidget_eventSetExperienceVisibilityBP_Parms), &Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isExperienceVisible_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isExperienceVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isExperienceVisible_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isBig,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::NewProp_isExperienceVisible,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLevelBannerWidget, nullptr, "SetExperienceVisibilityBP", nullptr, nullptr, sizeof(UMGLevelBannerWidget_eventSetExperienceVisibilityBP_Parms), Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics
	{
		struct UMGLevelBannerWidget_eventSetInfo_Parms
		{
			int32 playerLevel;
			int32 playerPrestige;
			int32 currentExperience;
			int32 nextLevelExperience;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextLevelExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_nextLevelExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPrestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerPrestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_nextLevelExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_nextLevelExperience = { "nextLevelExperience", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetInfo_Parms, nextLevelExperience), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_nextLevelExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_nextLevelExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_currentExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_currentExperience = { "currentExperience", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetInfo_Parms, currentExperience), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_currentExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_currentExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerPrestige_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerPrestige = { "playerPrestige", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetInfo_Parms, playerPrestige), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerPrestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerPrestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerLevel = { "playerLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetInfo_Parms, playerLevel), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_nextLevelExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_currentExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerPrestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::NewProp_playerLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLevelBannerWidget, nullptr, "SetInfo", nullptr, nullptr, sizeof(UMGLevelBannerWidget_eventSetInfo_Parms), Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_nextLevelExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_nextLevelExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_currentExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_currentExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerPrestige_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerPrestige;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_nextLevelExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_nextLevelExperience = { "nextLevelExperience", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetInfoBP_Parms, nextLevelExperience), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_nextLevelExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_nextLevelExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_currentExperience_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_currentExperience = { "currentExperience", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetInfoBP_Parms, currentExperience), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_currentExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_currentExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerPrestige_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerPrestige = { "playerPrestige", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetInfoBP_Parms, playerPrestige), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerPrestige_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerPrestige_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerLevel_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerLevel = { "playerLevel", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetInfoBP_Parms, playerLevel), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_nextLevelExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_currentExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerPrestige,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::NewProp_playerLevel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLevelBannerWidget, nullptr, "SetInfoBP", nullptr, nullptr, sizeof(UMGLevelBannerWidget_eventSetInfoBP_Parms), Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics
	{
		struct UMGLevelBannerWidget_eventSetProgressBarValue_Parms
		{
			float progress;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_progress_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_progress;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::NewProp_progress_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::NewProp_progress = { "progress", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGLevelBannerWidget_eventSetProgressBarValue_Parms, progress), METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::NewProp_progress_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::NewProp_progress_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::NewProp_progress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLevelBannerWidget, nullptr, "SetProgressBarValue", nullptr, nullptr, sizeof(UMGLevelBannerWidget_eventSetProgressBarValue_Parms), Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLevelBannerWidget_StartHighlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_StartHighlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLevelBannerWidget_StartHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLevelBannerWidget, nullptr, "StartHighlight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_StartHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_StartHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLevelBannerWidget_StartHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLevelBannerWidget_StartHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGLevelBannerWidget_StopHighlight_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGLevelBannerWidget_StopHighlight_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGLevelBannerWidget_StopHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGLevelBannerWidget, nullptr, "StopHighlight", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGLevelBannerWidget_StopHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGLevelBannerWidget_StopHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGLevelBannerWidget_StopHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGLevelBannerWidget_StopHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGLevelBannerWidget_NoRegister()
	{
		return UUMGLevelBannerWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGLevelBannerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipHighlightPicture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TooltipHighlightPicture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnLongPressSound_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OnLongPressSound;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPTextContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XPTextContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_XPProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_XPProgressBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerNextLevelExperienceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerNextLevelExperienceText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerCurrentExperienceText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerCurrentExperienceText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerDevotionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerDevotionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerLevelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerLevelText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TooltipButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TooltipButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGLevelBannerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGLevelBannerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGLevelBannerWidget_OnTooltipButtonLongPressEvent, "OnTooltipButtonLongPressEvent" }, // 945222185
		{ &Z_Construct_UFunction_UUMGLevelBannerWidget_SetExperienceVisibilityBP, "SetExperienceVisibilityBP" }, // 3995134756
		{ &Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfo, "SetInfo" }, // 1305132083
		{ &Z_Construct_UFunction_UUMGLevelBannerWidget_SetInfoBP, "SetInfoBP" }, // 259407052
		{ &Z_Construct_UFunction_UUMGLevelBannerWidget_SetProgressBarValue, "SetProgressBarValue" }, // 623818255
		{ &Z_Construct_UFunction_UUMGLevelBannerWidget_StartHighlight, "StartHighlight" }, // 183329498
		{ &Z_Construct_UFunction_UUMGLevelBannerWidget_StopHighlight, "StopHighlight" }, // 752552577
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGLevelBannerWidget.h" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipHighlightPicture_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipHighlightPicture = { "TooltipHighlightPicture", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, TooltipHighlightPicture), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipHighlightPicture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipHighlightPicture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_OnLongPressSound_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_OnLongPressSound = { "OnLongPressSound", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, OnLongPressSound), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_OnLongPressSound_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_OnLongPressSound_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPTextContainer_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPTextContainer = { "XPTextContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, XPTextContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPTextContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPTextContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPProgressBar_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPProgressBar = { "XPProgressBar", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, XPProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPProgressBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerNextLevelExperienceText_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerNextLevelExperienceText = { "PlayerNextLevelExperienceText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, PlayerNextLevelExperienceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerNextLevelExperienceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerNextLevelExperienceText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerCurrentExperienceText_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerCurrentExperienceText = { "PlayerCurrentExperienceText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, PlayerCurrentExperienceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerCurrentExperienceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerCurrentExperienceText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerDevotionText_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerDevotionText = { "PlayerDevotionText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, PlayerDevotionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerDevotionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerDevotionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerLevelText_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerLevelText = { "PlayerLevelText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, PlayerLevelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerLevelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerLevelText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipButton_MetaData[] = {
		{ "Category", "UMGLevelBannerWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGLevelBannerWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipButton = { "TooltipButton", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGLevelBannerWidget, TooltipButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGLevelBannerWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipHighlightPicture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_OnLongPressSound,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPTextContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_XPProgressBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerNextLevelExperienceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerCurrentExperienceText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerDevotionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_PlayerLevelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGLevelBannerWidget_Statics::NewProp_TooltipButton,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UHighlightable_NoRegister, (int32)VTABLE_OFFSET(UUMGLevelBannerWidget, IHighlightable), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGLevelBannerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGLevelBannerWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGLevelBannerWidget_Statics::ClassParams = {
		&UUMGLevelBannerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGLevelBannerWidget_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGLevelBannerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGLevelBannerWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGLevelBannerWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGLevelBannerWidget, 182058474);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGLevelBannerWidget>()
	{
		return UUMGLevelBannerWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGLevelBannerWidget(Z_Construct_UClass_UUMGLevelBannerWidget, &UUMGLevelBannerWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGLevelBannerWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGLevelBannerWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
