// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/NavMovePathPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNavMovePathPoint() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FNavMovePathPoint();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
class UScriptStruct* FNavMovePathPoint::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FNavMovePathPoint_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FNavMovePathPoint, Z_Construct_UPackage__Script_DBDBots(), TEXT("NavMovePathPoint"), sizeof(FNavMovePathPoint), Get_Z_Construct_UScriptStruct_FNavMovePathPoint_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FNavMovePathPoint>()
{
	return FNavMovePathPoint::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FNavMovePathPoint(FNavMovePathPoint::StaticStruct, TEXT("/Script/DBDBots"), TEXT("NavMovePathPoint"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFNavMovePathPoint
{
	FScriptStruct_DBDBots_StaticRegisterNativesFNavMovePathPoint()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("NavMovePathPoint")),new UScriptStruct::TCppStructOps<FNavMovePathPoint>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFNavMovePathPoint;
	struct Z_Construct_UScriptStruct_FNavMovePathPoint_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FNavMovePathPoint_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/NavMovePathPoint.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FNavMovePathPoint_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FNavMovePathPoint>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FNavMovePathPoint_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"NavMovePathPoint",
		sizeof(FNavMovePathPoint),
		alignof(FNavMovePathPoint),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FNavMovePathPoint_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FNavMovePathPoint_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FNavMovePathPoint()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FNavMovePathPoint_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("NavMovePathPoint"), sizeof(FNavMovePathPoint), Get_Z_Construct_UScriptStruct_FNavMovePathPoint_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FNavMovePathPoint_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FNavMovePathPoint_Hash() { return 14479223U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
