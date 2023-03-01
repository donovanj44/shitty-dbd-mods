// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/DreamPalletSpawnState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDreamPalletSpawnState() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FDreamPalletSpawnState();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
class UScriptStruct* FDreamPalletSpawnState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FDreamPalletSpawnState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDreamPalletSpawnState, Z_Construct_UPackage__Script_DBDBots(), TEXT("DreamPalletSpawnState"), sizeof(FDreamPalletSpawnState), Get_Z_Construct_UScriptStruct_FDreamPalletSpawnState_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FDreamPalletSpawnState>()
{
	return FDreamPalletSpawnState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDreamPalletSpawnState(FDreamPalletSpawnState::StaticStruct, TEXT("/Script/DBDBots"), TEXT("DreamPalletSpawnState"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFDreamPalletSpawnState
{
	FScriptStruct_DBDBots_StaticRegisterNativesFDreamPalletSpawnState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DreamPalletSpawnState")),new UScriptStruct::TCppStructOps<FDreamPalletSpawnState>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFDreamPalletSpawnState;
	struct Z_Construct_UScriptStruct_FDreamPalletSpawnState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDreamPalletSpawnState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DreamPalletSpawnState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDreamPalletSpawnState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDreamPalletSpawnState>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDreamPalletSpawnState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"DreamPalletSpawnState",
		sizeof(FDreamPalletSpawnState),
		alignof(FDreamPalletSpawnState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDreamPalletSpawnState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDreamPalletSpawnState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDreamPalletSpawnState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDreamPalletSpawnState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DreamPalletSpawnState"), sizeof(FDreamPalletSpawnState), Get_Z_Construct_UScriptStruct_FDreamPalletSpawnState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDreamPalletSpawnState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDreamPalletSpawnState_Hash() { return 1259319945U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
