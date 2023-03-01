// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/ProgressionUIDataRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProgressionUIDataRow() {}
// Cross Module References
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FProgressionUIDataRow();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FCurrencyProgressionUIData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EProgressionType();
// End Cross Module References
class UScriptStruct* FProgressionUIDataRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDSHAREDTYPES_API uint32 Get_Z_Construct_UScriptStruct_FProgressionUIDataRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProgressionUIDataRow, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("ProgressionUIDataRow"), sizeof(FProgressionUIDataRow), Get_Z_Construct_UScriptStruct_FProgressionUIDataRow_Hash());
	}
	return Singleton;
}
template<> DBDSHAREDTYPES_API UScriptStruct* StaticStruct<FProgressionUIDataRow>()
{
	return FProgressionUIDataRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProgressionUIDataRow(FProgressionUIDataRow::StaticStruct, TEXT("/Script/DBDSharedTypes"), TEXT("ProgressionUIDataRow"), false, nullptr, nullptr);
static struct FScriptStruct_DBDSharedTypes_StaticRegisterNativesFProgressionUIDataRow
{
	FScriptStruct_DBDSharedTypes_StaticRegisterNativesFProgressionUIDataRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProgressionUIDataRow")),new UScriptStruct::TCppStructOps<FProgressionUIDataRow>);
	}
} ScriptStruct_DBDSharedTypes_StaticRegisterNativesFProgressionUIDataRow;
	struct Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrencyProgressionUIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CurrencyProgressionUIData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProgressionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProgressionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ProgressionUIDataRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProgressionUIDataRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_CurrencyProgressionUIData_MetaData[] = {
		{ "Category", "ProgressionUIDataRow" },
		{ "ModuleRelativePath", "Public/ProgressionUIDataRow.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_CurrencyProgressionUIData = { "CurrencyProgressionUIData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgressionUIDataRow, CurrencyProgressionUIData), Z_Construct_UScriptStruct_FCurrencyProgressionUIData, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_CurrencyProgressionUIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_CurrencyProgressionUIData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_ProgressionType_MetaData[] = {
		{ "Category", "ProgressionUIDataRow" },
		{ "ModuleRelativePath", "Public/ProgressionUIDataRow.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_ProgressionType = { "ProgressionType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProgressionUIDataRow, ProgressionType), Z_Construct_UEnum_DBDSharedTypes_EProgressionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_ProgressionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_ProgressionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_ProgressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_CurrencyProgressionUIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_ProgressionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::NewProp_ProgressionType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDSharedTypes,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"ProgressionUIDataRow",
		sizeof(FProgressionUIDataRow),
		alignof(FProgressionUIDataRow),
		Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProgressionUIDataRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProgressionUIDataRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProgressionUIDataRow"), sizeof(FProgressionUIDataRow), Get_Z_Construct_UScriptStruct_FProgressionUIDataRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProgressionUIDataRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProgressionUIDataRow_Hash() { return 3125437694U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
