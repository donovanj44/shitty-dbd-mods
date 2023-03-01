// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaFreeTicketUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFreeTicketUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
	SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
// End Cross Module References
class UScriptStruct* FAtlantaFreeTicketUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AtlantaFreeTicketUIData"), sizeof(FAtlantaFreeTicketUIData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAtlantaFreeTicketUIData>()
{
	return FAtlantaFreeTicketUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaFreeTicketUIData(FAtlantaFreeTicketUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AtlantaFreeTicketUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaFreeTicketUIData")),new UScriptStruct::TCppStructOps<FAtlantaFreeTicketUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAtlantaFreeTicketUIData;
	struct Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IconColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_IconColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaFreeTicketUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::NewProp_IconColor_MetaData[] = {
		{ "Category", "AtlantaFreeTicketUIData" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::NewProp_IconColor = { "IconColor", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaFreeTicketUIData, IconColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::NewProp_IconColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::NewProp_IconColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::NewProp_IconColor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FItemData,
		&NewStructOps,
		"AtlantaFreeTicketUIData",
		sizeof(FAtlantaFreeTicketUIData),
		alignof(FAtlantaFreeTicketUIData),
		Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaFreeTicketUIData"), sizeof(FAtlantaFreeTicketUIData), Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaFreeTicketUIData_Hash() { return 2245144889U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
