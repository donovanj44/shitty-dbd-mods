// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DebugLoadoutPerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugLoadoutPerk() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDebugLoadoutPerk();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableDropdown();
// End Cross Module References
class UScriptStruct* FDebugLoadoutPerk::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDebugLoadoutPerk_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugLoadoutPerk, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DebugLoadoutPerk"), sizeof(FDebugLoadoutPerk), Get_Z_Construct_UScriptStruct_FDebugLoadoutPerk_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDebugLoadoutPerk>()
{
	return FDebugLoadoutPerk::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugLoadoutPerk(FDebugLoadoutPerk::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DebugLoadoutPerk"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDebugLoadoutPerk
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDebugLoadoutPerk()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugLoadoutPerk")),new UScriptStruct::TCppStructOps<FDebugLoadoutPerk>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDebugLoadoutPerk;
	struct Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerkLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerkID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugLoadoutPerk.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugLoadoutPerk>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkLevel_MetaData[] = {
		{ "Category", "DebugLoadoutPerk" },
		{ "ModuleRelativePath", "Public/DebugLoadoutPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkLevel = { "PerkLevel", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugLoadoutPerk, PerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkID_MetaData[] = {
		{ "Category", "DebugLoadoutPerk" },
		{ "ModuleRelativePath", "Public/DebugLoadoutPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkID = { "PerkID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugLoadoutPerk, PerkID), Z_Construct_UScriptStruct_FDataTableDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::NewProp_PerkID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DebugLoadoutPerk",
		sizeof(FDebugLoadoutPerk),
		alignof(FDebugLoadoutPerk),
		Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugLoadoutPerk()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugLoadoutPerk_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugLoadoutPerk"), sizeof(FDebugLoadoutPerk), Get_Z_Construct_UScriptStruct_FDebugLoadoutPerk_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugLoadoutPerk_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugLoadoutPerk_Hash() { return 2596442969U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
