// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGAtlantaNavigationScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGAtlantaNavigationScreen() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaNavigationScreen_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGAtlantaNavigationScreen();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ENavigationScreenButton();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPartyMemberUIData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBaseCountdownWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPartySlotsWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetSwitcher_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
	UMG_API UEnum* Z_Construct_UEnum_UMG_ESlateVisibility();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGAtlantaNavigationScreen::execButtonClickEvent)
	{
		P_GET_ENUM(ENavigationScreenButton,Z_Param_buttonid);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ButtonClickEvent(ENavigationScreenButton(Z_Param_buttonid));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGAtlantaNavigationScreen::execGetPartyMembersData)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FPartyMemberUIData>*)Z_Param__Result=P_THIS->GetPartyMembersData(Z_Param_index);
		P_NATIVE_END;
	}
	void UUMGAtlantaNavigationScreen::StaticRegisterNativesUUMGAtlantaNavigationScreen()
	{
		UClass* Class = UUMGAtlantaNavigationScreen::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ButtonClickEvent", &UUMGAtlantaNavigationScreen::execButtonClickEvent },
			{ "GetPartyMembersData", &UUMGAtlantaNavigationScreen::execGetPartyMembersData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics
	{
		struct UMGAtlantaNavigationScreen_eventButtonClickEvent_Parms
		{
			ENavigationScreenButton buttonid;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_buttonid;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_buttonid_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::NewProp_buttonid = { "buttonid", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaNavigationScreen_eventButtonClickEvent_Parms, buttonid), Z_Construct_UEnum_DeadByDaylight_ENavigationScreenButton, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::NewProp_buttonid_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::NewProp_buttonid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::NewProp_buttonid_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaNavigationScreen, nullptr, "ButtonClickEvent", nullptr, nullptr, sizeof(UMGAtlantaNavigationScreen_eventButtonClickEvent_Parms), Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics
	{
		struct UMGAtlantaNavigationScreen_eventGetPartyMembersData_Parms
		{
			int32 index;
			TArray<FPartyMemberUIData> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaNavigationScreen_eventGetPartyMembersData_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPartyMemberUIData, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGAtlantaNavigationScreen_eventGetPartyMembersData_Parms, index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGAtlantaNavigationScreen, nullptr, "GetPartyMembersData", nullptr, nullptr, sizeof(UMGAtlantaNavigationScreen_eventGetPartyMembersData_Parms), Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGAtlantaNavigationScreen_NoRegister()
	{
		return UUMGAtlantaNavigationScreen::StaticClass();
	}
	struct Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__partyMembers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__partyMembers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__partyMembers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyCountdownLarge_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyCountdownLarge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PartyPlayerSlots_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PartyPlayerSlots;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BottomRightWidgetSwitcher_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BottomRightWidgetSwitcher;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonRole_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ButtonRole;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ButtonRoleVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ButtonRoleVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ButtonRoleVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuButtonsVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MenuButtonsVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MenuButtonsVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BackButtonVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_BackButtonVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_BackButtonVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterInfoVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CharacterInfoVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CharacterInfoVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayModeSelectionVisibility_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PlayModeSelectionVisibility;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PlayModeSelectionVisibility_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextButtonStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextButtonStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankAndPlayerInfoWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BankAndPlayerInfoWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGAtlantaNavigationScreen_ButtonClickEvent, "ButtonClickEvent" }, // 337696412
		{ &Z_Construct_UFunction_UUMGAtlantaNavigationScreen_GetPartyMembersData, "GetPartyMembersData" }, // 1388477313
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGAtlantaNavigationScreen.h" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp__partyMembers_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp__partyMembers = { "_partyMembers", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, _partyMembers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp__partyMembers_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp__partyMembers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp__partyMembers_Inner = { "_partyMembers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPartyMemberUIData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyCountdownLarge_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyCountdownLarge = { "PartyCountdownLarge", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, PartyCountdownLarge), Z_Construct_UClass_UUMGBaseCountdownWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyCountdownLarge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyCountdownLarge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyPlayerSlots_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyPlayerSlots = { "PartyPlayerSlots", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, PartyPlayerSlots), Z_Construct_UClass_UUMGPartySlotsWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyPlayerSlots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyPlayerSlots_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BottomRightWidgetSwitcher_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BottomRightWidgetSwitcher = { "BottomRightWidgetSwitcher", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, BottomRightWidgetSwitcher), Z_Construct_UClass_UWidgetSwitcher_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BottomRightWidgetSwitcher_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BottomRightWidgetSwitcher_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRole_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRole = { "ButtonRole", nullptr, (EPropertyFlags)0x001000000008000c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, ButtonRole), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRole_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRole_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRoleVisibility_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRoleVisibility = { "ButtonRoleVisibility", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, ButtonRoleVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRoleVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRoleVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRoleVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_MenuButtonsVisibility_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_MenuButtonsVisibility = { "MenuButtonsVisibility", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, MenuButtonsVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_MenuButtonsVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_MenuButtonsVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_MenuButtonsVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BackButtonVisibility_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BackButtonVisibility = { "BackButtonVisibility", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, BackButtonVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BackButtonVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BackButtonVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BackButtonVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_CharacterInfoVisibility_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_CharacterInfoVisibility = { "CharacterInfoVisibility", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, CharacterInfoVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_CharacterInfoVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_CharacterInfoVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_CharacterInfoVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PlayModeSelectionVisibility_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PlayModeSelectionVisibility = { "PlayModeSelectionVisibility", nullptr, (EPropertyFlags)0x0010000000002004, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, PlayModeSelectionVisibility), Z_Construct_UEnum_UMG_ESlateVisibility, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PlayModeSelectionVisibility_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PlayModeSelectionVisibility_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PlayModeSelectionVisibility_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_TextButtonStart_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_TextButtonStart = { "TextButtonStart", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, TextButtonStart), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_TextButtonStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_TextButtonStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BankAndPlayerInfoWidget_MetaData[] = {
		{ "Category", "UMGAtlantaNavigationScreen" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGAtlantaNavigationScreen.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BankAndPlayerInfoWidget = { "BankAndPlayerInfoWidget", nullptr, (EPropertyFlags)0x001000000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGAtlantaNavigationScreen, BankAndPlayerInfoWidget), Z_Construct_UClass_UUMGBankAndPlayerInfoWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BankAndPlayerInfoWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BankAndPlayerInfoWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp__partyMembers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp__partyMembers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyCountdownLarge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PartyPlayerSlots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BottomRightWidgetSwitcher,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRole,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRoleVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_ButtonRoleVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_MenuButtonsVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_MenuButtonsVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BackButtonVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BackButtonVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_CharacterInfoVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_CharacterInfoVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PlayModeSelectionVisibility,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_PlayModeSelectionVisibility_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_TextButtonStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::NewProp_BankAndPlayerInfoWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGAtlantaNavigationScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::ClassParams = {
		&UUMGAtlantaNavigationScreen::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGAtlantaNavigationScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGAtlantaNavigationScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGAtlantaNavigationScreen, 1236701256);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGAtlantaNavigationScreen>()
	{
		return UUMGAtlantaNavigationScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGAtlantaNavigationScreen(Z_Construct_UClass_UUMGAtlantaNavigationScreen, &UUMGAtlantaNavigationScreen::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGAtlantaNavigationScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGAtlantaNavigationScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
