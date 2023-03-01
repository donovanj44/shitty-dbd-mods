// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatSystem/Public/TunableStat.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTunableStat() {}
// Cross Module References
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
	UPackage* Z_Construct_UPackage__Script_StatSystem();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStat();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
class UScriptStruct* FTunableStat::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FTunableStat_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTunableStat, Z_Construct_UPackage__Script_StatSystem(), TEXT("TunableStat"), sizeof(FTunableStat), Get_Z_Construct_UScriptStruct_FTunableStat_Hash());
	}
	return Singleton;
}
template<> STATSYSTEM_API UScriptStruct* StaticStruct<FTunableStat>()
{
	return FTunableStat::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTunableStat(FTunableStat::StaticStruct, TEXT("/Script/StatSystem"), TEXT("TunableStat"), false, nullptr, nullptr);
static struct FScriptStruct_StatSystem_StaticRegisterNativesFTunableStat
{
	FScriptStruct_StatSystem_StaticRegisterNativesFTunableStat()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TunableStat")),new UScriptStruct::TCppStructOps<FTunableStat>);
	}
} ScriptStruct_StatSystem_StaticRegisterNativesFTunableStat;
	struct Z_Construct_UScriptStruct_FTunableStat_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__baseValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__baseValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTunableStat_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TunableStat.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTunableStat_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTunableStat>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTunableStat_Statics::NewProp__baseValue_MetaData[] = {
		{ "Category", "TunableStat" },
		{ "ModuleRelativePath", "Public/TunableStat.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FTunableStat_Statics::NewProp__baseValue = { "_baseValue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTunableStat, _baseValue), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FTunableStat_Statics::NewProp__baseValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableStat_Statics::NewProp__baseValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTunableStat_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTunableStat_Statics::NewProp__baseValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTunableStat_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatSystem,
		Z_Construct_UScriptStruct_FBaseStat,
		&NewStructOps,
		"TunableStat",
		sizeof(FTunableStat),
		alignof(FTunableStat),
		Z_Construct_UScriptStruct_FTunableStat_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableStat_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTunableStat_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTunableStat_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTunableStat()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTunableStat_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TunableStat"), sizeof(FTunableStat), Get_Z_Construct_UScriptStruct_FTunableStat_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTunableStat_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTunableStat_Hash() { return 457856434U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
