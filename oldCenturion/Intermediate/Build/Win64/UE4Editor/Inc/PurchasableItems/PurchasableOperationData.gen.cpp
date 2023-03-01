// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PurchasableItems/Public/PurchasableOperationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurchasableOperationData() {}
// Cross Module References
	PURCHASABLEITEMS_API UScriptStruct* Z_Construct_UScriptStruct_FPurchasableOperationData();
	UPackage* Z_Construct_UPackage__Script_PurchasableItems();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FPurchasableOperationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern PURCHASABLEITEMS_API uint32 Get_Z_Construct_UScriptStruct_FPurchasableOperationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPurchasableOperationData, Z_Construct_UPackage__Script_PurchasableItems(), TEXT("PurchasableOperationData"), sizeof(FPurchasableOperationData), Get_Z_Construct_UScriptStruct_FPurchasableOperationData_Hash());
	}
	return Singleton;
}
template<> PURCHASABLEITEMS_API UScriptStruct* StaticStruct<FPurchasableOperationData>()
{
	return FPurchasableOperationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPurchasableOperationData(FPurchasableOperationData::StaticStruct, TEXT("/Script/PurchasableItems"), TEXT("PurchasableOperationData"), false, nullptr, nullptr);
static struct FScriptStruct_PurchasableItems_StaticRegisterNativesFPurchasableOperationData
{
	FScriptStruct_PurchasableItems_StaticRegisterNativesFPurchasableOperationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PurchasableOperationData")),new UScriptStruct::TCppStructOps<FPurchasableOperationData>);
	}
} ScriptStruct_PurchasableItems_StaticRegisterNativesFPurchasableOperationData;
	struct Z_Construct_UScriptStruct_FPurchasableOperationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PurchasableOperationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPurchasableOperationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "PurchasableOperationData" },
		{ "ModuleRelativePath", "Public/PurchasableOperationData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPurchasableOperationData, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_PurchasableItems,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"PurchasableOperationData",
		sizeof(FPurchasableOperationData),
		alignof(FPurchasableOperationData),
		Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPurchasableOperationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPurchasableOperationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_PurchasableItems();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PurchasableOperationData"), sizeof(FPurchasableOperationData), Get_Z_Construct_UScriptStruct_FPurchasableOperationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPurchasableOperationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPurchasableOperationData_Hash() { return 1395337774U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
