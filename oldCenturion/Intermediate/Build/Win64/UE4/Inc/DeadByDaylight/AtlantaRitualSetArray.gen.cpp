// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaRitualSetArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaRitualSetArray() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualSetArray();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualSet();
// End Cross Module References
class UScriptStruct* FAtlantaRitualSetArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaRitualSetArray, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaRitualSetArray"), sizeof(FAtlantaRitualSetArray), Get_Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaRitualSetArray>()
{
	return FAtlantaRitualSetArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaRitualSetArray(FAtlantaRitualSetArray::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaRitualSetArray"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualSetArray
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualSetArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaRitualSetArray")),new UScriptStruct::TCppStructOps<FAtlantaRitualSetArray>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaRitualSetArray;
	struct Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rituals_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_rituals;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rituals_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaRitualSetArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaRitualSetArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::NewProp_rituals_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaRitualSetArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::NewProp_rituals = { "rituals", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaRitualSetArray, rituals), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::NewProp_rituals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::NewProp_rituals_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::NewProp_rituals_Inner = { "rituals", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAtlantaRitualSet, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::NewProp_rituals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::NewProp_rituals_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaRitualSetArray",
		sizeof(FAtlantaRitualSetArray),
		alignof(FAtlantaRitualSetArray),
		Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaRitualSetArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaRitualSetArray"), sizeof(FAtlantaRitualSetArray), Get_Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaRitualSetArray_Hash() { return 4029215195U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
