// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "S3Command/Public/AccessKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAccessKey() {}
// Cross Module References
	S3COMMAND_API UScriptStruct* Z_Construct_UScriptStruct_FAccessKey();
	UPackage* Z_Construct_UPackage__Script_S3Command();
// End Cross Module References
class UScriptStruct* FAccessKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern S3COMMAND_API uint32 Get_Z_Construct_UScriptStruct_FAccessKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAccessKey, Z_Construct_UPackage__Script_S3Command(), TEXT("AccessKey"), sizeof(FAccessKey), Get_Z_Construct_UScriptStruct_FAccessKey_Hash());
	}
	return Singleton;
}
template<> S3COMMAND_API UScriptStruct* StaticStruct<FAccessKey>()
{
	return FAccessKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAccessKey(FAccessKey::StaticStruct, TEXT("/Script/S3Command"), TEXT("AccessKey"), false, nullptr, nullptr);
static struct FScriptStruct_S3Command_StaticRegisterNativesFAccessKey
{
	FScriptStruct_S3Command_StaticRegisterNativesFAccessKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AccessKey")),new UScriptStruct::TCppStructOps<FAccessKey>);
	}
} ScriptStruct_S3Command_StaticRegisterNativesFAccessKey;
	struct Z_Construct_UScriptStruct_FAccessKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccessKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AccessKey.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAccessKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAccessKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/AccessKey.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccessKey, Key), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_KeyId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AccessKey.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_KeyId = { "KeyId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAccessKey, KeyId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_KeyId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_KeyId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAccessKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAccessKey_Statics::NewProp_KeyId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAccessKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_S3Command,
		nullptr,
		&NewStructOps,
		"AccessKey",
		sizeof(FAccessKey),
		alignof(FAccessKey),
		Z_Construct_UScriptStruct_FAccessKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccessKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAccessKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAccessKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAccessKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAccessKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_S3Command();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AccessKey"), sizeof(FAccessKey), Get_Z_Construct_UScriptStruct_FAccessKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAccessKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAccessKey_Hash() { return 3759702854U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
