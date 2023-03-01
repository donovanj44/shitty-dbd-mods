// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AnimationMappingRow.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationMappingRow() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMappingRow();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMapping();
// End Cross Module References
class UScriptStruct* FAnimationMappingRow::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAnimationMappingRow_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationMappingRow, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AnimationMappingRow"), sizeof(FAnimationMappingRow), Get_Z_Construct_UScriptStruct_FAnimationMappingRow_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAnimationMappingRow>()
{
	return FAnimationMappingRow::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationMappingRow(FAnimationMappingRow::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AnimationMappingRow"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAnimationMappingRow
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAnimationMappingRow()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationMappingRow")),new UScriptStruct::TCppStructOps<FAnimationMappingRow>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAnimationMappingRow;
	struct Z_Construct_UScriptStruct_FAnimationMappingRow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mappings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Mappings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mappings_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationMappingRow.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationMappingRow>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::NewProp_Mappings_MetaData[] = {
		{ "Category", "AnimationMappingRow" },
		{ "ModuleRelativePath", "Public/AnimationMappingRow.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::NewProp_Mappings = { "Mappings", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationMappingRow, Mappings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::NewProp_Mappings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::NewProp_Mappings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::NewProp_Mappings_Inner = { "Mappings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAnimationMapping, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::NewProp_Mappings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::NewProp_Mappings_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AnimationMappingRow",
		sizeof(FAnimationMappingRow),
		alignof(FAnimationMappingRow),
		Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationMappingRow()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationMappingRow_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationMappingRow"), sizeof(FAnimationMappingRow), Get_Z_Construct_UScriptStruct_FAnimationMappingRow_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationMappingRow_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationMappingRow_Hash() { return 2110612555U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
