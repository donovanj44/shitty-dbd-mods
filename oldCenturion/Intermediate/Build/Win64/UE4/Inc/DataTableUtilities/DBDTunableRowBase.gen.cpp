// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableUtilities/Public/DBDTunableRowBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTunableRowBase() {}
// Cross Module References
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowBase();
	UPackage* Z_Construct_UPackage__Script_DataTableUtilities();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FDBDTunableRowBase::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATATABLEUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDBDTunableRowBase_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDTunableRowBase, Z_Construct_UPackage__Script_DataTableUtilities(), TEXT("DBDTunableRowBase"), sizeof(FDBDTunableRowBase), Get_Z_Construct_UScriptStruct_FDBDTunableRowBase_Hash());
	}
	return Singleton;
}
template<> DATATABLEUTILITIES_API UScriptStruct* StaticStruct<FDBDTunableRowBase>()
{
	return FDBDTunableRowBase::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDTunableRowBase(FDBDTunableRowBase::StaticStruct, TEXT("/Script/DataTableUtilities"), TEXT("DBDTunableRowBase"), false, nullptr, nullptr);
static struct FScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTunableRowBase
{
	FScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTunableRowBase()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDTunableRowBase")),new UScriptStruct::TCppStructOps<FDBDTunableRowBase>);
	}
} ScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTunableRowBase;
	struct Z_Construct_UScriptStruct_FDBDTunableRowBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTunableRowBase_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTunableRowBase.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDTunableRowBase_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDTunableRowBase>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDTunableRowBase_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataTableUtilities,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"DBDTunableRowBase",
		sizeof(FDBDTunableRowBase),
		alignof(FDBDTunableRowBase),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTunableRowBase_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTunableRowBase_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowBase()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDTunableRowBase_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataTableUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDTunableRowBase"), sizeof(FDBDTunableRowBase), Get_Z_Construct_UScriptStruct_FDBDTunableRowBase_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDTunableRowBase_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDTunableRowBase_Hash() { return 4044730878U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
