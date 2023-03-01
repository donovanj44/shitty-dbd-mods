// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemAvailability.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemAvailability() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemAvailability();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EItemAvailability();
// End Cross Module References
class UScriptStruct* FItemAvailability::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FItemAvailability_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemAvailability, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ItemAvailability"), sizeof(FItemAvailability), Get_Z_Construct_UScriptStruct_FItemAvailability_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FItemAvailability>()
{
	return FItemAvailability::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemAvailability(FItemAvailability::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ItemAvailability"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAvailability
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAvailability()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemAvailability")),new UScriptStruct::TCppStructOps<FItemAvailability>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFItemAvailability;
	struct Z_Construct_UScriptStruct_FItemAvailability_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunityId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommunityId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CloudInventoryId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CloudInventoryId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DLCId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DLCId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_itemAvailability_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_itemAvailability;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_itemAvailability_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAvailability_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemAvailability.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemAvailability_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemAvailability>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CommunityId_MetaData[] = {
		{ "Category", "ItemAvailability" },
		{ "ModuleRelativePath", "Public/ItemAvailability.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CommunityId = { "CommunityId", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAvailability, CommunityId), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CommunityId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CommunityId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CloudInventoryId_MetaData[] = {
		{ "Category", "ItemAvailability" },
		{ "ModuleRelativePath", "Public/ItemAvailability.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CloudInventoryId = { "CloudInventoryId", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAvailability, CloudInventoryId), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CloudInventoryId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CloudInventoryId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_DLCId_MetaData[] = {
		{ "Category", "ItemAvailability" },
		{ "ModuleRelativePath", "Public/ItemAvailability.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_DLCId = { "DLCId", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAvailability, DLCId), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_DLCId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_DLCId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_itemAvailability_MetaData[] = {
		{ "Category", "ItemAvailability" },
		{ "ModuleRelativePath", "Public/ItemAvailability.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_itemAvailability = { "itemAvailability", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemAvailability, itemAvailability), Z_Construct_UEnum_DBDSharedTypes_EItemAvailability, METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_itemAvailability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_itemAvailability_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_itemAvailability_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemAvailability_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CommunityId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_CloudInventoryId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_DLCId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_itemAvailability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemAvailability_Statics::NewProp_itemAvailability_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemAvailability_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ItemAvailability",
		sizeof(FItemAvailability),
		alignof(FItemAvailability),
		Z_Construct_UScriptStruct_FItemAvailability_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAvailability_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemAvailability_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemAvailability_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemAvailability()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemAvailability_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemAvailability"), sizeof(FItemAvailability), Get_Z_Construct_UScriptStruct_FItemAvailability_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemAvailability_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemAvailability_Hash() { return 968229855U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
