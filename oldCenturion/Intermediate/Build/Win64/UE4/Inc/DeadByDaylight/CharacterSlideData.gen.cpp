// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterSlideData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSlideData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlideData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPerkCategory();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
// End Cross Module References
class UScriptStruct* FCharacterSlideData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSlideData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSlideData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterSlideData"), sizeof(FCharacterSlideData), Get_Z_Construct_UScriptStruct_FCharacterSlideData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterSlideData>()
{
	return FCharacterSlideData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSlideData(FCharacterSlideData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterSlideData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSlideData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSlideData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterSlideData")),new UScriptStruct::TCppStructOps<FCharacterSlideData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSlideData;
	struct Z_Construct_UScriptStruct_FCharacterSlideData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerPowerIconPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KillerPowerIconPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorPerkCategories_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SurvivorPerkCategories;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SurvivorPerkCategories_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SurvivorPerkCategories_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Playstyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Playstyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overview_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Overview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlideData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterSlideData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSlideData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_KillerPowerIconPath_MetaData[] = {
		{ "Category", "CharacterSlideData" },
		{ "ModuleRelativePath", "Public/CharacterSlideData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_KillerPowerIconPath = { "KillerPowerIconPath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlideData, KillerPowerIconPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_KillerPowerIconPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_KillerPowerIconPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories_MetaData[] = {
		{ "Category", "CharacterSlideData" },
		{ "ModuleRelativePath", "Public/CharacterSlideData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories = { "SurvivorPerkCategories", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlideData, SurvivorPerkCategories), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories_Inner = { "SurvivorPerkCategories", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EPerkCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_ImageFilePath_MetaData[] = {
		{ "Category", "CharacterSlideData" },
		{ "ModuleRelativePath", "Public/CharacterSlideData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_ImageFilePath = { "ImageFilePath", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlideData, ImageFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_ImageFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_ImageFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "CharacterSlideData" },
		{ "ModuleRelativePath", "Public/CharacterSlideData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlideData, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Playstyle_MetaData[] = {
		{ "Category", "CharacterSlideData" },
		{ "ModuleRelativePath", "Public/CharacterSlideData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Playstyle = { "Playstyle", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlideData, Playstyle), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Playstyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Playstyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Overview_MetaData[] = {
		{ "Category", "CharacterSlideData" },
		{ "ModuleRelativePath", "Public/CharacterSlideData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Overview = { "Overview", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlideData, Overview), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Overview_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Overview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "CharacterSlideData" },
		{ "ModuleRelativePath", "Public/CharacterSlideData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSlideData, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSlideData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_KillerPowerIconPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_SurvivorPerkCategories_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_ImageFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Playstyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_Overview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSlideData_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSlideData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterSlideData",
		sizeof(FCharacterSlideData),
		alignof(FCharacterSlideData),
		Z_Construct_UScriptStruct_FCharacterSlideData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSlideData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSlideData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSlideData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSlideData"), sizeof(FCharacterSlideData), Get_Z_Construct_UScriptStruct_FCharacterSlideData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSlideData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSlideData_Hash() { return 397792571U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
