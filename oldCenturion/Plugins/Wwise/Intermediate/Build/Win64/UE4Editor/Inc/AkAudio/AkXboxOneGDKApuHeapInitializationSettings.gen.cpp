// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkXboxOneGDKApuHeapInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkXboxOneGDKApuHeapInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkXboxOneGDKApuHeapInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkXboxOneGDKApuHeapInitializationSettings"), sizeof(FAkXboxOneGDKApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkXboxOneGDKApuHeapInitializationSettings>()
{
	return FAkXboxOneGDKApuHeapInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings(FAkXboxOneGDKApuHeapInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkXboxOneGDKApuHeapInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneGDKApuHeapInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneGDKApuHeapInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkXboxOneGDKApuHeapInitializationSettings")),new UScriptStruct::TCppStructOps<FAkXboxOneGDKApuHeapInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkXboxOneGDKApuHeapInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NonCachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_NonCachedSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CachedSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_CachedSize;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkXboxOneGDKApuHeapInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkXboxOneGDKApuHeapInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData[] = {
		{ "Category", "AkXboxOneGDKApuHeapInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXboxOneGDKApuHeapInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_NonCachedSize = { "NonCachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXboxOneGDKApuHeapInitializationSettings, NonCachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_NonCachedSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData[] = {
		{ "Category", "AkXboxOneGDKApuHeapInitializationSettings" },
		{ "ModuleRelativePath", "Public/AkXboxOneGDKApuHeapInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_CachedSize = { "CachedSize", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkXboxOneGDKApuHeapInitializationSettings, CachedSize), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_CachedSize_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_NonCachedSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::NewProp_CachedSize,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkXboxOneGDKApuHeapInitializationSettings",
		sizeof(FAkXboxOneGDKApuHeapInitializationSettings),
		alignof(FAkXboxOneGDKApuHeapInitializationSettings),
		Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkXboxOneGDKApuHeapInitializationSettings"), sizeof(FAkXboxOneGDKApuHeapInitializationSettings), Get_Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkXboxOneGDKApuHeapInitializationSettings_Hash() { return 2877362248U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif