// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/RelevantNodeMemory.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRelevantNodeMemory() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FRelevantNodeMemory();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UClass* Z_Construct_UClass_UBTNode_NoRegister();
// End Cross Module References
class UScriptStruct* FRelevantNodeMemory::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FRelevantNodeMemory_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FRelevantNodeMemory, Z_Construct_UPackage__Script_DBDBots(), TEXT("RelevantNodeMemory"), sizeof(FRelevantNodeMemory), Get_Z_Construct_UScriptStruct_FRelevantNodeMemory_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FRelevantNodeMemory>()
{
	return FRelevantNodeMemory::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FRelevantNodeMemory(FRelevantNodeMemory::StaticStruct, TEXT("/Script/DBDBots"), TEXT("RelevantNodeMemory"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFRelevantNodeMemory
{
	FScriptStruct_DBDBots_StaticRegisterNativesFRelevantNodeMemory()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("RelevantNodeMemory")),new UScriptStruct::TCppStructOps<FRelevantNodeMemory>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFRelevantNodeMemory;
	struct Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Node;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/RelevantNodeMemory.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRelevantNodeMemory>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::NewProp_Node_MetaData[] = {
		{ "ModuleRelativePath", "Public/RelevantNodeMemory.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FRelevantNodeMemory, Node), Z_Construct_UClass_UBTNode_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::NewProp_Node_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::NewProp_Node_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::NewProp_Node,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"RelevantNodeMemory",
		sizeof(FRelevantNodeMemory),
		alignof(FRelevantNodeMemory),
		Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FRelevantNodeMemory()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FRelevantNodeMemory_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("RelevantNodeMemory"), sizeof(FRelevantNodeMemory), Get_Z_Construct_UScriptStruct_FRelevantNodeMemory_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FRelevantNodeMemory_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FRelevantNodeMemory_Hash() { return 3607137211U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
