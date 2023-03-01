// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebNode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebNode() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebNode();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebChest();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeState();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebNodeGate();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodwebNodeProperties();
// End Cross Module References
class UScriptStruct* FBloodwebNode::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodwebNode_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodwebNode, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodwebNode"), sizeof(FBloodwebNode), Get_Z_Construct_UScriptStruct_FBloodwebNode_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodwebNode>()
{
	return FBloodwebNode::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodwebNode(FBloodwebNode::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodwebNode"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNode
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNode()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodwebNode")),new UScriptStruct::TCppStructOps<FBloodwebNode>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodwebNode;
	struct Z_Construct_UScriptStruct_FBloodwebNode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodwebChest_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BloodwebChest;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ContentId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ContentId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NodeID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_NodeID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_State_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_State;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_State_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gates_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Gates;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Gates_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Properties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Properties;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNode_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/BloodwebNode.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodwebNode>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_BloodwebChest_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_BloodwebChest = { "BloodwebChest", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNode, BloodwebChest), Z_Construct_UScriptStruct_FBloodwebChest, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_BloodwebChest_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_BloodwebChest_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_ContentId_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebNode.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_ContentId = { "ContentId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNode, ContentId), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_ContentId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_ContentId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_NodeID_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_NodeID = { "NodeID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNode, NodeID), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_NodeID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_NodeID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_State_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebNode.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNode, State), Z_Construct_UEnum_DeadByDaylight_EBloodwebNodeState, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_State_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_State_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_State_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Gates_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebNode.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Gates = { "Gates", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNode, Gates), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Gates_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Gates_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Gates_Inner = { "Gates", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FBloodwebNodeGate, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Properties_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebNode.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Properties = { "Properties", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodwebNode, Properties), Z_Construct_UScriptStruct_FBloodwebNodeProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Properties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Properties_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodwebNode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_BloodwebChest,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_ContentId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_NodeID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_State_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Gates,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Gates_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodwebNode_Statics::NewProp_Properties,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodwebNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"BloodwebNode",
		sizeof(FBloodwebNode),
		alignof(FBloodwebNode),
		Z_Construct_UScriptStruct_FBloodwebNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodwebNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodwebNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodwebNode()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodwebNode_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodwebNode"), sizeof(FBloodwebNode), Get_Z_Construct_UScriptStruct_FBloodwebNode_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodwebNode_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodwebNode_Hash() { return 408299384U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
