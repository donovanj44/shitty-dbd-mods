// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/TestableStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestableStat() {}
// Cross Module References
	DBDGAMEPLAY_API UScriptStruct* Z_Construct_UScriptStruct_FTestableStat();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
class UScriptStruct* FTestableStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDGAMEPLAY_API uint32 Get_Z_Construct_UScriptStruct_FTestableStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTestableStat, Z_Construct_UPackage__Script_DBDGameplay(), TEXT("TestableStat"), sizeof(FTestableStat), Get_Z_Construct_UScriptStruct_FTestableStat_Hash());
	}
	return Singleton;
}
template<> DBDGAMEPLAY_API UScriptStruct* StaticStruct<FTestableStat>()
{
	return FTestableStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTestableStat(FTestableStat::StaticStruct, TEXT("/Script/DBDGameplay"), TEXT("TestableStat"), false, nullptr, nullptr);
static struct FScriptStruct_DBDGameplay_StaticRegisterNativesFTestableStat
{
	FScriptStruct_DBDGameplay_StaticRegisterNativesFTestableStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TestableStat")),new UScriptStruct::TCppStructOps<FTestableStat>);
	}
} ScriptStruct_DBDGameplay_StaticRegisterNativesFTestableStat;
	struct Z_Construct_UScriptStruct_FTestableStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTestableStat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/TestableStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTestableStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTestableStat>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTestableStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
		Z_Construct_UScriptStruct_FTunableStat,
		&NewStructOps,
		"TestableStat",
		sizeof(FTestableStat),
		alignof(FTestableStat),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTestableStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTestableStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTestableStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTestableStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDGameplay();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TestableStat"), sizeof(FTestableStat), Get_Z_Construct_UScriptStruct_FTestableStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTestableStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTestableStat_Hash() { return 3810780412U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
