// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GFXUtilities/Public/DBDCullDistanceSizePair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDCullDistanceSizePair() {}
// Cross Module References
	GFXUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDCullDistanceSizePair();
	UPackage* Z_Construct_UPackage__Script_GFXUtilities();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformFloat();
// End Cross Module References
class UScriptStruct* FDBDCullDistanceSizePair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GFXUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDCullDistanceSizePair, Z_Construct_UPackage__Script_GFXUtilities(), TEXT("DBDCullDistanceSizePair"), sizeof(FDBDCullDistanceSizePair), Get_Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Hash());
	}
	return Singleton;
}
template<> GFXUTILITIES_API UScriptStruct* StaticStruct<FDBDCullDistanceSizePair>()
{
	return FDBDCullDistanceSizePair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDCullDistanceSizePair(FDBDCullDistanceSizePair::StaticStruct, TEXT("/Script/GFXUtilities"), TEXT("DBDCullDistanceSizePair"), false, nullptr, nullptr);
static struct FScriptStruct_GFXUtilities_StaticRegisterNativesFDBDCullDistanceSizePair
{
	FScriptStruct_GFXUtilities_StaticRegisterNativesFDBDCullDistanceSizePair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDCullDistanceSizePair")),new UScriptStruct::TCppStructOps<FDBDCullDistanceSizePair>);
	}
} ScriptStruct_GFXUtilities_StaticRegisterNativesFDBDCullDistanceSizePair;
	struct Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CullDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CullDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Size;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDCullDistanceSizePair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDCullDistanceSizePair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData[] = {
		{ "Category", "DBDCullDistanceSizePair" },
		{ "ModuleRelativePath", "Public/DBDCullDistanceSizePair.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_CullDistance = { "CullDistance", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCullDistanceSizePair, CullDistance), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_CullDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_Size_MetaData[] = {
		{ "Category", "DBDCullDistanceSizePair" },
		{ "ModuleRelativePath", "Public/DBDCullDistanceSizePair.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDCullDistanceSizePair, Size), Z_Construct_UScriptStruct_FPerPlatformFloat, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_Size_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_Size_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_CullDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::NewProp_Size,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GFXUtilities,
		nullptr,
		&NewStructOps,
		"DBDCullDistanceSizePair",
		sizeof(FDBDCullDistanceSizePair),
		alignof(FDBDCullDistanceSizePair),
		Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDCullDistanceSizePair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GFXUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDCullDistanceSizePair"), sizeof(FDBDCullDistanceSizePair), Get_Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDCullDistanceSizePair_Hash() { return 1012628531U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
