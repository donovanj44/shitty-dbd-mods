// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/KrakenRequestAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKrakenRequestAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FKrakenRequestAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FKrakenRequestAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKrakenRequestAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("KrakenRequestAnalytics"), sizeof(FKrakenRequestAnalytics), Get_Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FKrakenRequestAnalytics>()
{
	return FKrakenRequestAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKrakenRequestAnalytics(FKrakenRequestAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("KrakenRequestAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFKrakenRequestAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFKrakenRequestAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KrakenRequestAnalytics")),new UScriptStruct::TCppStructOps<FKrakenRequestAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFKrakenRequestAnalytics;
	struct Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalElapsedTimeCapped_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalElapsedTimeCapped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TotalElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TotalElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttemptElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttemptElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Country;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WillRetry_MetaData[];
#endif
		static void NewProp_WillRetry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_WillRetry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CanRetry_MetaData[];
#endif
		static void NewProp_CanRetry_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CanRetry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttemptCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AttemptCount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProviderError_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ProviderError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Route_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Route;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Method_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Method;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KrakenUrl_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KrakenUrl;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKrakenRequestAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTimeCapped_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTimeCapped = { "TotalElapsedTimeCapped", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, TotalElapsedTimeCapped), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTimeCapped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTimeCapped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTime = { "TotalElapsedTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, TotalElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptElapsedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptElapsedTime = { "AttemptElapsedTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, AttemptElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Country_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Country = { "Country", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, Country), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Country_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_WillRetry_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_WillRetry_SetBit(void* Obj)
	{
		((FKrakenRequestAnalytics*)Obj)->WillRetry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_WillRetry = { "WillRetry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKrakenRequestAnalytics), &Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_WillRetry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_WillRetry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_WillRetry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_CanRetry_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_CanRetry_SetBit(void* Obj)
	{
		((FKrakenRequestAnalytics*)Obj)->CanRetry = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_CanRetry = { "CanRetry", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKrakenRequestAnalytics), &Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_CanRetry_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_CanRetry_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_CanRetry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FKrakenRequestAnalytics*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FKrakenRequestAnalytics), &Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptCount_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptCount = { "AttemptCount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, AttemptCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptCount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ProviderError_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ProviderError = { "ProviderError", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, ProviderError), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ProviderError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ProviderError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, ResponseCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ResponseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ResponseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Route_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Route = { "Route", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, Route), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Route_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Route_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Method_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Method = { "Method", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, Method), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Method_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Method_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_KrakenUrl_MetaData[] = {
		{ "ModuleRelativePath", "Public/KrakenRequestAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_KrakenUrl = { "KrakenUrl", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKrakenRequestAnalytics, KrakenUrl), METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_KrakenUrl_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_KrakenUrl_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTimeCapped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_TotalElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_WillRetry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_CanRetry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_AttemptCount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ProviderError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_ResponseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Route,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_Method,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::NewProp_KrakenUrl,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"KrakenRequestAnalytics",
		sizeof(FKrakenRequestAnalytics),
		alignof(FKrakenRequestAnalytics),
		Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKrakenRequestAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KrakenRequestAnalytics"), sizeof(FKrakenRequestAnalytics), Get_Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKrakenRequestAnalytics_Hash() { return 2699906586U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
