// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaFriendListScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaFriendListScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaFriendListScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaFriendListScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDUIVIEWSMOBILE_API UEnum* Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType();
	DBDUIVIEWSMOBILE_API UScriptStruct* Z_Construct_UScriptStruct_FActionOnFriend();
	UMG_API UClass* Z_Construct_UClass_UExpandableArea_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFriendWidgetList();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendTabButtonWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGRequestsListTabWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGSuggestionsListTabWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendListTabWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGFriendSearchBarWidget_NoRegister();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaFriendListScreen::execHandleCloseButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleCloseButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaFriendListScreen::execHandleContextualMenuAction)
	{
		P_GET_ENUM(EActionOnFriendType,Z_Param_action);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleContextualMenuAction(EActionOnFriendType(Z_Param_action));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaFriendListScreen::execHandleOnActionOnFriend)
	{
		P_GET_STRUCT_REF(FActionOnFriend,Z_Param_Out_actionOnFriend);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleOnActionOnFriend(Z_Param_Out_actionOnFriend);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaFriendListScreen::execHandleSearchButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSearchButtonClicked();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaFriendListScreen::execHandleSearchInputChanged)
	{
		P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_inputText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleSearchInputChanged(Z_Param_Out_inputText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaFriendListScreen::execHandleTabButtonClicked)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param_tabIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleTabButtonClicked(Z_Param_tabIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaFriendListScreen::execOnFinishedOutAnimation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnFinishedOutAnimation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaFriendListScreen::execVerifyReceivedFriendRequestFocus)
	{
		P_GET_OBJECT(UExpandableArea,Z_Param_expandableArea);
		P_GET_UBOOL(Z_Param_bIsExpanded);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->VerifyReceivedFriendRequestFocus(Z_Param_expandableArea,Z_Param_bIsExpanded);
		P_NATIVE_END;
	}
	void UUMGAtlantaFriendListScreen::StaticRegisterNativesUUMGAtlantaFriendListScreen()
	{
		UClass* Class = UUMGAtlantaFriendListScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleCloseButtonClicked", &UUMGAtlantaFriendListScreen::execHandleCloseButtonClicked },
			{ "HandleContextualMenuAction", &UUMGAtlantaFriendListScreen::execHandleContextualMenuAction },
			{ "HandleOnActionOnFriend", &UUMGAtlantaFriendListScreen::execHandleOnActionOnFriend },
			{ "HandleSearchButtonClicked", &UUMGAtlantaFriendListScreen::execHandleSearchButtonClicked },
			{ "HandleSearchInputChanged", &UUMGAtlantaFriendListScreen::execHandleSearchInputChanged },
			{ "HandleTabButtonClicked", &UUMGAtlantaFriendListScreen::execHandleTabButtonClicked },
			{ "OnFinishedOutAnimation", &UUMGAtlantaFriendListScreen::execOnFinishedOutAnimation },
			{ "VerifyReceivedFriendRequestFocus", &UUMGAtlantaFriendListScreen::execVerifyReceivedFriendRequestFocus },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleCloseButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleCloseButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleCloseButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFriendListScreen, nullptr, "HandleCloseButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleCloseButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleCloseButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleCloseButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleCloseButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics
	{
		struct UMGAtlantaFriendListScreen_eventHandleContextualMenuAction_Parms
		{
			EActionOnFriendType action;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_action;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_action_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::NewProp_action = { "action", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaFriendListScreen_eventHandleContextualMenuAction_Parms, action), Z_Construct_UEnum_DBDUIViewsMobile_EActionOnFriendType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::NewProp_action_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::NewProp_action,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::NewProp_action_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFriendListScreen, nullptr, "HandleContextualMenuAction", nullptr, nullptr, sizeof(UMGAtlantaFriendListScreen_eventHandleContextualMenuAction_Parms), Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics
	{
		struct UMGAtlantaFriendListScreen_eventHandleOnActionOnFriend_Parms
		{
			FActionOnFriend actionOnFriend;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_actionOnFriend_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_actionOnFriend;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::NewProp_actionOnFriend_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::NewProp_actionOnFriend = { "actionOnFriend", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaFriendListScreen_eventHandleOnActionOnFriend_Parms, actionOnFriend), Z_Construct_UScriptStruct_FActionOnFriend, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::NewProp_actionOnFriend_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::NewProp_actionOnFriend_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::NewProp_actionOnFriend,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFriendListScreen, nullptr, "HandleOnActionOnFriend", nullptr, nullptr, sizeof(UMGAtlantaFriendListScreen_eventHandleOnActionOnFriend_Parms), Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFriendListScreen, nullptr, "HandleSearchButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics
	{
		struct UMGAtlantaFriendListScreen_eventHandleSearchInputChanged_Parms
		{
			FText inputText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_inputText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_inputText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::NewProp_inputText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::NewProp_inputText = { "inputText", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaFriendListScreen_eventHandleSearchInputChanged_Parms, inputText), METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::NewProp_inputText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::NewProp_inputText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::NewProp_inputText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFriendListScreen, nullptr, "HandleSearchInputChanged", nullptr, nullptr, sizeof(UMGAtlantaFriendListScreen_eventHandleSearchInputChanged_Parms), Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics
	{
		struct UMGAtlantaFriendListScreen_eventHandleTabButtonClicked_Parms
		{
			uint8 tabIndex;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_tabIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::NewProp_tabIndex = { "tabIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaFriendListScreen_eventHandleTabButtonClicked_Parms, tabIndex), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::NewProp_tabIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFriendListScreen, nullptr, "HandleTabButtonClicked", nullptr, nullptr, sizeof(UMGAtlantaFriendListScreen_eventHandleTabButtonClicked_Parms), Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFriendListScreen_OnFinishedOutAnimation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_OnFinishedOutAnimation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_OnFinishedOutAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFriendListScreen, nullptr, "OnFinishedOutAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_OnFinishedOutAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_OnFinishedOutAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFriendListScreen_OnFinishedOutAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFriendListScreen_OnFinishedOutAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics
	{
		struct UMGAtlantaFriendListScreen_eventVerifyReceivedFriendRequestFocus_Parms
		{
			UExpandableArea* expandableArea;
			bool bIsExpanded;
		};
		static void NewProp_bIsExpanded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsExpanded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_expandableArea_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_expandableArea;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_bIsExpanded_SetBit(void* Obj)
	{
		((UMGAtlantaFriendListScreen_eventVerifyReceivedFriendRequestFocus_Parms*)Obj)->bIsExpanded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_bIsExpanded = { "bIsExpanded", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGAtlantaFriendListScreen_eventVerifyReceivedFriendRequestFocus_Parms), &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_bIsExpanded_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_expandableArea_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_expandableArea = { "expandableArea", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaFriendListScreen_eventVerifyReceivedFriendRequestFocus_Parms, expandableArea), Z_Construct_UClass_UExpandableArea_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_expandableArea_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_expandableArea_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_bIsExpanded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::NewProp_expandableArea,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaFriendListScreen, nullptr, "VerifyReceivedFriendRequestFocus", nullptr, nullptr, sizeof(UMGAtlantaFriendListScreen_eventVerifyReceivedFriendRequestFocus_Parms), Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaFriendListScreen_NoRegister()
	{
		return UUMGAtlantaFriendListScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__existingFriendInvitePartyWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__existingFriendInvitePartyWidget;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__existingFriendInvitePartyWidget_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__existingFriendInvitePartyWidget_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__existingFriendListWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__existingFriendListWidgets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__existingFriendListWidgets_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__existingFriendListWidgets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextualMenuConfirmDeclineAction_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ContextualMenuConfirmDeclineAction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContextualMenuInvite_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ContextualMenuInvite;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendPartyInviteWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_FriendPartyInviteWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsSuggestion_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_FriendsSuggestion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsSuggestionWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_FriendsSuggestionWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendRequestReceivedWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_FriendRequestReceivedWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestSentWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_RequestSentWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_FriendWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentContextualMenuWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentContextualMenuWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestsTabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestsTabButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuggestionsTabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuggestionsTabButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendsTabButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendsTabButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestListTabWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestListTabWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuggestionListTabWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SuggestionListTabWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendListTabWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendListTabWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonTabContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonTabContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchBar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloseButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CloseButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchFailureText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchFailureText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendSearchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendSearchResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestSentSearchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestSentSearchResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestReceivedSearchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestReceivedSearchResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonFriendSearchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NonFriendSearchResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SearchResultSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SearchResultSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ListSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ListSwitcher;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleCloseButtonClicked, "HandleCloseButtonClicked" }, // 1124238104
		{ &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleContextualMenuAction, "HandleContextualMenuAction" }, // 4192352889
		{ &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleOnActionOnFriend, "HandleOnActionOnFriend" }, // 3341185621
		{ &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchButtonClicked, "HandleSearchButtonClicked" }, // 3174827720
		{ &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleSearchInputChanged, "HandleSearchInputChanged" }, // 934151469
		{ &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_HandleTabButtonClicked, "HandleTabButtonClicked" }, // 1718445064
		{ &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_OnFinishedOutAnimation, "OnFinishedOutAnimation" }, // 3088521663
		{ &Z_Construct_UFunction_UUMGAtlantaFriendListScreen_VerifyReceivedFriendRequestFocus, "VerifyReceivedFriendRequestFocus" }, // 1002462367
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaFriendListScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget = { "_existingFriendInvitePartyWidget", nullptr, (EPropertyFlags)0x0040008000000008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, _existingFriendInvitePartyWidget), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget_Key_KeyProp = { "_existingFriendInvitePartyWidget_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget_ValueProp = { "_existingFriendInvitePartyWidget", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets = { "_existingFriendListWidgets", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, _existingFriendListWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets_Key_KeyProp = { "_existingFriendListWidgets_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets_ValueProp = { "_existingFriendListWidgets", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FFriendWidgetList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuConfirmDeclineAction_MetaData[] = {
		{ "Category", "UMGAtlantaFriendListScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuConfirmDeclineAction = { "ContextualMenuConfirmDeclineAction", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, ContextualMenuConfirmDeclineAction), Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuConfirmDeclineAction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuConfirmDeclineAction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuInvite_MetaData[] = {
		{ "Category", "UMGAtlantaFriendListScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuInvite = { "ContextualMenuInvite", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, ContextualMenuInvite), Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuInvite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuInvite_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendPartyInviteWidgetClass_MetaData[] = {
		{ "Category", "UMGAtlantaFriendListScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendPartyInviteWidgetClass = { "FriendPartyInviteWidgetClass", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendPartyInviteWidgetClass), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendPartyInviteWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendPartyInviteWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestion_MetaData[] = {
		{ "Category", "UMGAtlantaFriendListScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestion = { "FriendsSuggestion", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendsSuggestion), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestion_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestionWidget_MetaData[] = {
		{ "Category", "UMGAtlantaFriendListScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestionWidget = { "FriendsSuggestionWidget", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendsSuggestionWidget), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestionWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestionWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendRequestReceivedWidget_MetaData[] = {
		{ "Category", "UMGAtlantaFriendListScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendRequestReceivedWidget = { "FriendRequestReceivedWidget", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendRequestReceivedWidget), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendRequestReceivedWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendRequestReceivedWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentWidget_MetaData[] = {
		{ "Category", "UMGAtlantaFriendListScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentWidget = { "RequestSentWidget", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestSentWidget), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendWidget_MetaData[] = {
		{ "Category", "UMGAtlantaFriendListScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendWidget = { "FriendWidget", nullptr, (EPropertyFlags)0x0024080000000801, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendWidget), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CurrentContextualMenuWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CurrentContextualMenuWidget = { "CurrentContextualMenuWidget", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, CurrentContextualMenuWidget), Z_Construct_UClass_UUMGBaseFriendListContextualMenuWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CurrentContextualMenuWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CurrentContextualMenuWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestsTabButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestsTabButton = { "RequestsTabButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestsTabButton), Z_Construct_UClass_UUMGFriendTabButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestsTabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestsTabButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionsTabButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionsTabButton = { "SuggestionsTabButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SuggestionsTabButton), Z_Construct_UClass_UUMGFriendTabButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionsTabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionsTabButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsTabButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsTabButton = { "FriendsTabButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendsTabButton), Z_Construct_UClass_UUMGFriendTabButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsTabButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsTabButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestListTabWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestListTabWidget = { "RequestListTabWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestListTabWidget), Z_Construct_UClass_UUMGRequestsListTabWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestListTabWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestListTabWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionListTabWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionListTabWidget = { "SuggestionListTabWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SuggestionListTabWidget), Z_Construct_UClass_UUMGSuggestionsListTabWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionListTabWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionListTabWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendListTabWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendListTabWidget = { "FriendListTabWidget", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendListTabWidget), Z_Construct_UClass_UUMGFriendListTabWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendListTabWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendListTabWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ButtonTabContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ButtonTabContainer = { "ButtonTabContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, ButtonTabContainer), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ButtonTabContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ButtonTabContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchBar = { "SearchBar", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SearchBar), Z_Construct_UClass_UUMGFriendSearchBarWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchBar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CloseButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CloseButton = { "CloseButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, CloseButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CloseButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CloseButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchFailureText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchFailureText = { "SearchFailureText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SearchFailureText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchFailureText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchFailureText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendSearchResult_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendSearchResult = { "FriendSearchResult", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, FriendSearchResult), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendSearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendSearchResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentSearchResult_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentSearchResult = { "RequestSentSearchResult", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestSentSearchResult), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentSearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentSearchResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestReceivedSearchResult_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestReceivedSearchResult = { "RequestReceivedSearchResult", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, RequestReceivedSearchResult), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestReceivedSearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestReceivedSearchResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_NonFriendSearchResult_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_NonFriendSearchResult = { "NonFriendSearchResult", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, NonFriendSearchResult), Z_Construct_UClass_UUMGBaseFriendListElement_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_NonFriendSearchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_NonFriendSearchResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchResultSwitcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchResultSwitcher = { "SearchResultSwitcher", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, SearchResultSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchResultSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchResultSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ListSwitcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaFriendListScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ListSwitcher = { "ListSwitcher", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaFriendListScreen, ListSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ListSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ListSwitcher_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendInvitePartyWidget_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp__existingFriendListWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuConfirmDeclineAction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ContextualMenuInvite,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendPartyInviteWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsSuggestionWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendRequestReceivedWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CurrentContextualMenuWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestsTabButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionsTabButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendsTabButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestListTabWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SuggestionListTabWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendListTabWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ButtonTabContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchBar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_CloseButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchFailureText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_FriendSearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestSentSearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_RequestReceivedSearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_NonFriendSearchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_SearchResultSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::NewProp_ListSwitcher,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaFriendListScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::ClassParams = {
		&UUMGAtlantaFriendListScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaFriendListScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaFriendListScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaFriendListScreen, 2722171735);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaFriendListScreen>()
	{
		return UUMGAtlantaFriendListScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaFriendListScreen(Z_Construct_UClass_UUMGAtlantaFriendListScreen, &UUMGAtlantaFriendListScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaFriendListScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaFriendListScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
