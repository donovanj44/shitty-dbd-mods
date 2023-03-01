// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGSelectedCharacterWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGSelectedCharacterWidget() {}
// Cross Module References
	DEADBYDAYLIGHT_API UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSelectedCharacterWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGSelectedCharacterWidget();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrestigeButton_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_DeadByDaylight, nullptr, "UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UUMGSelectedCharacterWidget::execOnPrestigeButtonClicked)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnPrestigeButtonClicked();
		P_NATIVE_END;
	}
	static FName NAME_UUMGSelectedCharacterWidget_SetVisualsForPartyState = FName(TEXT("SetVisualsForPartyState"));
	void UUMGSelectedCharacterWidget::SetVisualsForPartyState(bool triggerPartyVisuals)
	{
		UMGSelectedCharacterWidget_eventSetVisualsForPartyState_Parms Parms;
		Parms.triggerPartyVisuals=triggerPartyVisuals ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSelectedCharacterWidget_SetVisualsForPartyState),&Parms);
	}
	static FName NAME_UUMGSelectedCharacterWidget_SetVisualsForReadyState = FName(TEXT("SetVisualsForReadyState"));
	void UUMGSelectedCharacterWidget::SetVisualsForReadyState(bool isPlayerReady)
	{
		UMGSelectedCharacterWidget_eventSetVisualsForReadyState_Parms Parms;
		Parms.isPlayerReady=isPlayerReady ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_UUMGSelectedCharacterWidget_SetVisualsForReadyState),&Parms);
	}
	void UUMGSelectedCharacterWidget::StaticRegisterNativesUUMGSelectedCharacterWidget()
	{
		UClass* Class = UUMGSelectedCharacterWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnPrestigeButtonClicked", &UUMGSelectedCharacterWidget::execOnPrestigeButtonClicked },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGSelectedCharacterWidget_OnPrestigeButtonClicked_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSelectedCharacterWidget_OnPrestigeButtonClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSelectedCharacterWidget_OnPrestigeButtonClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSelectedCharacterWidget, nullptr, "OnPrestigeButtonClicked", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSelectedCharacterWidget_OnPrestigeButtonClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSelectedCharacterWidget_OnPrestigeButtonClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSelectedCharacterWidget_OnPrestigeButtonClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSelectedCharacterWidget_OnPrestigeButtonClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_triggerPartyVisuals_MetaData[];
#endif
		static void NewProp_triggerPartyVisuals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_triggerPartyVisuals;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::NewProp_triggerPartyVisuals_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::NewProp_triggerPartyVisuals_SetBit(void* Obj)
	{
		((UMGSelectedCharacterWidget_eventSetVisualsForPartyState_Parms*)Obj)->triggerPartyVisuals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::NewProp_triggerPartyVisuals = { "triggerPartyVisuals", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSelectedCharacterWidget_eventSetVisualsForPartyState_Parms), &Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::NewProp_triggerPartyVisuals_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::NewProp_triggerPartyVisuals_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::NewProp_triggerPartyVisuals_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::NewProp_triggerPartyVisuals,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSelectedCharacterWidget, nullptr, "SetVisualsForPartyState", nullptr, nullptr, sizeof(UMGSelectedCharacterWidget_eventSetVisualsForPartyState_Parms), Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isPlayerReady_MetaData[];
#endif
		static void NewProp_isPlayerReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isPlayerReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::NewProp_isPlayerReady_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::NewProp_isPlayerReady_SetBit(void* Obj)
	{
		((UMGSelectedCharacterWidget_eventSetVisualsForReadyState_Parms*)Obj)->isPlayerReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::NewProp_isPlayerReady = { "isPlayerReady", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGSelectedCharacterWidget_eventSetVisualsForReadyState_Parms), &Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::NewProp_isPlayerReady_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::NewProp_isPlayerReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::NewProp_isPlayerReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::NewProp_isPlayerReady,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGSelectedCharacterWidget, nullptr, "SetVisualsForReadyState", nullptr, nullptr, sizeof(UMGSelectedCharacterWidget_eventSetVisualsForReadyState_Parms), Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGSelectedCharacterWidget_NoRegister()
	{
		return UUMGSelectedCharacterWidget::StaticClass();
	}
	struct Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__onCancelPartyButtonClick_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp__onCancelPartyButtonClick;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeaderIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevelVerticalBox_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterLevelVerticalBox;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterLevelText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterNameText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterNameText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrestigeButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGSelectedCharacterWidget_OnPrestigeButtonClicked, "OnPrestigeButtonClicked" }, // 1636737968
		{ &Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForPartyState, "SetVisualsForPartyState" }, // 3347500803
		{ &Z_Construct_UFunction_UUMGSelectedCharacterWidget_SetVisualsForReadyState, "SetVisualsForReadyState" }, // 942015240
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGSelectedCharacterWidget.h" },
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp__onCancelPartyButtonClick_MetaData[] = {
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp__onCancelPartyButtonClick = { "_onCancelPartyButtonClick", nullptr, (EPropertyFlags)0x0020180010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSelectedCharacterWidget, _onCancelPartyButtonClick), Z_Construct_UDelegateFunction_DeadByDaylight_UMGSelectedCharacterWidgetOnCancelPartyButtonClick__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp__onCancelPartyButtonClick_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp__onCancelPartyButtonClick_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_LeaderIcon_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_LeaderIcon = { "LeaderIcon", nullptr, (EPropertyFlags)0x0020080000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSelectedCharacterWidget, LeaderIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_LeaderIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_LeaderIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelVerticalBox_MetaData[] = {
		{ "Category", "UMGSelectedCharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelVerticalBox = { "CharacterLevelVerticalBox", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSelectedCharacterWidget, CharacterLevelVerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelVerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelVerticalBox_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelText_MetaData[] = {
		{ "Category", "UMGSelectedCharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelText = { "CharacterLevelText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSelectedCharacterWidget, CharacterLevelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterNameText_MetaData[] = {
		{ "Category", "UMGSelectedCharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterNameText = { "CharacterNameText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSelectedCharacterWidget, CharacterNameText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterNameText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterNameText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_PrestigeButton_MetaData[] = {
		{ "Category", "UMGSelectedCharacterWidget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGSelectedCharacterWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_PrestigeButton = { "PrestigeButton", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGSelectedCharacterWidget, PrestigeButton), Z_Construct_UClass_UUMGCharacterPrestigeButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_PrestigeButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_PrestigeButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp__onCancelPartyButtonClick,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_LeaderIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelVerticalBox,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterLevelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_CharacterNameText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::NewProp_PrestigeButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGSelectedCharacterWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::ClassParams = {
		&UUMGSelectedCharacterWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGSelectedCharacterWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGSelectedCharacterWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGSelectedCharacterWidget, 4216900041);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGSelectedCharacterWidget>()
	{
		return UUMGSelectedCharacterWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGSelectedCharacterWidget(Z_Construct_UClass_UUMGSelectedCharacterWidget, &UUMGSelectedCharacterWidget::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGSelectedCharacterWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGSelectedCharacterWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
