// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ReflectionCaptureTwoStates.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeReflectionCaptureTwoStates() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FReflectionCaptureTwoStates();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FComponentReference();
// End Cross Module References
class UScriptStruct* FReflectionCaptureTwoStates::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FReflectionCaptureTwoStates, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ReflectionCaptureTwoStates"), sizeof(FReflectionCaptureTwoStates), Get_Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FReflectionCaptureTwoStates>()
{
	return FReflectionCaptureTwoStates::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FReflectionCaptureTwoStates(FReflectionCaptureTwoStates::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ReflectionCaptureTwoStates"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFReflectionCaptureTwoStates
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFReflectionCaptureTwoStates()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ReflectionCaptureTwoStates")),new UScriptStruct::TCppStructOps<FReflectionCaptureTwoStates>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFReflectionCaptureTwoStates;
	struct Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ComponentReference_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ComponentReference;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ReflectionCaptureTwoStates.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FReflectionCaptureTwoStates>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::NewProp_ComponentReference_MetaData[] = {
		{ "ModuleRelativePath", "Public/ReflectionCaptureTwoStates.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::NewProp_ComponentReference = { "ComponentReference", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FReflectionCaptureTwoStates, ComponentReference), Z_Construct_UScriptStruct_FComponentReference, METADATA_PARAMS(Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::NewProp_ComponentReference_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::NewProp_ComponentReference_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::NewProp_ComponentReference,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ReflectionCaptureTwoStates",
		sizeof(FReflectionCaptureTwoStates),
		alignof(FReflectionCaptureTwoStates),
		Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FReflectionCaptureTwoStates()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ReflectionCaptureTwoStates"), sizeof(FReflectionCaptureTwoStates), Get_Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FReflectionCaptureTwoStates_Hash() { return 2865656103U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
