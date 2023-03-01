// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DataTableUtilities/Public/DBDTableRowBaseWithId.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTableRowBaseWithId() {}
// Cross Module References
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
	UPackage* Z_Construct_UPackage__Script_DataTableUtilities();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FDBDTableRowBaseWithId::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DATATABLEUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDTableRowBaseWithId, Z_Construct_UPackage__Script_DataTableUtilities(), TEXT("DBDTableRowBaseWithId"), sizeof(FDBDTableRowBaseWithId), Get_Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Hash());
	}
	return Singleton;
}
template<> DATATABLEUTILITIES_API UScriptStruct* StaticStruct<FDBDTableRowBaseWithId>()
{
	return FDBDTableRowBaseWithId::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDTableRowBaseWithId(FDBDTableRowBaseWithId::StaticStruct, TEXT("/Script/DataTableUtilities"), TEXT("DBDTableRowBaseWithId"), false, nullptr, nullptr);
static struct FScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTableRowBaseWithId
{
	FScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTableRowBaseWithId()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDTableRowBaseWithId")),new UScriptStruct::TCppStructOps<FDBDTableRowBaseWithId>);
	}
} ScriptStruct_DataTableUtilities_StaticRegisterNativesFDBDTableRowBaseWithId;
	struct Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDTableRowBaseWithId.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDTableRowBaseWithId>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDTableRowBaseWithId.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDTableRowBaseWithId, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DataTableUtilities,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"DBDTableRowBaseWithId",
		sizeof(FDBDTableRowBaseWithId),
		alignof(FDBDTableRowBaseWithId),
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DataTableUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDTableRowBaseWithId"), sizeof(FDBDTableRowBaseWithId), Get_Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDTableRowBaseWithId_Hash() { return 2520815279U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
