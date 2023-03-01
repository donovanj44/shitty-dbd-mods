// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FranklinsHitNearDroppedItemAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFranklinsHitNearDroppedItemAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBasePerkAnalytics();
// End Cross Module References
class UScriptStruct* FFranklinsHitNearDroppedItemAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FranklinsHitNearDroppedItemAnalytics"), sizeof(FFranklinsHitNearDroppedItemAnalytics), Get_Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFranklinsHitNearDroppedItemAnalytics>()
{
	return FFranklinsHitNearDroppedItemAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics(FFranklinsHitNearDroppedItemAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FranklinsHitNearDroppedItemAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFranklinsHitNearDroppedItemAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFranklinsHitNearDroppedItemAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FranklinsHitNearDroppedItemAnalytics")),new UScriptStruct::TCppStructOps<FFranklinsHitNearDroppedItemAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFranklinsHitNearDroppedItemAnalytics;
	struct Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackingSlasherMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AttackingSlasherMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitSurvivorMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HitSurvivorMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FranklinsHitNearDroppedItemAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFranklinsHitNearDroppedItemAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_AttackingSlasherMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FranklinsHitNearDroppedItemAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_AttackingSlasherMirrorsId = { "AttackingSlasherMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFranklinsHitNearDroppedItemAnalytics, AttackingSlasherMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_AttackingSlasherMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_AttackingSlasherMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_HitSurvivorMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FranklinsHitNearDroppedItemAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_HitSurvivorMirrorsId = { "HitSurvivorMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFranklinsHitNearDroppedItemAnalytics, HitSurvivorMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_HitSurvivorMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_HitSurvivorMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_AttackingSlasherMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::NewProp_HitSurvivorMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBasePerkAnalytics,
		&NewStructOps,
		"FranklinsHitNearDroppedItemAnalytics",
		sizeof(FFranklinsHitNearDroppedItemAnalytics),
		alignof(FFranklinsHitNearDroppedItemAnalytics),
		Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FranklinsHitNearDroppedItemAnalytics"), sizeof(FFranklinsHitNearDroppedItemAnalytics), Get_Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFranklinsHitNearDroppedItemAnalytics_Hash() { return 872130249U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
