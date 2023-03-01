// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/BlindTargetViewData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlindTargetViewData() {}
// Cross Module References
	DBDGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FBlindTargetViewData();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
class UScriptStruct* FBlindTargetViewData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDGAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FBlindTargetViewData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlindTargetViewData, Z_Construct_UPackage__Script_DBDGameplay(), TEXT("BlindTargetViewData"), sizeof(FBlindTargetViewData), Get_Z_Construct_UScriptStruct_FBlindTargetViewData_Hash());
	}
	return Singleton;
}
template<> DBDGAMEPLAY_API UScriptStruct* StaticStruct<FBlindTargetViewData>()
{
	return FBlindTargetViewData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlindTargetViewData(FBlindTargetViewData::StaticStruct, TEXT("/Script/DBDGameplay"), TEXT("BlindTargetViewData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDGameplay_StaticRegisterNativesFBlindTargetViewData
{
	FScriptStruct_DBDGameplay_StaticRegisterNativesFBlindTargetViewData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlindTargetViewData")),new UScriptStruct::TCppStructOps<FBlindTargetViewData>);
	}
} ScriptStruct_DBDGameplay_StaticRegisterNativesFBlindTargetViewData;
	struct Z_Construct_UScriptStruct_FBlindTargetViewData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlindTargetViewData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BlindTargetViewData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlindTargetViewData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlindTargetViewData>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlindTargetViewData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
		nullptr,
		&NewStructOps,
		"BlindTargetViewData",
		sizeof(FBlindTargetViewData),
		alignof(FBlindTargetViewData),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlindTargetViewData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlindTargetViewData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlindTargetViewData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlindTargetViewData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDGameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlindTargetViewData"), sizeof(FBlindTargetViewData), Get_Z_Construct_UScriptStruct_FBlindTargetViewData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlindTargetViewData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlindTargetViewData_Hash() { return 872645547U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
