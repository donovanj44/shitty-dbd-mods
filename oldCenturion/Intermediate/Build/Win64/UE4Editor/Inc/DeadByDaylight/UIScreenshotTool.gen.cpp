// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UIScreenshotTool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUIScreenshotTool() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AUIScreenshotTool_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AUIScreenshotTool();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACharacterTool();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FNamedButton();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharmViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharmCategorySetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScreenshotViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterAnimation();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutfitViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleGenderViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGenderViewSetting();
	ENGINE_API UClass* Z_Construct_UClass_ACameraActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EScreenShotBatching();
	ENGINE_API UClass* Z_Construct_UClass_APostProcessVolume_NoRegister();
// End Cross Module References
	void AUIScreenshotTool::StaticRegisterNativesAUIScreenshotTool()
	{
	}
	UClass* Z_Construct_UClass_AUIScreenshotTool_NoRegister()
	{
		return AUIScreenshotTool::StaticClass();
	}
	struct Z_Construct_UClass_AUIScreenshotTool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShowIconHelp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ShowIconHelp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnedCharm_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__spawnedCharm;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadDBButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReloadDBButton;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharmOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharmOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmsCategoryOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharmsCategoryOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharmsCategoryOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmsView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharmsView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AnimationOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AnimationOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutfitOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutfitOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitTwoPartsView_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutfitTwoPartsView;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutfitTwoPartsView_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitCharacterOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutfitCharacterOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutfitCharacterOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitView_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutfitView;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutfitView_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemViewOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ItemViewOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemViewOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterViewOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterViewOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterViewOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GenderViewOverrides_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GenderViewOverrides;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GenderViewOverrides_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerWeaponView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerWeaponView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerBodyView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerBodyView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerHeadView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerHeadView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorLegsView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurvivorLegsView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorTorsoView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurvivorTorsoView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorHeadView_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurvivorHeadView;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UpdateCameraFromViewSettings_MetaData[];
#endif
		static void NewProp_UpdateCameraFromViewSettings_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UpdateCameraFromViewSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotCamera_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ScreenshotCamera;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentSetting_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentSetting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPartCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CurrentPartCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CurrentPartCategory_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentPart_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentPart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Batching_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Batching;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Batching_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeTakingScreenshot_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeTakingScreenshot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_IconResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotResolution_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScreenshotResolution;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScreenshotFolderPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ScreenshotFolderPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostProcessVolume_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PostProcessVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUIScreenshotTool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacterTool,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UIScreenshotTool.h" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ShowIconHelp_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ShowIconHelp = { "ShowIconHelp", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, ShowIconHelp), Z_Construct_UScriptStruct_FNamedButton, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ShowIconHelp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ShowIconHelp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp__spawnedCharm_MetaData[] = {
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp__spawnedCharm = { "_spawnedCharm", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, _spawnedCharm), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp__spawnedCharm_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp__spawnedCharm_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ReloadDBButton_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ReloadDBButton = { "ReloadDBButton", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, ReloadDBButton), Z_Construct_UScriptStruct_FNamedButton, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ReloadDBButton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ReloadDBButton_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmOverrides_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmOverrides = { "CharmOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, CharmOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmOverrides_Inner = { "CharmOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmViewSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsCategoryOverrides_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsCategoryOverrides = { "CharmsCategoryOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, CharmsCategoryOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsCategoryOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsCategoryOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsCategoryOverrides_Inner = { "CharmsCategoryOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmCategorySetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsView = { "CharmsView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, CharmsView), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_AnimationOverrides_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_AnimationOverrides = { "AnimationOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, AnimationOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_AnimationOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_AnimationOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_AnimationOverrides_Inner = { "AnimationOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterAnimation, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitOverrides_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitOverrides = { "OutfitOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, OutfitOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitOverrides_Inner = { "OutfitOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FOutfitViewSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitTwoPartsView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitTwoPartsView = { "OutfitTwoPartsView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, OutfitTwoPartsView), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitTwoPartsView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitTwoPartsView_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitTwoPartsView_Inner = { "OutfitTwoPartsView", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRoleGenderViewSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitCharacterOverrides_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitCharacterOverrides = { "OutfitCharacterOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, OutfitCharacterOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitCharacterOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitCharacterOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitCharacterOverrides_Inner = { "OutfitCharacterOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterViewSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitView = { "OutfitView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, OutfitView), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitView_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitView_Inner = { "OutfitView", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRoleGenderViewSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ItemViewOverrides_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ItemViewOverrides = { "ItemViewOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, ItemViewOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ItemViewOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ItemViewOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ItemViewOverrides_Inner = { "ItemViewOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FItemViewSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharacterViewOverrides_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharacterViewOverrides = { "CharacterViewOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, CharacterViewOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharacterViewOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharacterViewOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharacterViewOverrides_Inner = { "CharacterViewOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterItemCategoryViewSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_GenderViewOverrides_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_GenderViewOverrides = { "GenderViewOverrides", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, GenderViewOverrides), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_GenderViewOverrides_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_GenderViewOverrides_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_GenderViewOverrides_Inner = { "GenderViewOverrides", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGenderViewSetting, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerWeaponView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerWeaponView = { "KillerWeaponView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, KillerWeaponView), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerWeaponView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerWeaponView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerBodyView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerBodyView = { "KillerBodyView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, KillerBodyView), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerBodyView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerBodyView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerHeadView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerHeadView = { "KillerHeadView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, KillerHeadView), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerHeadView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerHeadView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorLegsView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorLegsView = { "SurvivorLegsView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, SurvivorLegsView), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorLegsView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorLegsView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorTorsoView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorTorsoView = { "SurvivorTorsoView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, SurvivorTorsoView), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorTorsoView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorTorsoView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorHeadView_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorHeadView = { "SurvivorHeadView", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, SurvivorHeadView), Z_Construct_UScriptStruct_FScreenshotViewSetting, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorHeadView_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorHeadView_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_UpdateCameraFromViewSettings_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	void Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_UpdateCameraFromViewSettings_SetBit(void* Obj)
	{
		((AUIScreenshotTool*)Obj)->UpdateCameraFromViewSettings = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_UpdateCameraFromViewSettings = { "UpdateCameraFromViewSettings", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AUIScreenshotTool), &Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_UpdateCameraFromViewSettings_SetBit, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_UpdateCameraFromViewSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_UpdateCameraFromViewSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotCamera_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotCamera = { "ScreenshotCamera", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, ScreenshotCamera), Z_Construct_UClass_ACameraActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotCamera_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentSetting_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentSetting = { "CurrentSetting", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, CurrentSetting), METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentSetting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentSetting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPartCategory_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPartCategory = { "CurrentPartCategory", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, CurrentPartCategory), Z_Construct_UEnum_DeadByDaylight_ECustomizationCategory, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPartCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPartCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPartCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPart_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPart = { "CurrentPart", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, CurrentPart), METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_Batching_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_Batching = { "Batching", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, Batching), Z_Construct_UEnum_DeadByDaylight_EScreenShotBatching, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_Batching_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_Batching_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_Batching_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_DelayBeforeTakingScreenshot_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_DelayBeforeTakingScreenshot = { "DelayBeforeTakingScreenshot", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, DelayBeforeTakingScreenshot), METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_DelayBeforeTakingScreenshot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_DelayBeforeTakingScreenshot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_IconResolution_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_IconResolution = { "IconResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, IconResolution), METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_IconResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_IconResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotResolution_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotResolution = { "ScreenshotResolution", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, ScreenshotResolution), METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotResolution_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotResolution_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotFolderPath_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotFolderPath = { "ScreenshotFolderPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, ScreenshotFolderPath), METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotFolderPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotFolderPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_PostProcessVolume_MetaData[] = {
		{ "Category", "UIScreenshotTool" },
		{ "ModuleRelativePath", "Public/UIScreenshotTool.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_PostProcessVolume = { "PostProcessVolume", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AUIScreenshotTool, PostProcessVolume), Z_Construct_UClass_APostProcessVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_PostProcessVolume_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_PostProcessVolume_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AUIScreenshotTool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ShowIconHelp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp__spawnedCharm,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ReloadDBButton,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsCategoryOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsCategoryOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharmsView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_AnimationOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_AnimationOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitTwoPartsView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitTwoPartsView_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitCharacterOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitCharacterOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_OutfitView_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ItemViewOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ItemViewOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharacterViewOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CharacterViewOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_GenderViewOverrides,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_GenderViewOverrides_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerWeaponView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerBodyView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_KillerHeadView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorLegsView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorTorsoView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_SurvivorHeadView,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_UpdateCameraFromViewSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotCamera,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentSetting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPartCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPartCategory_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_CurrentPart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_Batching,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_Batching_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_DelayBeforeTakingScreenshot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_IconResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotResolution,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_ScreenshotFolderPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AUIScreenshotTool_Statics::NewProp_PostProcessVolume,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUIScreenshotTool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUIScreenshotTool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUIScreenshotTool_Statics::ClassParams = {
		&AUIScreenshotTool::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AUIScreenshotTool_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AUIScreenshotTool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUIScreenshotTool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUIScreenshotTool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUIScreenshotTool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUIScreenshotTool, 2837612794);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AUIScreenshotTool>()
	{
		return AUIScreenshotTool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUIScreenshotTool(Z_Construct_UClass_AUIScreenshotTool, &AUIScreenshotTool::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AUIScreenshotTool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUIScreenshotTool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
