// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPerPlatformInt.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPerPlatformInt() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDPerPlatformInt();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FPerPlatformInt();
// End Cross Module References
class UScriptStruct* FDBDPerPlatformInt::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDPerPlatformInt_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDPerPlatformInt, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDPerPlatformInt"), sizeof(FDBDPerPlatformInt), Get_Z_Construct_UScriptStruct_FDBDPerPlatformInt_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDPerPlatformInt>()
{
	return FDBDPerPlatformInt::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDPerPlatformInt(FDBDPerPlatformInt::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDPerPlatformInt"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDPerPlatformInt
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDPerPlatformInt()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDPerPlatformInt")),new UScriptStruct::TCppStructOps<FDBDPerPlatformInt>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDPerPlatformInt;
	struct Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDPerPlatformInt.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDPerPlatformInt>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "DBDPerPlatformInt" },
		{ "ModuleRelativePath", "Public/DBDPerPlatformInt.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDPerPlatformInt, Value), Z_Construct_UScriptStruct_FPerPlatformInt, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::NewProp_Value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::NewProp_Value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDPerPlatformInt",
		sizeof(FDBDPerPlatformInt),
		alignof(FDBDPerPlatformInt),
		Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDPerPlatformInt()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDPerPlatformInt_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDPerPlatformInt"), sizeof(FDBDPerPlatformInt), Get_Z_Construct_UScriptStruct_FDBDPerPlatformInt_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDPerPlatformInt_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDPerPlatformInt_Hash() { return 1549881093U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
