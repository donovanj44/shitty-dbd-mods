// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableUtilities/Public/DBDTableRowBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTableRowBase() {}
// Cross Module References
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	UPackage* Z_Construct_UPackage__Script_DataTableUtilities();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FDBDTableRowBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATATABLEUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDBDTableRowBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDTableRowBase, Z_Construct_UPackage__Script_DataTableUtilities(), TEXT("DBDTableRowBase"), sizeof(FDBDTableRowBase), Get_Z_Construct_UScriptStruct_FDBDTableRowBase_Hash());
	}
	return Singleton;
}
template<> DATATABLEUTILITIES_API UScriptStruct* StaticStruct<FDBDTableRowBase>()
{
	return FDBDTableRowBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDTableRowBase(FDBDTableRowBase::StaticStruct, TEXT("/Script/DataTableUtilities"), TEXT("DBDTableRowBase"), false, nullptr, nullptr);
static struct FScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTableRowBase
{
	FScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTableRowBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDTableRowBase")),new UScriptStruct::TCppStructOps<FDBDTableRowBase>);
	}
} ScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTableRowBase;
	struct Z_Construct_UScriptStruct_FDBDTableRowBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTableRowBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTableRowBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDTableRowBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDTableRowBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDTableRowBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataTableUtilities,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"DBDTableRowBase",
		sizeof(FDBDTableRowBase),
		alignof(FDBDTableRowBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTableRowBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTableRowBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDTableRowBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataTableUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDTableRowBase"), sizeof(FDBDTableRowBase), Get_Z_Construct_UScriptStruct_FDBDTableRowBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDTableRowBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDTableRowBase_Hash() { return 485998056U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
