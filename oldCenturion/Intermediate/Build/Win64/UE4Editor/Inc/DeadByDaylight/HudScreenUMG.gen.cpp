// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HudScreenUMG.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHudScreenUMG() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreenUMG_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreenUMG();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHudScreen();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaObjectiveWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAtlantaTutorialObjectiveManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPromptManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBaseIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoiseIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UKillerNoiseIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UHookedIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGeneratorIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UExitOpenedIndicatorWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USafeZoneManagerWidget_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgPlayerHud_NoRegister();
// End Cross Module References
	void UHudScreenUMG::StaticRegisterNativesUHudScreenUMG()
	{
	}
	UClass* Z_Construct_UClass_UHudScreenUMG_NoRegister()
	{
		return UHudScreenUMG::StaticClass();
	}
	struct Z_Construct_UClass_UHudScreenUMG_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AtlantaObjectiveClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AtlantaObjectiveClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__objectiveManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__objectiveManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__promptManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__promptManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__noiseIndicatorMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__noiseIndicatorMap;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__noiseIndicatorMap_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__noiseIndicatorMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offscreenNoiseIndicatorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__offscreenNoiseIndicatorWidgets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__offscreenNoiseIndicatorWidgets_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__offscreenNoiseIndicatorWidgets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__globalSoundIndicatorWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__globalSoundIndicatorWidget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loudNoiseIndicatorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__loudNoiseIndicatorWidgets;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__loudNoiseIndicatorWidgets_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__loudNoiseIndicatorWidgets_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerCuesIndicatorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__killerCuesIndicatorWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__killerCuesIndicatorWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hookedIndicatorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__hookedIndicatorWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hookedIndicatorWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hatchIndicatorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__hatchIndicatorWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__hatchIndicatorWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__generatorIndicatorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__generatorIndicatorWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__generatorIndicatorWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exitOpenedIndicatorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__exitOpenedIndicatorWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__exitOpenedIndicatorWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__closeNoiseIndicatorWidgets_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__closeNoiseIndicatorWidgets;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__closeNoiseIndicatorWidgets_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__safeZoneManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__safeZoneManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__atlantaHud_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__atlantaHud;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHudScreenUMG_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHudScreen,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HudScreenUMG.h" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp_AtlantaObjectiveClass_MetaData[] = {
		{ "Category", "HudScreenUMG" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp_AtlantaObjectiveClass = { "AtlantaObjectiveClass", nullptr, (EPropertyFlags)0x0024080002000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, AtlantaObjectiveClass), Z_Construct_UClass_UAtlantaObjectiveWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp_AtlantaObjectiveClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp_AtlantaObjectiveClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__objectiveManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__objectiveManager = { "_objectiveManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _objectiveManager), Z_Construct_UClass_UAtlantaTutorialObjectiveManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__objectiveManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__objectiveManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__promptManager_MetaData[] = {
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__promptManager = { "_promptManager", nullptr, (EPropertyFlags)0x0020080000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _promptManager), Z_Construct_UClass_UPromptManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__promptManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__promptManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap = { "_noiseIndicatorMap", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _noiseIndicatorMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap_Key_KeyProp = { "_noiseIndicatorMap_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap_ValueProp = { "_noiseIndicatorMap", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UBaseIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets = { "_offscreenNoiseIndicatorWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _offscreenNoiseIndicatorWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets_Key_KeyProp = { "_offscreenNoiseIndicatorWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets_ValueProp = { "_offscreenNoiseIndicatorWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UNoiseIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__globalSoundIndicatorWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__globalSoundIndicatorWidget = { "_globalSoundIndicatorWidget", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _globalSoundIndicatorWidget), Z_Construct_UClass_UBaseIndicatorWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__globalSoundIndicatorWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__globalSoundIndicatorWidget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets = { "_loudNoiseIndicatorWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _loudNoiseIndicatorWidgets), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets_Key_KeyProp = { "_loudNoiseIndicatorWidgets_Key", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets_ValueProp = { "_loudNoiseIndicatorWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UNoiseIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__killerCuesIndicatorWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__killerCuesIndicatorWidgets = { "_killerCuesIndicatorWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _killerCuesIndicatorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__killerCuesIndicatorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__killerCuesIndicatorWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__killerCuesIndicatorWidgets_Inner = { "_killerCuesIndicatorWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UKillerNoiseIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hookedIndicatorWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hookedIndicatorWidgets = { "_hookedIndicatorWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _hookedIndicatorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hookedIndicatorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hookedIndicatorWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hookedIndicatorWidgets_Inner = { "_hookedIndicatorWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UHookedIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hatchIndicatorWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hatchIndicatorWidgets = { "_hatchIndicatorWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _hatchIndicatorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hatchIndicatorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hatchIndicatorWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hatchIndicatorWidgets_Inner = { "_hatchIndicatorWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNoiseIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__generatorIndicatorWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__generatorIndicatorWidgets = { "_generatorIndicatorWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _generatorIndicatorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__generatorIndicatorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__generatorIndicatorWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__generatorIndicatorWidgets_Inner = { "_generatorIndicatorWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UGeneratorIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__exitOpenedIndicatorWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__exitOpenedIndicatorWidgets = { "_exitOpenedIndicatorWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _exitOpenedIndicatorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__exitOpenedIndicatorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__exitOpenedIndicatorWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__exitOpenedIndicatorWidgets_Inner = { "_exitOpenedIndicatorWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UExitOpenedIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__closeNoiseIndicatorWidgets_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__closeNoiseIndicatorWidgets = { "_closeNoiseIndicatorWidgets", nullptr, (EPropertyFlags)0x0020088000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _closeNoiseIndicatorWidgets), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__closeNoiseIndicatorWidgets_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__closeNoiseIndicatorWidgets_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__closeNoiseIndicatorWidgets_Inner = { "_closeNoiseIndicatorWidgets", nullptr, (EPropertyFlags)0x0000000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UNoiseIndicatorWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__safeZoneManager_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__safeZoneManager = { "_safeZoneManager", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _safeZoneManager), Z_Construct_UClass_USafeZoneManagerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__safeZoneManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__safeZoneManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__atlantaHud_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HudScreenUMG.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__atlantaHud = { "_atlantaHud", nullptr, (EPropertyFlags)0x0020080000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHudScreenUMG, _atlantaHud), Z_Construct_UClass_UUmgPlayerHud_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__atlantaHud_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__atlantaHud_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHudScreenUMG_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp_AtlantaObjectiveClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__objectiveManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__promptManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__noiseIndicatorMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__offscreenNoiseIndicatorWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__globalSoundIndicatorWidget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__loudNoiseIndicatorWidgets_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__killerCuesIndicatorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__killerCuesIndicatorWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hookedIndicatorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hookedIndicatorWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hatchIndicatorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__hatchIndicatorWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__generatorIndicatorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__generatorIndicatorWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__exitOpenedIndicatorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__exitOpenedIndicatorWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__closeNoiseIndicatorWidgets,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__closeNoiseIndicatorWidgets_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__safeZoneManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHudScreenUMG_Statics::NewProp__atlantaHud,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHudScreenUMG_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHudScreenUMG>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHudScreenUMG_Statics::ClassParams = {
		&UHudScreenUMG::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHudScreenUMG_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::PropPointers),
		0,
		0x008000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHudScreenUMG_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHudScreenUMG_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHudScreenUMG()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHudScreenUMG_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHudScreenUMG, 1061223555);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UHudScreenUMG>()
	{
		return UHudScreenUMG::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHudScreenUMG(Z_Construct_UClass_UHudScreenUMG, &UHudScreenUMG::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UHudScreenUMG"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHudScreenUMG);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
