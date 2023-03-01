// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/S3CommandErrorAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS3CommandErrorAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FS3CommandErrorAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FS3CommandErrorAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("S3CommandErrorAnalytics"), sizeof(FS3CommandErrorAnalytics), Get_Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FS3CommandErrorAnalytics>()
{
	return FS3CommandErrorAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FS3CommandErrorAnalytics(FS3CommandErrorAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("S3CommandErrorAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFS3CommandErrorAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFS3CommandErrorAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("S3CommandErrorAnalytics")),new UScriptStruct::TCppStructOps<FS3CommandErrorAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFS3CommandErrorAnalytics;
	struct Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentModifiedError_MetaData[];
#endif
		static void NewProp_ContentModifiedError_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ContentModifiedError;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BadResponse_MetaData[];
#endif
		static void NewProp_BadResponse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_BadResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DecryptionFailure_MetaData[];
#endif
		static void NewProp_DecryptionFailure_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DecryptionFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidResponse_MetaData[];
#endif
		static void NewProp_InvalidResponse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvalidResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvalidRequest_MetaData[];
#endif
		static void NewProp_InvalidRequest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvalidRequest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ResponseCode_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ResponseCode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Verb_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Verb;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_URL_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_URL;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FS3CommandErrorAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ContentModifiedError_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ContentModifiedError_SetBit(void* Obj)
	{
		((FS3CommandErrorAnalytics*)Obj)->ContentModifiedError = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ContentModifiedError = { "ContentModifiedError", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS3CommandErrorAnalytics), &Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ContentModifiedError_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ContentModifiedError_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ContentModifiedError_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_BadResponse_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_BadResponse_SetBit(void* Obj)
	{
		((FS3CommandErrorAnalytics*)Obj)->BadResponse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_BadResponse = { "BadResponse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS3CommandErrorAnalytics), &Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_BadResponse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_BadResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_BadResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_DecryptionFailure_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_DecryptionFailure_SetBit(void* Obj)
	{
		((FS3CommandErrorAnalytics*)Obj)->DecryptionFailure = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_DecryptionFailure = { "DecryptionFailure", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS3CommandErrorAnalytics), &Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_DecryptionFailure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_DecryptionFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_DecryptionFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidResponse_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidResponse_SetBit(void* Obj)
	{
		((FS3CommandErrorAnalytics*)Obj)->InvalidResponse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidResponse = { "InvalidResponse", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS3CommandErrorAnalytics), &Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidResponse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidRequest_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidRequest_SetBit(void* Obj)
	{
		((FS3CommandErrorAnalytics*)Obj)->InvalidRequest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidRequest = { "InvalidRequest", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FS3CommandErrorAnalytics), &Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidRequest_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidRequest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidRequest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ResponseCode_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ResponseCode = { "ResponseCode", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandErrorAnalytics, ResponseCode), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ResponseCode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ResponseCode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_Verb_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_Verb = { "Verb", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandErrorAnalytics, Verb), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_Verb_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_Verb_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_URL_MetaData[] = {
		{ "ModuleRelativePath", "Public/S3CommandErrorAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FS3CommandErrorAnalytics, URL), METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_URL_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_URL_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ContentModifiedError,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_BadResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_DecryptionFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_InvalidRequest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_ResponseCode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_Verb,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::NewProp_URL,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"S3CommandErrorAnalytics",
		sizeof(FS3CommandErrorAnalytics),
		alignof(FS3CommandErrorAnalytics),
		Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FS3CommandErrorAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("S3CommandErrorAnalytics"), sizeof(FS3CommandErrorAnalytics), Get_Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FS3CommandErrorAnalytics_Hash() { return 64251936U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
