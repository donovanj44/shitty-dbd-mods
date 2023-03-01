// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGameUserSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGameUserSettings() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameUserSettings_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameUserSettings();
	ENGINE_API UClass* Z_Construct_UClass_UGameUserSettings();
	SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EColorVisionDeficiency();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputAxisKeyMapping();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionKeyMapping();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetColorBlindMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EColorVisionDeficiency*)Z_Param__Result=P_THIS->GetColorBlindMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetColorBlindModeIntensity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetColorBlindModeIntensity();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetDBDGameUserSettings)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UDBDGameUserSettings**)Z_Param__Result=UDBDGameUserSettings::GetDBDGameUserSettings();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetHUDKillerHookCountVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHUDKillerHookCountVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetHUDPlayerNamesVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHUDPlayerNamesVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetHudScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetHudScaleFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetHUDScoreEventsVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetHUDScoreEventsVisibility();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetLargeText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetLargeText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetMenuScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMenuScaleFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UDBDGameUserSettings::execGetSkillCheckScaleFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillCheckScaleFactor();
		P_NATIVE_END;
	}
	void UDBDGameUserSettings::StaticRegisterNativesUDBDGameUserSettings()
	{
		UClass* Class = UDBDGameUserSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetColorBlindMode", &UDBDGameUserSettings::execGetColorBlindMode },
			{ "GetColorBlindModeIntensity", &UDBDGameUserSettings::execGetColorBlindModeIntensity },
			{ "GetDBDGameUserSettings", &UDBDGameUserSettings::execGetDBDGameUserSettings },
			{ "GetHUDKillerHookCountVisibility", &UDBDGameUserSettings::execGetHUDKillerHookCountVisibility },
			{ "GetHUDPlayerNamesVisibility", &UDBDGameUserSettings::execGetHUDPlayerNamesVisibility },
			{ "GetHudScaleFactor", &UDBDGameUserSettings::execGetHudScaleFactor },
			{ "GetHUDScoreEventsVisibility", &UDBDGameUserSettings::execGetHUDScoreEventsVisibility },
			{ "GetLargeText", &UDBDGameUserSettings::execGetLargeText },
			{ "GetMenuScaleFactor", &UDBDGameUserSettings::execGetMenuScaleFactor },
			{ "GetSkillCheckScaleFactor", &UDBDGameUserSettings::execGetSkillCheckScaleFactor },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics
	{
		struct DBDGameUserSettings_eventGetColorBlindMode_Parms
		{
			EColorVisionDeficiency ReturnValue;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameUserSettings_eventGetColorBlindMode_Parms, ReturnValue), Z_Construct_UEnum_SlateCore_EColorVisionDeficiency, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::NewProp_ReturnValue_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetColorBlindMode", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetColorBlindMode_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics
	{
		struct DBDGameUserSettings_eventGetColorBlindModeIntensity_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameUserSettings_eventGetColorBlindModeIntensity_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetColorBlindModeIntensity", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetColorBlindModeIntensity_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics
	{
		struct DBDGameUserSettings_eventGetDBDGameUserSettings_Parms
		{
			UDBDGameUserSettings* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameUserSettings_eventGetDBDGameUserSettings_Parms, ReturnValue), Z_Construct_UClass_UDBDGameUserSettings_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetDBDGameUserSettings", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetDBDGameUserSettings_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics
	{
		struct DBDGameUserSettings_eventGetHUDKillerHookCountVisibility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDGameUserSettings_eventGetHUDKillerHookCountVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameUserSettings_eventGetHUDKillerHookCountVisibility_Parms), &Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetHUDKillerHookCountVisibility", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetHUDKillerHookCountVisibility_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics
	{
		struct DBDGameUserSettings_eventGetHUDPlayerNamesVisibility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDGameUserSettings_eventGetHUDPlayerNamesVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameUserSettings_eventGetHUDPlayerNamesVisibility_Parms), &Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetHUDPlayerNamesVisibility", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetHUDPlayerNamesVisibility_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics
	{
		struct DBDGameUserSettings_eventGetHudScaleFactor_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameUserSettings_eventGetHudScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetHudScaleFactor", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetHudScaleFactor_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics
	{
		struct DBDGameUserSettings_eventGetHUDScoreEventsVisibility_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDGameUserSettings_eventGetHUDScoreEventsVisibility_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameUserSettings_eventGetHUDScoreEventsVisibility_Parms), &Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetHUDScoreEventsVisibility", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetHUDScoreEventsVisibility_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics
	{
		struct DBDGameUserSettings_eventGetLargeText_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((DBDGameUserSettings_eventGetLargeText_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(DBDGameUserSettings_eventGetLargeText_Parms), &Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetLargeText", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetLargeText_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics
	{
		struct DBDGameUserSettings_eventGetMenuScaleFactor_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameUserSettings_eventGetMenuScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetMenuScaleFactor", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetMenuScaleFactor_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics
	{
		struct DBDGameUserSettings_eventGetSkillCheckScaleFactor_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(DBDGameUserSettings_eventGetSkillCheckScaleFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UDBDGameUserSettings, nullptr, "GetSkillCheckScaleFactor", nullptr, nullptr, sizeof(DBDGameUserSettings_eventGetSkillCheckScaleFactor_Parms), Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UDBDGameUserSettings_NoRegister()
	{
		return UDBDGameUserSettings::StaticClass();
	}
	struct Z_Construct_UClass_UDBDGameUserSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitlesSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesBackgroundOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SubtitlesBackgroundOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Subtitles_MetaData[];
#endif
		static void NewProp_Subtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Subtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BeginnerMode_MetaData[];
#endif
		static void NewProp_BeginnerMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BeginnerMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBlindModeIntensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorBlindModeIntensity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColorBlindMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ColorBlindMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyPrivacyState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PartyPrivacyState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowPortraitBorder_MetaData[];
#endif
		static void NewProp_ShowPortraitBorder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShowPortraitBorder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaCustomizedHuds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AtlantaCustomizedHuds;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AtlantaCustomizedHuds_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAtlantaKillerQuickTurn_MetaData[];
#endif
		static void NewProp_UseAtlantaKillerQuickTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAtlantaKillerQuickTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAtlantaSurvivorQuickTurn_MetaData[];
#endif
		static void NewProp_UseAtlantaSurvivorQuickTurn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAtlantaSurvivorQuickTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAtlantaCustomizedHuds_MetaData[];
#endif
		static void NewProp_UseAtlantaCustomizedHuds_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAtlantaCustomizedHuds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAcceptedCrossProgressionPopup_MetaData[];
#endif
		static void NewProp_HasAcceptedCrossProgressionPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAcceptedCrossProgressionPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasAcceptedCrossplayPopup_MetaData[];
#endif
		static void NewProp_HasAcceptedCrossplayPopup_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasAcceptedCrossplayPopup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArchivesAutoPlayVoiceOver_MetaData[];
#endif
		static void NewProp_ArchivesAutoPlayVoiceOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ArchivesAutoPlayVoiceOver;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastPanelContextId_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_LastPanelContextId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SharedLoginInformation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SharedLoginInformation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HighestWeightSeenNews_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HighestWeightSeenNews;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LanguageIsDefinedByPlayer_MetaData[];
#endif
		static void NewProp_LanguageIsDefinedByPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LanguageIsDefinedByPlayer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Language;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorInvertY_MetaData[];
#endif
		static void NewProp_SurvivorInvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SurvivorInvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertY_MetaData[];
#endif
		static void NewProp_InvertY_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlType_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ControlType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AimAssist_MetaData[];
#endif
		static void NewProp_AimAssist_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AimAssist;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorControllerSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorControllerSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerControllerSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillerControllerSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorMouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorMouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerMouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillerMouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorCameraSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SurvivorCameraSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerCameraSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_KillerCameraSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MuteOnFocusLost_MetaData[];
#endif
		static void NewProp_MuteOnFocusLost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MuteOnFocusLost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHeadphones_MetaData[];
#endif
		static void NewProp_UseHeadphones_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHeadphones;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuMusicVolumeOn_MetaData[];
#endif
		static void NewProp_MenuMusicVolumeOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MenuMusicVolumeOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuMusicVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MenuMusicVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainVolumeOn_MetaData[];
#endif
		static void NewProp_MainVolumeOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MainVolumeOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MainVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MainVolume;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FPSLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_FPSLimit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDScoreEventsVisibility_MetaData[];
#endif
		static void NewProp_HUDScoreEventsVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HUDScoreEventsVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDKillerHookCountVisibility_MetaData[];
#endif
		static void NewProp_HUDKillerHookCountVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HUDKillerHookCountVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDPlayerNamesVisibility_MetaData[];
#endif
		static void NewProp_HUDPlayerNamesVisibility_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HUDPlayerNamesVisibility;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargeText_MetaData[];
#endif
		static void NewProp_LargeText_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_LargeText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkillCheckScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SkillCheckScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HudScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_HudScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuScaleFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MenuScaleFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FullScreen_MetaData[];
#endif
		static void NewProp_FullScreen_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FullScreen;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoAdjust_MetaData[];
#endif
		static void NewProp_AutoAdjust_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoAdjust;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoScalabilitySet_MetaData[];
#endif
		static void NewProp_AutoScalabilitySet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoScalabilitySet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScalabilityLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScalabilityLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenScaleForWindowedMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenScaleForWindowedMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceLoginTokenID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceLoginTokenID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSetCustomizedHudsTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSetCustomizedHudsTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AxisMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AxisMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AxisMappings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActionMappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ActionMappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ActionMappings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDGameUserSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameUserSettings,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UDBDGameUserSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindMode, "GetColorBlindMode" }, // 2404402164
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetColorBlindModeIntensity, "GetColorBlindModeIntensity" }, // 3823073994
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetDBDGameUserSettings, "GetDBDGameUserSettings" }, // 4107308008
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetHUDKillerHookCountVisibility, "GetHUDKillerHookCountVisibility" }, // 3353293673
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetHUDPlayerNamesVisibility, "GetHUDPlayerNamesVisibility" }, // 4254560143
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetHudScaleFactor, "GetHudScaleFactor" }, // 291308645
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetHUDScoreEventsVisibility, "GetHUDScoreEventsVisibility" }, // 7995828
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetLargeText, "GetLargeText" }, // 331446123
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetMenuScaleFactor, "GetMenuScaleFactor" }, // 686205021
		{ &Z_Construct_UFunction_UDBDGameUserSettings_GetSkillCheckScaleFactor, "GetSkillCheckScaleFactor" }, // 1150909417
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDGameUserSettings.h" },
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesSize = { "SubtitlesSize", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, SubtitlesSize), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity = { "SubtitlesBackgroundOpacity", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, SubtitlesBackgroundOpacity), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Subtitles_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Subtitles_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->Subtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Subtitles = { "Subtitles", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Subtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Subtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Subtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_BeginnerMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_BeginnerMode_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->BeginnerMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_BeginnerMode = { "BeginnerMode", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_BeginnerMode_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_BeginnerMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_BeginnerMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindModeIntensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindModeIntensity = { "ColorBlindModeIntensity", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, ColorBlindModeIntensity), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindModeIntensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindModeIntensity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindMode = { "ColorBlindMode", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, ColorBlindMode), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_PartyPrivacyState_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_PartyPrivacyState = { "PartyPrivacyState", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, PartyPrivacyState), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_PartyPrivacyState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_PartyPrivacyState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ShowPortraitBorder_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ShowPortraitBorder_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->ShowPortraitBorder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ShowPortraitBorder = { "ShowPortraitBorder", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ShowPortraitBorder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ShowPortraitBorder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ShowPortraitBorder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AtlantaCustomizedHuds_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AtlantaCustomizedHuds = { "AtlantaCustomizedHuds", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, AtlantaCustomizedHuds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AtlantaCustomizedHuds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AtlantaCustomizedHuds_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AtlantaCustomizedHuds_Inner = { "AtlantaCustomizedHuds", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaCustomizedHudSettings, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->UseAtlantaKillerQuickTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn = { "UseAtlantaKillerQuickTurn", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->UseAtlantaSurvivorQuickTurn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn = { "UseAtlantaSurvivorQuickTurn", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->UseAtlantaCustomizedHuds = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds = { "UseAtlantaCustomizedHuds", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->HasAcceptedCrossProgressionPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup = { "HasAcceptedCrossProgressionPopup", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->HasAcceptedCrossplayPopup = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup = { "HasAcceptedCrossplayPopup", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ArchivesAutoPlayVoiceOver_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ArchivesAutoPlayVoiceOver_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->ArchivesAutoPlayVoiceOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ArchivesAutoPlayVoiceOver = { "ArchivesAutoPlayVoiceOver", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ArchivesAutoPlayVoiceOver_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ArchivesAutoPlayVoiceOver_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ArchivesAutoPlayVoiceOver_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LastPanelContextId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LastPanelContextId = { "LastPanelContextId", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, LastPanelContextId), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LastPanelContextId_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LastPanelContextId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SharedLoginInformation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SharedLoginInformation = { "SharedLoginInformation", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, SharedLoginInformation), Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SharedLoginInformation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SharedLoginInformation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HighestWeightSeenNews_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HighestWeightSeenNews = { "HighestWeightSeenNews", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, HighestWeightSeenNews), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HighestWeightSeenNews_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HighestWeightSeenNews_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LanguageIsDefinedByPlayer_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LanguageIsDefinedByPlayer_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->LanguageIsDefinedByPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LanguageIsDefinedByPlayer = { "LanguageIsDefinedByPlayer", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LanguageIsDefinedByPlayer_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LanguageIsDefinedByPlayer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LanguageIsDefinedByPlayer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Language_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, Language), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Language_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Language_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorInvertY_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorInvertY_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->SurvivorInvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorInvertY = { "SurvivorInvertY", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorInvertY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorInvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorInvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_InvertY_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_InvertY_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->InvertY = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_InvertY = { "InvertY", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_InvertY_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_InvertY_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_InvertY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ControlType_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ControlType = { "ControlType", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, ControlType), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ControlType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ControlType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AimAssist_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AimAssist_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->AimAssist = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AimAssist = { "AimAssist", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AimAssist_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AimAssist_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AimAssist_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorControllerSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorControllerSensitivity = { "SurvivorControllerSensitivity", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, SurvivorControllerSensitivity), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorControllerSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorControllerSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerControllerSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerControllerSensitivity = { "KillerControllerSensitivity", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, KillerControllerSensitivity), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerControllerSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerControllerSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorMouseSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorMouseSensitivity = { "SurvivorMouseSensitivity", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, SurvivorMouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorMouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorMouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerMouseSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerMouseSensitivity = { "KillerMouseSensitivity", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, KillerMouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerMouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerMouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorCameraSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorCameraSensitivity = { "SurvivorCameraSensitivity", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, SurvivorCameraSensitivity), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorCameraSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorCameraSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerCameraSensitivity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerCameraSensitivity = { "KillerCameraSensitivity", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, KillerCameraSensitivity), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerCameraSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerCameraSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MuteOnFocusLost_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MuteOnFocusLost_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->MuteOnFocusLost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MuteOnFocusLost = { "MuteOnFocusLost", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MuteOnFocusLost_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MuteOnFocusLost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MuteOnFocusLost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseHeadphones_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseHeadphones_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->UseHeadphones = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseHeadphones = { "UseHeadphones", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseHeadphones_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseHeadphones_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseHeadphones_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolumeOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolumeOn_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->MenuMusicVolumeOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolumeOn = { "MenuMusicVolumeOn", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolumeOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolumeOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolumeOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolume = { "MenuMusicVolume", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, MenuMusicVolume), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolumeOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolumeOn_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->MainVolumeOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolumeOn = { "MainVolumeOn", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolumeOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolumeOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolumeOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolume_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolume = { "MainVolume", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, MainVolume), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolume_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FPSLimit_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FPSLimit = { "FPSLimit", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, FPSLimit), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FPSLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FPSLimit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDScoreEventsVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDScoreEventsVisibility_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->HUDScoreEventsVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDScoreEventsVisibility = { "HUDScoreEventsVisibility", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDScoreEventsVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDScoreEventsVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDScoreEventsVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->HUDKillerHookCountVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDKillerHookCountVisibility = { "HUDKillerHookCountVisibility", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDKillerHookCountVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->HUDPlayerNamesVisibility = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDPlayerNamesVisibility = { "HUDPlayerNamesVisibility", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDPlayerNamesVisibility_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LargeText_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LargeText_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->LargeText = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LargeText = { "LargeText", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LargeText_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LargeText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LargeText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SkillCheckScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SkillCheckScaleFactor = { "SkillCheckScaleFactor", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, SkillCheckScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SkillCheckScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SkillCheckScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HudScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HudScaleFactor = { "HudScaleFactor", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, HudScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HudScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HudScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuScaleFactor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuScaleFactor = { "MenuScaleFactor", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, MenuScaleFactor), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuScaleFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuScaleFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FullScreen_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FullScreen_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->FullScreen = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FullScreen = { "FullScreen", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FullScreen_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FullScreen_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FullScreen_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenResolution_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenResolution = { "ScreenResolution", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, ScreenResolution), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoAdjust_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoAdjust_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->AutoAdjust = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoAdjust = { "AutoAdjust", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoAdjust_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoAdjust_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoAdjust_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoScalabilitySet_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	void Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoScalabilitySet_SetBit(void* Obj)
	{
		((UDBDGameUserSettings*)Obj)->AutoScalabilitySet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoScalabilitySet = { "AutoScalabilitySet", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDBDGameUserSettings), &Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoScalabilitySet_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoScalabilitySet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoScalabilitySet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScalabilityLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScalabilityLevel = { "ScalabilityLevel", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, ScalabilityLevel), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScalabilityLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScalabilityLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenScaleForWindowedMode_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenScaleForWindowedMode = { "ScreenScaleForWindowedMode", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, ScreenScaleForWindowedMode), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenScaleForWindowedMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenScaleForWindowedMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_DeviceLoginTokenID_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_DeviceLoginTokenID = { "DeviceLoginTokenID", nullptr, (EPropertyFlags)0x0040000000004000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, DeviceLoginTokenID), METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_DeviceLoginTokenID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_DeviceLoginTokenID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_OnSetCustomizedHudsTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_OnSetCustomizedHudsTimestamp = { "OnSetCustomizedHudsTimestamp", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, OnSetCustomizedHudsTimestamp), Z_Construct_UDelegateFunction_DeadByDaylight_DBDGameUserSettingsOnSetCustomizedHudsTimestamp__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_OnSetCustomizedHudsTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_OnSetCustomizedHudsTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AxisMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AxisMappings = { "AxisMappings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, AxisMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AxisMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AxisMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AxisMappings_Inner = { "AxisMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputAxisKeyMapping, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ActionMappings_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDGameUserSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ActionMappings = { "ActionMappings", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDBDGameUserSettings, ActionMappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ActionMappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ActionMappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ActionMappings_Inner = { "ActionMappings", nullptr, (EPropertyFlags)0x0000000000004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInputActionKeyMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDBDGameUserSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SubtitlesBackgroundOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Subtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_BeginnerMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindModeIntensity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ColorBlindMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_PartyPrivacyState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ShowPortraitBorder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AtlantaCustomizedHuds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AtlantaCustomizedHuds_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaKillerQuickTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaSurvivorQuickTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseAtlantaCustomizedHuds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossProgressionPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HasAcceptedCrossplayPopup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ArchivesAutoPlayVoiceOver,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LastPanelContextId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SharedLoginInformation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HighestWeightSeenNews,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LanguageIsDefinedByPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_Language,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorInvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_InvertY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ControlType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AimAssist,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorControllerSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerControllerSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorMouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerMouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SurvivorCameraSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_KillerCameraSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MuteOnFocusLost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_UseHeadphones,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolumeOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuMusicVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolumeOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MainVolume,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FPSLimit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDScoreEventsVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDKillerHookCountVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HUDPlayerNamesVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_LargeText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_SkillCheckScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_HudScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_MenuScaleFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_FullScreen,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoAdjust,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AutoScalabilitySet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScalabilityLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ScreenScaleForWindowedMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_DeviceLoginTokenID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_OnSetCustomizedHudsTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AxisMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_AxisMappings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ActionMappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDBDGameUserSettings_Statics::NewProp_ActionMappings_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDGameUserSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDGameUserSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDGameUserSettings_Statics::ClassParams = {
		&UDBDGameUserSettings::StaticClass,
		"GameUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UDBDGameUserSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::PropPointers),
		0,
		0x409000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDGameUserSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameUserSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDGameUserSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDGameUserSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDGameUserSettings, 3101403502);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDGameUserSettings>()
	{
		return UDBDGameUserSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDGameUserSettings(Z_Construct_UClass_UDBDGameUserSettings, &UDBDGameUserSettings::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDGameUserSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDGameUserSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
