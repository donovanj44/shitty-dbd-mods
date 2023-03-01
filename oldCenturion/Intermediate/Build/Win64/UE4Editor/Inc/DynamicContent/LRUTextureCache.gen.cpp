// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DynamicContent/Public/LRUTextureCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLRUTextureCache() {}
// Cross Module References
	DYNAMICCONTENT_API UScriptStruct* Z_Construct_UScriptStruct_FLRUTextureCache();
	UPackage* Z_Construct_UPackage__Script_DynamicContent();
	ENGINE_API UClass* Z_Construct_UClass_UTexture2DDynamic_NoRegister();
// End Cross Module References
class UScriptStruct* FLRUTextureCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DYNAMICCONTENT_API uint32 Get_Z_Construct_UScriptStruct_FLRUTextureCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLRUTextureCache, Z_Construct_UPackage__Script_DynamicContent(), TEXT("LRUTextureCache"), sizeof(FLRUTextureCache), Get_Z_Construct_UScriptStruct_FLRUTextureCache_Hash());
	}
	return Singleton;
}
template<> DYNAMICCONTENT_API UScriptStruct* StaticStruct<FLRUTextureCache>()
{
	return FLRUTextureCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLRUTextureCache(FLRUTextureCache::StaticStruct, TEXT("/Script/DynamicContent"), TEXT("LRUTextureCache"), false, nullptr, nullptr);
static struct FScriptStruct_DynamicContent_StaticRegisterNativesFLRUTextureCache
{
	FScriptStruct_DynamicContent_StaticRegisterNativesFLRUTextureCache()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LRUTextureCache")),new UScriptStruct::TCppStructOps<FLRUTextureCache>);
	}
} ScriptStruct_DynamicContent_StaticRegisterNativesFLRUTextureCache;
	struct Z_Construct_UScriptStruct_FLRUTextureCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cachedTextures_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__cachedTextures;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__cachedTextures_Key_KeyProp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__cachedTextures_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLRUTextureCache_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LRUTextureCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLRUTextureCache>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures_MetaData[] = {
		{ "ModuleRelativePath", "Public/LRUTextureCache.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures = { "_cachedTextures", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLRUTextureCache, _cachedTextures), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures_Key_KeyProp = { "_cachedTextures_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures_ValueProp = { "_cachedTextures", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UTexture2DDynamic_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLRUTextureCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLRUTextureCache_Statics::NewProp__cachedTextures_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLRUTextureCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DynamicContent,
		nullptr,
		&NewStructOps,
		"LRUTextureCache",
		sizeof(FLRUTextureCache),
		alignof(FLRUTextureCache),
		Z_Construct_UScriptStruct_FLRUTextureCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLRUTextureCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLRUTextureCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLRUTextureCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLRUTextureCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLRUTextureCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DynamicContent();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LRUTextureCache"), sizeof(FLRUTextureCache), Get_Z_Construct_UScriptStruct_FLRUTextureCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLRUTextureCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLRUTextureCache_Hash() { return 2795810200U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
