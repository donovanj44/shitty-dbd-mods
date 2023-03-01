// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/SpawnedTormentTrailPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnedTormentTrailPoint() {}
// Cross Module References
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailPoint_NoRegister();
// End Cross Module References
class UScriptStruct* FSpawnedTormentTrailPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEEXECUTIONER_API uint32 Get_Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("SpawnedTormentTrailPoint"), sizeof(FSpawnedTormentTrailPoint), Get_Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Hash());
	}
	return Singleton;
}
template<> THEEXECUTIONER_API UScriptStruct* StaticStruct<FSpawnedTormentTrailPoint>()
{
	return FSpawnedTormentTrailPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnedTormentTrailPoint(FSpawnedTormentTrailPoint::StaticStruct, TEXT("/Script/TheExecutioner"), TEXT("SpawnedTormentTrailPoint"), false, nullptr, nullptr);
static struct FScriptStruct_TheExecutioner_StaticRegisterNativesFSpawnedTormentTrailPoint
{
	FScriptStruct_TheExecutioner_StaticRegisterNativesFSpawnedTormentTrailPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnedTormentTrailPoint")),new UScriptStruct::TCppStructOps<FSpawnedTormentTrailPoint>);
	}
} ScriptStruct_TheExecutioner_StaticRegisterNativesFSpawnedTormentTrailPoint;
	struct Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SpawnedTormentTrailPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnedTormentTrailPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::NewProp_TrailPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpawnedTormentTrailPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::NewProp_TrailPoint = { "TrailPoint", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnedTormentTrailPoint, TrailPoint), Z_Construct_UClass_ATormentTrailPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::NewProp_TrailPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::NewProp_TrailPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::NewProp_TrailPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
		nullptr,
		&NewStructOps,
		"SpawnedTormentTrailPoint",
		sizeof(FSpawnedTormentTrailPoint),
		alignof(FSpawnedTormentTrailPoint),
		Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnedTormentTrailPoint"), sizeof(FSpawnedTormentTrailPoint), Get_Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnedTormentTrailPoint_Hash() { return 3355818483U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
