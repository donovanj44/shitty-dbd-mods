// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MatchManagementScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMatchManagementScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMatchManagementScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UMatchManagementScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UMatchManagementScreen::execOnAddMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_mapId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAddMap(Z_Param_mapId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchManagementScreen::execOnAllowDlcSettingsClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnAllowDlcSettingsClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchManagementScreen::execOnApplyChangesClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnApplyChangesClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchManagementScreen::execOnBackButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnBackButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchManagementScreen::execOnItemsAndAddonsSettingsChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnItemsAndAddonsSettingsChange(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchManagementScreen::execOnOfferingsSettingsChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnOfferingsSettingsChange(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchManagementScreen::execOnPerksSettingsChange)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPerksSettingsChange(Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UMatchManagementScreen::execOnRemoveMap)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_mapId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnRemoveMap(Z_Param_mapId);
		P_NATIVE_END;
	}
	void UMatchManagementScreen::StaticRegisterNativesUMatchManagementScreen()
	{
		UClass* Class = UMatchManagementScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnAddMap", &UMatchManagementScreen::execOnAddMap },
			{ "OnAllowDlcSettingsClick", &UMatchManagementScreen::execOnAllowDlcSettingsClick },
			{ "OnApplyChangesClicked", &UMatchManagementScreen::execOnApplyChangesClicked },
			{ "OnBackButtonClick", &UMatchManagementScreen::execOnBackButtonClick },
			{ "OnItemsAndAddonsSettingsChange", &UMatchManagementScreen::execOnItemsAndAddonsSettingsChange },
			{ "OnOfferingsSettingsChange", &UMatchManagementScreen::execOnOfferingsSettingsChange },
			{ "OnPerksSettingsChange", &UMatchManagementScreen::execOnPerksSettingsChange },
			{ "OnRemoveMap", &UMatchManagementScreen::execOnRemoveMap },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics
	{
		struct MatchManagementScreen_eventOnAddMap_Parms
		{
			FString mapId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mapId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::NewProp_mapId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::NewProp_mapId = { "mapId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchManagementScreen_eventOnAddMap_Parms, mapId), METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::NewProp_mapId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::NewProp_mapId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::NewProp_mapId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchManagementScreen, nullptr, "OnAddMap", nullptr, nullptr, sizeof(MatchManagementScreen_eventOnAddMap_Parms), Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchManagementScreen_OnAddMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchManagementScreen_OnAddMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchManagementScreen_OnAllowDlcSettingsClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnAllowDlcSettingsClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchManagementScreen_OnAllowDlcSettingsClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchManagementScreen, nullptr, "OnAllowDlcSettingsClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnAllowDlcSettingsClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnAllowDlcSettingsClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchManagementScreen_OnAllowDlcSettingsClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchManagementScreen_OnAllowDlcSettingsClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchManagementScreen_OnApplyChangesClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnApplyChangesClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchManagementScreen_OnApplyChangesClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchManagementScreen, nullptr, "OnApplyChangesClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnApplyChangesClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnApplyChangesClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchManagementScreen_OnApplyChangesClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchManagementScreen_OnApplyChangesClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchManagementScreen_OnBackButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnBackButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchManagementScreen_OnBackButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchManagementScreen, nullptr, "OnBackButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnBackButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnBackButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchManagementScreen_OnBackButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchManagementScreen_OnBackButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics
	{
		struct MatchManagementScreen_eventOnItemsAndAddonsSettingsChange_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchManagementScreen_eventOnItemsAndAddonsSettingsChange_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchManagementScreen, nullptr, "OnItemsAndAddonsSettingsChange", nullptr, nullptr, sizeof(MatchManagementScreen_eventOnItemsAndAddonsSettingsChange_Parms), Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics
	{
		struct MatchManagementScreen_eventOnOfferingsSettingsChange_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchManagementScreen_eventOnOfferingsSettingsChange_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchManagementScreen, nullptr, "OnOfferingsSettingsChange", nullptr, nullptr, sizeof(MatchManagementScreen_eventOnOfferingsSettingsChange_Parms), Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics
	{
		struct MatchManagementScreen_eventOnPerksSettingsChange_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchManagementScreen_eventOnPerksSettingsChange_Parms, value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::NewProp_value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchManagementScreen, nullptr, "OnPerksSettingsChange", nullptr, nullptr, sizeof(MatchManagementScreen_eventOnPerksSettingsChange_Parms), Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics
	{
		struct MatchManagementScreen_eventOnRemoveMap_Parms
		{
			FString mapId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_mapId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_mapId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::NewProp_mapId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::NewProp_mapId = { "mapId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(MatchManagementScreen_eventOnRemoveMap_Parms, mapId), METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::NewProp_mapId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::NewProp_mapId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::NewProp_mapId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMatchManagementScreen, nullptr, "OnRemoveMap", nullptr, nullptr, sizeof(MatchManagementScreen_eventOnRemoveMap_Parms), Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMatchManagementScreen_NoRegister()
	{
		return UMatchManagementScreen::StaticClass();
	}
	struct Z_Construct_UClass_UMatchManagementScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMatchManagementScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMatchManagementScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMatchManagementScreen_OnAddMap, "OnAddMap" }, // 3322776612
		{ &Z_Construct_UFunction_UMatchManagementScreen_OnAllowDlcSettingsClick, "OnAllowDlcSettingsClick" }, // 1889248685
		{ &Z_Construct_UFunction_UMatchManagementScreen_OnApplyChangesClicked, "OnApplyChangesClicked" }, // 1276269945
		{ &Z_Construct_UFunction_UMatchManagementScreen_OnBackButtonClick, "OnBackButtonClick" }, // 1495331967
		{ &Z_Construct_UFunction_UMatchManagementScreen_OnItemsAndAddonsSettingsChange, "OnItemsAndAddonsSettingsChange" }, // 476012600
		{ &Z_Construct_UFunction_UMatchManagementScreen_OnOfferingsSettingsChange, "OnOfferingsSettingsChange" }, // 1897512276
		{ &Z_Construct_UFunction_UMatchManagementScreen_OnPerksSettingsChange, "OnPerksSettingsChange" }, // 4292469819
		{ &Z_Construct_UFunction_UMatchManagementScreen_OnRemoveMap, "OnRemoveMap" }, // 557739534
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMatchManagementScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MatchManagementScreen.h" },
		{ "ModuleRelativePath", "Public/MatchManagementScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMatchManagementScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMatchManagementScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMatchManagementScreen_Statics::ClassParams = {
		&UMatchManagementScreen::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMatchManagementScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMatchManagementScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMatchManagementScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMatchManagementScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMatchManagementScreen, 4215151697);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UMatchManagementScreen>()
	{
		return UMatchManagementScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMatchManagementScreen(Z_Construct_UClass_UMatchManagementScreen, &UMatchManagementScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UMatchManagementScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMatchManagementScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
