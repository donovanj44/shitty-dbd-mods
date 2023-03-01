// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArrayOfATile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArrayOfATile() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArrayOfATile();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATile_NoRegister();
// End Cross Module References
class UScriptStruct* FArrayOfATile::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArrayOfATile_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArrayOfATile, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArrayOfATile"), sizeof(FArrayOfATile), Get_Z_Construct_UScriptStruct_FArrayOfATile_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArrayOfATile>()
{
	return FArrayOfATile::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArrayOfATile(FArrayOfATile::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArrayOfATile"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArrayOfATile
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArrayOfATile()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArrayOfATile")),new UScriptStruct::TCppStructOps<FArrayOfATile>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArrayOfATile;
	struct Z_Construct_UScriptStruct_FArrayOfATile_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ArrayOfTiles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ArrayOfTiles;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ArrayOfTiles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayOfATile_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArrayOfATile.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArrayOfATile_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArrayOfATile>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArrayOfATile_Statics::NewProp_ArrayOfTiles_MetaData[] = {
		{ "ModuleRelativePath", "Public/ArrayOfATile.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FArrayOfATile_Statics::NewProp_ArrayOfTiles = { "ArrayOfTiles", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArrayOfATile, ArrayOfTiles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayOfATile_Statics::NewProp_ArrayOfTiles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayOfATile_Statics::NewProp_ArrayOfTiles_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FArrayOfATile_Statics::NewProp_ArrayOfTiles_Inner = { "ArrayOfTiles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ATile_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArrayOfATile_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayOfATile_Statics::NewProp_ArrayOfTiles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArrayOfATile_Statics::NewProp_ArrayOfTiles_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArrayOfATile_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ArrayOfATile",
		sizeof(FArrayOfATile),
		alignof(FArrayOfATile),
		Z_Construct_UScriptStruct_FArrayOfATile_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayOfATile_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArrayOfATile_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArrayOfATile_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArrayOfATile()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArrayOfATile_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArrayOfATile"), sizeof(FArrayOfATile), Get_Z_Construct_UScriptStruct_FArrayOfATile_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArrayOfATile_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArrayOfATile_Hash() { return 4256375034U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
