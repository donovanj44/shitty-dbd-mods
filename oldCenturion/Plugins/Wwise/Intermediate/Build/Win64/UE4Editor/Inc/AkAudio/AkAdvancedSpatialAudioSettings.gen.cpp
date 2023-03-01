// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAdvancedSpatialAudioSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAdvancedSpatialAudioSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkAdvancedSpatialAudioSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAdvancedSpatialAudioSettings"), sizeof(FAkAdvancedSpatialAudioSettings), Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAdvancedSpatialAudioSettings>()
{
	return FAkAdvancedSpatialAudioSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAdvancedSpatialAudioSettings(FAkAdvancedSpatialAudioSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAdvancedSpatialAudioSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedSpatialAudioSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedSpatialAudioSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAdvancedSpatialAudioSettings")),new UScriptStruct::TCppStructOps<FAkAdvancedSpatialAudioSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAdvancedSpatialAudioSettings;
	struct Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffractionShadowDegrees_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffractionShadowDegrees;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DiffractionShadowAttenuationFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DiffractionShadowAttenuationFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAdvancedSpatialAudioSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAdvancedSpatialAudioSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees_MetaData[] = {
		{ "Category", "AkAdvancedSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedSpatialAudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees = { "DiffractionShadowDegrees", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedSpatialAudioSettings, DiffractionShadowDegrees), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor_MetaData[] = {
		{ "Category", "AkAdvancedSpatialAudioSettings" },
		{ "ModuleRelativePath", "Public/AkAdvancedSpatialAudioSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor = { "DiffractionShadowAttenuationFactor", nullptr, (EPropertyFlags)0x0010040000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAdvancedSpatialAudioSettings, DiffractionShadowAttenuationFactor), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowDegrees,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::NewProp_DiffractionShadowAttenuationFactor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAdvancedSpatialAudioSettings",
		sizeof(FAkAdvancedSpatialAudioSettings),
		alignof(FAkAdvancedSpatialAudioSettings),
		Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAdvancedSpatialAudioSettings"), sizeof(FAkAdvancedSpatialAudioSettings), Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Hash() { return 1353932401U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
