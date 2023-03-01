// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatSystem/Public/BaseStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseStat() {}
// Cross Module References
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStat();
	UPackage* Z_Construct_UPackage__Script_StatSystem();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatModifier();
// End Cross Module References
class UScriptStruct* FBaseStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FBaseStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBaseStat, Z_Construct_UPackage__Script_StatSystem(), TEXT("BaseStat"), sizeof(FBaseStat), Get_Z_Construct_UScriptStruct_FBaseStat_Hash());
	}
	return Singleton;
}
template<> STATSYSTEM_API UScriptStruct* StaticStruct<FBaseStat>()
{
	return FBaseStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBaseStat(FBaseStat::StaticStruct, TEXT("/Script/StatSystem"), TEXT("BaseStat"), false, nullptr, nullptr);
static struct FScriptStruct_StatSystem_StaticRegisterNativesFBaseStat
{
	FScriptStruct_StatSystem_StaticRegisterNativesFBaseStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BaseStat")),new UScriptStruct::TCppStructOps<FBaseStat>);
	}
} ScriptStruct_StatSystem_StaticRegisterNativesFBaseStat;
	struct Z_Construct_UScriptStruct_FBaseStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__statModifiers_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__statModifiers;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__statModifiers_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseStat_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BaseStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBaseStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBaseStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBaseStat_Statics::NewProp__statModifiers_MetaData[] = {
		{ "Category", "BaseStat" },
		{ "ModuleRelativePath", "Public/BaseStat.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBaseStat_Statics::NewProp__statModifiers = { "_statModifiers", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBaseStat, _statModifiers), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseStat_Statics::NewProp__statModifiers_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStat_Statics::NewProp__statModifiers_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBaseStat_Statics::NewProp__statModifiers_Inner = { "_statModifiers", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FStatModifier, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBaseStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStat_Statics::NewProp__statModifiers,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBaseStat_Statics::NewProp__statModifiers_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBaseStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatSystem,
		nullptr,
		&NewStructOps,
		"BaseStat",
		sizeof(FBaseStat),
		alignof(FBaseStat),
		Z_Construct_UScriptStruct_FBaseStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBaseStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBaseStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBaseStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBaseStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BaseStat"), sizeof(FBaseStat), Get_Z_Construct_UScriptStruct_FBaseStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBaseStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBaseStat_Hash() { return 1936945209U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
