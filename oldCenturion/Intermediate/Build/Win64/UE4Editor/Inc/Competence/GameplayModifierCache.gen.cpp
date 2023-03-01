// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Competence/Public/GameplayModifierCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameplayModifierCache() {}
// Cross Module References
	COMPETENCE_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierCache();
	UPackage* Z_Construct_UPackage__Script_Competence();
// End Cross Module References
class UScriptStruct* FGameplayModifierCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern COMPETENCE_API uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameplayModifierCache, Z_Construct_UPackage__Script_Competence(), TEXT("GameplayModifierCache"), sizeof(FGameplayModifierCache), Get_Z_Construct_UScriptStruct_FGameplayModifierCache_Hash());
	}
	return Singleton;
}
template<> COMPETENCE_API UScriptStruct* StaticStruct<FGameplayModifierCache>()
{
	return FGameplayModifierCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameplayModifierCache(FGameplayModifierCache::StaticStruct, TEXT("/Script/Competence"), TEXT("GameplayModifierCache"), false, nullptr, nullptr);
static struct FScriptStruct_Competence_StaticRegisterNativesFGameplayModifierCache
{
	FScriptStruct_Competence_StaticRegisterNativesFGameplayModifierCache()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameplayModifierCache")),new UScriptStruct::TCppStructOps<FGameplayModifierCache>);
	}
} ScriptStruct_Competence_StaticRegisterNativesFGameplayModifierCache;
	struct Z_Construct_UScriptStruct_FGameplayModifierCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameplayModifierCache_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/GameplayModifierCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameplayModifierCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameplayModifierCache>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameplayModifierCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Competence,
		nullptr,
		&NewStructOps,
		"GameplayModifierCache",
		sizeof(FGameplayModifierCache),
		alignof(FGameplayModifierCache),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameplayModifierCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameplayModifierCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameplayModifierCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Competence();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameplayModifierCache"), sizeof(FGameplayModifierCache), Get_Z_Construct_UScriptStruct_FGameplayModifierCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameplayModifierCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameplayModifierCache_Hash() { return 4187549272U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
