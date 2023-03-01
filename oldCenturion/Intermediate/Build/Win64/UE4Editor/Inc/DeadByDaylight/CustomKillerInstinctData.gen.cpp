// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomKillerInstinctData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomKillerInstinctData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomKillerInstinctData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	NIAGARA_API UClass* Z_Construct_UClass_UNiagaraSystem_NoRegister();
// End Cross Module References
class UScriptStruct* FCustomKillerInstinctData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCustomKillerInstinctData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomKillerInstinctData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CustomKillerInstinctData"), sizeof(FCustomKillerInstinctData), Get_Z_Construct_UScriptStruct_FCustomKillerInstinctData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCustomKillerInstinctData>()
{
	return FCustomKillerInstinctData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomKillerInstinctData(FCustomKillerInstinctData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CustomKillerInstinctData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomKillerInstinctData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomKillerInstinctData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomKillerInstinctData")),new UScriptStruct::TCppStructOps<FCustomKillerInstinctData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomKillerInstinctData;
	struct Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerStateTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KillerStateTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerStateTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorStateTags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SurvivorStateTags;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SurvivorStateTags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ParticleSystemAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ParticleSystemAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomKillerInstinctData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomKillerInstinctData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_KillerStateTags_MetaData[] = {
		{ "Category", "CustomKillerInstinctData" },
		{ "ModuleRelativePath", "Public/CustomKillerInstinctData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_KillerStateTags = { "KillerStateTags", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomKillerInstinctData, KillerStateTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_KillerStateTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_KillerStateTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_KillerStateTags_Inner = { "KillerStateTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_SurvivorStateTags_MetaData[] = {
		{ "Category", "CustomKillerInstinctData" },
		{ "ModuleRelativePath", "Public/CustomKillerInstinctData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_SurvivorStateTags = { "SurvivorStateTags", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomKillerInstinctData, SurvivorStateTags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_SurvivorStateTags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_SurvivorStateTags_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_SurvivorStateTags_Inner = { "SurvivorStateTags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_ParticleSystemAsset_MetaData[] = {
		{ "Category", "CustomKillerInstinctData" },
		{ "ModuleRelativePath", "Public/CustomKillerInstinctData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_ParticleSystemAsset = { "ParticleSystemAsset", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomKillerInstinctData, ParticleSystemAsset), Z_Construct_UClass_UNiagaraSystem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_ParticleSystemAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_ParticleSystemAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_KillerStateTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_KillerStateTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_SurvivorStateTags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_SurvivorStateTags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::NewProp_ParticleSystemAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CustomKillerInstinctData",
		sizeof(FCustomKillerInstinctData),
		alignof(FCustomKillerInstinctData),
		Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomKillerInstinctData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomKillerInstinctData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomKillerInstinctData"), sizeof(FCustomKillerInstinctData), Get_Z_Construct_UScriptStruct_FCustomKillerInstinctData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomKillerInstinctData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomKillerInstinctData_Hash() { return 3071660078U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
