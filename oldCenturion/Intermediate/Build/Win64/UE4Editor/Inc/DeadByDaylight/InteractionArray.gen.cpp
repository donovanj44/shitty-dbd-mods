// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractionArray.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionArray() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionArray();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
class UScriptStruct* FInteractionArray::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInteractionArray_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionArray, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InteractionArray"), sizeof(FInteractionArray), Get_Z_Construct_UScriptStruct_FInteractionArray_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInteractionArray>()
{
	return FInteractionArray::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionArray(FInteractionArray::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InteractionArray"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionArray
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionArray()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionArray")),new UScriptStruct::TCppStructOps<FInteractionArray>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionArray;
	struct Z_Construct_UScriptStruct_FInteractionArray_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interactions_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__interactions;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__interactions_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionArray_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractionArray.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionArray_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionArray>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionArray_Statics::NewProp__interactions_MetaData[] = {
		{ "ModuleRelativePath", "Public/InteractionArray.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInteractionArray_Statics::NewProp__interactions = { "_interactions", nullptr, (EPropertyFlags)0x0044008000002008, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionArray, _interactions), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionArray_Statics::NewProp__interactions_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionArray_Statics::NewProp__interactions_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FInteractionArray_Statics::NewProp__interactions_Inner = { "_interactions", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionArray_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionArray_Statics::NewProp__interactions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionArray_Statics::NewProp__interactions_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionArray_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"InteractionArray",
		sizeof(FInteractionArray),
		alignof(FInteractionArray),
		Z_Construct_UScriptStruct_FInteractionArray_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionArray_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionArray_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionArray_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionArray()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionArray_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionArray"), sizeof(FInteractionArray), Get_Z_Construct_UScriptStruct_FInteractionArray_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionArray_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionArray_Hash() { return 2935483082U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
