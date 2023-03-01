// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSettingSettingsContextWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSettingSettingsContextWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingSettingsContextWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingSettingsContextWidget();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSettingContextWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleAutoDeclineFriendRequestToggleClick)
	{
		P_GET_UBOOL(Z_Param_toggleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleAutoDeclineFriendRequestToggleClick(Z_Param_toggleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleLeaveTutorialButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLeaveTutorialButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleLogInButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLogInButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleLogOutButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleLogOutButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleMainVolumeChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_sliderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMainVolumeChanged(Z_Param_sliderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleMainVolumeToggleClick)
	{
		P_GET_UBOOL(Z_Param_toggleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMainVolumeToggleClick(Z_Param_toggleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleMenuVolumeChanged)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_sliderValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMenuVolumeChanged(Z_Param_sliderValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleMenuVolumeToggleClick)
	{
		P_GET_UBOOL(Z_Param_toggleValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleMenuVolumeToggleClick(Z_Param_toggleValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGSettingSettingsContextWidget::execHandleUserCenterButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleUserCenterButtonClick();
		P_NATIVE_END;
	}
	static FName NAME_UUMGSettingSettingsContextWidget_ShowLinkAccountRow = FName(TEXT("ShowLinkAccountRow"));
	void UUMGSettingSettingsContextWidget::ShowLinkAccountRow(bool isShow)
	{
		UMGSettingSettingsContextWidget_eventShowLinkAccountRow_Parms Parms;
		Parms.isShow=isShow ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSettingSettingsContextWidget_ShowLinkAccountRow),&Parms);
	}
	void UUMGSettingSettingsContextWidget::StaticRegisterNativesUUMGSettingSettingsContextWidget()
	{
		UClass* Class = UUMGSettingSettingsContextWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleAutoDeclineFriendRequestToggleClick", &UUMGSettingSettingsContextWidget::execHandleAutoDeclineFriendRequestToggleClick },
			{ "HandleLeaveTutorialButtonClick", &UUMGSettingSettingsContextWidget::execHandleLeaveTutorialButtonClick },
			{ "HandleLogInButtonClick", &UUMGSettingSettingsContextWidget::execHandleLogInButtonClick },
			{ "HandleLogOutButtonClick", &UUMGSettingSettingsContextWidget::execHandleLogOutButtonClick },
			{ "HandleMainVolumeChanged", &UUMGSettingSettingsContextWidget::execHandleMainVolumeChanged },
			{ "HandleMainVolumeToggleClick", &UUMGSettingSettingsContextWidget::execHandleMainVolumeToggleClick },
			{ "HandleMenuVolumeChanged", &UUMGSettingSettingsContextWidget::execHandleMenuVolumeChanged },
			{ "HandleMenuVolumeToggleClick", &UUMGSettingSettingsContextWidget::execHandleMenuVolumeToggleClick },
			{ "HandleUserCenterButtonClick", &UUMGSettingSettingsContextWidget::execHandleUserCenterButtonClick },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics
	{
		struct UMGSettingSettingsContextWidget_eventHandleAutoDeclineFriendRequestToggleClick_Parms
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
	void Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::NewProp_toggleValue_SetBit(void* Obj)
	{
		((UMGSettingSettingsContextWidget_eventHandleAutoDeclineFriendRequestToggleClick_Parms*)Obj)->toggleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::NewProp_toggleValue = { "toggleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSettingSettingsContextWidget_eventHandleAutoDeclineFriendRequestToggleClick_Parms), &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::NewProp_toggleValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::NewProp_toggleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleAutoDeclineFriendRequestToggleClick", nullptr, nullptr, sizeof(UMGSettingSettingsContextWidget_eventHandleAutoDeclineFriendRequestToggleClick_Parms), Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLeaveTutorialButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLeaveTutorialButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLeaveTutorialButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleLeaveTutorialButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLeaveTutorialButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLeaveTutorialButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLeaveTutorialButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLeaveTutorialButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogInButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogInButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogInButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleLogInButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogInButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogInButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogInButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogInButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogOutButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogOutButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogOutButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleLogOutButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogOutButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogOutButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogOutButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogOutButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics
	{
		struct UMGSettingSettingsContextWidget_eventHandleMainVolumeChanged_Parms
		{
			float sliderValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sliderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::NewProp_sliderValue = { "sliderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingSettingsContextWidget_eventHandleMainVolumeChanged_Parms, sliderValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::NewProp_sliderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleMainVolumeChanged", nullptr, nullptr, sizeof(UMGSettingSettingsContextWidget_eventHandleMainVolumeChanged_Parms), Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics
	{
		struct UMGSettingSettingsContextWidget_eventHandleMainVolumeToggleClick_Parms
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
	void Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::NewProp_toggleValue_SetBit(void* Obj)
	{
		((UMGSettingSettingsContextWidget_eventHandleMainVolumeToggleClick_Parms*)Obj)->toggleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::NewProp_toggleValue = { "toggleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSettingSettingsContextWidget_eventHandleMainVolumeToggleClick_Parms), &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::NewProp_toggleValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::NewProp_toggleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleMainVolumeToggleClick", nullptr, nullptr, sizeof(UMGSettingSettingsContextWidget_eventHandleMainVolumeToggleClick_Parms), Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics
	{
		struct UMGSettingSettingsContextWidget_eventHandleMenuVolumeChanged_Parms
		{
			float sliderValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_sliderValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::NewProp_sliderValue = { "sliderValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGSettingSettingsContextWidget_eventHandleMenuVolumeChanged_Parms, sliderValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::NewProp_sliderValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleMenuVolumeChanged", nullptr, nullptr, sizeof(UMGSettingSettingsContextWidget_eventHandleMenuVolumeChanged_Parms), Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics
	{
		struct UMGSettingSettingsContextWidget_eventHandleMenuVolumeToggleClick_Parms
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
	void Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::NewProp_toggleValue_SetBit(void* Obj)
	{
		((UMGSettingSettingsContextWidget_eventHandleMenuVolumeToggleClick_Parms*)Obj)->toggleValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::NewProp_toggleValue = { "toggleValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSettingSettingsContextWidget_eventHandleMenuVolumeToggleClick_Parms), &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::NewProp_toggleValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::NewProp_toggleValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleMenuVolumeToggleClick", nullptr, nullptr, sizeof(UMGSettingSettingsContextWidget_eventHandleMenuVolumeToggleClick_Parms), Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleUserCenterButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleUserCenterButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleUserCenterButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "HandleUserCenterButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleUserCenterButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleUserCenterButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleUserCenterButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleUserCenterButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics
	{
		static void NewProp_isShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isShow;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::NewProp_isShow_SetBit(void* Obj)
	{
		((UMGSettingSettingsContextWidget_eventShowLinkAccountRow_Parms*)Obj)->isShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::NewProp_isShow = { "isShow", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSettingSettingsContextWidget_eventShowLinkAccountRow_Parms), &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::NewProp_isShow_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::NewProp_isShow,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSettingSettingsContextWidget, nullptr, "ShowLinkAccountRow", nullptr, nullptr, sizeof(UMGSettingSettingsContextWidget_eventShowLinkAccountRow_Parms), Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSettingSettingsContextWidget_NoRegister()
	{
		return UUMGSettingSettingsContextWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAutoDeclineFriendRequestOn_MetaData[];
#endif
		static void NewProp_IsAutoDeclineFriendRequestOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAutoDeclineFriendRequestOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLeaveTutorialButtonVisible_MetaData[];
#endif
		static void NewProp_IsLeaveTutorialButtonVisible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLeaveTutorialButtonVisible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsEnableUserCenterWithLoggedOut_MetaData[];
#endif
		static void NewProp_IsEnableUserCenterWithLoggedOut_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsEnableUserCenterWithLoggedOut;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsLoggedIn_MetaData[];
#endif
		static void NewProp_IsLoggedIn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsLoggedIn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MenuVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuVolumeOn_MetaData[];
#endif
		static void NewProp_MenuVolumeOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MenuVolumeOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MainVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainVolumeOn_MetaData[];
#endif
		static void NewProp_MainVolumeOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MainVolumeOn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGSettingContextWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleAutoDeclineFriendRequestToggleClick, "HandleAutoDeclineFriendRequestToggleClick" }, // 50426082
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLeaveTutorialButtonClick, "HandleLeaveTutorialButtonClick" }, // 1079842766
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogInButtonClick, "HandleLogInButtonClick" }, // 2858952833
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleLogOutButtonClick, "HandleLogOutButtonClick" }, // 2914748757
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeChanged, "HandleMainVolumeChanged" }, // 1223685535
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMainVolumeToggleClick, "HandleMainVolumeToggleClick" }, // 700053694
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeChanged, "HandleMenuVolumeChanged" }, // 1958641819
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleMenuVolumeToggleClick, "HandleMenuVolumeToggleClick" }, // 17962264
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_HandleUserCenterButtonClick, "HandleUserCenterButtonClick" }, // 1842990185
		{ &Z_Construct_UFunction_UUMGSettingSettingsContextWidget_ShowLinkAccountRow, "ShowLinkAccountRow" }, // 3652769804
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSettingSettingsContextWidget.h" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsAutoDeclineFriendRequestOn_MetaData[] = {
		{ "Category", "UMGSettingSettingsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsAutoDeclineFriendRequestOn_SetBit(void* Obj)
	{
		((UUMGSettingSettingsContextWidget*)Obj)->IsAutoDeclineFriendRequestOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsAutoDeclineFriendRequestOn = { "IsAutoDeclineFriendRequestOn", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGSettingSettingsContextWidget), &Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsAutoDeclineFriendRequestOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsAutoDeclineFriendRequestOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsAutoDeclineFriendRequestOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLeaveTutorialButtonVisible_MetaData[] = {
		{ "Category", "UMGSettingSettingsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLeaveTutorialButtonVisible_SetBit(void* Obj)
	{
		((UUMGSettingSettingsContextWidget*)Obj)->IsLeaveTutorialButtonVisible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLeaveTutorialButtonVisible = { "IsLeaveTutorialButtonVisible", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGSettingSettingsContextWidget), &Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLeaveTutorialButtonVisible_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLeaveTutorialButtonVisible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLeaveTutorialButtonVisible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsEnableUserCenterWithLoggedOut_MetaData[] = {
		{ "Category", "UMGSettingSettingsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsEnableUserCenterWithLoggedOut_SetBit(void* Obj)
	{
		((UUMGSettingSettingsContextWidget*)Obj)->IsEnableUserCenterWithLoggedOut = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsEnableUserCenterWithLoggedOut = { "IsEnableUserCenterWithLoggedOut", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGSettingSettingsContextWidget), &Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsEnableUserCenterWithLoggedOut_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsEnableUserCenterWithLoggedOut_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsEnableUserCenterWithLoggedOut_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLoggedIn_MetaData[] = {
		{ "Category", "UMGSettingSettingsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLoggedIn_SetBit(void* Obj)
	{
		((UUMGSettingSettingsContextWidget*)Obj)->IsLoggedIn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLoggedIn = { "IsLoggedIn", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGSettingSettingsContextWidget), &Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLoggedIn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLoggedIn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLoggedIn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolume_MetaData[] = {
		{ "Category", "UMGSettingSettingsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolume = { "MenuVolume", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingSettingsContextWidget, MenuVolume), METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolumeOn_MetaData[] = {
		{ "Category", "UMGSettingSettingsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolumeOn_SetBit(void* Obj)
	{
		((UUMGSettingSettingsContextWidget*)Obj)->MenuVolumeOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolumeOn = { "MenuVolumeOn", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGSettingSettingsContextWidget), &Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolumeOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolumeOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolumeOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolume_MetaData[] = {
		{ "Category", "UMGSettingSettingsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolume = { "MainVolume", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSettingSettingsContextWidget, MainVolume), METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolumeOn_MetaData[] = {
		{ "Category", "UMGSettingSettingsContextWidget" },
		{ "ModuleRelativePath", "Public/UMGSettingSettingsContextWidget.h" },
	};
#endif
	void Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolumeOn_SetBit(void* Obj)
	{
		((UUMGSettingSettingsContextWidget*)Obj)->MainVolumeOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolumeOn = { "MainVolumeOn", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UUMGSettingSettingsContextWidget), &Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolumeOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolumeOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolumeOn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsAutoDeclineFriendRequestOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLeaveTutorialButtonVisible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsEnableUserCenterWithLoggedOut,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_IsLoggedIn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MenuVolumeOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::NewProp_MainVolumeOn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSettingSettingsContextWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::ClassParams = {
		&UUMGSettingSettingsContextWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSettingSettingsContextWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSettingSettingsContextWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSettingSettingsContextWidget, 2394529462);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSettingSettingsContextWidget>()
	{
		return UUMGSettingSettingsContextWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSettingSettingsContextWidget(Z_Construct_UClass_UUMGSettingSettingsContextWidget, &UUMGSettingSettingsContextWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSettingSettingsContextWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSettingSettingsContextWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
