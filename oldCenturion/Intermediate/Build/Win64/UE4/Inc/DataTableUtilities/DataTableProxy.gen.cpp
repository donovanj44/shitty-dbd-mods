// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableUtilities/Public/DataTableProxy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDataTableProxy() {}
// Cross Module References
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableProxy();
	UPackage* Z_Construct_UPackage__Script_DataTableUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
class UScriptStruct* FDataTableProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATATABLEUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDataTableProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDataTableProxy, Z_Construct_UPackage__Script_DataTableUtilities(), TEXT("DataTableProxy"), sizeof(FDataTableProxy), Get_Z_Construct_UScriptStruct_FDataTableProxy_Hash());
	}
	return Singleton;
}
template<> DATATABLEUTILITIES_API UScriptStruct* StaticStruct<FDataTableProxy>()
{
	return FDataTableProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDataTableProxy(FDataTableProxy::StaticStruct, TEXT("/Script/DataTableUtilities"), TEXT("DataTableProxy"), false, nullptr, nullptr);
static struct FScriptStruct_DataTableUtilities_StaticRegisterNativesFDataTableProxy
{
	FScriptStruct_DataTableUtilities_StaticRegisterNativesFDataTableProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DataTableProxy")),new UScriptStruct::TCppStructOps<FDataTableProxy>);
	}
} ScriptStruct_DataTableUtilities_StaticRegisterNativesFDataTableProxy;
	struct Z_Construct_UScriptStruct_FDataTableProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dataTable_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__dataTable;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AssetPtr;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableProxy_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DataTableProxy.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDataTableProxy>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp__dataTable_MetaData[] = {
		{ "ModuleRelativePath", "Public/DataTableProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp__dataTable = { "_dataTable", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableProxy, _dataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp__dataTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp__dataTable_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp_AssetPtr_MetaData[] = {
		{ "Category", "DataTableProxy" },
		{ "ModuleRelativePath", "Public/DataTableProxy.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp_AssetPtr = { "AssetPtr", nullptr, (EPropertyFlags)0x0024080000010005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDataTableProxy, AssetPtr), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp_AssetPtr_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp_AssetPtr_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDataTableProxy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp__dataTable,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDataTableProxy_Statics::NewProp_AssetPtr,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDataTableProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataTableUtilities,
		nullptr,
		&NewStructOps,
		"DataTableProxy",
		sizeof(FDataTableProxy),
		alignof(FDataTableProxy),
		Z_Construct_UScriptStruct_FDataTableProxy_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableProxy_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDataTableProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDataTableProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDataTableProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDataTableProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataTableUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DataTableProxy"), sizeof(FDataTableProxy), Get_Z_Construct_UScriptStruct_FDataTableProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDataTableProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDataTableProxy_Hash() { return 3717047545U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
