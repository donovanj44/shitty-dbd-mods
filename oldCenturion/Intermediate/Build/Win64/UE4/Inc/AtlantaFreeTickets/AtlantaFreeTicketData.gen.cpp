// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlantaFreeTickets/Public/AtlantaFreeTicketData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFreeTicketData() {}
// Cross Module References
	ATLANTAFREETICKETS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketData();
	UPackage* Z_Construct_UPackage__Script_AtlantaFreeTickets();
// End Cross Module References
class UScriptStruct* FAtlantaFreeTicketData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATLANTAFREETICKETS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaFreeTicketData, Z_Construct_UPackage__Script_AtlantaFreeTickets(), TEXT("AtlantaFreeTicketData"), sizeof(FAtlantaFreeTicketData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Hash());
	}
	return Singleton;
}
template<> ATLANTAFREETICKETS_API UScriptStruct* StaticStruct<FAtlantaFreeTicketData>()
{
	return FAtlantaFreeTicketData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaFreeTicketData(FAtlantaFreeTicketData::StaticStruct, TEXT("/Script/AtlantaFreeTickets"), TEXT("AtlantaFreeTicketData"), false, nullptr, nullptr);
static struct FScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketData
{
	FScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaFreeTicketData")),new UScriptStruct::TCppStructOps<FAtlantaFreeTicketData>);
	}
} ScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketData;
	struct Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Quantity_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Quantity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaFreeTicketData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_Quantity_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketData, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_TicketId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketData, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_TicketId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::NewProp_TicketId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AtlantaFreeTickets,
		nullptr,
		&NewStructOps,
		"AtlantaFreeTicketData",
		sizeof(FAtlantaFreeTicketData),
		alignof(FAtlantaFreeTicketData),
		Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AtlantaFreeTickets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaFreeTicketData"), sizeof(FAtlantaFreeTicketData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketData_Hash() { return 2338501694U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
