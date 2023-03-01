// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StoreBannersData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreBannersData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoreBannersData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EStoreBannerLocation();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedBannerData();
// End Cross Module References
class UScriptStruct* FStoreBannersData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStoreBannersData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreBannersData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StoreBannersData"), sizeof(FStoreBannersData), Get_Z_Construct_UScriptStruct_FStoreBannersData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStoreBannersData>()
{
	return FStoreBannersData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreBannersData(FStoreBannersData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StoreBannersData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreBannersData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreBannersData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StoreBannersData")),new UScriptStruct::TCppStructOps<FStoreBannersData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreBannersData;
	struct Z_Construct_UScriptStruct_FStoreBannersData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_DefaultLocation;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultLocation_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseAsDefault_MetaData[];
#endif
		static void NewProp_UseAsDefault_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseAsDefault;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannerData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BannerData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BannerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BannerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreBannersData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoreBannersData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreBannersData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_DefaultLocation_MetaData[] = {
		{ "Category", "StoreBannersData" },
		{ "ModuleRelativePath", "Public/StoreBannersData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_DefaultLocation = { "DefaultLocation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreBannersData, DefaultLocation), Z_Construct_UEnum_DeadByDaylight_EStoreBannerLocation, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_DefaultLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_DefaultLocation_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_DefaultLocation_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_UseAsDefault_MetaData[] = {
		{ "Category", "StoreBannersData" },
		{ "ModuleRelativePath", "Public/StoreBannersData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_UseAsDefault_SetBit(void* Obj)
	{
		((FStoreBannersData*)Obj)->UseAsDefault = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_UseAsDefault = { "UseAsDefault", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreBannersData), &Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_UseAsDefault_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_UseAsDefault_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_UseAsDefault_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerData_MetaData[] = {
		{ "Category", "StoreBannersData" },
		{ "ModuleRelativePath", "Public/StoreBannersData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerData = { "BannerData", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreBannersData, BannerData), Z_Construct_UScriptStruct_FStoreFeaturedBannerData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerId_MetaData[] = {
		{ "Category", "StoreBannersData" },
		{ "ModuleRelativePath", "Public/StoreBannersData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerId = { "BannerId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreBannersData, BannerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreBannersData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_DefaultLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_DefaultLocation_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_UseAsDefault,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreBannersData_Statics::NewProp_BannerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreBannersData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"StoreBannersData",
		sizeof(FStoreBannersData),
		alignof(FStoreBannersData),
		Z_Construct_UScriptStruct_FStoreBannersData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreBannersData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreBannersData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreBannersData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreBannersData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreBannersData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreBannersData"), sizeof(FStoreBannersData), Get_Z_Construct_UScriptStruct_FStoreBannersData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreBannersData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreBannersData_Hash() { return 1278506650U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
