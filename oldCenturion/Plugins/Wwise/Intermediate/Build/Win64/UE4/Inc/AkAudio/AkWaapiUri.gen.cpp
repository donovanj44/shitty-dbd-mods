// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkWaapiUri.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWaapiUri() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
// End Cross Module References
class UScriptStruct* FAkWaapiUri::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkWaapiUri, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkWaapiUri"), sizeof(FAkWaapiUri), Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkWaapiUri>()
{
	return FAkWaapiUri::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkWaapiUri(FAkWaapiUri::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkWaapiUri"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkWaapiUri")),new UScriptStruct::TCppStructOps<FAkWaapiUri>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkWaapiUri;
	struct Z_Construct_UScriptStruct_FAkWaapiUri_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Uri_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Uri;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkWaapiUri.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkWaapiUri>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData[] = {
		{ "Category", "AkWaapiUri" },
		{ "ModuleRelativePath", "Public/AkWaapiUri.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri = { "Uri", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkWaapiUri, Uri), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkWaapiUri_Statics::NewProp_Uri,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkWaapiUri_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkWaapiUri",
		sizeof(FAkWaapiUri),
		alignof(FAkWaapiUri),
		Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkWaapiUri_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkWaapiUri()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkWaapiUri"), sizeof(FAkWaapiUri), Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkWaapiUri_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkWaapiUri_Hash() { return 3157926311U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
