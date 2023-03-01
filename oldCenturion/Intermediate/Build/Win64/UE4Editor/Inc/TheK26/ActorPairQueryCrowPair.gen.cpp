// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/ActorPairQueryCrowPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPairQueryCrowPair() {}
// Cross Module References
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FActorPairQueryCrowPair();
	UPackage* Z_Construct_UPackage__Script_TheK26();
// End Cross Module References
class UScriptStruct* FActorPairQueryCrowPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK26_API uint32 Get_Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPairQueryCrowPair, Z_Construct_UPackage__Script_TheK26(), TEXT("ActorPairQueryCrowPair"), sizeof(FActorPairQueryCrowPair), Get_Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Hash());
	}
	return Singleton;
}
template<> THEK26_API UScriptStruct* StaticStruct<FActorPairQueryCrowPair>()
{
	return FActorPairQueryCrowPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorPairQueryCrowPair(FActorPairQueryCrowPair::StaticStruct, TEXT("/Script/TheK26"), TEXT("ActorPairQueryCrowPair"), false, nullptr, nullptr);
static struct FScriptStruct_TheK26_StaticRegisterNativesFActorPairQueryCrowPair
{
	FScriptStruct_TheK26_StaticRegisterNativesFActorPairQueryCrowPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorPairQueryCrowPair")),new UScriptStruct::TCppStructOps<FActorPairQueryCrowPair>);
	}
} ScriptStruct_TheK26_StaticRegisterNativesFActorPairQueryCrowPair;
	struct Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPairQueryCrowPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPairQueryCrowPair>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
		nullptr,
		&NewStructOps,
		"ActorPairQueryCrowPair",
		sizeof(FActorPairQueryCrowPair),
		alignof(FActorPairQueryCrowPair),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPairQueryCrowPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK26();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorPairQueryCrowPair"), sizeof(FActorPairQueryCrowPair), Get_Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorPairQueryCrowPair_Hash() { return 3238061735U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
