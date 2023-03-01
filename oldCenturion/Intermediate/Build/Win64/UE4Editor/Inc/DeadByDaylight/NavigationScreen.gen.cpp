// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NavigationScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavigationScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNavigationScreen();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UScreenBase();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	DEFINE_FUNCTION(UNavigationScreen::execOnCancelButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCancelButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnCharacterInfoClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterInfoClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnCharacterSwapArrowClick)
	{
		P_GET_UBOOL(Z_Param_isNext);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCharacterSwapArrowClick(Z_Param_isNext);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnChatInputMouseOver)
	{
		P_GET_UBOOL(Z_Param_isMouseOver);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnChatInputMouseOver(Z_Param_isMouseOver);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnCrowdPlayButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnCrowdPlayButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnDailyRitualsClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDailyRitualsClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnInviteFriendClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnInviteFriendClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnMatchMakingBanTimeout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMatchMakingBanTimeout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnMatchManagementButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnMatchManagementButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnPlayerInfoClick)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_playerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerInfoClick(Z_Param_playerId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnPlayerOptionSelected)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_krakenId);
		P_GET_PROPERTY(FStrProperty,Z_Param_playerId);
		P_GET_PROPERTY(FByteProperty,Z_Param_option);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPlayerOptionSelected(Z_Param_krakenId,Z_Param_playerId,Z_Param_option);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnReadyButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReadyButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnSendChatMsgButtonClick)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSendChatMsgButtonClick(Z_Param_message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnSettingsClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSettingsClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnStartButtonClick)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnStartButtonClick();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNavigationScreen::execOnToggleChatVisibility)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnToggleChatVisibility();
		P_NATIVE_END;
	}
	void UNavigationScreen::StaticRegisterNativesUNavigationScreen()
	{
		UClass* Class = UNavigationScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnCancelButtonClick", &UNavigationScreen::execOnCancelButtonClick },
			{ "OnCharacterInfoClick", &UNavigationScreen::execOnCharacterInfoClick },
			{ "OnCharacterSwapArrowClick", &UNavigationScreen::execOnCharacterSwapArrowClick },
			{ "OnChatInputMouseOver", &UNavigationScreen::execOnChatInputMouseOver },
			{ "OnCrowdPlayButtonClick", &UNavigationScreen::execOnCrowdPlayButtonClick },
			{ "OnDailyRitualsClick", &UNavigationScreen::execOnDailyRitualsClick },
			{ "OnInviteFriendClick", &UNavigationScreen::execOnInviteFriendClick },
			{ "OnMatchMakingBanTimeout", &UNavigationScreen::execOnMatchMakingBanTimeout },
			{ "OnMatchManagementButtonClick", &UNavigationScreen::execOnMatchManagementButtonClick },
			{ "OnPlayerInfoClick", &UNavigationScreen::execOnPlayerInfoClick },
			{ "OnPlayerOptionSelected", &UNavigationScreen::execOnPlayerOptionSelected },
			{ "OnReadyButtonClick", &UNavigationScreen::execOnReadyButtonClick },
			{ "OnSendChatMsgButtonClick", &UNavigationScreen::execOnSendChatMsgButtonClick },
			{ "OnSettingsClick", &UNavigationScreen::execOnSettingsClick },
			{ "OnStartButtonClick", &UNavigationScreen::execOnStartButtonClick },
			{ "OnToggleChatVisibility", &UNavigationScreen::execOnToggleChatVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnCancelButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnCancelButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnCancelButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnCancelButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnCancelButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnCancelButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnCancelButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnCancelButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnCharacterInfoClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnCharacterInfoClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnCharacterInfoClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnCharacterInfoClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnCharacterInfoClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnCharacterInfoClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnCharacterInfoClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnCharacterInfoClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics
	{
		struct NavigationScreen_eventOnCharacterSwapArrowClick_Parms
		{
			bool isNext;
		};
		static void NewProp_isNext_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isNext;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::NewProp_isNext_SetBit(void* Obj)
	{
		((NavigationScreen_eventOnCharacterSwapArrowClick_Parms*)Obj)->isNext = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::NewProp_isNext = { "isNext", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavigationScreen_eventOnCharacterSwapArrowClick_Parms), &Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::NewProp_isNext_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::NewProp_isNext,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnCharacterSwapArrowClick", nullptr, nullptr, sizeof(NavigationScreen_eventOnCharacterSwapArrowClick_Parms), Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics
	{
		struct NavigationScreen_eventOnChatInputMouseOver_Parms
		{
			bool isMouseOver;
		};
		static void NewProp_isMouseOver_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isMouseOver;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::NewProp_isMouseOver_SetBit(void* Obj)
	{
		((NavigationScreen_eventOnChatInputMouseOver_Parms*)Obj)->isMouseOver = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::NewProp_isMouseOver = { "isMouseOver", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NavigationScreen_eventOnChatInputMouseOver_Parms), &Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::NewProp_isMouseOver_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::NewProp_isMouseOver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnChatInputMouseOver", nullptr, nullptr, sizeof(NavigationScreen_eventOnChatInputMouseOver_Parms), Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnCrowdPlayButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnCrowdPlayButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnCrowdPlayButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnCrowdPlayButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnCrowdPlayButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnCrowdPlayButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnCrowdPlayButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnCrowdPlayButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnDailyRitualsClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnDailyRitualsClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnDailyRitualsClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnDailyRitualsClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnDailyRitualsClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnDailyRitualsClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnDailyRitualsClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnDailyRitualsClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnInviteFriendClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnInviteFriendClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnInviteFriendClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnInviteFriendClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnInviteFriendClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnInviteFriendClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnInviteFriendClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnInviteFriendClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnMatchMakingBanTimeout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnMatchMakingBanTimeout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnMatchMakingBanTimeout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnMatchMakingBanTimeout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnMatchMakingBanTimeout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnMatchMakingBanTimeout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnMatchMakingBanTimeout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnMatchMakingBanTimeout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnMatchManagementButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnMatchManagementButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnMatchManagementButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnMatchManagementButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnMatchManagementButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnMatchManagementButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnMatchManagementButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnMatchManagementButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics
	{
		struct NavigationScreen_eventOnPlayerInfoClick_Parms
		{
			int32 playerId;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_playerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationScreen_eventOnPlayerInfoClick_Parms, playerId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::NewProp_playerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnPlayerInfoClick", nullptr, nullptr, sizeof(NavigationScreen_eventOnPlayerInfoClick_Parms), Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics
	{
		struct NavigationScreen_eventOnPlayerOptionSelected_Parms
		{
			FString krakenId;
			FString playerId;
			uint8 option;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_option;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_playerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_playerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_krakenId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_krakenId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_option = { "option", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationScreen_eventOnPlayerOptionSelected_Parms, option), nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_playerId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_playerId = { "playerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationScreen_eventOnPlayerOptionSelected_Parms, playerId), METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_playerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_playerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_krakenId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_krakenId = { "krakenId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationScreen_eventOnPlayerOptionSelected_Parms, krakenId), METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_krakenId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_krakenId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_option,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_playerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::NewProp_krakenId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnPlayerOptionSelected", nullptr, nullptr, sizeof(NavigationScreen_eventOnPlayerOptionSelected_Parms), Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnReadyButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnReadyButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnReadyButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnReadyButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnReadyButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnReadyButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnReadyButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnReadyButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics
	{
		struct NavigationScreen_eventOnSendChatMsgButtonClick_Parms
		{
			FString message;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NavigationScreen_eventOnSendChatMsgButtonClick_Parms, message), METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnSendChatMsgButtonClick", nullptr, nullptr, sizeof(NavigationScreen_eventOnSendChatMsgButtonClick_Parms), Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnSettingsClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnSettingsClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnSettingsClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnSettingsClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnSettingsClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnSettingsClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnSettingsClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnSettingsClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnStartButtonClick_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnStartButtonClick_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnStartButtonClick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnStartButtonClick", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnStartButtonClick_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnStartButtonClick_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnStartButtonClick()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnStartButtonClick_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNavigationScreen_OnToggleChatVisibility_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNavigationScreen_OnToggleChatVisibility_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNavigationScreen_OnToggleChatVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNavigationScreen, nullptr, "OnToggleChatVisibility", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNavigationScreen_OnToggleChatVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNavigationScreen_OnToggleChatVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNavigationScreen_OnToggleChatVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNavigationScreen_OnToggleChatVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNavigationScreen_NoRegister()
	{
		return UNavigationScreen::StaticClass();
	}
	struct Z_Construct_UClass_UNavigationScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNavigationScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UScreenBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNavigationScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNavigationScreen_OnCancelButtonClick, "OnCancelButtonClick" }, // 1552525735
		{ &Z_Construct_UFunction_UNavigationScreen_OnCharacterInfoClick, "OnCharacterInfoClick" }, // 729845541
		{ &Z_Construct_UFunction_UNavigationScreen_OnCharacterSwapArrowClick, "OnCharacterSwapArrowClick" }, // 2955518305
		{ &Z_Construct_UFunction_UNavigationScreen_OnChatInputMouseOver, "OnChatInputMouseOver" }, // 1721809058
		{ &Z_Construct_UFunction_UNavigationScreen_OnCrowdPlayButtonClick, "OnCrowdPlayButtonClick" }, // 1545199324
		{ &Z_Construct_UFunction_UNavigationScreen_OnDailyRitualsClick, "OnDailyRitualsClick" }, // 2749917793
		{ &Z_Construct_UFunction_UNavigationScreen_OnInviteFriendClick, "OnInviteFriendClick" }, // 3698424553
		{ &Z_Construct_UFunction_UNavigationScreen_OnMatchMakingBanTimeout, "OnMatchMakingBanTimeout" }, // 967085474
		{ &Z_Construct_UFunction_UNavigationScreen_OnMatchManagementButtonClick, "OnMatchManagementButtonClick" }, // 2580463722
		{ &Z_Construct_UFunction_UNavigationScreen_OnPlayerInfoClick, "OnPlayerInfoClick" }, // 2489728514
		{ &Z_Construct_UFunction_UNavigationScreen_OnPlayerOptionSelected, "OnPlayerOptionSelected" }, // 725652285
		{ &Z_Construct_UFunction_UNavigationScreen_OnReadyButtonClick, "OnReadyButtonClick" }, // 225346654
		{ &Z_Construct_UFunction_UNavigationScreen_OnSendChatMsgButtonClick, "OnSendChatMsgButtonClick" }, // 3630925261
		{ &Z_Construct_UFunction_UNavigationScreen_OnSettingsClick, "OnSettingsClick" }, // 3325918690
		{ &Z_Construct_UFunction_UNavigationScreen_OnStartButtonClick, "OnStartButtonClick" }, // 3517108324
		{ &Z_Construct_UFunction_UNavigationScreen_OnToggleChatVisibility, "OnToggleChatVisibility" }, // 3210438666
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNavigationScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NavigationScreen.h" },
		{ "ModuleRelativePath", "Public/NavigationScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNavigationScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNavigationScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNavigationScreen_Statics::ClassParams = {
		&UNavigationScreen::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNavigationScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNavigationScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNavigationScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNavigationScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNavigationScreen, 4121842411);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNavigationScreen>()
	{
		return UNavigationScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNavigationScreen(Z_Construct_UClass_UNavigationScreen, &UNavigationScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNavigationScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNavigationScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
