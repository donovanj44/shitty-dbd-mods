// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPartyPlayerSlotWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPartyPlayerSlotWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartyPlayerSlotWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartyPlayerSlotWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidget_NoRegister();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPartyPlayerSlotWidget::execHandleKickPlayerButtonEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleKickPlayerButtonEvent();
		P_NATIVE_END;
	}
	static FName NAME_UUMGPartyPlayerSlotWidget_SetVisualsFromState = FName(TEXT("SetVisualsFromState"));
	void UUMGPartyPlayerSlotWidget::SetVisualsFromState(EPartyPlayerSlotWidgetState widgetState)
	{
		UMGPartyPlayerSlotWidget_eventSetVisualsFromState_Parms Parms;
		Parms.widgetState=widgetState;
		ProcessEvent(FindFunctionChecked(NAME_UUMGPartyPlayerSlotWidget_SetVisualsFromState),&Parms);
	}
	void UUMGPartyPlayerSlotWidget::StaticRegisterNativesUUMGPartyPlayerSlotWidget()
	{
		UClass* Class = UUMGPartyPlayerSlotWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "HandleKickPlayerButtonEvent", &UUMGPartyPlayerSlotWidget::execHandleKickPlayerButtonEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_HandleKickPlayerButtonEvent_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_HandleKickPlayerButtonEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_HandleKickPlayerButtonEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartyPlayerSlotWidget, nullptr, "HandleKickPlayerButtonEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_HandleKickPlayerButtonEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_HandleKickPlayerButtonEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_HandleKickPlayerButtonEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_HandleKickPlayerButtonEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics
	{
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_widgetState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_widgetState_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::NewProp_widgetState = { "widgetState", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPartyPlayerSlotWidget_eventSetVisualsFromState_Parms, widgetState), Z_Construct_UEnum_DeadByDaylight_EPartyPlayerSlotWidgetState, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::NewProp_widgetState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::NewProp_widgetState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::NewProp_widgetState_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPartyPlayerSlotWidget, nullptr, "SetVisualsFromState", nullptr, nullptr, sizeof(UMGPartyPlayerSlotWidget_eventSetVisualsFromState_Parms), Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPartyPlayerSlotWidget_NoRegister()
	{
		return UUMGPartyPlayerSlotWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RoleSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RoleSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestRoleIconsCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RequestRoleIconsCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyIconsCanvas_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReadyIconsCanvas;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInformationContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerInformationContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInLobbyOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerInLobbyOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInMatchOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerInMatchOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerInMatchStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerInMatchStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterNameStyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterNameStyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KickPlayerButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KickPlayerButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FriendIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FriendIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdditionalInformationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AdditionalInformationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_HandleKickPlayerButtonEvent, "HandleKickPlayerButtonEvent" }, // 1468468816
		{ &Z_Construct_UFunction_UUMGPartyPlayerSlotWidget_SetVisualsFromState, "SetVisualsFromState" }, // 3746795256
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPartyPlayerSlotWidget.h" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_LeaderIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_LeaderIcon = { "LeaderIcon", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, LeaderIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_LeaderIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_LeaderIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RoleSwitcher_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RoleSwitcher = { "RoleSwitcher", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, RoleSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RoleSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RoleSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RequestRoleIconsCanvas_MetaData[] = {
		{ "Category", "UMGPartyPlayerSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RequestRoleIconsCanvas = { "RequestRoleIconsCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, RequestRoleIconsCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RequestRoleIconsCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RequestRoleIconsCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_ReadyIconsCanvas_MetaData[] = {
		{ "Category", "UMGPartyPlayerSlotWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_ReadyIconsCanvas = { "ReadyIconsCanvas", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, ReadyIconsCanvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_ReadyIconsCanvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_ReadyIconsCanvas_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInformationContainer_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInformationContainer = { "PlayerInformationContainer", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerInformationContainer), Z_Construct_UClass_UWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInformationContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInformationContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInLobbyOpacity_MetaData[] = {
		{ "Category", "UMGPartyPlayerSlotWidget" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInLobbyOpacity = { "PlayerInLobbyOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerInLobbyOpacity), METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInLobbyOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInLobbyOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchOpacity_MetaData[] = {
		{ "Category", "UMGPartyPlayerSlotWidget" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchOpacity = { "PlayerInMatchOpacity", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerInMatchOpacity), METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchStyle_MetaData[] = {
		{ "Category", "UMGPartyPlayerSlotWidget" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchStyle = { "PlayerInMatchStyle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerInMatchStyle), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_CharacterNameStyle_MetaData[] = {
		{ "Category", "UMGPartyPlayerSlotWidget" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_CharacterNameStyle = { "CharacterNameStyle", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, CharacterNameStyle), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_CharacterNameStyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_CharacterNameStyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_KickPlayerButton_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_KickPlayerButton = { "KickPlayerButton", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, KickPlayerButton), Z_Construct_UClass_UUMGBaseButtonWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_KickPlayerButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_KickPlayerButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_FriendIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_FriendIcon = { "FriendIcon", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, FriendIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_FriendIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_FriendIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_AdditionalInformationText_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_AdditionalInformationText = { "AdditionalInformationText", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, AdditionalInformationText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_AdditionalInformationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_AdditionalInformationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerName_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPartyPlayerSlotWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPartyPlayerSlotWidget, PlayerName), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_LeaderIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RoleSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_RequestRoleIconsCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_ReadyIconsCanvas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInformationContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInLobbyOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerInMatchStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_CharacterNameStyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_KickPlayerButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_FriendIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_AdditionalInformationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::NewProp_PlayerName,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPartyPlayerSlotWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::ClassParams = {
		&UUMGPartyPlayerSlotWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPartyPlayerSlotWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPartyPlayerSlotWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPartyPlayerSlotWidget, 1895440926);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPartyPlayerSlotWidget>()
	{
		return UUMGPartyPlayerSlotWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPartyPlayerSlotWidget(Z_Construct_UClass_UUMGPartyPlayerSlotWidget, &UUMGPartyPlayerSlotWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPartyPlayerSlotWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPartyPlayerSlotWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
