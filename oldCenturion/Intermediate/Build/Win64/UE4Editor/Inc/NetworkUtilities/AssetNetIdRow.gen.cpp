// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/AssetNetIdRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetNetIdRow() {}
// Cross Module References
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAssetNetIdRow();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
// End Cross Module References
class UScriptStruct* FAssetNetIdRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORKUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAssetNetIdRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetNetIdRow, Z_Construct_UPackage__Script_NetworkUtilities(), TEXT("AssetNetIdRow"), sizeof(FAssetNetIdRow), Get_Z_Construct_UScriptStruct_FAssetNetIdRow_Hash());
	}
	return Singleton;
}
template<> NETWORKUTILITIES_API UScriptStruct* StaticStruct<FAssetNetIdRow>()
{
	return FAssetNetIdRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetNetIdRow(FAssetNetIdRow::StaticStruct, TEXT("/Script/NetworkUtilities"), TEXT("AssetNetIdRow"), false, nullptr, nullptr);
static struct FScriptStruct_NetworkUtilities_StaticRegisterNativesFAssetNetIdRow
{
	FScriptStruct_NetworkUtilities_StaticRegisterNativesFAssetNetIdRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetNetIdRow")),new UScriptStruct::TCppStructOps<FAssetNetIdRow>);
	}
} ScriptStruct_NetworkUtilities_StaticRegisterNativesFAssetNetIdRow;
	struct Z_Construct_UScriptStruct_FAssetNetIdRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NetId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NetId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AssetNetIdRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetNetIdRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::NewProp_NetId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetNetIdRow.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::NewProp_NetId = { "NetId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetNetIdRow, NetId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::NewProp_NetId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::NewProp_NetId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::NewProp_NetId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"AssetNetIdRow",
		sizeof(FAssetNetIdRow),
		alignof(FAssetNetIdRow),
		Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetNetIdRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetNetIdRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetNetIdRow"), sizeof(FAssetNetIdRow), Get_Z_Construct_UScriptStruct_FAssetNetIdRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetNetIdRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetNetIdRow_Hash() { return 2275928329U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
