// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/SerializablePlayerPerks.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSerializablePlayerPerks() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FSerializablePlayerPerks();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
// End Cross Module References
class UScriptStruct* FSerializablePlayerPerks::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FSerializablePlayerPerks_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSerializablePlayerPerks, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("SerializablePlayerPerks"), sizeof(FSerializablePlayerPerks), Get_Z_Construct_UScriptStruct_FSerializablePlayerPerks_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FSerializablePlayerPerks>()
{
	return FSerializablePlayerPerks::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSerializablePlayerPerks(FSerializablePlayerPerks::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("SerializablePlayerPerks"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFSerializablePlayerPerks
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFSerializablePlayerPerks()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SerializablePlayerPerks")),new UScriptStruct::TCppStructOps<FSerializablePlayerPerks>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFSerializablePlayerPerks;
	struct Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Perks_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Perks;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Perks_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Perks_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SerializablePlayerPerks.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSerializablePlayerPerks>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks_MetaData[] = {
		{ "ModuleRelativePath", "Public/SerializablePlayerPerks.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks = { "Perks", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSerializablePlayerPerks, Perks), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks_Key_KeyProp = { "Perks_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks_ValueProp = { "Perks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::NewProp_Perks_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		nullptr,
		&NewStructOps,
		"SerializablePlayerPerks",
		sizeof(FSerializablePlayerPerks),
		alignof(FSerializablePlayerPerks),
		Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSerializablePlayerPerks()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSerializablePlayerPerks_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SerializablePlayerPerks"), sizeof(FSerializablePlayerPerks), Get_Z_Construct_UScriptStruct_FSerializablePlayerPerks_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSerializablePlayerPerks_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSerializablePlayerPerks_Hash() { return 3343229791U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
