// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainTraceData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainTraceData() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25ChainTraceData();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
class UScriptStruct* FK25ChainTraceData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FK25ChainTraceData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK25ChainTraceData, Z_Construct_UPackage__Script_TheK25(), TEXT("K25ChainTraceData"), sizeof(FK25ChainTraceData), Get_Z_Construct_UScriptStruct_FK25ChainTraceData_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FK25ChainTraceData>()
{
	return FK25ChainTraceData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK25ChainTraceData(FK25ChainTraceData::StaticStruct, TEXT("/Script/TheK25"), TEXT("K25ChainTraceData"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFK25ChainTraceData
{
	FScriptStruct_TheK25_StaticRegisterNativesFK25ChainTraceData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K25ChainTraceData")),new UScriptStruct::TCppStructOps<FK25ChainTraceData>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFK25ChainTraceData;
	struct Z_Construct_UScriptStruct_FK25ChainTraceData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ChainTraceData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25ChainTraceData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK25ChainTraceData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK25ChainTraceData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK25ChainTraceData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"K25ChainTraceData",
		sizeof(FK25ChainTraceData),
		alignof(FK25ChainTraceData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ChainTraceData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainTraceData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK25ChainTraceData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK25ChainTraceData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K25ChainTraceData"), sizeof(FK25ChainTraceData), Get_Z_Construct_UScriptStruct_FK25ChainTraceData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK25ChainTraceData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK25ChainTraceData_Hash() { return 3486897114U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
