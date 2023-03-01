// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/QuadrantSpawnTypeProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQuadrantSpawnTypeProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSectionLenghtsProperties();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType();
// End Cross Module References
class UScriptStruct* FQuadrantSpawnTypeProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("QuadrantSpawnTypeProperties"), sizeof(FQuadrantSpawnTypeProperties), Get_Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FQuadrantSpawnTypeProperties>()
{
	return FQuadrantSpawnTypeProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FQuadrantSpawnTypeProperties(FQuadrantSpawnTypeProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("QuadrantSpawnTypeProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnTypeProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnTypeProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("QuadrantSpawnTypeProperties")),new UScriptStruct::TCppStructOps<FQuadrantSpawnTypeProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFQuadrantSpawnTypeProperties;
	struct Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SectionLenghts_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SectionLenghts;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SectionLenghts_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_QuadrantSpawnType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_QuadrantSpawnType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_QuadrantSpawnType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnTypeProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQuadrantSpawnTypeProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_SectionLenghts_MetaData[] = {
		{ "Category", "QuadrantSpawnTypeProperties" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnTypeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_SectionLenghts = { "SectionLenghts", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuadrantSpawnTypeProperties, SectionLenghts), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_SectionLenghts_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_SectionLenghts_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_SectionLenghts_Inner = { "SectionLenghts", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSectionLenghtsProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_QuadrantSpawnType_MetaData[] = {
		{ "Category", "QuadrantSpawnTypeProperties" },
		{ "ModuleRelativePath", "Public/QuadrantSpawnTypeProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_QuadrantSpawnType = { "QuadrantSpawnType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FQuadrantSpawnTypeProperties, QuadrantSpawnType), Z_Construct_UEnum_DeadByDaylight_EQuadrantSpawnType, METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_QuadrantSpawnType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_QuadrantSpawnType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_QuadrantSpawnType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_SectionLenghts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_SectionLenghts_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_QuadrantSpawnType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::NewProp_QuadrantSpawnType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"QuadrantSpawnTypeProperties",
		sizeof(FQuadrantSpawnTypeProperties),
		alignof(FQuadrantSpawnTypeProperties),
		Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("QuadrantSpawnTypeProperties"), sizeof(FQuadrantSpawnTypeProperties), Get_Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FQuadrantSpawnTypeProperties_Hash() { return 2737693636U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
