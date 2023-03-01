// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableUtilities/Public/DBDTunableRowHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTunableRowHandle() {}
// Cross Module References
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
	UPackage* Z_Construct_UPackage__Script_DataTableUtilities();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
// End Cross Module References
class UScriptStruct* FDBDTunableRowHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATATABLEUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDBDTunableRowHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDTunableRowHandle, Z_Construct_UPackage__Script_DataTableUtilities(), TEXT("DBDTunableRowHandle"), sizeof(FDBDTunableRowHandle), Get_Z_Construct_UScriptStruct_FDBDTunableRowHandle_Hash());
	}
	return Singleton;
}
template<> DATATABLEUTILITIES_API UScriptStruct* StaticStruct<FDBDTunableRowHandle>()
{
	return FDBDTunableRowHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDTunableRowHandle(FDBDTunableRowHandle::StaticStruct, TEXT("/Script/DataTableUtilities"), TEXT("DBDTunableRowHandle"), false, nullptr, nullptr);
static struct FScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTunableRowHandle
{
	FScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTunableRowHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDTunableRowHandle")),new UScriptStruct::TCppStructOps<FDBDTunableRowHandle>);
	}
} ScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTunableRowHandle;
	struct Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__defaultValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__defaultValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__dataTableRowHandle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__dataTableRowHandle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDTunableRowHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDTunableRowHandle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__defaultValue_MetaData[] = {
		{ "Category", "DBDTunableRowHandle" },
		{ "ModuleRelativePath", "Public/DBDTunableRowHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__defaultValue = { "_defaultValue", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDTunableRowHandle, _defaultValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__defaultValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__defaultValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__dataTableRowHandle_MetaData[] = {
		{ "Category", "DBDTunableRowHandle" },
		{ "ModuleRelativePath", "Public/DBDTunableRowHandle.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__dataTableRowHandle = { "_dataTableRowHandle", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDTunableRowHandle, _dataTableRowHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__dataTableRowHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__dataTableRowHandle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__defaultValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::NewProp__dataTableRowHandle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataTableUtilities,
		nullptr,
		&NewStructOps,
		"DBDTunableRowHandle",
		sizeof(FDBDTunableRowHandle),
		alignof(FDBDTunableRowHandle),
		Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDTunableRowHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataTableUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDTunableRowHandle"), sizeof(FDBDTunableRowHandle), Get_Z_Construct_UScriptStruct_FDBDTunableRowHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDTunableRowHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDTunableRowHandle_Hash() { return 864723996U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
