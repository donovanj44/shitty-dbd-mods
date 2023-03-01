// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlantaFreeTickets/Public/AtlantaFreeTicketsAffectedCharacterData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFreeTicketsAffectedCharacterData() {}
// Cross Module References
	ATLANTAFREETICKETS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData();
	UPackage* Z_Construct_UPackage__Script_AtlantaFreeTickets();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FAtlantaFreeTicketsAffectedCharacterData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ATLANTAFREETICKETS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData, Z_Construct_UPackage__Script_AtlantaFreeTickets(), TEXT("AtlantaFreeTicketsAffectedCharacterData"), sizeof(FAtlantaFreeTicketsAffectedCharacterData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Hash());
	}
	return Singleton;
}
template<> ATLANTAFREETICKETS_API UScriptStruct* StaticStruct<FAtlantaFreeTicketsAffectedCharacterData>()
{
	return FAtlantaFreeTicketsAffectedCharacterData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData(FAtlantaFreeTicketsAffectedCharacterData::StaticStruct, TEXT("/Script/AtlantaFreeTickets"), TEXT("AtlantaFreeTicketsAffectedCharacterData"), false, nullptr, nullptr);
static struct FScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketsAffectedCharacterData
{
	FScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketsAffectedCharacterData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaFreeTicketsAffectedCharacterData")),new UScriptStruct::TCppStructOps<FAtlantaFreeTicketsAffectedCharacterData>);
	}
} ScriptStruct_AtlantaFreeTickets_StaticRegisterNativesFAtlantaFreeTicketsAffectedCharacterData;
	struct Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TicketId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TicketId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CharacterName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketsAffectedCharacterData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaFreeTicketsAffectedCharacterData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_EndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketsAffectedCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketsAffectedCharacterData, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_TicketId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketsAffectedCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_TicketId = { "TicketId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketsAffectedCharacterData, TicketId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_TicketId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_TicketId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_CharacterName_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketsAffectedCharacterData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_CharacterName = { "CharacterName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketsAffectedCharacterData, CharacterName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_CharacterName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_CharacterName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_TicketId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::NewProp_CharacterName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AtlantaFreeTickets,
		nullptr,
		&NewStructOps,
		"AtlantaFreeTicketsAffectedCharacterData",
		sizeof(FAtlantaFreeTicketsAffectedCharacterData),
		alignof(FAtlantaFreeTicketsAffectedCharacterData),
		Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AtlantaFreeTickets();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaFreeTicketsAffectedCharacterData"), sizeof(FAtlantaFreeTicketsAffectedCharacterData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketsAffectedCharacterData_Hash() { return 1430533560U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
