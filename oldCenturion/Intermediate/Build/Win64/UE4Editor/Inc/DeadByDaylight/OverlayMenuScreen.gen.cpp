// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OverlayMenuScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOverlayMenuScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOverlayMenuScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOverlayMenuScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameType();
// End Cross Module References
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnAimAssistClick)
	{
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAimAssistClick(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnAtlantaSettingButtonClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_buttonID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAtlantaSettingButtonClick(Z_Param_buttonID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnBackButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnCustomerSupportButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCustomerSupportButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnEULAButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnEULAButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnForumsButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnForumsButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnKillerCameraSensitivityChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnKillerCameraSensitivityChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnLanguageChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnLanguageChange(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnPlayerInfoClick)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerInfoClick(Z_Param_playerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnPrivacyPolicyButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrivacyPolicyButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnQuitButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnQuitButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnRequestKeyInput)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_GET_UBOOL(Z_Param_isAxis);
		P_GET_PROPERTY(FFloatProperty,Z_Param_scale);
		P_GET_PROPERTY(FStrProperty,Z_Param_key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRequestKeyInput(Z_Param_name,Z_Param_isAxis,Z_Param_scale,Z_Param_key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnResetDefaultKeybindings)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_keyBindingsData);
		P_GET_UBOOL(Z_Param_mustBeGamepadKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResetDefaultKeybindings(Z_Param_keyBindingsData,Z_Param_mustBeGamepadKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnResetDefaultSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnResetDefaultSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnSelectTab)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_tabIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSelectTab(Z_Param_tabIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnSettingsOptionButtonClicked)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsOptionButtonClicked(Z_Param_id);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnSettingsOptionCheckboxSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsOptionCheckboxSelected(Z_Param_id,Z_Param_isSelected);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnSettingsOptionIntValueChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_id);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsOptionIntValueChanged(Z_Param_id,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execOnSurvivorCameraSensitivityChanged)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSurvivorCameraSensitivityChanged(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UOverlayMenuScreen::execSetGameType)
	{
		P_GET_ENUM(EGameType,Z_Param_gameType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGameType(EGameType(Z_Param_gameType));
		P_NATIVE_END;
	}
	void UOverlayMenuScreen::StaticRegisterNativesUOverlayMenuScreen()
	{
		UClass* Class = UOverlayMenuScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAimAssistClick", &UOverlayMenuScreen::execOnAimAssistClick },
			{ "OnAtlantaSettingButtonClick", &UOverlayMenuScreen::execOnAtlantaSettingButtonClick },
			{ "OnBackButtonClick", &UOverlayMenuScreen::execOnBackButtonClick },
			{ "OnCustomerSupportButtonClick", &UOverlayMenuScreen::execOnCustomerSupportButtonClick },
			{ "OnEULAButtonClick", &UOverlayMenuScreen::execOnEULAButtonClick },
			{ "OnForumsButtonClick", &UOverlayMenuScreen::execOnForumsButtonClick },
			{ "OnKillerCameraSensitivityChanged", &UOverlayMenuScreen::execOnKillerCameraSensitivityChanged },
			{ "OnLanguageChange", &UOverlayMenuScreen::execOnLanguageChange },
			{ "OnPlayerInfoClick", &UOverlayMenuScreen::execOnPlayerInfoClick },
			{ "OnPrivacyPolicyButtonClick", &UOverlayMenuScreen::execOnPrivacyPolicyButtonClick },
			{ "OnQuitButtonClick", &UOverlayMenuScreen::execOnQuitButtonClick },
			{ "OnRequestKeyInput", &UOverlayMenuScreen::execOnRequestKeyInput },
			{ "OnResetDefaultKeybindings", &UOverlayMenuScreen::execOnResetDefaultKeybindings },
			{ "OnResetDefaultSettings", &UOverlayMenuScreen::execOnResetDefaultSettings },
			{ "OnSelectTab", &UOverlayMenuScreen::execOnSelectTab },
			{ "OnSettingsOptionButtonClicked", &UOverlayMenuScreen::execOnSettingsOptionButtonClicked },
			{ "OnSettingsOptionCheckboxSelected", &UOverlayMenuScreen::execOnSettingsOptionCheckboxSelected },
			{ "OnSettingsOptionIntValueChanged", &UOverlayMenuScreen::execOnSettingsOptionIntValueChanged },
			{ "OnSurvivorCameraSensitivityChanged", &UOverlayMenuScreen::execOnSurvivorCameraSensitivityChanged },
			{ "SetGameType", &UOverlayMenuScreen::execSetGameType },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics
	{
		struct OverlayMenuScreen_eventOnAimAssistClick_Parms
		{
			bool value;
		};
		static void NewProp_value_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::NewProp_value_SetBit(void* Obj)
	{
		((OverlayMenuScreen_eventOnAimAssistClick_Parms*)Obj)->value = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OverlayMenuScreen_eventOnAimAssistClick_Parms), &Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::NewProp_value_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnAimAssistClick", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnAimAssistClick_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics
	{
		struct OverlayMenuScreen_eventOnAtlantaSettingButtonClick_Parms
		{
			int32 buttonID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_buttonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::NewProp_buttonID = { "buttonID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnAtlantaSettingButtonClick_Parms, buttonID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::NewProp_buttonID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnAtlantaSettingButtonClick", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnAtlantaSettingButtonClick_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnBackButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnBackButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnBackButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnBackButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnBackButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnBackButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnBackButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnBackButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnCustomerSupportButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnCustomerSupportButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnCustomerSupportButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnCustomerSupportButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnCustomerSupportButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnCustomerSupportButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnCustomerSupportButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnCustomerSupportButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnEULAButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnEULAButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnEULAButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnEULAButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnEULAButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnEULAButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnEULAButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnEULAButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnForumsButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnForumsButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnForumsButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnForumsButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnForumsButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnForumsButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnForumsButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnForumsButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics
	{
		struct OverlayMenuScreen_eventOnKillerCameraSensitivityChanged_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnKillerCameraSensitivityChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnKillerCameraSensitivityChanged", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnKillerCameraSensitivityChanged_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics
	{
		struct OverlayMenuScreen_eventOnLanguageChange_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnLanguageChange_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnLanguageChange", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnLanguageChange_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics
	{
		struct OverlayMenuScreen_eventOnPlayerInfoClick_Parms
		{
			FString playerId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnPlayerInfoClick_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::NewProp_playerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnPlayerInfoClick", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnPlayerInfoClick_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnPrivacyPolicyButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnPrivacyPolicyButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnPrivacyPolicyButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnPrivacyPolicyButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnPrivacyPolicyButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnPrivacyPolicyButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnPrivacyPolicyButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnPrivacyPolicyButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnQuitButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnQuitButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnQuitButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnQuitButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnQuitButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnQuitButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnQuitButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnQuitButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics
	{
		struct OverlayMenuScreen_eventOnRequestKeyInput_Parms
		{
			FString name;
			bool isAxis;
			float scale;
			FString key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_key;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_scale;
		static void NewProp_isAxis_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isAxis;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnRequestKeyInput_Parms, key), METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_key_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_key_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_scale = { "scale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnRequestKeyInput_Parms, scale), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_isAxis_SetBit(void* Obj)
	{
		((OverlayMenuScreen_eventOnRequestKeyInput_Parms*)Obj)->isAxis = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_isAxis = { "isAxis", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OverlayMenuScreen_eventOnRequestKeyInput_Parms), &Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_isAxis_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_name_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnRequestKeyInput_Parms, name), METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_name_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_scale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_isAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnRequestKeyInput", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnRequestKeyInput_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics
	{
		struct OverlayMenuScreen_eventOnResetDefaultKeybindings_Parms
		{
			FString keyBindingsData;
			bool mustBeGamepadKey;
		};
		static void NewProp_mustBeGamepadKey_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_mustBeGamepadKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_keyBindingsData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_keyBindingsData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_mustBeGamepadKey_SetBit(void* Obj)
	{
		((OverlayMenuScreen_eventOnResetDefaultKeybindings_Parms*)Obj)->mustBeGamepadKey = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_mustBeGamepadKey = { "mustBeGamepadKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OverlayMenuScreen_eventOnResetDefaultKeybindings_Parms), &Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_mustBeGamepadKey_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_keyBindingsData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_keyBindingsData = { "keyBindingsData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnResetDefaultKeybindings_Parms, keyBindingsData), METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_keyBindingsData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_keyBindingsData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_mustBeGamepadKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::NewProp_keyBindingsData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnResetDefaultKeybindings", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnResetDefaultKeybindings_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnResetDefaultSettings", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics
	{
		struct OverlayMenuScreen_eventOnSelectTab_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::NewProp_tabIndex = { "tabIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnSelectTab_Parms, tabIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::NewProp_tabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnSelectTab", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnSelectTab_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics
	{
		struct OverlayMenuScreen_eventOnSettingsOptionButtonClicked_Parms
		{
			int32 id;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnSettingsOptionButtonClicked_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnSettingsOptionButtonClicked", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnSettingsOptionButtonClicked_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics
	{
		struct OverlayMenuScreen_eventOnSettingsOptionCheckboxSelected_Parms
		{
			int32 id;
			bool isSelected;
		};
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((OverlayMenuScreen_eventOnSettingsOptionCheckboxSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(OverlayMenuScreen_eventOnSettingsOptionCheckboxSelected_Parms), &Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnSettingsOptionCheckboxSelected_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::NewProp_isSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnSettingsOptionCheckboxSelected", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnSettingsOptionCheckboxSelected_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics
	{
		struct OverlayMenuScreen_eventOnSettingsOptionIntValueChanged_Parms
		{
			int32 id;
			int32 value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_value;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnSettingsOptionIntValueChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnSettingsOptionIntValueChanged_Parms, id), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::NewProp_value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::NewProp_id,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnSettingsOptionIntValueChanged", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnSettingsOptionIntValueChanged_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics
	{
		struct OverlayMenuScreen_eventOnSurvivorCameraSensitivityChanged_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventOnSurvivorCameraSensitivityChanged_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "OnSurvivorCameraSensitivityChanged", nullptr, nullptr, sizeof(OverlayMenuScreen_eventOnSurvivorCameraSensitivityChanged_Parms), Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics
	{
		struct OverlayMenuScreen_eventSetGameType_Parms
		{
			EGameType gameType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_gameType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_gameType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::NewProp_gameType = { "gameType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(OverlayMenuScreen_eventSetGameType_Parms, gameType), Z_Construct_UEnum_DeadByDaylight_EGameType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::NewProp_gameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::NewProp_gameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::NewProp_gameType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UOverlayMenuScreen, nullptr, "SetGameType", nullptr, nullptr, sizeof(OverlayMenuScreen_eventSetGameType_Parms), Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UOverlayMenuScreen_SetGameType()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UOverlayMenuScreen_SetGameType_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UOverlayMenuScreen_NoRegister()
	{
		return UOverlayMenuScreen::StaticClass();
	}
	struct Z_Construct_UClass_UOverlayMenuScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOverlayMenuScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UOverlayMenuScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnAimAssistClick, "OnAimAssistClick" }, // 1953766693
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnAtlantaSettingButtonClick, "OnAtlantaSettingButtonClick" }, // 1953752161
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnBackButtonClick, "OnBackButtonClick" }, // 254045727
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnCustomerSupportButtonClick, "OnCustomerSupportButtonClick" }, // 1774233219
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnEULAButtonClick, "OnEULAButtonClick" }, // 1101933286
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnForumsButtonClick, "OnForumsButtonClick" }, // 724770161
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnKillerCameraSensitivityChanged, "OnKillerCameraSensitivityChanged" }, // 2726991706
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnLanguageChange, "OnLanguageChange" }, // 538442435
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnPlayerInfoClick, "OnPlayerInfoClick" }, // 3977387857
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnPrivacyPolicyButtonClick, "OnPrivacyPolicyButtonClick" }, // 946375506
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnQuitButtonClick, "OnQuitButtonClick" }, // 3065434760
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnRequestKeyInput, "OnRequestKeyInput" }, // 2492801714
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultKeybindings, "OnResetDefaultKeybindings" }, // 3746290508
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnResetDefaultSettings, "OnResetDefaultSettings" }, // 787305117
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnSelectTab, "OnSelectTab" }, // 2358150403
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionButtonClicked, "OnSettingsOptionButtonClicked" }, // 3170591727
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionCheckboxSelected, "OnSettingsOptionCheckboxSelected" }, // 257624645
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnSettingsOptionIntValueChanged, "OnSettingsOptionIntValueChanged" }, // 1468592886
		{ &Z_Construct_UFunction_UOverlayMenuScreen_OnSurvivorCameraSensitivityChanged, "OnSurvivorCameraSensitivityChanged" }, // 474191475
		{ &Z_Construct_UFunction_UOverlayMenuScreen_SetGameType, "SetGameType" }, // 2171728604
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOverlayMenuScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OverlayMenuScreen.h" },
		{ "ModuleRelativePath", "Public/OverlayMenuScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOverlayMenuScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOverlayMenuScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOverlayMenuScreen_Statics::ClassParams = {
		&UOverlayMenuScreen::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOverlayMenuScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOverlayMenuScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOverlayMenuScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOverlayMenuScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOverlayMenuScreen, 2462109359);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOverlayMenuScreen>()
	{
		return UOverlayMenuScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOverlayMenuScreen(Z_Construct_UClass_UOverlayMenuScreen, &UOverlayMenuScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOverlayMenuScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOverlayMenuScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
