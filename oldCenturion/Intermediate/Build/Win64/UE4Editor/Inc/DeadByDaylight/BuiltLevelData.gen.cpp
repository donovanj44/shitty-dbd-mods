// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BuiltLevelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBuiltLevelData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBuiltLevelData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDependency();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
// End Cross Module References
class UScriptStruct* FBuiltLevelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBuiltLevelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBuiltLevelData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BuiltLevelData"), sizeof(FBuiltLevelData), Get_Z_Construct_UScriptStruct_FBuiltLevelData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBuiltLevelData>()
{
	return FBuiltLevelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBuiltLevelData(FBuiltLevelData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BuiltLevelData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBuiltLevelData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBuiltLevelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BuiltLevelData")),new UScriptStruct::TCppStructOps<FBuiltLevelData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBuiltLevelData;
	struct Z_Construct_UScriptStruct_FBuiltLevelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpecialEventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SpecialEventId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Dependencies_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Dependencies;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Dependencies_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TileCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MapName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MapName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioThemeSoundBank_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AudioThemeSoundBank;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioThemeEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioThemeEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStateWeather_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioStateWeather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioStateThemes_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AudioStateThemes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeWeather_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThemeWeather;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ThemeName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ThemeName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBuiltLevelData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_SpecialEventId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_SpecialEventId = { "SpecialEventId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, SpecialEventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_SpecialEventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_SpecialEventId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_Dependencies_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_Dependencies = { "Dependencies", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, Dependencies), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_Dependencies_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_Dependencies_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_Dependencies_Inner = { "Dependencies", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDependency, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_TileCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_TileCount = { "TileCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, TileCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_TileCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_TileCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_MapName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_MapName = { "MapName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, MapName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_MapName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_MapName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeSoundBank_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeSoundBank = { "AudioThemeSoundBank", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, AudioThemeSoundBank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeSoundBank_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeSoundBank_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeEvent_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeEvent = { "AudioThemeEvent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, AudioThemeEvent), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateWeather_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateWeather = { "AudioStateWeather", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, AudioStateWeather), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateWeather_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateWeather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateThemes_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateThemes = { "AudioStateThemes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, AudioStateThemes), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateThemes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateThemes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeWeather_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeWeather = { "ThemeWeather", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, ThemeWeather), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeWeather_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeWeather_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeName_MetaData[] = {
		{ "ModuleRelativePath", "Public/BuiltLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeName = { "ThemeName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBuiltLevelData, ThemeName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBuiltLevelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_SpecialEventId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_Dependencies,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_Dependencies_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_TileCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_MapName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeSoundBank,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioThemeEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateWeather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_AudioStateThemes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeWeather,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBuiltLevelData_Statics::NewProp_ThemeName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBuiltLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"BuiltLevelData",
		sizeof(FBuiltLevelData),
		alignof(FBuiltLevelData),
		Z_Construct_UScriptStruct_FBuiltLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBuiltLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBuiltLevelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBuiltLevelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BuiltLevelData"), sizeof(FBuiltLevelData), Get_Z_Construct_UScriptStruct_FBuiltLevelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBuiltLevelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBuiltLevelData_Hash() { return 2014490997U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
