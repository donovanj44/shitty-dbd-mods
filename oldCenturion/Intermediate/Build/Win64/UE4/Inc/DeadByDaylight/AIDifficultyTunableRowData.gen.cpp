// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AIDifficultyTunableRowData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDifficultyTunableRowData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAIDifficultyTunableRowData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FAIDifficultyTunableRowData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AIDifficultyTunableRowData"), sizeof(FAIDifficultyTunableRowData), Get_Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAIDifficultyTunableRowData>()
{
	return FAIDifficultyTunableRowData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAIDifficultyTunableRowData(FAIDifficultyTunableRowData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AIDifficultyTunableRowData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAIDifficultyTunableRowData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAIDifficultyTunableRowData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AIDifficultyTunableRowData")),new UScriptStruct::TCppStructOps<FAIDifficultyTunableRowData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAIDifficultyTunableRowData;
	struct Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hard_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Hard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Medium_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Medium;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Easy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Easy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VeryEasy_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VeryEasy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIDifficultyTunableRowData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAIDifficultyTunableRowData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Hard_MetaData[] = {
		{ "Category", "AIDifficultyTunableRowData" },
		{ "ModuleRelativePath", "Public/AIDifficultyTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Hard = { "Hard", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIDifficultyTunableRowData, Hard), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Hard_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Hard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Medium_MetaData[] = {
		{ "Category", "AIDifficultyTunableRowData" },
		{ "ModuleRelativePath", "Public/AIDifficultyTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Medium = { "Medium", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIDifficultyTunableRowData, Medium), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Medium_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Medium_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Easy_MetaData[] = {
		{ "Category", "AIDifficultyTunableRowData" },
		{ "ModuleRelativePath", "Public/AIDifficultyTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Easy = { "Easy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIDifficultyTunableRowData, Easy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Easy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Easy_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_VeryEasy_MetaData[] = {
		{ "Category", "AIDifficultyTunableRowData" },
		{ "ModuleRelativePath", "Public/AIDifficultyTunableRowData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_VeryEasy = { "VeryEasy", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAIDifficultyTunableRowData, VeryEasy), METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_VeryEasy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_VeryEasy_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Hard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Medium,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_Easy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::NewProp_VeryEasy,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AIDifficultyTunableRowData",
		sizeof(FAIDifficultyTunableRowData),
		alignof(FAIDifficultyTunableRowData),
		Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAIDifficultyTunableRowData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AIDifficultyTunableRowData"), sizeof(FAIDifficultyTunableRowData), Get_Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAIDifficultyTunableRowData_Hash() { return 2842503294U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
