// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainAnchorAnimationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainAnchorAnimationData() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UClass* Z_Construct_UClass_AK25Chain_NoRegister();
// End Cross Module References
class UScriptStruct* FK25ChainAnchorAnimationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData, Z_Construct_UPackage__Script_TheK25(), TEXT("K25ChainAnchorAnimationData"), sizeof(FK25ChainAnchorAnimationData), Get_Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FK25ChainAnchorAnimationData>()
{
	return FK25ChainAnchorAnimationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK25ChainAnchorAnimationData(FK25ChainAnchorAnimationData::StaticStruct, TEXT("/Script/TheK25"), TEXT("K25ChainAnchorAnimationData"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFK25ChainAnchorAnimationData
{
	FScriptStruct_TheK25_StaticRegisterNativesFK25ChainAnchorAnimationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K25ChainAnchorAnimationData")),new UScriptStruct::TCppStructOps<FK25ChainAnchorAnimationData>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFK25ChainAnchorAnimationData;
	struct Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachedChain_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp_AttachedChain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsChainBeingRemoved_MetaData[];
#endif
		static void NewProp_IsChainBeingRemoved_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsChainBeingRemoved;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasChainAttached_MetaData[];
#endif
		static void NewProp_HasChainAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasChainAttached;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChainHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainWeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChainWeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainPullAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ChainPullAngle;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K25ChainAnchorAnimationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK25ChainAnchorAnimationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_AttachedChain_MetaData[] = {
		{ "ModuleRelativePath", "Public/K25ChainAnchorAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_AttachedChain = { "AttachedChain", nullptr, (EPropertyFlags)0x0014000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25ChainAnchorAnimationData, AttachedChain), Z_Construct_UClass_AK25Chain_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_AttachedChain_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_AttachedChain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_IsChainBeingRemoved_MetaData[] = {
		{ "Category", "K25ChainAnchorAnimationData" },
		{ "ModuleRelativePath", "Public/K25ChainAnchorAnimationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_IsChainBeingRemoved_SetBit(void* Obj)
	{
		((FK25ChainAnchorAnimationData*)Obj)->IsChainBeingRemoved = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_IsChainBeingRemoved = { "IsChainBeingRemoved", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK25ChainAnchorAnimationData), &Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_IsChainBeingRemoved_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_IsChainBeingRemoved_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_IsChainBeingRemoved_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_HasChainAttached_MetaData[] = {
		{ "Category", "K25ChainAnchorAnimationData" },
		{ "ModuleRelativePath", "Public/K25ChainAnchorAnimationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_HasChainAttached_SetBit(void* Obj)
	{
		((FK25ChainAnchorAnimationData*)Obj)->HasChainAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_HasChainAttached = { "HasChainAttached", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK25ChainAnchorAnimationData), &Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_HasChainAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_HasChainAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_HasChainAttached_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainHeight_MetaData[] = {
		{ "Category", "K25ChainAnchorAnimationData" },
		{ "ModuleRelativePath", "Public/K25ChainAnchorAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainHeight = { "ChainHeight", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25ChainAnchorAnimationData, ChainHeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainWeight_MetaData[] = {
		{ "Category", "K25ChainAnchorAnimationData" },
		{ "ModuleRelativePath", "Public/K25ChainAnchorAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainWeight = { "ChainWeight", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25ChainAnchorAnimationData, ChainWeight), METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainWeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainWeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainPullAngle_MetaData[] = {
		{ "Category", "K25ChainAnchorAnimationData" },
		{ "ModuleRelativePath", "Public/K25ChainAnchorAnimationData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainPullAngle = { "ChainPullAngle", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK25ChainAnchorAnimationData, ChainPullAngle), METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainPullAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainPullAngle_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_AttachedChain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_IsChainBeingRemoved,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_HasChainAttached,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainWeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::NewProp_ChainPullAngle,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"K25ChainAnchorAnimationData",
		sizeof(FK25ChainAnchorAnimationData),
		alignof(FK25ChainAnchorAnimationData),
		Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K25ChainAnchorAnimationData"), sizeof(FK25ChainAnchorAnimationData), Get_Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK25ChainAnchorAnimationData_Hash() { return 4104028604U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
