// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialBehaviourPopulation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialBehaviourPopulation() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialBehaviourPopulation();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameplayElementType();
// End Cross Module References
class UScriptStruct* FSpecialBehaviourPopulation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialBehaviourPopulation"), sizeof(FSpecialBehaviourPopulation), Get_Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialBehaviourPopulation>()
{
	return FSpecialBehaviourPopulation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialBehaviourPopulation(FSpecialBehaviourPopulation::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialBehaviourPopulation"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialBehaviourPopulation
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialBehaviourPopulation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialBehaviourPopulation")),new UScriptStruct::TCppStructOps<FSpecialBehaviourPopulation>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialBehaviourPopulation;
	struct Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actor_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnPointTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spawnPointTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__spawnPointTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__spawnPointTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__spawnerTypes_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__spawnerTypes;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__spawnerTypes_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__spawnerTypes_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__name_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialBehaviourPopulation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialBehaviourPopulation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__actor_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpecialBehaviourPopulation" },
		{ "ModuleRelativePath", "Public/SpecialBehaviourPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__actor = { "_actor", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialBehaviourPopulation, _actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__actor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__actor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpecialBehaviourPopulation" },
		{ "ModuleRelativePath", "Public/SpecialBehaviourPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes = { "_spawnPointTypes", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialBehaviourPopulation, _spawnPointTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes_Inner = { "_spawnPointTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpecialBehaviourPopulation" },
		{ "ModuleRelativePath", "Public/SpecialBehaviourPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes = { "_spawnerTypes", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialBehaviourPopulation, _spawnerTypes), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes_Inner = { "_spawnerTypes", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EGameplayElementType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__name_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "SpecialBehaviourPopulation" },
		{ "ModuleRelativePath", "Public/SpecialBehaviourPopulation.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__name = { "_name", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialBehaviourPopulation, _name), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__name_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnPointTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__spawnerTypes_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::NewProp__name,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SpecialBehaviourPopulation",
		sizeof(FSpecialBehaviourPopulation),
		alignof(FSpecialBehaviourPopulation),
		Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialBehaviourPopulation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialBehaviourPopulation"), sizeof(FSpecialBehaviourPopulation), Get_Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialBehaviourPopulation_Hash() { return 4034335277U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
