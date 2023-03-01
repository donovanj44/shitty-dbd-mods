// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AssetLibraryLoader.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetLibraryLoader() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAssetLibraryLoader();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UAssetLibrary_NoRegister();
// End Cross Module References
class UScriptStruct* FAssetLibraryLoader::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAssetLibraryLoader_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetLibraryLoader, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AssetLibraryLoader"), sizeof(FAssetLibraryLoader), Get_Z_Construct_UScriptStruct_FAssetLibraryLoader_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAssetLibraryLoader>()
{
	return FAssetLibraryLoader::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAssetLibraryLoader(FAssetLibraryLoader::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AssetLibraryLoader"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAssetLibraryLoader
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAssetLibraryLoader()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AssetLibraryLoader")),new UScriptStruct::TCppStructOps<FAssetLibraryLoader>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAssetLibraryLoader;
	struct Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssetLibrary_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssetLibrary;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AssetLibraryLoader.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetLibraryLoader>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::NewProp_AssetLibrary_MetaData[] = {
		{ "ModuleRelativePath", "Public/AssetLibraryLoader.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::NewProp_AssetLibrary = { "AssetLibrary", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAssetLibraryLoader, AssetLibrary), Z_Construct_UClass_UAssetLibrary_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::NewProp_AssetLibrary_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::NewProp_AssetLibrary_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::NewProp_AssetLibrary,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AssetLibraryLoader",
		sizeof(FAssetLibraryLoader),
		alignof(FAssetLibraryLoader),
		Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAssetLibraryLoader()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAssetLibraryLoader_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AssetLibraryLoader"), sizeof(FAssetLibraryLoader), Get_Z_Construct_UScriptStruct_FAssetLibraryLoader_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAssetLibraryLoader_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAssetLibraryLoader_Hash() { return 317212762U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
