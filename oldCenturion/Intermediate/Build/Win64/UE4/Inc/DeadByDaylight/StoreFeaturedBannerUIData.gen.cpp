// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StoreFeaturedBannerUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoreFeaturedBannerUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedBannerData();
// End Cross Module References
class UScriptStruct* FStoreFeaturedBannerUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StoreFeaturedBannerUIData"), sizeof(FStoreFeaturedBannerUIData), Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStoreFeaturedBannerUIData>()
{
	return FStoreFeaturedBannerUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoreFeaturedBannerUIData(FStoreFeaturedBannerUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StoreFeaturedBannerUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreFeaturedBannerUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreFeaturedBannerUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StoreFeaturedBannerUIData")),new UScriptStruct::TCppStructOps<FStoreFeaturedBannerUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStoreFeaturedBannerUIData;
	struct Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsNew_MetaData[];
#endif
		static void NewProp_IsNew_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsNew;
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoreFeaturedBannerUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_IsNew_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerUIData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_IsNew_SetBit(void* Obj)
	{
		((FStoreFeaturedBannerUIData*)Obj)->IsNew = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_IsNew = { "IsNew", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStoreFeaturedBannerUIData), &Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_IsNew_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_IsNew_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_IsNew_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerData_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerData = { "BannerData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerUIData, BannerData), Z_Construct_UScriptStruct_FStoreFeaturedBannerData, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoreFeaturedBannerUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerId = { "BannerId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoreFeaturedBannerUIData, BannerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_IsNew,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::NewProp_BannerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"StoreFeaturedBannerUIData",
		sizeof(FStoreFeaturedBannerUIData),
		alignof(FStoreFeaturedBannerUIData),
		Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoreFeaturedBannerUIData"), sizeof(FStoreFeaturedBannerUIData), Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoreFeaturedBannerUIData_Hash() { return 4061436165U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
