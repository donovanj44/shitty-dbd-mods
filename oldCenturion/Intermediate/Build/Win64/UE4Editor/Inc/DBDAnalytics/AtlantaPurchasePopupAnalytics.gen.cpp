// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/AtlantaPurchasePopupAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaPurchasePopupAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FAtlantaPurchasePopupAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("AtlantaPurchasePopupAnalytics"), sizeof(FAtlantaPurchasePopupAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FAtlantaPurchasePopupAnalytics>()
{
	return FAtlantaPurchasePopupAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAtlantaPurchasePopupAnalytics(FAtlantaPurchasePopupAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("AtlantaPurchasePopupAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPurchasePopupAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPurchasePopupAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AtlantaPurchasePopupAnalytics")),new UScriptStruct::TCppStructOps<FAtlantaPurchasePopupAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFAtlantaPurchasePopupAnalytics;
	struct Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPurchased_MetaData[];
#endif
		static void NewProp_IsPurchased_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPurchased;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Price_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Price;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_OfferId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AtlantaPurchasePopupAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAtlantaPurchasePopupAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_IsPurchased_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPurchasePopupAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_IsPurchased_SetBit(void* Obj)
	{
		((FAtlantaPurchasePopupAnalytics*)Obj)->IsPurchased = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_IsPurchased = { "IsPurchased", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAtlantaPurchasePopupAnalytics), &Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_IsPurchased_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_IsPurchased_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_IsPurchased_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_Price_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPurchasePopupAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_Price = { "Price", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPurchasePopupAnalytics, Price), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_Price_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_Price_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_OfferId_MetaData[] = {
		{ "ModuleRelativePath", "Public/AtlantaPurchasePopupAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_OfferId = { "OfferId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAtlantaPurchasePopupAnalytics, OfferId), METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_OfferId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_OfferId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_IsPurchased,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_Price,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::NewProp_OfferId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"AtlantaPurchasePopupAnalytics",
		sizeof(FAtlantaPurchasePopupAnalytics),
		alignof(FAtlantaPurchasePopupAnalytics),
		Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AtlantaPurchasePopupAnalytics"), sizeof(FAtlantaPurchasePopupAnalytics), Get_Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAtlantaPurchasePopupAnalytics_Hash() { return 2201319557U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
