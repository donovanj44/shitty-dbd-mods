// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PotentialRandomizableSpawnerPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePotentialRandomizableSpawnerPool() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRandomizableActorSpawner();
// End Cross Module References
class UScriptStruct* FPotentialRandomizableSpawnerPool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PotentialRandomizableSpawnerPool"), sizeof(FPotentialRandomizableSpawnerPool), Get_Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPotentialRandomizableSpawnerPool>()
{
	return FPotentialRandomizableSpawnerPool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPotentialRandomizableSpawnerPool(FPotentialRandomizableSpawnerPool::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PotentialRandomizableSpawnerPool"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPotentialRandomizableSpawnerPool
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPotentialRandomizableSpawnerPool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PotentialRandomizableSpawnerPool")),new UScriptStruct::TCppStructOps<FPotentialRandomizableSpawnerPool>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPotentialRandomizableSpawnerPool;
	struct Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnerPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnerPool;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnerPool_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PotentialRandomizableSpawnerPool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPotentialRandomizableSpawnerPool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::NewProp_SpawnerPool_MetaData[] = {
		{ "Category", "PotentialRandomizableSpawnerPool" },
		{ "ModuleRelativePath", "Public/PotentialRandomizableSpawnerPool.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::NewProp_SpawnerPool = { "SpawnerPool", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPotentialRandomizableSpawnerPool, SpawnerPool), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::NewProp_SpawnerPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::NewProp_SpawnerPool_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::NewProp_SpawnerPool_Inner = { "SpawnerPool", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FRandomizableActorSpawner, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::NewProp_SpawnerPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::NewProp_SpawnerPool_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PotentialRandomizableSpawnerPool",
		sizeof(FPotentialRandomizableSpawnerPool),
		alignof(FPotentialRandomizableSpawnerPool),
		Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PotentialRandomizableSpawnerPool"), sizeof(FPotentialRandomizableSpawnerPool), Get_Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool_Hash() { return 2280522064U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
