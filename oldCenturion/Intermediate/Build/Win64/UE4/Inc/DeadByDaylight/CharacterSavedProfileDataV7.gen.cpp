// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterSavedProfileDataV7.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSavedProfileDataV7() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedCharmSlotData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedStatsDataV7();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedCharacterLevelDataV7();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedPlayerLoadoutData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData();
// End Cross Module References
class UScriptStruct* FCharacterSavedProfileDataV7::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterSavedProfileDataV7"), sizeof(FCharacterSavedProfileDataV7), Get_Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterSavedProfileDataV7>()
{
	return FCharacterSavedProfileDataV7::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSavedProfileDataV7(FCharacterSavedProfileDataV7::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterSavedProfileDataV7"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedProfileDataV7
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedProfileDataV7()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterSavedProfileDataV7")),new UScriptStruct::TCppStructOps<FCharacterSavedProfileDataV7>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedProfileDataV7;
	struct Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_StatProgression;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StatProgression_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterProgression_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CharacterProgression;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterProgression_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Inventory_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterLoadoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterLoadoutData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodWebData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodWebData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeDates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PrestigeDates;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PrestigeDates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimesConfronted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimesConfronted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterExperience_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterExperience;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodWebLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodWebLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSavedProfileDataV7>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_UniquePerksAdded_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_UniquePerksAdded = { "UniquePerksAdded", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, UniquePerksAdded), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_UniquePerksAdded_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_UniquePerksAdded_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_UniquePerksAdded_Inner = { "UniquePerksAdded", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCharmCustomization_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCharmCustomization = { "CurrentCharmCustomization", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, CurrentCharmCustomization), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCharmCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCharmCustomization_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCharmCustomization_Inner = { "CurrentCharmCustomization", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedCharmSlotData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCustomization_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCustomization = { "CurrentCustomization", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, CurrentCustomization), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCustomization_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCustomization_Inner = { "CurrentCustomization", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_StatProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_StatProgression = { "StatProgression", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, StatProgression), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_StatProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_StatProgression_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_StatProgression_Inner = { "StatProgression", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedStatsDataV7, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterProgression_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterProgression = { "CharacterProgression", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, CharacterProgression), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterProgression_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterProgression_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterProgression_Inner = { "CharacterProgression", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSavedCharacterLevelDataV7, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_Inventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterLoadoutData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterLoadoutData = { "CharacterLoadoutData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, CharacterLoadoutData), Z_Construct_UScriptStruct_FLegacySavedPlayerLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterLoadoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterLoadoutData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebData_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebData = { "BloodWebData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, BloodWebData), Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeDates_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeDates = { "PrestigeDates", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, PrestigeDates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeDates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeDates_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeDates_Inner = { "PrestigeDates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_TimesConfronted_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_TimesConfronted = { "TimesConfronted", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, TimesConfronted), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_TimesConfronted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_TimesConfronted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterExperience_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterExperience = { "CharacterExperience", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, CharacterExperience), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterExperience_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterExperience_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeLevel = { "PrestigeLevel", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, PrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedProfileDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebLevel = { "BloodWebLevel", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedProfileDataV7, BloodWebLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_UniquePerksAdded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_UniquePerksAdded_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCharmCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCharmCustomization_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CurrentCustomization_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_StatProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_StatProgression_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterProgression,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterProgression_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterLoadoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeDates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeDates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_TimesConfronted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_CharacterExperience,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_PrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::NewProp_BloodWebLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterSavedProfileDataV7",
		sizeof(FCharacterSavedProfileDataV7),
		alignof(FCharacterSavedProfileDataV7),
		Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSavedProfileDataV7"), sizeof(FCharacterSavedProfileDataV7), Get_Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedProfileDataV7_Hash() { return 3421180012U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
