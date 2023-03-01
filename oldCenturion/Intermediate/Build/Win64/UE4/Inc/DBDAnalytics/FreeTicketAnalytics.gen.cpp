// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FreeTicketAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFreeTicketAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFreeTicketAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FFreeTicketAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFreeTicketAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFreeTicketAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FreeTicketAnalytics"), sizeof(FFreeTicketAnalytics), Get_Z_Construct_UScriptStruct_FFreeTicketAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFreeTicketAnalytics>()
{
	return FFreeTicketAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFreeTicketAnalytics(FFreeTicketAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FreeTicketAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFreeTicketAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFreeTicketAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FreeTicketAnalytics")),new UScriptStruct::TCppStructOps<FFreeTicketAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFreeTicketAnalytics;
	struct Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterUsed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterUsed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurationInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketTransactionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketTransactionType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FreeTicketAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFreeTicketAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_CharacterUsed_MetaData[] = {
		{ "ModuleRelativePath", "Public/FreeTicketAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_CharacterUsed = { "CharacterUsed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFreeTicketAnalytics, CharacterUsed), METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_CharacterUsed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_CharacterUsed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_DurationInSeconds_MetaData[] = {
		{ "ModuleRelativePath", "Public/FreeTicketAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_DurationInSeconds = { "DurationInSeconds", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFreeTicketAnalytics, DurationInSeconds), METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_DurationInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_DurationInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/FreeTicketAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketSource = { "TicketSource", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFreeTicketAnalytics, TicketSource), METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketTransactionType_MetaData[] = {
		{ "ModuleRelativePath", "Public/FreeTicketAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketTransactionType = { "TicketTransactionType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFreeTicketAnalytics, TicketTransactionType), METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketTransactionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketTransactionType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FreeTicketAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFreeTicketAnalytics, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_CharacterUsed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_DurationInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketTransactionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::NewProp_TicketId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"FreeTicketAnalytics",
		sizeof(FFreeTicketAnalytics),
		alignof(FFreeTicketAnalytics),
		Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFreeTicketAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFreeTicketAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FreeTicketAnalytics"), sizeof(FFreeTicketAnalytics), Get_Z_Construct_UScriptStruct_FFreeTicketAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFreeTicketAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFreeTicketAnalytics_Hash() { return 983646678U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
