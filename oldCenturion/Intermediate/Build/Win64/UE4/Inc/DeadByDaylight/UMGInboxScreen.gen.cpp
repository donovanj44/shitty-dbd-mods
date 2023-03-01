// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGInboxScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGInboxScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInboxScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInboxScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInboxScreenButton();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGInboxMessageEntryWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInboxMessageUIData();
// End Cross Module References
	DEFINE_FUNCTION(UUMGInboxScreen::execButtonClickEvent)
	{
		P_GET_ENUM(EInboxScreenButton,Z_Param_buttonid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonClickEvent(EInboxScreenButton(Z_Param_buttonid));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execClaimAllMessagesEvent)
	{
		P_GET_ENUM(EInboxMessageUIType,Z_Param_messageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClaimAllMessagesEvent(EInboxMessageUIType(Z_Param_messageType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execClaimMessageEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_messageId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClaimMessageEvent(Z_Param_messageId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execCleanAllMessagesEvent)
	{
		P_GET_ENUM(EInboxMessageUIType,Z_Param_messageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanAllMessagesEvent(EInboxMessageUIType(Z_Param_messageType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execCleanMessageEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_messageId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->CleanMessageEvent(Z_Param_messageId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execFindMessageWidgetById)
	{
		P_GET_OBJECT(UPanelWidget,Z_Param_containingPanel);
		P_GET_PROPERTY(FStrProperty,Z_Param_messageId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UUMGInboxMessageEntryWidget**)Z_Param__Result=P_THIS->FindMessageWidgetById(Z_Param_containingPanel,Z_Param_messageId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execFindWidgetIndexByMessageId)
	{
		P_GET_OBJECT(UPanelWidget,Z_Param_containingPanel);
		P_GET_PROPERTY(FStrProperty,Z_Param_messageId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindWidgetIndexByMessageId(Z_Param_containingPanel,Z_Param_messageId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execReadAllMessagesEvent)
	{
		P_GET_ENUM(EInboxMessageUIType,Z_Param_messageType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadAllMessagesEvent(EInboxMessageUIType(Z_Param_messageType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execReadMessageEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_messageId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ReadMessageEvent(Z_Param_messageId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGInboxScreen::execRemoveMessageFromPanel)
	{
		P_GET_OBJECT(UPanelWidget,Z_Param_containingPanel);
		P_GET_PROPERTY(FStrProperty,Z_Param_messageId);
		P_GET_UBOOL(Z_Param_hasSeparator);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->RemoveMessageFromPanel(Z_Param_containingPanel,Z_Param_messageId,Z_Param_hasSeparator);
		P_NATIVE_END;
	}
	static FName NAME_UUMGInboxScreen_RemoveMessage = FName(TEXT("RemoveMessage"));
	void UUMGInboxScreen::RemoveMessage(const FString& messageId)
	{
		UMGInboxScreen_eventRemoveMessage_Parms Parms;
		Parms.messageId=messageId;
		ProcessEvent(FindFunctionChecked(NAME_UUMGInboxScreen_RemoveMessage),&Parms);
	}
	static FName NAME_UUMGInboxScreen_SetNewsMessages = FName(TEXT("SetNewsMessages"));
	void UUMGInboxScreen::SetNewsMessages(TArray<FInboxMessageUIData> const& messages, int32 unreadCount, int32 totalCount)
	{
		UMGInboxScreen_eventSetNewsMessages_Parms Parms;
		Parms.messages=messages;
		Parms.unreadCount=unreadCount;
		Parms.totalCount=totalCount;
		ProcessEvent(FindFunctionChecked(NAME_UUMGInboxScreen_SetNewsMessages),&Parms);
	}
	static FName NAME_UUMGInboxScreen_SetRewardsMessages = FName(TEXT("SetRewardsMessages"));
	void UUMGInboxScreen::SetRewardsMessages(TArray<FInboxMessageUIData> const& messages, int32 unclaimedCount, int32 unreadCount, int32 totalCount)
	{
		UMGInboxScreen_eventSetRewardsMessages_Parms Parms;
		Parms.messages=messages;
		Parms.unclaimedCount=unclaimedCount;
		Parms.unreadCount=unreadCount;
		Parms.totalCount=totalCount;
		ProcessEvent(FindFunctionChecked(NAME_UUMGInboxScreen_SetRewardsMessages),&Parms);
	}
	static FName NAME_UUMGInboxScreen_SetSocialMessages = FName(TEXT("SetSocialMessages"));
	void UUMGInboxScreen::SetSocialMessages(TArray<FInboxMessageUIData> const& messages, int32 unreadCount, int32 totalCount)
	{
		UMGInboxScreen_eventSetSocialMessages_Parms Parms;
		Parms.messages=messages;
		Parms.unreadCount=unreadCount;
		Parms.totalCount=totalCount;
		ProcessEvent(FindFunctionChecked(NAME_UUMGInboxScreen_SetSocialMessages),&Parms);
	}
	static FName NAME_UUMGInboxScreen_UpdateMessage = FName(TEXT("UpdateMessage"));
	void UUMGInboxScreen::UpdateMessage(FInboxMessageUIData const& message)
	{
		UMGInboxScreen_eventUpdateMessage_Parms Parms;
		Parms.message=message;
		ProcessEvent(FindFunctionChecked(NAME_UUMGInboxScreen_UpdateMessage),&Parms);
	}
	static FName NAME_UUMGInboxScreen_UpdateMessagesCount = FName(TEXT("UpdateMessagesCount"));
	void UUMGInboxScreen::UpdateMessagesCount(EInboxMessageUIType messageType, int32 unclaimedCount, int32 unreadCount, int32 totalCount)
	{
		UMGInboxScreen_eventUpdateMessagesCount_Parms Parms;
		Parms.messageType=messageType;
		Parms.unclaimedCount=unclaimedCount;
		Parms.unreadCount=unreadCount;
		Parms.totalCount=totalCount;
		ProcessEvent(FindFunctionChecked(NAME_UUMGInboxScreen_UpdateMessagesCount),&Parms);
	}
	void UUMGInboxScreen::StaticRegisterNativesUUMGInboxScreen()
	{
		UClass* Class = UUMGInboxScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonClickEvent", &UUMGInboxScreen::execButtonClickEvent },
			{ "ClaimAllMessagesEvent", &UUMGInboxScreen::execClaimAllMessagesEvent },
			{ "ClaimMessageEvent", &UUMGInboxScreen::execClaimMessageEvent },
			{ "CleanAllMessagesEvent", &UUMGInboxScreen::execCleanAllMessagesEvent },
			{ "CleanMessageEvent", &UUMGInboxScreen::execCleanMessageEvent },
			{ "FindMessageWidgetById", &UUMGInboxScreen::execFindMessageWidgetById },
			{ "FindWidgetIndexByMessageId", &UUMGInboxScreen::execFindWidgetIndexByMessageId },
			{ "ReadAllMessagesEvent", &UUMGInboxScreen::execReadAllMessagesEvent },
			{ "ReadMessageEvent", &UUMGInboxScreen::execReadMessageEvent },
			{ "RemoveMessageFromPanel", &UUMGInboxScreen::execRemoveMessageFromPanel },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics
	{
		struct UMGInboxScreen_eventButtonClickEvent_Parms
		{
			EInboxScreenButton buttonid;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_buttonid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buttonid_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::NewProp_buttonid = { "buttonid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventButtonClickEvent_Parms, buttonid), Z_Construct_UEnum_DeadByDaylight_EInboxScreenButton, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::NewProp_buttonid_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::NewProp_buttonid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::NewProp_buttonid_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "ButtonClickEvent", nullptr, nullptr, sizeof(UMGInboxScreen_eventButtonClickEvent_Parms), Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics
	{
		struct UMGInboxScreen_eventClaimAllMessagesEvent_Parms
		{
			EInboxMessageUIType messageType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_messageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_messageType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::NewProp_messageType = { "messageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventClaimAllMessagesEvent_Parms, messageType), Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::NewProp_messageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::NewProp_messageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::NewProp_messageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "ClaimAllMessagesEvent", nullptr, nullptr, sizeof(UMGInboxScreen_eventClaimAllMessagesEvent_Parms), Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics
	{
		struct UMGInboxScreen_eventClaimMessageEvent_Parms
		{
			FString messageId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::NewProp_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::NewProp_messageId = { "messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventClaimMessageEvent_Parms, messageId), METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::NewProp_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::NewProp_messageId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::NewProp_messageId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "ClaimMessageEvent", nullptr, nullptr, sizeof(UMGInboxScreen_eventClaimMessageEvent_Parms), Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics
	{
		struct UMGInboxScreen_eventCleanAllMessagesEvent_Parms
		{
			EInboxMessageUIType messageType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_messageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_messageType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::NewProp_messageType = { "messageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventCleanAllMessagesEvent_Parms, messageType), Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::NewProp_messageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::NewProp_messageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::NewProp_messageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "CleanAllMessagesEvent", nullptr, nullptr, sizeof(UMGInboxScreen_eventCleanAllMessagesEvent_Parms), Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics
	{
		struct UMGInboxScreen_eventCleanMessageEvent_Parms
		{
			FString messageId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::NewProp_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::NewProp_messageId = { "messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventCleanMessageEvent_Parms, messageId), METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::NewProp_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::NewProp_messageId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::NewProp_messageId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "CleanMessageEvent", nullptr, nullptr, sizeof(UMGInboxScreen_eventCleanMessageEvent_Parms), Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics
	{
		struct UMGInboxScreen_eventFindMessageWidgetById_Parms
		{
			UPanelWidget* containingPanel;
			FString messageId;
			UUMGInboxMessageEntryWidget* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_containingPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_containingPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventFindMessageWidgetById_Parms, ReturnValue), Z_Construct_UClass_UUMGInboxMessageEntryWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_ReturnValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_messageId = { "messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventFindMessageWidgetById_Parms, messageId), METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_messageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_containingPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_containingPanel = { "containingPanel", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventFindMessageWidgetById_Parms, containingPanel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_containingPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_containingPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_messageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::NewProp_containingPanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "FindMessageWidgetById", nullptr, nullptr, sizeof(UMGInboxScreen_eventFindMessageWidgetById_Parms), Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics
	{
		struct UMGInboxScreen_eventFindWidgetIndexByMessageId_Parms
		{
			UPanelWidget* containingPanel;
			FString messageId;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_containingPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_containingPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventFindWidgetIndexByMessageId_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_messageId = { "messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventFindWidgetIndexByMessageId_Parms, messageId), METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_messageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_containingPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_containingPanel = { "containingPanel", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventFindWidgetIndexByMessageId_Parms, containingPanel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_containingPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_containingPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_messageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::NewProp_containingPanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "FindWidgetIndexByMessageId", nullptr, nullptr, sizeof(UMGInboxScreen_eventFindWidgetIndexByMessageId_Parms), Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics
	{
		struct UMGInboxScreen_eventReadAllMessagesEvent_Parms
		{
			EInboxMessageUIType messageType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_messageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_messageType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::NewProp_messageType = { "messageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventReadAllMessagesEvent_Parms, messageType), Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::NewProp_messageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::NewProp_messageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::NewProp_messageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "ReadAllMessagesEvent", nullptr, nullptr, sizeof(UMGInboxScreen_eventReadAllMessagesEvent_Parms), Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics
	{
		struct UMGInboxScreen_eventReadMessageEvent_Parms
		{
			FString messageId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::NewProp_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::NewProp_messageId = { "messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventReadMessageEvent_Parms, messageId), METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::NewProp_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::NewProp_messageId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::NewProp_messageId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "ReadMessageEvent", nullptr, nullptr, sizeof(UMGInboxScreen_eventReadMessageEvent_Parms), Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::NewProp_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::NewProp_messageId = { "messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventRemoveMessage_Parms, messageId), METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::NewProp_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::NewProp_messageId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::NewProp_messageId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "RemoveMessage", nullptr, nullptr, sizeof(UMGInboxScreen_eventRemoveMessage_Parms), Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics
	{
		struct UMGInboxScreen_eventRemoveMessageFromPanel_Parms
		{
			UPanelWidget* containingPanel;
			FString messageId;
			bool hasSeparator;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static void NewProp_hasSeparator_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hasSeparator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messageId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_messageId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_containingPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_containingPanel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((UMGInboxScreen_eventRemoveMessageFromPanel_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGInboxScreen_eventRemoveMessageFromPanel_Parms), &Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_hasSeparator_SetBit(void* Obj)
	{
		((UMGInboxScreen_eventRemoveMessageFromPanel_Parms*)Obj)->hasSeparator = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_hasSeparator = { "hasSeparator", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGInboxScreen_eventRemoveMessageFromPanel_Parms), &Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_hasSeparator_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_messageId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_messageId = { "messageId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventRemoveMessageFromPanel_Parms, messageId), METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_messageId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_messageId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_containingPanel_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_containingPanel = { "containingPanel", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventRemoveMessageFromPanel_Parms, containingPanel), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_containingPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_containingPanel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_hasSeparator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_messageId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::NewProp_containingPanel,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "RemoveMessageFromPanel", nullptr, nullptr, sizeof(UMGInboxScreen_eventRemoveMessageFromPanel_Parms), Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_unreadCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_messages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_messages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_totalCount = { "totalCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetNewsMessages_Parms, totalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_unreadCount = { "unreadCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetNewsMessages_Parms, unreadCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_messages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_messages = { "messages", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetNewsMessages_Parms, messages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_messages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_messages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_messages_Inner = { "messages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_totalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_unreadCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::NewProp_messages_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "SetNewsMessages", nullptr, nullptr, sizeof(UMGInboxScreen_eventSetNewsMessages_Parms), Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_unreadCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_unclaimedCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_messages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_messages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_totalCount = { "totalCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetRewardsMessages_Parms, totalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_unreadCount = { "unreadCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetRewardsMessages_Parms, unreadCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_unclaimedCount = { "unclaimedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetRewardsMessages_Parms, unclaimedCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_messages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_messages = { "messages", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetRewardsMessages_Parms, messages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_messages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_messages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_messages_Inner = { "messages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_totalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_unreadCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_unclaimedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::NewProp_messages_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "SetRewardsMessages", nullptr, nullptr, sizeof(UMGInboxScreen_eventSetRewardsMessages_Parms), Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_unreadCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_messages_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_messages;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_messages_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_totalCount = { "totalCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetSocialMessages_Parms, totalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_unreadCount = { "unreadCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetSocialMessages_Parms, unreadCount), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_messages_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_messages = { "messages", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventSetSocialMessages_Parms, messages), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_messages_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_messages_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_messages_Inner = { "messages", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_totalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_unreadCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_messages,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::NewProp_messages_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "SetSocialMessages", nullptr, nullptr, sizeof(UMGInboxScreen_eventSetSocialMessages_Parms), Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_message_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_message;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::NewProp_message_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::NewProp_message = { "message", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventUpdateMessage_Parms, message), Z_Construct_UScriptStruct_FInboxMessageUIData, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::NewProp_message_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::NewProp_message_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::NewProp_message,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "UpdateMessage", nullptr, nullptr, sizeof(UMGInboxScreen_eventUpdateMessage_Parms), Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics
	{
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_totalCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_unreadCount;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_unclaimedCount;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_messageType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_messageType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_totalCount = { "totalCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventUpdateMessagesCount_Parms, totalCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_unreadCount = { "unreadCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventUpdateMessagesCount_Parms, unreadCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_unclaimedCount = { "unclaimedCount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventUpdateMessagesCount_Parms, unclaimedCount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_messageType = { "messageType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGInboxScreen_eventUpdateMessagesCount_Parms, messageType), Z_Construct_UEnum_DeadByDaylight_EInboxMessageUIType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_messageType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_totalCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_unreadCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_unclaimedCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_messageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::NewProp_messageType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGInboxScreen, nullptr, "UpdateMessagesCount", nullptr, nullptr, sizeof(UMGInboxScreen_eventUpdateMessagesCount_Parms), Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGInboxScreen_NoRegister()
	{
		return UUMGInboxScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGInboxScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGInboxScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGInboxScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGInboxScreen_ButtonClickEvent, "ButtonClickEvent" }, // 4119877479
		{ &Z_Construct_UFunction_UUMGInboxScreen_ClaimAllMessagesEvent, "ClaimAllMessagesEvent" }, // 42582943
		{ &Z_Construct_UFunction_UUMGInboxScreen_ClaimMessageEvent, "ClaimMessageEvent" }, // 2651096882
		{ &Z_Construct_UFunction_UUMGInboxScreen_CleanAllMessagesEvent, "CleanAllMessagesEvent" }, // 2404333276
		{ &Z_Construct_UFunction_UUMGInboxScreen_CleanMessageEvent, "CleanMessageEvent" }, // 3910673414
		{ &Z_Construct_UFunction_UUMGInboxScreen_FindMessageWidgetById, "FindMessageWidgetById" }, // 3750506037
		{ &Z_Construct_UFunction_UUMGInboxScreen_FindWidgetIndexByMessageId, "FindWidgetIndexByMessageId" }, // 2428746521
		{ &Z_Construct_UFunction_UUMGInboxScreen_ReadAllMessagesEvent, "ReadAllMessagesEvent" }, // 2789241864
		{ &Z_Construct_UFunction_UUMGInboxScreen_ReadMessageEvent, "ReadMessageEvent" }, // 4107727990
		{ &Z_Construct_UFunction_UUMGInboxScreen_RemoveMessage, "RemoveMessage" }, // 134402000
		{ &Z_Construct_UFunction_UUMGInboxScreen_RemoveMessageFromPanel, "RemoveMessageFromPanel" }, // 2450174578
		{ &Z_Construct_UFunction_UUMGInboxScreen_SetNewsMessages, "SetNewsMessages" }, // 3214879990
		{ &Z_Construct_UFunction_UUMGInboxScreen_SetRewardsMessages, "SetRewardsMessages" }, // 192967596
		{ &Z_Construct_UFunction_UUMGInboxScreen_SetSocialMessages, "SetSocialMessages" }, // 2420382834
		{ &Z_Construct_UFunction_UUMGInboxScreen_UpdateMessage, "UpdateMessage" }, // 30821018
		{ &Z_Construct_UFunction_UUMGInboxScreen_UpdateMessagesCount, "UpdateMessagesCount" }, // 3826466281
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGInboxScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGInboxScreen.h" },
		{ "ModuleRelativePath", "Public/UMGInboxScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGInboxScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGInboxScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGInboxScreen_Statics::ClassParams = {
		&UUMGInboxScreen::StaticClass,
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
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGInboxScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGInboxScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGInboxScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGInboxScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGInboxScreen, 927864507);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGInboxScreen>()
	{
		return UUMGInboxScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGInboxScreen(Z_Construct_UClass_UUMGInboxScreen, &UUMGInboxScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGInboxScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGInboxScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
