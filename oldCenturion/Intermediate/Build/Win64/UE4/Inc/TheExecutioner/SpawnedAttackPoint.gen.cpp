// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/SpawnedAttackPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnedAttackPoint() {}
// Cross Module References
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FSpawnedAttackPoint();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister();
// End Cross Module References
class UScriptStruct* FSpawnedAttackPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEEXECUTIONER_API uint32 Get_Z_Construct_UScriptStruct_FSpawnedAttackPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpawnedAttackPoint, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("SpawnedAttackPoint"), sizeof(FSpawnedAttackPoint), Get_Z_Construct_UScriptStruct_FSpawnedAttackPoint_Hash());
	}
	return Singleton;
}
template<> THEEXECUTIONER_API UScriptStruct* StaticStruct<FSpawnedAttackPoint>()
{
	return FSpawnedAttackPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpawnedAttackPoint(FSpawnedAttackPoint::StaticStruct, TEXT("/Script/TheExecutioner"), TEXT("SpawnedAttackPoint"), false, nullptr, nullptr);
static struct FScriptStruct_TheExecutioner_StaticRegisterNativesFSpawnedAttackPoint
{
	FScriptStruct_TheExecutioner_StaticRegisterNativesFSpawnedAttackPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpawnedAttackPoint")),new UScriptStruct::TCppStructOps<FSpawnedAttackPoint>);
	}
} ScriptStruct_TheExecutioner_StaticRegisterNativesFSpawnedAttackPoint;
	struct Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackTrailPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttackTrailPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpawnedAttackPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpawnedAttackPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::NewProp_AttackTrailPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpawnedAttackPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::NewProp_AttackTrailPoint = { "AttackTrailPoint", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpawnedAttackPoint, AttackTrailPoint), Z_Construct_UClass_ABaseTormentTrailPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::NewProp_AttackTrailPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::NewProp_AttackTrailPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::NewProp_AttackTrailPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
		nullptr,
		&NewStructOps,
		"SpawnedAttackPoint",
		sizeof(FSpawnedAttackPoint),
		alignof(FSpawnedAttackPoint),
		Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpawnedAttackPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpawnedAttackPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpawnedAttackPoint"), sizeof(FSpawnedAttackPoint), Get_Z_Construct_UScriptStruct_FSpawnedAttackPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpawnedAttackPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpawnedAttackPoint_Hash() { return 2793886230U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
