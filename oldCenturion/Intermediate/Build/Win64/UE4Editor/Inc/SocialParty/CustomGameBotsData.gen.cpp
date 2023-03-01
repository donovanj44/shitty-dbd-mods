// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/CustomGameBotsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameBotsData() {}
// Cross Module References
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FCustomGameBotsData();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FCustomGameBot();
// End Cross Module References
class UScriptStruct* FCustomGameBotsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALPARTY_API uint32 Get_Z_Construct_UScriptStruct_FCustomGameBotsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomGameBotsData, Z_Construct_UPackage__Script_SocialParty(), TEXT("CustomGameBotsData"), sizeof(FCustomGameBotsData), Get_Z_Construct_UScriptStruct_FCustomGameBotsData_Hash());
	}
	return Singleton;
}
template<> SOCIALPARTY_API UScriptStruct* StaticStruct<FCustomGameBotsData>()
{
	return FCustomGameBotsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomGameBotsData(FCustomGameBotsData::StaticStruct, TEXT("/Script/SocialParty"), TEXT("CustomGameBotsData"), false, nullptr, nullptr);
static struct FScriptStruct_SocialParty_StaticRegisterNativesFCustomGameBotsData
{
	FScriptStruct_SocialParty_StaticRegisterNativesFCustomGameBotsData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomGameBotsData")),new UScriptStruct::TCppStructOps<FCustomGameBotsData>);
	}
} ScriptStruct_SocialParty_StaticRegisterNativesFCustomGameBotsData;
	struct Z_Construct_UScriptStruct_FCustomGameBotsData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__bots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__bots_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomGameBotsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomGameBotsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::NewProp__bots_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGameBotsData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::NewProp__bots = { "_bots", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomGameBotsData, _bots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::NewProp__bots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::NewProp__bots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::NewProp__bots_Inner = { "_bots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCustomGameBot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::NewProp__bots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::NewProp__bots_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialParty,
		nullptr,
		&NewStructOps,
		"CustomGameBotsData",
		sizeof(FCustomGameBotsData),
		alignof(FCustomGameBotsData),
		Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomGameBotsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomGameBotsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomGameBotsData"), sizeof(FCustomGameBotsData), Get_Z_Construct_UScriptStruct_FCustomGameBotsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomGameBotsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomGameBotsData_Hash() { return 2962961135U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
