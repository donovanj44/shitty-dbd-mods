// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25SurvivorTeleportationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25SurvivorTeleportationData() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25SurvivorTeleportationData();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
class UScriptStruct* FK25SurvivorTeleportationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK25SurvivorTeleportationData, Z_Construct_UPackage__Script_TheK25(), TEXT("K25SurvivorTeleportationData"), sizeof(FK25SurvivorTeleportationData), Get_Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FK25SurvivorTeleportationData>()
{
	return FK25SurvivorTeleportationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK25SurvivorTeleportationData(FK25SurvivorTeleportationData::StaticStruct, TEXT("/Script/TheK25"), TEXT("K25SurvivorTeleportationData"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFK25SurvivorTeleportationData
{
	FScriptStruct_TheK25_StaticRegisterNativesFK25SurvivorTeleportationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K25SurvivorTeleportationData")),new UScriptStruct::TCppStructOps<FK25SurvivorTeleportationData>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFK25SurvivorTeleportationData;
	struct Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/K25SurvivorTeleportationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK25SurvivorTeleportationData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"K25SurvivorTeleportationData",
		sizeof(FK25SurvivorTeleportationData),
		alignof(FK25SurvivorTeleportationData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK25SurvivorTeleportationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K25SurvivorTeleportationData"), sizeof(FK25SurvivorTeleportationData), Get_Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK25SurvivorTeleportationData_Hash() { return 3563311690U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
