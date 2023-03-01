// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/ReplicatedTrailItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReplicatedTrailItem() {}
// Cross Module References
	THEEXECUTIONER_API UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrailItem();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFastArraySerializerItem();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FVector_NetQuantize10();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_ATormentTrailPoint_NoRegister();
// End Cross Module References
class UScriptStruct* FReplicatedTrailItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEEXECUTIONER_API uint32 Get_Z_Construct_UScriptStruct_FReplicatedTrailItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReplicatedTrailItem, Z_Construct_UPackage__Script_TheExecutioner(), TEXT("ReplicatedTrailItem"), sizeof(FReplicatedTrailItem), Get_Z_Construct_UScriptStruct_FReplicatedTrailItem_Hash());
	}
	return Singleton;
}
template<> THEEXECUTIONER_API UScriptStruct* StaticStruct<FReplicatedTrailItem>()
{
	return FReplicatedTrailItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReplicatedTrailItem(FReplicatedTrailItem::StaticStruct, TEXT("/Script/TheExecutioner"), TEXT("ReplicatedTrailItem"), false, nullptr, nullptr);
static struct FScriptStruct_TheExecutioner_StaticRegisterNativesFReplicatedTrailItem
{
	FScriptStruct_TheExecutioner_StaticRegisterNativesFReplicatedTrailItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReplicatedTrailItem")),new UScriptStruct::TCppStructOps<FReplicatedTrailItem>);
	}
} ScriptStruct_TheExecutioner_StaticRegisterNativesFReplicatedTrailItem;
	struct Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PointRelativeLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PointRelativeLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OrderInTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OrderInTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReplicatedTrailItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReplicatedTrailItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRotation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedTrailItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRotation = { "PointRotation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedTrailItem, PointRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRelativeLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedTrailItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRelativeLocation = { "PointRelativeLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedTrailItem, PointRelativeLocation), Z_Construct_UScriptStruct_FVector_NetQuantize10, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRelativeLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRelativeLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_OrderInTrail_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedTrailItem.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_OrderInTrail = { "OrderInTrail", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedTrailItem, OrderInTrail), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_OrderInTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_OrderInTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_TrailPoint_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReplicatedTrailItem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_TrailPoint = { "TrailPoint", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReplicatedTrailItem, TrailPoint), Z_Construct_UClass_ATormentTrailPoint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_TrailPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_TrailPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_PointRelativeLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_OrderInTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::NewProp_TrailPoint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
		Z_Construct_UScriptStruct_FFastArraySerializerItem,
		&NewStructOps,
		"ReplicatedTrailItem",
		sizeof(FReplicatedTrailItem),
		alignof(FReplicatedTrailItem),
		Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReplicatedTrailItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReplicatedTrailItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheExecutioner();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReplicatedTrailItem"), sizeof(FReplicatedTrailItem), Get_Z_Construct_UScriptStruct_FReplicatedTrailItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReplicatedTrailItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReplicatedTrailItem_Hash() { return 3736221573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
