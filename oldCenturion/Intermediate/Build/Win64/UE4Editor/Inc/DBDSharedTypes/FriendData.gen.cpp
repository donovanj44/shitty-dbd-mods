// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDSharedTypes/Public/FriendData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendData() {}
// Cross Module References
	DBDSHAREDTYPES_API UScriptStruct* Z_Construct_UScriptStruct_FFriendData();
	UPackage* Z_Construct_UPackage__Script_DBDSharedTypes();
// End Cross Module References
class UScriptStruct* FFriendData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDSHAREDTYPES_API uint32 Get_Z_Construct_UScriptStruct_FFriendData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFriendData, Z_Construct_UPackage__Script_DBDSharedTypes(), TEXT("FriendData"), sizeof(FFriendData), Get_Z_Construct_UScriptStruct_FFriendData_Hash());
	}
	return Singleton;
}
template<> DBDSHAREDTYPES_API UScriptStruct* StaticStruct<FFriendData>()
{
	return FFriendData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFriendData(FFriendData::StaticStruct, TEXT("/Script/DBDSharedTypes"), TEXT("FriendData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDSharedTypes_StaticRegisterNativesFFriendData
{
	FScriptStruct_DBDSharedTypes_StaticRegisterNativesFFriendData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FriendData")),new UScriptStruct::TCppStructOps<FFriendData>);
	}
} ScriptStruct_DBDSharedTypes_StaticRegisterNativesFFriendData;
	struct Z_Construct_UScriptStruct_FFriendData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFriendData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FriendData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFriendData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFriendData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFriendData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDSharedTypes,
		nullptr,
		&NewStructOps,
		"FriendData",
		sizeof(FFriendData),
		alignof(FFriendData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFriendData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFriendData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFriendData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFriendData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDSharedTypes();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FriendData"), sizeof(FFriendData), Get_Z_Construct_UScriptStruct_FFriendData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFriendData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFriendData_Hash() { return 1791122857U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
