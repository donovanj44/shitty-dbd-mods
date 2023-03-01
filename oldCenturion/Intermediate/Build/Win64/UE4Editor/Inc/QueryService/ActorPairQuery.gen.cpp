// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QueryService/Public/ActorPairQuery.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeActorPairQuery() {}
// Cross Module References
	QUERYSERVICE_API UScriptStruct* Z_Construct_UScriptStruct_FActorPairQuery();
	UPackage* Z_Construct_UPackage__Script_QueryService();
	QUERYSERVICE_API UScriptStruct* Z_Construct_UScriptStruct_FDistanceTrackerCase();
// End Cross Module References
class UScriptStruct* FActorPairQuery::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern QUERYSERVICE_API uint32 Get_Z_Construct_UScriptStruct_FActorPairQuery_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FActorPairQuery, Z_Construct_UPackage__Script_QueryService(), TEXT("ActorPairQuery"), sizeof(FActorPairQuery), Get_Z_Construct_UScriptStruct_FActorPairQuery_Hash());
	}
	return Singleton;
}
template<> QUERYSERVICE_API UScriptStruct* StaticStruct<FActorPairQuery>()
{
	return FActorPairQuery::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FActorPairQuery(FActorPairQuery::StaticStruct, TEXT("/Script/QueryService"), TEXT("ActorPairQuery"), false, nullptr, nullptr);
static struct FScriptStruct_QueryService_StaticRegisterNativesFActorPairQuery
{
	FScriptStruct_QueryService_StaticRegisterNativesFActorPairQuery()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ActorPairQuery")),new UScriptStruct::TCppStructOps<FActorPairQuery>);
	}
} ScriptStruct_QueryService_StaticRegisterNativesFActorPairQuery;
	struct Z_Construct_UScriptStruct_FActorPairQuery_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__usePlanarDistance_MetaData[];
#endif
		static void NewProp__usePlanarDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__usePlanarDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__caseIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__caseIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__distanceTrackerCases_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__distanceTrackerCases;
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp__distanceTrackerCases_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__distanceTrackerCases_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPairQuery_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ActorPairQuery.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FActorPairQuery>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__usePlanarDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPairQuery.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__usePlanarDistance_SetBit(void* Obj)
	{
		((FActorPairQuery*)Obj)->_usePlanarDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__usePlanarDistance = { "_usePlanarDistance", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FActorPairQuery), &Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__usePlanarDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__usePlanarDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__usePlanarDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__caseIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPairQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__caseIndex = { "_caseIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPairQuery, _caseIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__caseIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__caseIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases_MetaData[] = {
		{ "ModuleRelativePath", "Public/ActorPairQuery.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases = { "_distanceTrackerCases", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FActorPairQuery, _distanceTrackerCases), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases_MetaData)) };
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases_Key_KeyProp = { "_distanceTrackerCases_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases_ValueProp = { "_distanceTrackerCases", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FDistanceTrackerCase, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FActorPairQuery_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__usePlanarDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__caseIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FActorPairQuery_Statics::NewProp__distanceTrackerCases_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FActorPairQuery_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QueryService,
		nullptr,
		&NewStructOps,
		"ActorPairQuery",
		sizeof(FActorPairQuery),
		alignof(FActorPairQuery),
		Z_Construct_UScriptStruct_FActorPairQuery_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPairQuery_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FActorPairQuery_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FActorPairQuery_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FActorPairQuery()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FActorPairQuery_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_QueryService();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ActorPairQuery"), sizeof(FActorPairQuery), Get_Z_Construct_UScriptStruct_FActorPairQuery_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FActorPairQuery_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FActorPairQuery_Hash() { return 1303135592U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
