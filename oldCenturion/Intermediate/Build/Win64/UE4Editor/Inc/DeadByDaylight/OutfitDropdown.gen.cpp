// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OutfitDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutfitDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutfitDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterDropdown();
// End Cross Module References
class UScriptStruct* FOutfitDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOutfitDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutfitDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OutfitDropdown"), sizeof(FOutfitDropdown), Get_Z_Construct_UScriptStruct_FOutfitDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOutfitDropdown>()
{
	return FOutfitDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutfitDropdown(FOutfitDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OutfitDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OutfitDropdown")),new UScriptStruct::TCppStructOps<FOutfitDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOutfitDropdown;
	struct Z_Construct_UScriptStruct_FOutfitDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OutfitId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OutfitId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitDropdown_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OutfitDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutfitDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutfitDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutfitDropdown_Statics::NewProp_OutfitId_MetaData[] = {
		{ "Category", "OutfitDropdown" },
		{ "ModuleRelativePath", "Public/OutfitDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOutfitDropdown_Statics::NewProp_OutfitId = { "OutfitId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutfitDropdown, OutfitId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitDropdown_Statics::NewProp_OutfitId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitDropdown_Statics::NewProp_OutfitId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutfitDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutfitDropdown_Statics::NewProp_OutfitId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutfitDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FCharacterDropdown,
		&NewStructOps,
		"OutfitDropdown",
		sizeof(FOutfitDropdown),
		alignof(FOutfitDropdown),
		Z_Construct_UScriptStruct_FOutfitDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutfitDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutfitDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutfitDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutfitDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutfitDropdown"), sizeof(FOutfitDropdown), Get_Z_Construct_UScriptStruct_FOutfitDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutfitDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutfitDropdown_Hash() { return 3416224515U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
