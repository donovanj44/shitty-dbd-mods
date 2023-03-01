// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaRitualSetIndex.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaRitualSetIndex() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualSetIndex();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FAtlantaRitualSetIndex::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaRitualSetIndex, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaRitualSetIndex"), sizeof(FAtlantaRitualSetIndex), Get_Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaRitualSetIndex>()
{
	return FAtlantaRitualSetIndex::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaRitualSetIndex(FAtlantaRitualSetIndex::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaRitualSetIndex"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualSetIndex
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualSetIndex()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaRitualSetIndex")),new UScriptStruct::TCppStructOps<FAtlantaRitualSetIndex>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualSetIndex;
	struct Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ritualType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ritualType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_index_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_index;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualSetIndex.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaRitualSetIndex>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_ritualType_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualSetIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_ritualType = { "ritualType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualSetIndex, ritualType), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_ritualType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_ritualType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_index_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualSetIndex.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_index = { "index", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualSetIndex, index), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_index_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_index_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_ritualType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::NewProp_index,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaRitualSetIndex",
		sizeof(FAtlantaRitualSetIndex),
		alignof(FAtlantaRitualSetIndex),
		Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualSetIndex()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaRitualSetIndex"), sizeof(FAtlantaRitualSetIndex), Get_Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualSetIndex_Hash() { return 1378937735U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
