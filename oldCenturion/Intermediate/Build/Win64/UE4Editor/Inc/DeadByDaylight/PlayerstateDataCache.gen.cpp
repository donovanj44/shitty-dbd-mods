// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PlayerstateDataCache.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerstateDataCache() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPlayerstateDataCache();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAwardedScores();
// End Cross Module References
class UScriptStruct* FPlayerstateDataCache::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPlayerstateDataCache_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPlayerstateDataCache, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PlayerstateDataCache"), sizeof(FPlayerstateDataCache), Get_Z_Construct_UScriptStruct_FPlayerstateDataCache_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPlayerstateDataCache>()
{
	return FPlayerstateDataCache::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPlayerstateDataCache(FPlayerstateDataCache::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PlayerstateDataCache"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerstateDataCache
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerstateDataCache()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PlayerstateDataCache")),new UScriptStruct::TCppStructOps<FPlayerstateDataCache>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPlayerstateDataCache;
	struct Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDataCacheValid_MetaData[];
#endif
		static void NewProp_IsDataCacheValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDataCacheValid;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_awardedScoresByType_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_awardedScoresByType;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_awardedScoresByType_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_awardedScoresByType_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PlayerstateDataCache.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPlayerstateDataCache>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_IsDataCacheValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerstateDataCache.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_IsDataCacheValid_SetBit(void* Obj)
	{
		((FPlayerstateDataCache*)Obj)->IsDataCacheValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_IsDataCacheValid = { "IsDataCacheValid", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPlayerstateDataCache), &Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_IsDataCacheValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_IsDataCacheValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_IsDataCacheValid_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType_MetaData[] = {
		{ "ModuleRelativePath", "Public/PlayerstateDataCache.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType = { "awardedScoresByType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPlayerstateDataCache, awardedScoresByType), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType_Key_KeyProp = { "awardedScoresByType_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType_ValueProp = { "awardedScoresByType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAwardedScores, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_IsDataCacheValid,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::NewProp_awardedScoresByType_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PlayerstateDataCache",
		sizeof(FPlayerstateDataCache),
		alignof(FPlayerstateDataCache),
		Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPlayerstateDataCache()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPlayerstateDataCache_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PlayerstateDataCache"), sizeof(FPlayerstateDataCache), Get_Z_Construct_UScriptStruct_FPlayerstateDataCache_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPlayerstateDataCache_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPlayerstateDataCache_Hash() { return 4266425160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
