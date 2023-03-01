// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoPackData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoPackData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPromoPackData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemUIData();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSprite_NoRegister();
// End Cross Module References
class UScriptStruct* FPromoPackData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPromoPackData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPromoPackData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PromoPackData"), sizeof(FPromoPackData), Get_Z_Construct_UScriptStruct_FPromoPackData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPromoPackData>()
{
	return FPromoPackData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPromoPackData(FPromoPackData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PromoPackData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PromoPackData")),new UScriptStruct::TCppStructOps<FPromoPackData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPromoPackData;
	struct Z_Construct_UScriptStruct_FPromoPackData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UIData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_UIData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromoPackIcon_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_PromoPackIcon;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PromoPackData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPromoPackData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPromoPackData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_UIData_MetaData[] = {
		{ "Category", "PromoPackData" },
		{ "ModuleRelativePath", "Public/PromoPackData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackData, UIData), Z_Construct_UScriptStruct_FItemUIData, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_UIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_UIData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_PromoPackIcon_MetaData[] = {
		{ "Category", "PromoPackData" },
		{ "ModuleRelativePath", "Public/PromoPackData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_PromoPackIcon = { "PromoPackIcon", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackData, PromoPackIcon), Z_Construct_UClass_UPaperSprite_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_PromoPackIcon_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_PromoPackIcon_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "PromoPackData" },
		{ "ModuleRelativePath", "Public/PromoPackData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPromoPackData, ID), METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_ID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_ID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPromoPackData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_UIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_PromoPackIcon,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPromoPackData_Statics::NewProp_ID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPromoPackData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"PromoPackData",
		sizeof(FPromoPackData),
		alignof(FPromoPackData),
		Z_Construct_UScriptStruct_FPromoPackData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPromoPackData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPromoPackData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPromoPackData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPromoPackData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PromoPackData"), sizeof(FPromoPackData), Get_Z_Construct_UScriptStruct_FPromoPackData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPromoPackData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPromoPackData_Hash() { return 4002370552U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
