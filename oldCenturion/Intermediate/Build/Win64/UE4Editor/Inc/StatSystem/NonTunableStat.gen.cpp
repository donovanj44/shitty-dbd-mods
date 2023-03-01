// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatSystem/Public/NonTunableStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNonTunableStat() {}
// Cross Module References
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FNonTunableStat();
	UPackage* Z_Construct_UPackage__Script_StatSystem();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStat();
// End Cross Module References
class UScriptStruct* FNonTunableStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FNonTunableStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNonTunableStat, Z_Construct_UPackage__Script_StatSystem(), TEXT("NonTunableStat"), sizeof(FNonTunableStat), Get_Z_Construct_UScriptStruct_FNonTunableStat_Hash());
	}
	return Singleton;
}
template<> STATSYSTEM_API UScriptStruct* StaticStruct<FNonTunableStat>()
{
	return FNonTunableStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNonTunableStat(FNonTunableStat::StaticStruct, TEXT("/Script/StatSystem"), TEXT("NonTunableStat"), false, nullptr, nullptr);
static struct FScriptStruct_StatSystem_StaticRegisterNativesFNonTunableStat
{
	FScriptStruct_StatSystem_StaticRegisterNativesFNonTunableStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NonTunableStat")),new UScriptStruct::TCppStructOps<FNonTunableStat>);
	}
} ScriptStruct_StatSystem_StaticRegisterNativesFNonTunableStat;
	struct Z_Construct_UScriptStruct_FNonTunableStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__baseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNonTunableStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/NonTunableStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNonTunableStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNonTunableStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNonTunableStat_Statics::NewProp__baseValue_MetaData[] = {
		{ "Category", "NonTunableStat" },
		{ "ModuleRelativePath", "Public/NonTunableStat.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FNonTunableStat_Statics::NewProp__baseValue = { "_baseValue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FNonTunableStat, _baseValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FNonTunableStat_Statics::NewProp__baseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonTunableStat_Statics::NewProp__baseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FNonTunableStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FNonTunableStat_Statics::NewProp__baseValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNonTunableStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatSystem,
		Z_Construct_UScriptStruct_FBaseStat,
		&NewStructOps,
		"NonTunableStat",
		sizeof(FNonTunableStat),
		alignof(FNonTunableStat),
		Z_Construct_UScriptStruct_FNonTunableStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonTunableStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNonTunableStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNonTunableStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNonTunableStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNonTunableStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NonTunableStat"), sizeof(FNonTunableStat), Get_Z_Construct_UScriptStruct_FNonTunableStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNonTunableStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNonTunableStat_Hash() { return 2854458941U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
