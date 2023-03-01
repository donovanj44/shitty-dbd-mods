// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaSettingScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaSettingScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaSettingScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaSettingScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOverlayTabs();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextWidget_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingMenuButton_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleAimAssistToggleClick)
	{
		P_GET_UBOOL(Z_Param_toggleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAimAssistToggleClick(Z_Param_toggleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleAlwaysDisplayButtonClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tabIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAlwaysDisplayButtonClick(Z_Param_tabIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleContextButtonClickEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleContextButtonClickEvent(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleHandSideToggleClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleHandSideToggleClick(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleInteractionButtonToggleClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInteractionButtonToggleClick(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleInvertYToggleClick)
	{
		P_GET_UBOOL(Z_Param_toggleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInvertYToggleClick(Z_Param_toggleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleKillerCameraSensitivityChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleKillerCameraSensitivityChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleLanguageButtonClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLanguageButtonClick(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleLeaveButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLeaveButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleSettingTabClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tabIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSettingTabClick(Z_Param_tabIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaSettingScreen::execHandleSurvivorCameraSensitivityChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSurvivorCameraSensitivityChanged(Z_Param_value);
		P_NATIVE_END;
	}
	static FName NAME_UUMGAtlantaSettingScreen_SetRightTopTextInfo = FName(TEXT("SetRightTopTextInfo"));
	void UUMGAtlantaSettingScreen::SetRightTopTextInfo(FText const& title, const FString& content, ESlateVisibility textVisibility)
	{
		UMGAtlantaSettingScreen_eventSetRightTopTextInfo_Parms Parms;
		Parms.title=title;
		Parms.content=content;
		Parms.textVisibility=textVisibility;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaSettingScreen_SetRightTopTextInfo),&Parms);
	}
	static FName NAME_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup = FName(TEXT("ShowCreditsOrConsentsPopup"));
	void UUMGAtlantaSettingScreen::ShowCreditsOrConsentsPopup(const FString& title, const FString& content)
	{
		UMGAtlantaSettingScreen_eventShowCreditsOrConsentsPopup_Parms Parms;
		Parms.title=title;
		Parms.content=content;
		ProcessEvent(FindFunctionChecked(NAME_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup),&Parms);
	}
	void UUMGAtlantaSettingScreen::StaticRegisterNativesUUMGAtlantaSettingScreen()
	{
		UClass* Class = UUMGAtlantaSettingScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAimAssistToggleClick", &UUMGAtlantaSettingScreen::execHandleAimAssistToggleClick },
			{ "HandleAlwaysDisplayButtonClick", &UUMGAtlantaSettingScreen::execHandleAlwaysDisplayButtonClick },
			{ "HandleContextButtonClickEvent", &UUMGAtlantaSettingScreen::execHandleContextButtonClickEvent },
			{ "HandleHandSideToggleClick", &UUMGAtlantaSettingScreen::execHandleHandSideToggleClick },
			{ "HandleInteractionButtonToggleClick", &UUMGAtlantaSettingScreen::execHandleInteractionButtonToggleClick },
			{ "HandleInvertYToggleClick", &UUMGAtlantaSettingScreen::execHandleInvertYToggleClick },
			{ "HandleKillerCameraSensitivityChanged", &UUMGAtlantaSettingScreen::execHandleKillerCameraSensitivityChanged },
			{ "HandleLanguageButtonClick", &UUMGAtlantaSettingScreen::execHandleLanguageButtonClick },
			{ "HandleLeaveButtonClick", &UUMGAtlantaSettingScreen::execHandleLeaveButtonClick },
			{ "HandleSettingTabClick", &UUMGAtlantaSettingScreen::execHandleSettingTabClick },
			{ "HandleSurvivorCameraSensitivityChanged", &UUMGAtlantaSettingScreen::execHandleSurvivorCameraSensitivityChanged },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleAimAssistToggleClick_Parms
		{
			bool toggleValue;
		};
		static void NewProp_toggleValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toggleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::NewProp_toggleValue_SetBit(void* Obj)
	{
		((UMGAtlantaSettingScreen_eventHandleAimAssistToggleClick_Parms*)Obj)->toggleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::NewProp_toggleValue = { "toggleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaSettingScreen_eventHandleAimAssistToggleClick_Parms), &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::NewProp_toggleValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::NewProp_toggleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleAimAssistToggleClick", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleAimAssistToggleClick_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleAlwaysDisplayButtonClick_Parms
		{
			int32 tabIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::NewProp_tabIndex = { "tabIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventHandleAlwaysDisplayButtonClick_Parms, tabIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::NewProp_tabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleAlwaysDisplayButtonClick", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleAlwaysDisplayButtonClick_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleContextButtonClickEvent_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventHandleContextButtonClickEvent_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleContextButtonClickEvent", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleContextButtonClickEvent_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleHandSideToggleClick_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventHandleHandSideToggleClick_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleHandSideToggleClick", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleHandSideToggleClick_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleInteractionButtonToggleClick_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventHandleInteractionButtonToggleClick_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleInteractionButtonToggleClick", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleInteractionButtonToggleClick_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleInvertYToggleClick_Parms
		{
			bool toggleValue;
		};
		static void NewProp_toggleValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_toggleValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::NewProp_toggleValue_SetBit(void* Obj)
	{
		((UMGAtlantaSettingScreen_eventHandleInvertYToggleClick_Parms*)Obj)->toggleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::NewProp_toggleValue = { "toggleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaSettingScreen_eventHandleInvertYToggleClick_Parms), &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::NewProp_toggleValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::NewProp_toggleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleInvertYToggleClick", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleInvertYToggleClick_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleKillerCameraSensitivityChanged_Parms
		{
			int32 value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventHandleKillerCameraSensitivityChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleKillerCameraSensitivityChanged", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleKillerCameraSensitivityChanged_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleLanguageButtonClick_Parms
		{
			int32 index;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventHandleLanguageButtonClick_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleLanguageButtonClick", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleLanguageButtonClick_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLeaveButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLeaveButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLeaveButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleLeaveButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLeaveButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLeaveButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLeaveButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLeaveButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleSettingTabClick_Parms
		{
			int32 tabIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_tabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::NewProp_tabIndex = { "tabIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventHandleSettingTabClick_Parms, tabIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::NewProp_tabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleSettingTabClick", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleSettingTabClick_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics
	{
		struct UMGAtlantaSettingScreen_eventHandleSurvivorCameraSensitivityChanged_Parms
		{
			int32 value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventHandleSurvivorCameraSensitivityChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "HandleSurvivorCameraSensitivityChanged", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventHandleSurvivorCameraSensitivityChanged_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_textVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_textVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_textVisibility = { "textVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventSetRightTopTextInfo_Parms, textVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_textVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventSetRightTopTextInfo_Parms, content), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventSetRightTopTextInfo_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_textVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_textVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::NewProp_title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "SetRightTopTextInfo", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventSetRightTopTextInfo_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_content_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_content;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_title_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_title;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_content = { "content", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventShowCreditsOrConsentsPopup_Parms, content), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_content_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_content_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_title = { "title", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaSettingScreen_eventShowCreditsOrConsentsPopup_Parms, title), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_title_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_title_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_content,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::NewProp_title,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaSettingScreen, nullptr, "ShowCreditsOrConsentsPopup", nullptr, nullptr, sizeof(UMGAtlantaSettingScreen_eventShowCreditsOrConsentsPopup_Parms), Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaSettingScreen_NoRegister()
	{
		return UUMGAtlantaSettingScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__contextWidgetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__contextWidgetMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__contextWidgetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__contextWidgetMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__contextWidgetMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__overlayContextWidgetMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__overlayContextWidgetMap;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__overlayContextWidgetMap_Key_KeyProp;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__overlayContextWidgetMap_Key_KeyProp_Underlying;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__overlayContextWidgetMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__buttonBoxDividerAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp__buttonBoxDividerAsset;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__settingAlwaysDisplayButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__settingAlwaysDisplayButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__settingTabButtonClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__settingTabButtonClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AlwaysDisplayButtonBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AlwaysDisplayButtonBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingTabBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingTabBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingContextSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingContextSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAimAssistToggleClick, "HandleAimAssistToggleClick" }, // 3518023969
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleAlwaysDisplayButtonClick, "HandleAlwaysDisplayButtonClick" }, // 2635175253
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleContextButtonClickEvent, "HandleContextButtonClickEvent" }, // 730417267
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleHandSideToggleClick, "HandleHandSideToggleClick" }, // 3815395771
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInteractionButtonToggleClick, "HandleInteractionButtonToggleClick" }, // 1032819393
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleInvertYToggleClick, "HandleInvertYToggleClick" }, // 1738511557
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleKillerCameraSensitivityChanged, "HandleKillerCameraSensitivityChanged" }, // 1081034807
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLanguageButtonClick, "HandleLanguageButtonClick" }, // 1256061730
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleLeaveButtonClick, "HandleLeaveButtonClick" }, // 3202644915
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSettingTabClick, "HandleSettingTabClick" }, // 3073018557
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_HandleSurvivorCameraSensitivityChanged, "HandleSurvivorCameraSensitivityChanged" }, // 3242380817
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_SetRightTopTextInfo, "SetRightTopTextInfo" }, // 4293937505
		{ &Z_Construct_UFunction_UUMGAtlantaSettingScreen_ShowCreditsOrConsentsPopup, "ShowCreditsOrConsentsPopup" }, // 3274452220
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaSettingScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap = { "_contextWidgetMap", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSettingScreen, _contextWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_Key_KeyProp = { "_contextWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EOverlayTabs, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_ValueProp = { "_contextWidgetMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUMGSettingContextWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_MetaData[] = {
		{ "Category", "UMGAtlantaSettingScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap = { "_overlayContextWidgetMap", nullptr, (EPropertyFlags)0x0024080002002001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSettingScreen, _overlayContextWidgetMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_Key_KeyProp = { "_overlayContextWidgetMap_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EOverlayTabs, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_ValueProp = { "_overlayContextWidgetMap", nullptr, (EPropertyFlags)0x0004000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUMGSettingContextWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__buttonBoxDividerAsset_MetaData[] = {
		{ "Category", "UMGAtlantaSettingScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__buttonBoxDividerAsset = { "_buttonBoxDividerAsset", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSettingScreen, _buttonBoxDividerAsset), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__buttonBoxDividerAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__buttonBoxDividerAsset_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingAlwaysDisplayButtonClass_MetaData[] = {
		{ "Category", "UMGAtlantaSettingScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingAlwaysDisplayButtonClass = { "_settingAlwaysDisplayButtonClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSettingScreen, _settingAlwaysDisplayButtonClass), Z_Construct_UClass_UUMGSettingMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingAlwaysDisplayButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingAlwaysDisplayButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingTabButtonClass_MetaData[] = {
		{ "Category", "UMGAtlantaSettingScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingTabButtonClass = { "_settingTabButtonClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSettingScreen, _settingTabButtonClass), Z_Construct_UClass_UUMGSettingMenuButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingTabButtonClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingTabButtonClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_AlwaysDisplayButtonBox_MetaData[] = {
		{ "Category", "UMGAtlantaSettingScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_AlwaysDisplayButtonBox = { "AlwaysDisplayButtonBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSettingScreen, AlwaysDisplayButtonBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_AlwaysDisplayButtonBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_AlwaysDisplayButtonBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingTabBox_MetaData[] = {
		{ "Category", "UMGAtlantaSettingScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingTabBox = { "SettingTabBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSettingScreen, SettingTabBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingTabBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingTabBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingContextSwitcher_MetaData[] = {
		{ "Category", "UMGAtlantaSettingScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaSettingScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingContextSwitcher = { "SettingContextSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaSettingScreen, SettingContextSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingContextSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingContextSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__contextWidgetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_Key_KeyProp_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__overlayContextWidgetMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__buttonBoxDividerAsset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingAlwaysDisplayButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp__settingTabButtonClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_AlwaysDisplayButtonBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingTabBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::NewProp_SettingContextSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaSettingScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::ClassParams = {
		&UUMGAtlantaSettingScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::PropPointers),
		0,
		0x00A010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaSettingScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaSettingScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaSettingScreen, 1575565519);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaSettingScreen>()
	{
		return UUMGAtlantaSettingScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaSettingScreen(Z_Construct_UClass_UUMGAtlantaSettingScreen, &UUMGAtlantaSettingScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaSettingScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaSettingScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
