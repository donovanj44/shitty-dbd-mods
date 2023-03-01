// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharmDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharmDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharmDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleDropdown();
// End Cross Module References
class UScriptStruct* FCharmDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharmDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharmDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharmDropdown"), sizeof(FCharmDropdown), Get_Z_Construct_UScriptStruct_FCharmDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharmDropdown>()
{
	return FCharmDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharmDropdown(FCharmDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharmDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharmDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharmDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharmDropdown")),new UScriptStruct::TCppStructOps<FCharmDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharmDropdown;
	struct Z_Construct_UScriptStruct_FCharmDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharmId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmDropdown_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharmDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharmDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharmDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmDropdown_Statics::NewProp_CharmId_MetaData[] = {
		{ "Category", "CharmDropdown" },
		{ "ModuleRelativePath", "Public/CharmDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharmDropdown_Statics::NewProp_CharmId = { "CharmId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharmDropdown, CharmId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmDropdown_Statics::NewProp_CharmId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmDropdown_Statics::NewProp_CharmId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharmDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmDropdown_Statics::NewProp_CharmId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharmDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FRoleDropdown,
		&NewStructOps,
		"CharmDropdown",
		sizeof(FCharmDropdown),
		alignof(FCharmDropdown),
		Z_Construct_UScriptStruct_FCharmDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharmDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharmDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharmDropdown"), sizeof(FCharmDropdown), Get_Z_Construct_UScriptStruct_FCharmDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharmDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharmDropdown_Hash() { return 3710651660U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
