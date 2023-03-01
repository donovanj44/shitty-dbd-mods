// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LegacySavedBloodWebRingPersistentData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLegacySavedBloodWebRingPersistentData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodwebNode();
// End Cross Module References
class UScriptStruct* FLegacySavedBloodWebRingPersistentData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LegacySavedBloodWebRingPersistentData"), sizeof(FLegacySavedBloodWebRingPersistentData), Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLegacySavedBloodWebRingPersistentData>()
{
	return FLegacySavedBloodWebRingPersistentData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLegacySavedBloodWebRingPersistentData(FLegacySavedBloodWebRingPersistentData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LegacySavedBloodWebRingPersistentData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodWebRingPersistentData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodWebRingPersistentData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LegacySavedBloodWebRingPersistentData")),new UScriptStruct::TCppStructOps<FLegacySavedBloodWebRingPersistentData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLegacySavedBloodWebRingPersistentData;
	struct Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeData_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_NodeData;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NodeData_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebRingPersistentData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLegacySavedBloodWebRingPersistentData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::NewProp_NodeData_MetaData[] = {
		{ "ModuleRelativePath", "Public/LegacySavedBloodWebRingPersistentData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::NewProp_NodeData = { "NodeData", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLegacySavedBloodWebRingPersistentData, NodeData), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::NewProp_NodeData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::NewProp_NodeData_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::NewProp_NodeData_Inner = { "NodeData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FLegacySavedBloodwebNode, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::NewProp_NodeData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::NewProp_NodeData_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LegacySavedBloodWebRingPersistentData",
		sizeof(FLegacySavedBloodWebRingPersistentData),
		alignof(FLegacySavedBloodWebRingPersistentData),
		Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LegacySavedBloodWebRingPersistentData"), sizeof(FLegacySavedBloodWebRingPersistentData), Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLegacySavedBloodWebRingPersistentData_Hash() { return 1016138913U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
