// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ScoreCategoryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeScoreCategoryData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FScoreCategoryData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory();
// End Cross Module References
class UScriptStruct* FScoreCategoryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FScoreCategoryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FScoreCategoryData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ScoreCategoryData"), sizeof(FScoreCategoryData), Get_Z_Construct_UScriptStruct_FScoreCategoryData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FScoreCategoryData>()
{
	return FScoreCategoryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FScoreCategoryData(FScoreCategoryData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ScoreCategoryData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreCategoryData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreCategoryData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ScoreCategoryData")),new UScriptStruct::TCppStructOps<FScoreCategoryData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFScoreCategoryData;
	struct Z_Construct_UScriptStruct_FScoreCategoryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AchievementCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_AchievementCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProgressionCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScoreCap_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ScoreCap;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Category_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Category;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Category_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ScoreCategoryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FScoreCategoryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_AchievementCap_MetaData[] = {
		{ "Category", "ScoreCategoryData" },
		{ "ModuleRelativePath", "Public/ScoreCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_AchievementCap = { "AchievementCap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreCategoryData, AchievementCap), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_AchievementCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_AchievementCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ProgressionCap_MetaData[] = {
		{ "Category", "ScoreCategoryData" },
		{ "ModuleRelativePath", "Public/ScoreCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ProgressionCap = { "ProgressionCap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreCategoryData, ProgressionCap), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ProgressionCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ProgressionCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ScoreCap_MetaData[] = {
		{ "Category", "ScoreCategoryData" },
		{ "ModuleRelativePath", "Public/ScoreCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ScoreCap = { "ScoreCap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreCategoryData, ScoreCap), METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ScoreCap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ScoreCap_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_Category_MetaData[] = {
		{ "Category", "ScoreCategoryData" },
		{ "ModuleRelativePath", "Public/ScoreCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_Category = { "Category", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FScoreCategoryData, Category), Z_Construct_UEnum_DBDSharedTypes_EDBDScoreCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_Category_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_Category_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_Category_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FScoreCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_AchievementCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ProgressionCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_ScoreCap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_Category,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FScoreCategoryData_Statics::NewProp_Category_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FScoreCategoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"ScoreCategoryData",
		sizeof(FScoreCategoryData),
		alignof(FScoreCategoryData),
		Z_Construct_UScriptStruct_FScoreCategoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FScoreCategoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FScoreCategoryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FScoreCategoryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ScoreCategoryData"), sizeof(FScoreCategoryData), Get_Z_Construct_UScriptStruct_FScoreCategoryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FScoreCategoryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FScoreCategoryData_Hash() { return 2400138099U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
