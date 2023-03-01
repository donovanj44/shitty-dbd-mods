// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SelectedOffering.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSelectedOffering() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSelectedOffering();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSelectedOffering::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSelectedOffering_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSelectedOffering, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SelectedOffering"), sizeof(FSelectedOffering), Get_Z_Construct_UScriptStruct_FSelectedOffering_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSelectedOffering>()
{
	return FSelectedOffering::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSelectedOffering(FSelectedOffering::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SelectedOffering"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSelectedOffering
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSelectedOffering()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SelectedOffering")),new UScriptStruct::TCppStructOps<FSelectedOffering>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSelectedOffering;
	struct Z_Construct_UScriptStruct_FSelectedOffering_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_OfferingName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ownerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ownerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedOffering_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SelectedOffering.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSelectedOffering>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_OfferingName_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectedOffering.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_OfferingName = { "OfferingName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectedOffering, OfferingName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_OfferingName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_OfferingName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_ownerId_MetaData[] = {
		{ "ModuleRelativePath", "Public/SelectedOffering.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_ownerId = { "ownerId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSelectedOffering, ownerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_ownerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_ownerId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSelectedOffering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_OfferingName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSelectedOffering_Statics::NewProp_ownerId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSelectedOffering_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SelectedOffering",
		sizeof(FSelectedOffering),
		alignof(FSelectedOffering),
		Z_Construct_UScriptStruct_FSelectedOffering_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedOffering_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSelectedOffering_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSelectedOffering_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSelectedOffering()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSelectedOffering_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SelectedOffering"), sizeof(FSelectedOffering), Get_Z_Construct_UScriptStruct_FSelectedOffering_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSelectedOffering_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSelectedOffering_Hash() { return 2540049103U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
