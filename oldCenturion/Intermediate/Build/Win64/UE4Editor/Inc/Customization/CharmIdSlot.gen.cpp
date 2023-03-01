// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Customization/Public/CharmIdSlot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharmIdSlot() {}
// Cross Module References
	CUSTOMIZATION_API UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot();
	UPackage* Z_Construct_UPackage__Script_Customization();
// End Cross Module References
class UScriptStruct* FCharmIdSlot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern CUSTOMIZATION_API uint32 Get_Z_Construct_UScriptStruct_FCharmIdSlot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharmIdSlot, Z_Construct_UPackage__Script_Customization(), TEXT("CharmIdSlot"), sizeof(FCharmIdSlot), Get_Z_Construct_UScriptStruct_FCharmIdSlot_Hash());
	}
	return Singleton;
}
template<> CUSTOMIZATION_API UScriptStruct* StaticStruct<FCharmIdSlot>()
{
	return FCharmIdSlot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharmIdSlot(FCharmIdSlot::StaticStruct, TEXT("/Script/Customization"), TEXT("CharmIdSlot"), false, nullptr, nullptr);
static struct FScriptStruct_Customization_StaticRegisterNativesFCharmIdSlot
{
	FScriptStruct_Customization_StaticRegisterNativesFCharmIdSlot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharmIdSlot")),new UScriptStruct::TCppStructOps<FCharmIdSlot>);
	}
} ScriptStruct_Customization_StaticRegisterNativesFCharmIdSlot;
	struct Z_Construct_UScriptStruct_FCharmIdSlot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_CharmId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FInt8PropertyParams NewProp_SlotIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmIdSlot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharmIdSlot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharmIdSlot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_CharmId_MetaData[] = {
		{ "Category", "CharmIdSlot" },
		{ "ModuleRelativePath", "Public/CharmIdSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_CharmId = { "CharmId", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharmIdSlot, CharmId), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_CharmId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_CharmId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_SlotIndex_MetaData[] = {
		{ "Category", "CharmIdSlot" },
		{ "ModuleRelativePath", "Public/CharmIdSlot.h" },
	};
#endif
	const UE4CodeGen_Private::FInt8PropertyParams Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int8, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharmIdSlot, SlotIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_SlotIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_SlotIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharmIdSlot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_CharmId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharmIdSlot_Statics::NewProp_SlotIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharmIdSlot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Customization,
		nullptr,
		&NewStructOps,
		"CharmIdSlot",
		sizeof(FCharmIdSlot),
		alignof(FCharmIdSlot),
		Z_Construct_UScriptStruct_FCharmIdSlot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmIdSlot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharmIdSlot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharmIdSlot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharmIdSlot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharmIdSlot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Customization();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharmIdSlot"), sizeof(FCharmIdSlot), Get_Z_Construct_UScriptStruct_FCharmIdSlot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharmIdSlot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharmIdSlot_Hash() { return 4249364781U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
