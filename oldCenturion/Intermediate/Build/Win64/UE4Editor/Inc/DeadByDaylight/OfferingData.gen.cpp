// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OfferingData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOfferingData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOfferingData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSelectedOffering();
// End Cross Module References
class UScriptStruct* FOfferingData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOfferingData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOfferingData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OfferingData"), sizeof(FOfferingData), Get_Z_Construct_UScriptStruct_FOfferingData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOfferingData>()
{
	return FOfferingData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOfferingData(FOfferingData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OfferingData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OfferingData")),new UScriptStruct::TCppStructOps<FOfferingData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOfferingData;
	struct Z_Construct_UScriptStruct_FOfferingData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Offerings_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Offerings;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Offerings_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OfferingReady_MetaData[];
#endif
		static void NewProp_OfferingReady_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OfferingReady;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OfferingData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOfferingData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOfferingData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_Offerings_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_Offerings = { "Offerings", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOfferingData, Offerings), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_Offerings_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_Offerings_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_Offerings_Inner = { "Offerings", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FSelectedOffering, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_OfferingReady_MetaData[] = {
		{ "ModuleRelativePath", "Public/OfferingData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_OfferingReady_SetBit(void* Obj)
	{
		((FOfferingData*)Obj)->OfferingReady = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_OfferingReady = { "OfferingReady", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FOfferingData), &Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_OfferingReady_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_OfferingReady_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_OfferingReady_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOfferingData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_Offerings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_Offerings_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOfferingData_Statics::NewProp_OfferingReady,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOfferingData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"OfferingData",
		sizeof(FOfferingData),
		alignof(FOfferingData),
		Z_Construct_UScriptStruct_FOfferingData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOfferingData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOfferingData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOfferingData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOfferingData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OfferingData"), sizeof(FOfferingData), Get_Z_Construct_UScriptStruct_FOfferingData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOfferingData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOfferingData_Hash() { return 3070126405U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
