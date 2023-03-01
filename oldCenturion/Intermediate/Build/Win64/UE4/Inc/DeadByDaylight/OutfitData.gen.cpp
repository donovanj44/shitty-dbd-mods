// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OutfitData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutfitData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutfitData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemAvailability();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemUIData();
// End Cross Module References
class UScriptStruct* FOutfitData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOutfitData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutfitData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OutfitData"), sizeof(FOutfitData), Get_Z_Construct_UScriptStruct_FOutfitData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOutfitData>()
{
	return FOutfitData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutfitData(FOutfitData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OutfitData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OutfitData")),new UScriptStruct::TCppStructOps<FOutfitData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitData;
	struct Z_Construct_UScriptStruct_FOutfitData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAvailableInAtlantaBuild_MetaData[];
#endif
		static void NewProp_IsAvailableInAtlantaBuild_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAvailableInAtlantaBuild;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CollectionDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectionName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_CollectionName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitItems_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_OutfitItems;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutfitItems_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Availability_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Availability;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OutfitData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutfitData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutfitData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData[] = {
		{ "Category", "OutfitData" },
		{ "ModuleRelativePath", "Public/OutfitData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_IsAvailableInAtlantaBuild_SetBit(void* Obj)
	{
		((FOutfitData*)Obj)->IsAvailableInAtlantaBuild = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_IsAvailableInAtlantaBuild = { "IsAvailableInAtlantaBuild", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOutfitData), &Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_IsAvailableInAtlantaBuild_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_IsAvailableInAtlantaBuild_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionDescription_MetaData[] = {
		{ "Category", "OutfitData" },
		{ "ModuleRelativePath", "Public/OutfitData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionDescription = { "CollectionDescription", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitData, CollectionDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionName_MetaData[] = {
		{ "Category", "OutfitData" },
		{ "ModuleRelativePath", "Public/OutfitData.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionName = { "CollectionName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitData, CollectionName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_OutfitItems_MetaData[] = {
		{ "Category", "OutfitData" },
		{ "ModuleRelativePath", "Public/OutfitData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_OutfitItems = { "OutfitItems", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitData, OutfitItems), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_OutfitItems_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_OutfitItems_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_OutfitItems_Inner = { "OutfitItems", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_Availability_MetaData[] = {
		{ "Category", "OutfitData" },
		{ "ModuleRelativePath", "Public/OutfitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_Availability = { "Availability", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitData, Availability), Z_Construct_UScriptStruct_FItemAvailability, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_Availability_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_Availability_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_UIData_MetaData[] = {
		{ "Category", "OutfitData" },
		{ "ModuleRelativePath", "Public/OutfitData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitData, UIData), Z_Construct_UScriptStruct_FItemUIData, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_UIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_UIData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "OutfitData" },
		{ "ModuleRelativePath", "Public/OutfitData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutfitData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_IsAvailableInAtlantaBuild,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_CollectionName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_OutfitItems,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_OutfitItems_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_Availability,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_UIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutfitData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"OutfitData",
		sizeof(FOutfitData),
		alignof(FOutfitData),
		Z_Construct_UScriptStruct_FOutfitData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutfitData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutfitData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutfitData"), sizeof(FOutfitData), Get_Z_Construct_UScriptStruct_FOutfitData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutfitData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutfitData_Hash() { return 2530840783U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
