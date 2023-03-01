// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGPerkSelectionPopup.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGPerkSelectionPopup() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPerkSelectionPopup_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGPerkSelectionPopup();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGGenericPopup();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerkSelectionSlotWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGCharacterPrestigeIcon_NoRegister();
	UMG_API UClass* Z_Construct_UClass_URichTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUMGPerkSelectionPopup::execOnSlotSelected)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnSlotSelected(Z_Param_index);
		P_NATIVE_END;
	}
	void UUMGPerkSelectionPopup::StaticRegisterNativesUUMGPerkSelectionPopup()
	{
		UClass* Class = UUMGPerkSelectionPopup::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnSlotSelected", &UUMGPerkSelectionPopup::execOnSlotSelected },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics
	{
		struct UMGPerkSelectionPopup_eventOnSlotSelected_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::NewProp_index_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMGPerkSelectionPopup_eventOnSlotSelected_Parms, index), METADATA_PARAMS(Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::NewProp_index,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUMGPerkSelectionPopup, nullptr, "OnSlotSelected", nullptr, nullptr, sizeof(UMGPerkSelectionPopup_eventOnSlotSelected_Parms), Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUMGPerkSelectionPopup_NoRegister()
	{
		return UUMGPerkSelectionPopup::StaticClass();
	}
	struct Z_Construct_UClass_UUMGPerkSelectionPopup_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__selectablePerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__selectablePerk;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__selectablePerk_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PrestigeIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcquireMorePerksByOption2Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcquireMorePerksByOption2Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcquireMorePerksByOption1Text_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcquireMorePerksByOption1Text;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcquireMorePerksByText_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcquireMorePerksByText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NoPerksContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NoPerksContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkSelectionTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PerkSelectionTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardSubTitle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardSubTitle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SmallSlotContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SmallSlotContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UMGPerkSelectionSlotWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_UMGPerkSelectionSlotWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectablePerksContainer_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectablePerksContainer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PictureCharacterBackground_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PictureCharacterBackground;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondSmallSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SecondSmallSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstSmallSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FirstSmallSlot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LargePerkSelectionSlot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LargePerkSelectionSlot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUMGGenericPopup,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUMGPerkSelectionPopup_OnSlotSelected, "OnSlotSelected" }, // 3218936308
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGPerkSelectionPopup.h" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp__selectablePerk_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp__selectablePerk = { "_selectablePerk", nullptr, (EPropertyFlags)0x0040008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, _selectablePerk), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp__selectablePerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp__selectablePerk_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp__selectablePerk_Inner = { "_selectablePerk", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPerkSelectionSlotWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PrestigeIcon_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PrestigeIcon = { "PrestigeIcon", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, PrestigeIcon), Z_Construct_UClass_UUMGCharacterPrestigeIcon_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PrestigeIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PrestigeIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption2Text_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption2Text = { "AcquireMorePerksByOption2Text", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, AcquireMorePerksByOption2Text), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption2Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption2Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption1Text_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption1Text = { "AcquireMorePerksByOption1Text", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, AcquireMorePerksByOption1Text), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption1Text_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption1Text_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByText_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByText = { "AcquireMorePerksByText", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, AcquireMorePerksByText), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_NoPerksContainer_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_NoPerksContainer = { "NoPerksContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, NoPerksContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_NoPerksContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_NoPerksContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PerkSelectionTitle_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PerkSelectionTitle = { "PerkSelectionTitle", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, PerkSelectionTitle), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PerkSelectionTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PerkSelectionTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_RewardSubTitle_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_RewardSubTitle = { "RewardSubTitle", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, RewardSubTitle), Z_Construct_UClass_URichTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_RewardSubTitle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_RewardSubTitle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SmallSlotContainer_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SmallSlotContainer = { "SmallSlotContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, SmallSlotContainer), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SmallSlotContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SmallSlotContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_UMGPerkSelectionSlotWidget_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_UMGPerkSelectionSlotWidget = { "UMGPerkSelectionSlotWidget", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, UMGPerkSelectionSlotWidget), Z_Construct_UClass_UPerkSelectionSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_UMGPerkSelectionSlotWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_UMGPerkSelectionSlotWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SelectablePerksContainer_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SelectablePerksContainer = { "SelectablePerksContainer", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, SelectablePerksContainer), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SelectablePerksContainer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SelectablePerksContainer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PictureCharacterBackground_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PictureCharacterBackground = { "PictureCharacterBackground", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, PictureCharacterBackground), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PictureCharacterBackground_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PictureCharacterBackground_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SecondSmallSlot_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SecondSmallSlot = { "SecondSmallSlot", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, SecondSmallSlot), Z_Construct_UClass_UPerkSelectionSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SecondSmallSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SecondSmallSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_FirstSmallSlot_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_FirstSmallSlot = { "FirstSmallSlot", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, FirstSmallSlot), Z_Construct_UClass_UPerkSelectionSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_FirstSmallSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_FirstSmallSlot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_LargePerkSelectionSlot_MetaData[] = {
		{ "Category", "UMGPerkSelectionPopup" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/UMGPerkSelectionPopup.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_LargePerkSelectionSlot = { "LargePerkSelectionSlot", nullptr, (EPropertyFlags)0x002008000008001c, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGPerkSelectionPopup, LargePerkSelectionSlot), Z_Construct_UClass_UPerkSelectionSlotWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_LargePerkSelectionSlot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_LargePerkSelectionSlot_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp__selectablePerk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp__selectablePerk_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PrestigeIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption2Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByOption1Text,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_AcquireMorePerksByText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_NoPerksContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PerkSelectionTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_RewardSubTitle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SmallSlotContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_UMGPerkSelectionSlotWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SelectablePerksContainer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_PictureCharacterBackground,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_SecondSmallSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_FirstSmallSlot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::NewProp_LargePerkSelectionSlot,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGPerkSelectionPopup>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::ClassParams = {
		&UUMGPerkSelectionPopup::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::PropPointers),
		0,
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGPerkSelectionPopup()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGPerkSelectionPopup_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGPerkSelectionPopup, 3652737006);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGPerkSelectionPopup>()
	{
		return UUMGPerkSelectionPopup::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGPerkSelectionPopup(Z_Construct_UClass_UUMGPerkSelectionPopup, &UUMGPerkSelectionPopup::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGPerkSelectionPopup"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGPerkSelectionPopup);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
