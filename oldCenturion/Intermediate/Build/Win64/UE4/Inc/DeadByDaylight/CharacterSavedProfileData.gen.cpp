// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterSavedProfileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSavedProfileData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedProfileData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedStatsData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedCharacterLevelData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedInventoryData();
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerLoadoutData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodWebPersistentData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FCharacterSavedProfileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedProfileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSavedProfileData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterSavedProfileData"), sizeof(FCharacterSavedProfileData), Get_Z_Construct_UScriptStruct_FCharacterSavedProfileData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterSavedProfileData>()
{
	return FCharacterSavedProfileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSavedProfileData(FCharacterSavedProfileData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterSavedProfileData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedProfileData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedProfileData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterSavedProfileData")),new UScriptStruct::TCppStructOps<FCharacterSavedProfileData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedProfileData;
	struct Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatProgression;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatProgression_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLevelData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterLevelData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterLevelData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UniquePerksAdded_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_UniquePerksAdded;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_UniquePerksAdded_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCharmCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentCharmCustomization;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrentCharmCustomization_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentCustomization;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentCustomization_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLoadoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterLoadoutData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodWebData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodWebData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeEarnedDates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrestigeEarnedDates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrestigeEarnedDates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimesConfronted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimesConfronted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodWebLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodWebLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSavedProfileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterExperience_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterExperience = { "CharacterExperience", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, CharacterExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeLevel = { "PrestigeLevel", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, PrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_StatProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_StatProgression = { "StatProgression", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, StatProgression), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_StatProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_StatProgression_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_StatProgression_Inner = { "StatProgression", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedStatsData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLevelData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLevelData = { "CharacterLevelData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, CharacterLevelData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLevelData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLevelData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLevelData_Inner = { "CharacterLevelData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedCharacterLevelData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_InventoryData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, InventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_InventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_InventoryData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_InventoryData_Inner = { "InventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterSavedInventoryData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_UniquePerksAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_UniquePerksAdded = { "UniquePerksAdded", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, UniquePerksAdded), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_UniquePerksAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_UniquePerksAdded_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_UniquePerksAdded_Inner = { "UniquePerksAdded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCharmCustomization_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCharmCustomization = { "CurrentCharmCustomization", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, CurrentCharmCustomization), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCharmCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCharmCustomization_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCharmCustomization_Inner = { "CurrentCharmCustomization", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharmIdSlot, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCustomization = { "CurrentCustomization", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, CurrentCustomization), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_Inner = { "CurrentCustomization", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData = { "CharacterLoadoutData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, CharacterLoadoutData), Z_Construct_UScriptStruct_FPlayerLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebData = { "BloodWebData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, BloodWebData), Z_Construct_UScriptStruct_FBloodWebPersistentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeEarnedDates_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeEarnedDates = { "PrestigeEarnedDates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, PrestigeEarnedDates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeEarnedDates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeEarnedDates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeEarnedDates_Inner = { "PrestigeEarnedDates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_TimesConfronted_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_TimesConfronted = { "TimesConfronted", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, TimesConfronted), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_TimesConfronted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_TimesConfronted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebLevel = { "BloodWebLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileData, BloodWebLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_StatProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_StatProgression_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLevelData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLevelData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_InventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_InventoryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_UniquePerksAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_UniquePerksAdded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCharmCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCharmCustomization_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeEarnedDates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_PrestigeEarnedDates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_TimesConfronted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::NewProp_BloodWebLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterSavedProfileData",
		sizeof(FCharacterSavedProfileData),
		alignof(FCharacterSavedProfileData),
		Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedProfileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedProfileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSavedProfileData"), sizeof(FCharacterSavedProfileData), Get_Z_Construct_UScriptStruct_FCharacterSavedProfileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSavedProfileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedProfileData_Hash() { return 152006742U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
