// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/ReplicatedTrailPointList.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedTrailPointList() {}
// Cross Module References
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrailPointList();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializer();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailController_NoRegister();
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrailItem();
// End Cross Module References
class UScriptStruct* FReplicatedTrailPointList::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEEXECUTIONER_API uint32 Get_Z_Construct_UScriptStruct_FReplicatedTrailPointList_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedTrailPointList, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("ReplicatedTrailPointList"), sizeof(FReplicatedTrailPointList), Get_Z_Construct_UScriptStruct_FReplicatedTrailPointList_Hash());
	}
	return Singleton;
}
template<> THEEXECUTIONER_API UScriptStruct* StaticStruct<FReplicatedTrailPointList>()
{
	return FReplicatedTrailPointList::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicatedTrailPointList(FReplicatedTrailPointList::StaticStruct, TEXT("/Script/TheExecutioner"), TEXT("ReplicatedTrailPointList"), false, nullptr, nullptr);
static struct FScriptStruct_TheExecutioner_StaticRegisterNativesFReplicatedTrailPointList
{
	FScriptStruct_TheExecutioner_StaticRegisterNativesFReplicatedTrailPointList()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicatedTrailPointList")),new UScriptStruct::TCppStructOps<FReplicatedTrailPointList>);
	}
} ScriptStruct_TheExecutioner_StaticRegisterNativesFReplicatedTrailPointList;
	struct Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TormentTrailController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TormentTrailController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Items_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Items;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Items_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplicatedTrailPointList.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedTrailPointList>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_TormentTrailController_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedTrailPointList.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_TormentTrailController = { "TormentTrailController", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedTrailPointList, TormentTrailController), Z_Construct_UClass_ATormentTrailController_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_TormentTrailController_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_TormentTrailController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_Items_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedTrailPointList.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_Items = { "Items", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedTrailPointList, Items), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_Items_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_Items_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_Items_Inner = { "Items", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FReplicatedTrailItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_TormentTrailController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_Items,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::NewProp_Items_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
		Z_Construct_UScriptStruct_FFastArraySerializer,
		&NewStructOps,
		"ReplicatedTrailPointList",
		sizeof(FReplicatedTrailPointList),
		alignof(FReplicatedTrailPointList),
		Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrailPointList()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicatedTrailPointList_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicatedTrailPointList"), sizeof(FReplicatedTrailPointList), Get_Z_Construct_UScriptStruct_FReplicatedTrailPointList_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicatedTrailPointList_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicatedTrailPointList_Hash() { return 225954004U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
