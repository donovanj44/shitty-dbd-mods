// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodstoreRowUnlockThreshold.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodstoreRowUnlockThreshold() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
// End Cross Module References
class UScriptStruct* FBloodstoreRowUnlockThreshold::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BloodstoreRowUnlockThreshold"), sizeof(FBloodstoreRowUnlockThreshold), Get_Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBloodstoreRowUnlockThreshold>()
{
	return FBloodstoreRowUnlockThreshold::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodstoreRowUnlockThreshold(FBloodstoreRowUnlockThreshold::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BloodstoreRowUnlockThreshold"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodstoreRowUnlockThreshold
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodstoreRowUnlockThreshold()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodstoreRowUnlockThreshold")),new UScriptStruct::TCppStructOps<FBloodstoreRowUnlockThreshold>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBloodstoreRowUnlockThreshold;
	struct Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PreviousRowPurchasedItemsCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PreviousRowPurchasedItemsCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodstoreRowUnlockThreshold.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodstoreRowUnlockThreshold>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::NewProp_PreviousRowPurchasedItemsCount_MetaData[] = {
		{ "Category", "BloodstoreRowUnlockThreshold" },
		{ "ModuleRelativePath", "Public/BloodstoreRowUnlockThreshold.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::NewProp_PreviousRowPurchasedItemsCount = { "PreviousRowPurchasedItemsCount", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodstoreRowUnlockThreshold, PreviousRowPurchasedItemsCount), METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::NewProp_PreviousRowPurchasedItemsCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::NewProp_PreviousRowPurchasedItemsCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::NewProp_PreviousRowPurchasedItemsCount,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"BloodstoreRowUnlockThreshold",
		sizeof(FBloodstoreRowUnlockThreshold),
		alignof(FBloodstoreRowUnlockThreshold),
		Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodstoreRowUnlockThreshold"), sizeof(FBloodstoreRowUnlockThreshold), Get_Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodstoreRowUnlockThreshold_Hash() { return 1855499647U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
