// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGCharacterButton.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGCharacterButton() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterButton_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterButton();
	DBDUIVIEWSMOBILE_API UClass* Z_Construct_UClass_UMobileBaseUserWidget();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlotData();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrice_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGCharacterButton::execBroadcastClickedEvent)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_characterIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BroadcastClickedEvent(Z_Param_characterIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCharacterButton::execSetCharacterData)
	{
		P_GET_STRUCT_REF(FCharacterSlotData,Z_Param_Out_characterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCharacterData(Z_Param_Out_characterData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUMGCharacterButton::execSetIsSelected)
	{
		P_GET_UBOOL(Z_Param_isSelected);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetIsSelected(Z_Param_isSelected);
		P_NATIVE_END;
	}
	void UUMGCharacterButton::StaticRegisterNativesUUMGCharacterButton()
	{
		UClass* Class = UUMGCharacterButton::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BroadcastClickedEvent", &UUMGCharacterButton::execBroadcastClickedEvent },
			{ "SetCharacterData", &UUMGCharacterButton::execSetCharacterData },
			{ "SetIsSelected", &UUMGCharacterButton::execSetIsSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics
	{
		struct UMGCharacterButton_eventBroadcastClickedEvent_Parms
		{
			int32 characterIndex;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_characterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::NewProp_characterIndex = { "characterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterButton_eventBroadcastClickedEvent_Parms, characterIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::NewProp_characterIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterButton, nullptr, "BroadcastClickedEvent", nullptr, nullptr, sizeof(UMGCharacterButton_eventBroadcastClickedEvent_Parms), Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics
	{
		struct UMGCharacterButton_eventSetCharacterData_Parms
		{
			FCharacterSlotData characterData;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_characterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_characterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::NewProp_characterData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::NewProp_characterData = { "characterData", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGCharacterButton_eventSetCharacterData_Parms, characterData), Z_Construct_UScriptStruct_FCharacterSlotData, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::NewProp_characterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::NewProp_characterData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::NewProp_characterData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterButton, nullptr, "SetCharacterData", nullptr, nullptr, sizeof(UMGCharacterButton_eventSetCharacterData_Parms), Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics
	{
		struct UMGCharacterButton_eventSetIsSelected_Parms
		{
			bool isSelected;
		};
		static void NewProp_isSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSelected;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::NewProp_isSelected_SetBit(void* Obj)
	{
		((UMGCharacterButton_eventSetIsSelected_Parms*)Obj)->isSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::NewProp_isSelected = { "isSelected", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMGCharacterButton_eventSetIsSelected_Parms), &Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::NewProp_isSelected_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::NewProp_isSelected,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGCharacterButton, nullptr, "SetIsSelected", nullptr, nullptr, sizeof(UMGCharacterButton_eventSetIsSelected_Parms), Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGCharacterButton_NoRegister()
	{
		return UUMGCharacterButton::StaticClass();
	}
	struct Z_Construct_UClass_UUMGCharacterButton_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSlotData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterSlotData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShardPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShardPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CellPrice_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CellPrice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PricePanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PricePanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalCustomizationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TotalCustomizationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwnedCustomizationText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwnedCustomizationText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevelText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterLevelText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LevelPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LevelPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterSelectedPanel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CharacterSelectedPanel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PortraitIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PortraitIcon;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGCharacterButton_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMobileBaseUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGCharacterButton_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGCharacterButton_BroadcastClickedEvent, "BroadcastClickedEvent" }, // 197702225
		{ &Z_Construct_UFunction_UUMGCharacterButton_SetCharacterData, "SetCharacterData" }, // 3685135219
		{ &Z_Construct_UFunction_UUMGCharacterButton_SetIsSelected, "SetIsSelected" }, // 3882320057
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGCharacterButton.h" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSlotData_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSlotData = { "CharacterSlotData", nullptr, (EPropertyFlags)0x0020080000002004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, CharacterSlotData), Z_Construct_UScriptStruct_FCharacterSlotData, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSlotData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSlotData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_ShardPrice_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_ShardPrice = { "ShardPrice", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, ShardPrice), Z_Construct_UClass_UUMGCharacterPrice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_ShardPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_ShardPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CellPrice_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CellPrice = { "CellPrice", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, CellPrice), Z_Construct_UClass_UUMGCharacterPrice_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CellPrice_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CellPrice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PricePanel_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PricePanel = { "PricePanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, PricePanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PricePanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PricePanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_TotalCustomizationText_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_TotalCustomizationText = { "TotalCustomizationText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, TotalCustomizationText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_TotalCustomizationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_TotalCustomizationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_OwnedCustomizationText_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_OwnedCustomizationText = { "OwnedCustomizationText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, OwnedCustomizationText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_OwnedCustomizationText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_OwnedCustomizationText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterLevelText_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterLevelText = { "CharacterLevelText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, CharacterLevelText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterLevelText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterLevelText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_LevelPanel_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_LevelPanel = { "LevelPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, LevelPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_LevelPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_LevelPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSelectedPanel_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSelectedPanel = { "CharacterSelectedPanel", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, CharacterSelectedPanel), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSelectedPanel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSelectedPanel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PortraitIcon_MetaData[] = {
		{ "Category", "UMGCharacterButton" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGCharacterButton.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PortraitIcon = { "PortraitIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGCharacterButton, PortraitIcon), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PortraitIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PortraitIcon_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGCharacterButton_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSlotData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_ShardPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CellPrice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PricePanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_TotalCustomizationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_OwnedCustomizationText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterLevelText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_LevelPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_CharacterSelectedPanel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGCharacterButton_Statics::NewProp_PortraitIcon,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGCharacterButton_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGCharacterButton>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGCharacterButton_Statics::ClassParams = {
		&UUMGCharacterButton::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGCharacterButton_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGCharacterButton_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGCharacterButton_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGCharacterButton()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGCharacterButton_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGCharacterButton, 1460002188);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGCharacterButton>()
	{
		return UUMGCharacterButton::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGCharacterButton(Z_Construct_UClass_UUMGCharacterButton, &UUMGCharacterButton::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGCharacterButton"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGCharacterButton);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
