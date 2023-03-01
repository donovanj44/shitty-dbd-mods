// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BlockableReplicatedDatum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlockableReplicatedDatum() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBlockableReplicatedDatum();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
// End Cross Module References
class UScriptStruct* FBlockableReplicatedDatum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBlockableReplicatedDatum, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BlockableReplicatedDatum"), sizeof(FBlockableReplicatedDatum), Get_Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBlockableReplicatedDatum>()
{
	return FBlockableReplicatedDatum::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBlockableReplicatedDatum(FBlockableReplicatedDatum::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BlockableReplicatedDatum"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBlockableReplicatedDatum
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBlockableReplicatedDatum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BlockableReplicatedDatum")),new UScriptStruct::TCppStructOps<FBlockableReplicatedDatum>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBlockableReplicatedDatum;
	struct Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlockedPlayers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_BlockedPlayers;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_BlockedPlayers_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Sources;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_Sources_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BlockableReplicatedDatum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBlockableReplicatedDatum>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_BlockedPlayers_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockableReplicatedDatum.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_BlockedPlayers = { "BlockedPlayers", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlockableReplicatedDatum, BlockedPlayers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_BlockedPlayers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_BlockedPlayers_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_BlockedPlayers_Inner = { "BlockedPlayers", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_Sources_MetaData[] = {
		{ "ModuleRelativePath", "Public/BlockableReplicatedDatum.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_Sources = { "Sources", nullptr, (EPropertyFlags)0x0014000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBlockableReplicatedDatum, Sources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_Sources_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_Sources_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_Sources_Inner = { "Sources", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_BlockedPlayers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_BlockedPlayers_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_Sources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::NewProp_Sources_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"BlockableReplicatedDatum",
		sizeof(FBlockableReplicatedDatum),
		alignof(FBlockableReplicatedDatum),
		Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBlockableReplicatedDatum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BlockableReplicatedDatum"), sizeof(FBlockableReplicatedDatum), Get_Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBlockableReplicatedDatum_Hash() { return 1582969368U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
