// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameBotsData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameBotsData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameBotsData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameBot();
// End Cross Module References
class UScriptStruct* FGameBotsData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGameBotsData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameBotsData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GameBotsData"), sizeof(FGameBotsData), Get_Z_Construct_UScriptStruct_FGameBotsData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGameBotsData>()
{
	return FGameBotsData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameBotsData(FGameBotsData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GameBotsData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameBotsData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameBotsData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameBotsData")),new UScriptStruct::TCppStructOps<FGameBotsData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGameBotsData;
	struct Z_Construct_UScriptStruct_FGameBotsData_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameBotsData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameBotsData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameBotsData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameBotsData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameBotsData_Statics::NewProp__bots_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameBotsData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FGameBotsData_Statics::NewProp__bots = { "_bots", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameBotsData, _bots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameBotsData_Statics::NewProp__bots_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameBotsData_Statics::NewProp__bots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FGameBotsData_Statics::NewProp__bots_Inner = { "_bots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameBot, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameBotsData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameBotsData_Statics::NewProp__bots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameBotsData_Statics::NewProp__bots_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameBotsData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"GameBotsData",
		sizeof(FGameBotsData),
		alignof(FGameBotsData),
		Z_Construct_UScriptStruct_FGameBotsData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameBotsData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameBotsData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameBotsData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameBotsData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameBotsData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameBotsData"), sizeof(FGameBotsData), Get_Z_Construct_UScriptStruct_FGameBotsData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameBotsData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameBotsData_Hash() { return 867993049U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
