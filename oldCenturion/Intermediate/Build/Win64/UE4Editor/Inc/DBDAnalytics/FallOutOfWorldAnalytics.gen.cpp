// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/FallOutOfWorldAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFallOutOfWorldAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FFallOutOfWorldAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("FallOutOfWorldAnalytics"), sizeof(FFallOutOfWorldAnalytics), Get_Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FFallOutOfWorldAnalytics>()
{
	return FFallOutOfWorldAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFallOutOfWorldAnalytics(FFallOutOfWorldAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("FallOutOfWorldAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFFallOutOfWorldAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFFallOutOfWorldAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FallOutOfWorldAnalytics")),new UScriptStruct::TCppStructOps<FFallOutOfWorldAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFFallOutOfWorldAnalytics;
	struct Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedMatchTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedMatchTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TileName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TileName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Z_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Z;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Y_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Y;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_X_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_X;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FallOutMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_FallOutMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/FallOutOfWorldAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFallOutOfWorldAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/FallOutOfWorldAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_ElapsedMatchTime = { "ElapsedMatchTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFallOutOfWorldAnalytics, ElapsedMatchTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_ElapsedMatchTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_TileName_MetaData[] = {
		{ "ModuleRelativePath", "Public/FallOutOfWorldAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_TileName = { "TileName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFallOutOfWorldAnalytics, TileName), METADATA_PARAMS(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_TileName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_TileName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Z_MetaData[] = {
		{ "ModuleRelativePath", "Public/FallOutOfWorldAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Z = { "Z", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFallOutOfWorldAnalytics, Z), METADATA_PARAMS(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Z_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Z_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Y_MetaData[] = {
		{ "ModuleRelativePath", "Public/FallOutOfWorldAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Y = { "Y", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFallOutOfWorldAnalytics, Y), METADATA_PARAMS(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Y_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Y_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_X_MetaData[] = {
		{ "ModuleRelativePath", "Public/FallOutOfWorldAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_X = { "X", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFallOutOfWorldAnalytics, X), METADATA_PARAMS(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_X_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_X_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_FallOutMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FallOutOfWorldAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_FallOutMirrorsId = { "FallOutMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFallOutOfWorldAnalytics, FallOutMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_FallOutMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_FallOutMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/FallOutOfWorldAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFallOutOfWorldAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_ElapsedMatchTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_TileName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Z,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_Y,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_X,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_FallOutMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"FallOutOfWorldAnalytics",
		sizeof(FFallOutOfWorldAnalytics),
		alignof(FFallOutOfWorldAnalytics),
		Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FallOutOfWorldAnalytics"), sizeof(FFallOutOfWorldAnalytics), Get_Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFallOutOfWorldAnalytics_Hash() { return 4233886263U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
