// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingCategoryData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingCategoryData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingCategoryData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemUIData();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EPlayerRole();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EOfferingCategory();
// End Cross Module References
class UScriptStruct* FOfferingCategoryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOfferingCategoryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOfferingCategoryData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OfferingCategoryData"), sizeof(FOfferingCategoryData), Get_Z_Construct_UScriptStruct_FOfferingCategoryData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOfferingCategoryData>()
{
	return FOfferingCategoryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOfferingCategoryData(FOfferingCategoryData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OfferingCategoryData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingCategoryData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingCategoryData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OfferingCategoryData")),new UScriptStruct::TCppStructOps<FOfferingCategoryData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingCategoryData;
	struct Z_Construct_UScriptStruct_FOfferingCategoryData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Role_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Role;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Role_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Role_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OfferingCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OfferingCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OfferingCategoryData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOfferingCategoryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_UIData_MetaData[] = {
		{ "Category", "OfferingCategoryData" },
		{ "ModuleRelativePath", "Public/OfferingCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_UIData = { "UIData", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingCategoryData, UIData), Z_Construct_UScriptStruct_FItemUIData, METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_UIData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_UIData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role_MetaData[] = {
		{ "Category", "OfferingCategoryData" },
		{ "ModuleRelativePath", "Public/OfferingCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role = { "Role", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingCategoryData, Role), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role_Inner = { "Role", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DBDSharedTypes_EPlayerRole, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_OfferingCategory_MetaData[] = {
		{ "Category", "OfferingCategoryData" },
		{ "ModuleRelativePath", "Public/OfferingCategoryData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_OfferingCategory = { "OfferingCategory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingCategoryData, OfferingCategory), Z_Construct_UEnum_DeadByDaylight_EOfferingCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_OfferingCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_OfferingCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_OfferingCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_UIData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_Role_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_OfferingCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::NewProp_OfferingCategory_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"OfferingCategoryData",
		sizeof(FOfferingCategoryData),
		alignof(FOfferingCategoryData),
		Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOfferingCategoryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOfferingCategoryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OfferingCategoryData"), sizeof(FOfferingCategoryData), Get_Z_Construct_UScriptStruct_FOfferingCategoryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOfferingCategoryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOfferingCategoryData_Hash() { return 623429050U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
