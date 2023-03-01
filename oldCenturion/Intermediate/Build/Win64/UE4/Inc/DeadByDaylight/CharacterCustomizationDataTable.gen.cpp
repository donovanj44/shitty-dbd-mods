// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterCustomizationDataTable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterCustomizationDataTable() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterCustomizationDataTable();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FCharacterCustomizationDataTable::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterCustomizationDataTable, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterCustomizationDataTable"), sizeof(FCharacterCustomizationDataTable), Get_Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterCustomizationDataTable>()
{
	return FCharacterCustomizationDataTable::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterCustomizationDataTable(FCharacterCustomizationDataTable::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterCustomizationDataTable"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterCustomizationDataTable
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterCustomizationDataTable()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterCustomizationDataTable")),new UScriptStruct::TCppStructOps<FCharacterCustomizationDataTable>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterCustomizationDataTable;
	struct Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CustomizationStoreDB_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_CustomizationStoreDB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterCustomizationDataTable.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterCustomizationDataTable>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CustomizationStoreDB_MetaData[] = {
		{ "Category", "CharacterCustomizationDataTable" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CustomizationStoreDB = { "CustomizationStoreDB", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDataTable, CustomizationStoreDB), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CustomizationStoreDB_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CustomizationStoreDB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CharacterIndex_MetaData[] = {
		{ "Category", "CharacterCustomizationDataTable" },
		{ "ModuleRelativePath", "Public/CharacterCustomizationDataTable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CharacterIndex = { "CharacterIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterCustomizationDataTable, CharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CharacterIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CustomizationStoreDB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::NewProp_CharacterIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"CharacterCustomizationDataTable",
		sizeof(FCharacterCustomizationDataTable),
		alignof(FCharacterCustomizationDataTable),
		Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterCustomizationDataTable()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterCustomizationDataTable"), sizeof(FCharacterCustomizationDataTable), Get_Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterCustomizationDataTable_Hash() { return 2114498200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
