// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SelectableTileSpawnPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectableTileSpawnPoint() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSelectableTileSpawnPoint();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
class UScriptStruct* FSelectableTileSpawnPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectableTileSpawnPoint, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SelectableTileSpawnPoint"), sizeof(FSelectableTileSpawnPoint), Get_Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSelectableTileSpawnPoint>()
{
	return FSelectableTileSpawnPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSelectableTileSpawnPoint(FSelectableTileSpawnPoint::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SelectableTileSpawnPoint"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSelectableTileSpawnPoint
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSelectableTileSpawnPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SelectableTileSpawnPoint")),new UScriptStruct::TCppStructOps<FSelectableTileSpawnPoint>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSelectableTileSpawnPoint;
	struct Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SelectableTileSpawnPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectableTileSpawnPoint>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::NewProp_ComponentReference_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectableTileSpawnPoint.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::NewProp_ComponentReference = { "ComponentReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectableTileSpawnPoint, ComponentReference), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::NewProp_ComponentReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::NewProp_ComponentReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::NewProp_ComponentReference,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SelectableTileSpawnPoint",
		sizeof(FSelectableTileSpawnPoint),
		alignof(FSelectableTileSpawnPoint),
		Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectableTileSpawnPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SelectableTileSpawnPoint"), sizeof(FSelectableTileSpawnPoint), Get_Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSelectableTileSpawnPoint_Hash() { return 3324801U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
