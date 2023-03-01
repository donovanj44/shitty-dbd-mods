// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FranklinsDemiseConsumedItemAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFranklinsDemiseConsumedItemAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBasePerkAnalytics();
// End Cross Module References
class UScriptStruct* FFranklinsDemiseConsumedItemAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FranklinsDemiseConsumedItemAnalytics"), sizeof(FFranklinsDemiseConsumedItemAnalytics), Get_Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFranklinsDemiseConsumedItemAnalytics>()
{
	return FFranklinsDemiseConsumedItemAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics(FFranklinsDemiseConsumedItemAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FranklinsDemiseConsumedItemAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFranklinsDemiseConsumedItemAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFranklinsDemiseConsumedItemAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FranklinsDemiseConsumedItemAnalytics")),new UScriptStruct::TCppStructOps<FFranklinsDemiseConsumedItemAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFranklinsDemiseConsumedItemAnalytics;
	struct Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousOwnerSurvivorMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PreviousOwnerSurvivorMirrorsId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedItemAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFranklinsDemiseConsumedItemAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::NewProp_PreviousOwnerSurvivorMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FranklinsDemiseConsumedItemAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::NewProp_PreviousOwnerSurvivorMirrorsId = { "PreviousOwnerSurvivorMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFranklinsDemiseConsumedItemAnalytics, PreviousOwnerSurvivorMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::NewProp_PreviousOwnerSurvivorMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::NewProp_PreviousOwnerSurvivorMirrorsId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::NewProp_PreviousOwnerSurvivorMirrorsId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBasePerkAnalytics,
		&NewStructOps,
		"FranklinsDemiseConsumedItemAnalytics",
		sizeof(FFranklinsDemiseConsumedItemAnalytics),
		alignof(FFranklinsDemiseConsumedItemAnalytics),
		Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FranklinsDemiseConsumedItemAnalytics"), sizeof(FFranklinsDemiseConsumedItemAnalytics), Get_Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFranklinsDemiseConsumedItemAnalytics_Hash() { return 122369303U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
