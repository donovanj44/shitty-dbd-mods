// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPartySlotsWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPartySlotsWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartySlotsWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartySlotsWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartyBotSlotWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartyPlayerSlotWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UPanelWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPartySlotsWidget::execHandleBotEditButtonClickEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleBotEditButtonClickEvent(Z_Param_index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPartySlotsWidget::execHandleInviteFriendButtonClickEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleInviteFriendButtonClickEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPartySlotsWidget::execHandleKickPlayerButtonClickEvent)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_friendKrakenId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleKickPlayerButtonClickEvent(Z_Param_friendKrakenId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPartySlotsWidget::execRearrangePartySlots)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RearrangePartySlots();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPartySlotsWidget::execSetWidgetState)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_GET_ENUM(EPartyPlayerSlotWidgetState,Z_Param_state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWidgetState(Z_Param_index,EPartyPlayerSlotWidgetState(Z_Param_state));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGPartySlotsWidget::execSwapWidgets)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_first);
		P_GET_PROPERTY(FIntProperty,Z_Param_second);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SwapWidgets(Z_Param_first,Z_Param_second);
		P_NATIVE_END;
	}
	void UUMGPartySlotsWidget::StaticRegisterNativesUUMGPartySlotsWidget()
	{
		UClass* Class = UUMGPartySlotsWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleBotEditButtonClickEvent", &UUMGPartySlotsWidget::execHandleBotEditButtonClickEvent },
			{ "HandleInviteFriendButtonClickEvent", &UUMGPartySlotsWidget::execHandleInviteFriendButtonClickEvent },
			{ "HandleKickPlayerButtonClickEvent", &UUMGPartySlotsWidget::execHandleKickPlayerButtonClickEvent },
			{ "RearrangePartySlots", &UUMGPartySlotsWidget::execRearrangePartySlots },
			{ "SetWidgetState", &UUMGPartySlotsWidget::execSetWidgetState },
			{ "SwapWidgets", &UUMGPartySlotsWidget::execSwapWidgets },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics
	{
		struct UMGPartySlotsWidget_eventHandleBotEditButtonClickEvent_Parms
		{
			int32 index;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPartySlotsWidget_eventHandleBotEditButtonClickEvent_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartySlotsWidget, nullptr, "HandleBotEditButtonClickEvent", nullptr, nullptr, sizeof(UMGPartySlotsWidget_eventHandleBotEditButtonClickEvent_Parms), Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPartySlotsWidget_HandleInviteFriendButtonClickEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartySlotsWidget_HandleInviteFriendButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartySlotsWidget_HandleInviteFriendButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartySlotsWidget, nullptr, "HandleInviteFriendButtonClickEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleInviteFriendButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleInviteFriendButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartySlotsWidget_HandleInviteFriendButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartySlotsWidget_HandleInviteFriendButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics
	{
		struct UMGPartySlotsWidget_eventHandleKickPlayerButtonClickEvent_Parms
		{
			FString friendKrakenId;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_friendKrakenId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_friendKrakenId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::NewProp_friendKrakenId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::NewProp_friendKrakenId = { "friendKrakenId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPartySlotsWidget_eventHandleKickPlayerButtonClickEvent_Parms, friendKrakenId), METADATA_PARAMS(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::NewProp_friendKrakenId_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::NewProp_friendKrakenId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::NewProp_friendKrakenId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartySlotsWidget, nullptr, "HandleKickPlayerButtonClickEvent", nullptr, nullptr, sizeof(UMGPartySlotsWidget_eventHandleKickPlayerButtonClickEvent_Parms), Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPartySlotsWidget_RearrangePartySlots_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartySlotsWidget_RearrangePartySlots_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartySlotsWidget_RearrangePartySlots_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartySlotsWidget, nullptr, "RearrangePartySlots", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartySlotsWidget_RearrangePartySlots_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_RearrangePartySlots_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartySlotsWidget_RearrangePartySlots()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartySlotsWidget_RearrangePartySlots_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics
	{
		struct UMGPartySlotsWidget_eventSetWidgetState_Parms
		{
			int32 index;
			EPartyPlayerSlotWidgetState state;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_state;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_state_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::NewProp_state = { "state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPartySlotsWidget_eventSetWidgetState_Parms, state), Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::NewProp_state_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPartySlotsWidget_eventSetWidgetState_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::NewProp_state,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::NewProp_state_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartySlotsWidget, nullptr, "SetWidgetState", nullptr, nullptr, sizeof(UMGPartySlotsWidget_eventSetWidgetState_Parms), Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics
	{
		struct UMGPartySlotsWidget_eventSwapWidgets_Parms
		{
			int32 first;
			int32 second;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_second;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_first;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::NewProp_second = { "second", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPartySlotsWidget_eventSwapWidgets_Parms, second), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::NewProp_first = { "first", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPartySlotsWidget_eventSwapWidgets_Parms, first), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::NewProp_second,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::NewProp_first,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartySlotsWidget, nullptr, "SwapWidgets", nullptr, nullptr, sizeof(UMGPartySlotsWidget_eventSwapWidgets_Parms), Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPartySlotsWidget_NoRegister()
	{
		return UUMGPartySlotsWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPartySlotsWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NormalCharacterColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalCharacterColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConflictingCharacterColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConflictingCharacterColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSlotCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_MaxSlotCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyBotSlotWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_PartyBotSlotWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyBotSlotsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyBotSlotsContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyPlayerSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__partyPlayerSlots;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__partyPlayerSlots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyPlayerSlotsContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyPlayerSlotsContainer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPartySlotsWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPartySlotsWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPartySlotsWidget_HandleBotEditButtonClickEvent, "HandleBotEditButtonClickEvent" }, // 3567717097
		{ &Z_Construct_UFunction_UUMGPartySlotsWidget_HandleInviteFriendButtonClickEvent, "HandleInviteFriendButtonClickEvent" }, // 3148523921
		{ &Z_Construct_UFunction_UUMGPartySlotsWidget_HandleKickPlayerButtonClickEvent, "HandleKickPlayerButtonClickEvent" }, // 885748239
		{ &Z_Construct_UFunction_UUMGPartySlotsWidget_RearrangePartySlots, "RearrangePartySlots" }, // 3629593406
		{ &Z_Construct_UFunction_UUMGPartySlotsWidget_SetWidgetState, "SetWidgetState" }, // 1481751182
		{ &Z_Construct_UFunction_UUMGPartySlotsWidget_SwapWidgets, "SwapWidgets" }, // 3190485724
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartySlotsWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPartySlotsWidget.h" },
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_NormalCharacterColor_MetaData[] = {
		{ "Category", "UMGPartySlotsWidget" },
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_NormalCharacterColor = { "NormalCharacterColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartySlotsWidget, NormalCharacterColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_NormalCharacterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_NormalCharacterColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_ConflictingCharacterColor_MetaData[] = {
		{ "Category", "UMGPartySlotsWidget" },
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_ConflictingCharacterColor = { "ConflictingCharacterColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartySlotsWidget, ConflictingCharacterColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_ConflictingCharacterColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_ConflictingCharacterColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_MaxSlotCount_MetaData[] = {
		{ "Category", "UMGPartySlotsWidget" },
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_MaxSlotCount = { "MaxSlotCount", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartySlotsWidget, MaxSlotCount), METADATA_PARAMS(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_MaxSlotCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_MaxSlotCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotWidgetClass_MetaData[] = {
		{ "Category", "UMGPartySlotsWidget" },
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotWidgetClass = { "PartyBotSlotWidgetClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartySlotsWidget, PartyBotSlotWidgetClass), Z_Construct_UClass_UUMGPartyBotSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotsContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotsContainer = { "PartyBotSlotsContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartySlotsWidget, PartyBotSlotsContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotsContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp__partyPlayerSlots_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp__partyPlayerSlots = { "_partyPlayerSlots", nullptr, (EPropertyFlags)0x0020088000000008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartySlotsWidget, _partyPlayerSlots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp__partyPlayerSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp__partyPlayerSlots_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp__partyPlayerSlots_Inner = { "_partyPlayerSlots", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UUMGPartyPlayerSlotWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyPlayerSlotsContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartySlotsWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyPlayerSlotsContainer = { "PartyPlayerSlotsContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartySlotsWidget, PartyPlayerSlotsContainer), Z_Construct_UClass_UPanelWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyPlayerSlotsContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyPlayerSlotsContainer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPartySlotsWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_NormalCharacterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_ConflictingCharacterColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_MaxSlotCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyBotSlotsContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp__partyPlayerSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp__partyPlayerSlots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartySlotsWidget_Statics::NewProp_PartyPlayerSlotsContainer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPartySlotsWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPartySlotsWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPartySlotsWidget_Statics::ClassParams = {
		&UUMGPartySlotsWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPartySlotsWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartySlotsWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPartySlotsWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPartySlotsWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPartySlotsWidget, 2160904889);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPartySlotsWidget>()
	{
		return UUMGPartySlotsWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPartySlotsWidget(Z_Construct_UClass_UUMGPartySlotsWidget, &UUMGPartySlotsWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPartySlotsWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPartySlotsWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
