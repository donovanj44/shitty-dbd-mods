// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaQuitGameAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaQuitGameAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaQuitGameAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaQuitGameAnalytics"), sizeof(FAtlantaQuitGameAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaQuitGameAnalytics>()
{
	return FAtlantaQuitGameAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaQuitGameAnalytics(FAtlantaQuitGameAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaQuitGameAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaQuitGameAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaQuitGameAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaQuitGameAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaQuitGameAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaQuitGameAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuitGameReason_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_QuitGameReason;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaQuitGameAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaQuitGameAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::NewProp_QuitGameReason_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaQuitGameAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::NewProp_QuitGameReason = { "QuitGameReason", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaQuitGameAnalytics, QuitGameReason), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::NewProp_QuitGameReason_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::NewProp_QuitGameReason_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::NewProp_QuitGameReason,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaQuitGameAnalytics",
		sizeof(FAtlantaQuitGameAnalytics),
		alignof(FAtlantaQuitGameAnalytics),
		Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaQuitGameAnalytics"), sizeof(FAtlantaQuitGameAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaQuitGameAnalytics_Hash() { return 2648172964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
