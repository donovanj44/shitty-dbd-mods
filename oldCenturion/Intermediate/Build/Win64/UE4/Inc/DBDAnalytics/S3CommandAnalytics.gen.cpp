// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/S3CommandAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS3CommandAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FS3CommandAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FS3CommandAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FS3CommandAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS3CommandAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("S3CommandAnalytics"), sizeof(FS3CommandAnalytics), Get_Z_Construct_UScriptStruct_FS3CommandAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FS3CommandAnalytics>()
{
	return FS3CommandAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS3CommandAnalytics(FS3CommandAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("S3CommandAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFS3CommandAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFS3CommandAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S3CommandAnalytics")),new UScriptStruct::TCppStructOps<FS3CommandAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFS3CommandAnalytics;
	struct Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseContentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseContentLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Verb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Status_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Status;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ElapsedTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ElapsedTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ContentType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RequestContentLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_RequestContentLength;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS3CommandAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FS3CommandAnalytics*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS3CommandAnalytics), &Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandAnalytics, ResponseCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseContentLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseContentLength = { "ResponseContentLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandAnalytics, ResponseContentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseContentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseContentLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Verb_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandAnalytics, Verb), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Verb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_URL_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandAnalytics, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_URL_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Status_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Status = { "Status", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandAnalytics, Status), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Status_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Status_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ElapsedTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ElapsedTime = { "ElapsedTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandAnalytics, ElapsedTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ElapsedTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ElapsedTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ContentType_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ContentType = { "ContentType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandAnalytics, ContentType), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ContentType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ContentType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_RequestContentLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_RequestContentLength = { "RequestContentLength", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandAnalytics, RequestContentLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_RequestContentLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_RequestContentLength_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ResponseContentLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Verb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_URL,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_Status,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ElapsedTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_ContentType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::NewProp_RequestContentLength,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"S3CommandAnalytics",
		sizeof(FS3CommandAnalytics),
		alignof(FS3CommandAnalytics),
		Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS3CommandAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS3CommandAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S3CommandAnalytics"), sizeof(FS3CommandAnalytics), Get_Z_Construct_UScriptStruct_FS3CommandAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS3CommandAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS3CommandAnalytics_Hash() { return 1528738955U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
