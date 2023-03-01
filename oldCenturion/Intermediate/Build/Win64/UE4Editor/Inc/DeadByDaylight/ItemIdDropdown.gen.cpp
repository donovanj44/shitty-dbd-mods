// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ItemIdDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemIdDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FItemIdDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FItemIdDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FItemIdDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemIdDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ItemIdDropdown"), sizeof(FItemIdDropdown), Get_Z_Construct_UScriptStruct_FItemIdDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FItemIdDropdown>()
{
	return FItemIdDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FItemIdDropdown(FItemIdDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ItemIdDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemIdDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFItemIdDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ItemIdDropdown")),new UScriptStruct::TCppStructOps<FItemIdDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFItemIdDropdown;
	struct Z_Construct_UScriptStruct_FItemIdDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ItemID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemIdDropdown_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ItemIdDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FItemIdDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemIdDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FItemIdDropdown_Statics::NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemIdDropdown" },
		{ "ModuleRelativePath", "Public/ItemIdDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FItemIdDropdown_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FItemIdDropdown, ItemID), METADATA_PARAMS(Z_Construct_UScriptStruct_FItemIdDropdown_Statics::NewProp_ItemID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemIdDropdown_Statics::NewProp_ItemID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemIdDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemIdDropdown_Statics::NewProp_ItemID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemIdDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ItemIdDropdown",
		sizeof(FItemIdDropdown),
		alignof(FItemIdDropdown),
		Z_Construct_UScriptStruct_FItemIdDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemIdDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FItemIdDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemIdDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FItemIdDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FItemIdDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ItemIdDropdown"), sizeof(FItemIdDropdown), Get_Z_Construct_UScriptStruct_FItemIdDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FItemIdDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FItemIdDropdown_Hash() { return 3971099431U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
