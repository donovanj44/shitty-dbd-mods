// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/RandomGuestNameRejectedAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRandomGuestNameRejectedAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FRandomGuestNameRejectedAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("RandomGuestNameRejectedAnalytics"), sizeof(FRandomGuestNameRejectedAnalytics), Get_Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FRandomGuestNameRejectedAnalytics>()
{
	return FRandomGuestNameRejectedAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRandomGuestNameRejectedAnalytics(FRandomGuestNameRejectedAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("RandomGuestNameRejectedAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFRandomGuestNameRejectedAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFRandomGuestNameRejectedAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RandomGuestNameRejectedAnalytics")),new UScriptStruct::TCppStructOps<FRandomGuestNameRejectedAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFRandomGuestNameRejectedAnalytics;
	struct Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RandomGuestNameRetryCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RandomGuestNameRetryCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/RandomGuestNameRejectedAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRandomGuestNameRejectedAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_RandomGuestNameRetryCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/RandomGuestNameRejectedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_RandomGuestNameRetryCount = { "RandomGuestNameRetryCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRandomGuestNameRejectedAnalytics, RandomGuestNameRetryCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_RandomGuestNameRetryCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_RandomGuestNameRetryCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/RandomGuestNameRejectedAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRandomGuestNameRejectedAnalytics, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_RandomGuestNameRetryCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::NewProp_PlayerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"RandomGuestNameRejectedAnalytics",
		sizeof(FRandomGuestNameRejectedAnalytics),
		alignof(FRandomGuestNameRejectedAnalytics),
		Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RandomGuestNameRejectedAnalytics"), sizeof(FRandomGuestNameRejectedAnalytics), Get_Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRandomGuestNameRejectedAnalytics_Hash() { return 3554589050U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
