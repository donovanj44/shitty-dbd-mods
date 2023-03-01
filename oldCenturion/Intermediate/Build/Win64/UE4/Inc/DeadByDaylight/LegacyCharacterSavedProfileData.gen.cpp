// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacyCharacterSavedProfileData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacyCharacterSavedProfileData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedPlayerLoadoutData();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FLegacyCharacterSavedProfileData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacyCharacterSavedProfileData"), sizeof(FLegacyCharacterSavedProfileData), Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacyCharacterSavedProfileData>()
{
	return FLegacyCharacterSavedProfileData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacyCharacterSavedProfileData(FLegacyCharacterSavedProfileData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacyCharacterSavedProfileData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyCharacterSavedProfileData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyCharacterSavedProfileData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacyCharacterSavedProfileData")),new UScriptStruct::TCppStructOps<FLegacyCharacterSavedProfileData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacyCharacterSavedProfileData;
	struct Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentCustomization_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_CurrentCustomization;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CurrentCustomization_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InventoryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_InventoryData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InventoryData_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Inventory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Inventory;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Inventory_Inner;
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PrestigeDates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimesConfronted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimesConfronted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodWebLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodWebLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodPoints_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodPoints;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacyCharacterSavedProfileData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CurrentCustomization = { "CurrentCustomization", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, CurrentCustomization), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_Inner = { "CurrentCustomization", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_InventoryData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_InventoryData = { "InventoryData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, InventoryData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_InventoryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_InventoryData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_InventoryData_Inner = { "InventoryData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLegacyCharacterSavedInventoryData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_Inventory_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_Inventory = { "Inventory", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, Inventory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_Inventory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_Inventory_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_Inventory_Inner = { "Inventory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData = { "CharacterLoadoutData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, CharacterLoadoutData), Z_Construct_UScriptStruct_FLegacySavedPlayerLoadoutData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebData = { "BloodWebData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, BloodWebData), Z_Construct_UScriptStruct_FLegacySavedBloodWebPersistentData, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeDates_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeDates = { "PrestigeDates", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, PrestigeDates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeDates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeDates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeDates_Inner = { "PrestigeDates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_TimesConfronted_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_TimesConfronted = { "TimesConfronted", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, TimesConfronted), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_TimesConfronted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_TimesConfronted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeLevel = { "PrestigeLevel", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, PrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebLevel = { "BloodWebLevel", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, BloodWebLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodPoints_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodPoints = { "BloodPoints", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, BloodPoints), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodPoints_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodPoints_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_VersionNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacyCharacterSavedProfileData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacyCharacterSavedProfileData, VersionNumber), METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_VersionNumber_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_VersionNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CurrentCustomization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CurrentCustomization_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_InventoryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_InventoryData_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_Inventory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_Inventory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_CharacterLoadoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeDates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeDates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_TimesConfronted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_PrestigeLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodWebLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_BloodPoints,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::NewProp_VersionNumber,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacyCharacterSavedProfileData",
		sizeof(FLegacyCharacterSavedProfileData),
		alignof(FLegacyCharacterSavedProfileData),
		Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacyCharacterSavedProfileData"), sizeof(FLegacyCharacterSavedProfileData), Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacyCharacterSavedProfileData_Hash() { return 3642864282U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
