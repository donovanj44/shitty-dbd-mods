// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DataTableDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FDataTableDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDataTableDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DataTableDropdown"), sizeof(FDataTableDropdown), Get_Z_Construct_UScriptStruct_FDataTableDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDataTableDropdown>()
{
	return FDataTableDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataTableDropdown(FDataTableDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DataTableDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDataTableDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDataTableDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataTableDropdown")),new UScriptStruct::TCppStructOps<FDataTableDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDataTableDropdown;
	struct Z_Construct_UScriptStruct_FDataTableDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColumnName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ColumnName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DataTableName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DataTableName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RowValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RowValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableDropdown_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTableDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_ColumnName_MetaData[] = {
		{ "Category", "DataTableDropdown" },
		{ "ModuleRelativePath", "Public/DataTableDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_ColumnName = { "ColumnName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableDropdown, ColumnName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_ColumnName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_ColumnName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_DataTableName_MetaData[] = {
		{ "Category", "DataTableDropdown" },
		{ "ModuleRelativePath", "Public/DataTableDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_DataTableName = { "DataTableName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableDropdown, DataTableName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_DataTableName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_DataTableName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_RowValue_MetaData[] = {
		{ "Category", "DataTableDropdown" },
		{ "ModuleRelativePath", "Public/DataTableDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_RowValue = { "RowValue", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableDropdown, RowValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_RowValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_RowValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_ColumnName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_DataTableName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableDropdown_Statics::NewProp_RowValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DataTableDropdown",
		sizeof(FDataTableDropdown),
		alignof(FDataTableDropdown),
		Z_Construct_UScriptStruct_FDataTableDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataTableDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataTableDropdown"), sizeof(FDataTableDropdown), Get_Z_Construct_UScriptStruct_FDataTableDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataTableDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataTableDropdown_Hash() { return 949871384U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
