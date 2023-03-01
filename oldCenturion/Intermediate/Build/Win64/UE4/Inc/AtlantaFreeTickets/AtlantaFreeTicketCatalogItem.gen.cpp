// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlantaFreeTickets/Public/AtlantaFreeTicketCatalogItem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFreeTicketCatalogItem() {}
// Cross Module References
	ATLANTAFREETICKETS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem();
	UPackage* Z_Construct_UPackage__Script_AtlantaFreeTickets();
// End Cross Module References
class UScriptStruct* FAtlantaFreeTicketCatalogItem::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATLANTAFREETICKETS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem, Z_Construct_UPackage__Script_AtlantaFreeTickets(), TEXT("AtlantaFreeTicketCatalogItem"), sizeof(FAtlantaFreeTicketCatalogItem), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Hash());
	}
	return Singleton;
}
template<> ATLANTAFREETICKETS_API UScriptStruct* StaticStruct<FAtlantaFreeTicketCatalogItem>()
{
	return FAtlantaFreeTicketCatalogItem::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaFreeTicketCatalogItem(FAtlantaFreeTicketCatalogItem::StaticStruct, TEXT("/Script/AtlantaFreeTickets"), TEXT("AtlantaFreeTicketCatalogItem"), false, nullptr, nullptr);
static struct FScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketCatalogItem
{
	FScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketCatalogItem()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaFreeTicketCatalogItem")),new UScriptStruct::TCppStructOps<FAtlantaFreeTicketCatalogItem>);
	}
} ScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketCatalogItem;
	struct Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationInMinutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurationInMinutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Role;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCatalogItem.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaFreeTicketCatalogItem>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_DurationInMinutes_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCatalogItem.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_DurationInMinutes = { "DurationInMinutes", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketCatalogItem, DurationInMinutes), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_DurationInMinutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_DurationInMinutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_Role_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCatalogItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketCatalogItem, Role), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_Role_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_TicketId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCatalogItem.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketCatalogItem, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_TicketId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_DurationInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::NewProp_TicketId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AtlantaFreeTickets,
		nullptr,
		&NewStructOps,
		"AtlantaFreeTicketCatalogItem",
		sizeof(FAtlantaFreeTicketCatalogItem),
		alignof(FAtlantaFreeTicketCatalogItem),
		Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AtlantaFreeTickets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaFreeTicketCatalogItem"), sizeof(FAtlantaFreeTicketCatalogItem), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCatalogItem_Hash() { return 708048003U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
