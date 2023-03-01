// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaFreeTicketCombinedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFreeTicketCombinedData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData();
// End Cross Module References
class UScriptStruct* FAtlantaFreeTicketCombinedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaFreeTicketCombinedData"), sizeof(FAtlantaFreeTicketCombinedData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaFreeTicketCombinedData>()
{
	return FAtlantaFreeTicketCombinedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaFreeTicketCombinedData(FAtlantaFreeTicketCombinedData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaFreeTicketCombinedData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketCombinedData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketCombinedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaFreeTicketCombinedData")),new UScriptStruct::TCppStructOps<FAtlantaFreeTicketCombinedData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketCombinedData;
	struct Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DurationInMinutes_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DurationInMinutes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCombinedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaFreeTicketCombinedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Quantity_MetaData[] = {
		{ "Category", "AtlantaFreeTicketCombinedData" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCombinedData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Quantity = { "Quantity", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketCombinedData, Quantity), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Quantity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Quantity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_DurationInMinutes_MetaData[] = {
		{ "Category", "AtlantaFreeTicketCombinedData" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCombinedData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_DurationInMinutes = { "DurationInMinutes", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketCombinedData, DurationInMinutes), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_DurationInMinutes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_DurationInMinutes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "AtlantaFreeTicketCombinedData" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCombinedData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketCombinedData, Role), Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Role_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_UIData_MetaData[] = {
		{ "Category", "AtlantaFreeTicketCombinedData" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketCombinedData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketCombinedData, UIData), Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_UIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_UIData_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Quantity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_DurationInMinutes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_Role_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::NewProp_UIData,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AtlantaFreeTicketCombinedData",
		sizeof(FAtlantaFreeTicketCombinedData),
		alignof(FAtlantaFreeTicketCombinedData),
		Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaFreeTicketCombinedData"), sizeof(FAtlantaFreeTicketCombinedData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketCombinedData_Hash() { return 2604938U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
