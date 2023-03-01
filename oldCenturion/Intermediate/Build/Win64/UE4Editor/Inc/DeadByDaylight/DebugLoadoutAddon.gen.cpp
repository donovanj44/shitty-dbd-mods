// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DebugLoadoutAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDebugLoadoutAddon() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDebugLoadoutAddon();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableDropdown();
// End Cross Module References
class UScriptStruct* FDebugLoadoutAddon::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDebugLoadoutAddon_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDebugLoadoutAddon, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DebugLoadoutAddon"), sizeof(FDebugLoadoutAddon), Get_Z_Construct_UScriptStruct_FDebugLoadoutAddon_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDebugLoadoutAddon>()
{
	return FDebugLoadoutAddon::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDebugLoadoutAddon(FDebugLoadoutAddon::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DebugLoadoutAddon"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDebugLoadoutAddon
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDebugLoadoutAddon()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DebugLoadoutAddon")),new UScriptStruct::TCppStructOps<FDebugLoadoutAddon>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDebugLoadoutAddon;
	struct Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AddonID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AddonID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DebugLoadoutAddon.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDebugLoadoutAddon>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::NewProp_AddonID_MetaData[] = {
		{ "Category", "DebugLoadoutAddon" },
		{ "ModuleRelativePath", "Public/DebugLoadoutAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::NewProp_AddonID = { "AddonID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDebugLoadoutAddon, AddonID), Z_Construct_UScriptStruct_FDataTableDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::NewProp_AddonID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::NewProp_AddonID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::NewProp_AddonID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DebugLoadoutAddon",
		sizeof(FDebugLoadoutAddon),
		alignof(FDebugLoadoutAddon),
		Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDebugLoadoutAddon()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDebugLoadoutAddon_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DebugLoadoutAddon"), sizeof(FDebugLoadoutAddon), Get_Z_Construct_UScriptStruct_FDebugLoadoutAddon_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDebugLoadoutAddon_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDebugLoadoutAddon_Hash() { return 3993685015U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
