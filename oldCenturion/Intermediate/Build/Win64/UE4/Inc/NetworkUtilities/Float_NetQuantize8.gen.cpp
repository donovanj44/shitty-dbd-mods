// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/Float_NetQuantize8.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloat_NetQuantize8() {}
// Cross Module References
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FFloat_NetQuantize8();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
// End Cross Module References
class UScriptStruct* FFloat_NetQuantize8::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORKUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FFloat_NetQuantize8_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFloat_NetQuantize8, Z_Construct_UPackage__Script_NetworkUtilities(), TEXT("Float_NetQuantize8"), sizeof(FFloat_NetQuantize8), Get_Z_Construct_UScriptStruct_FFloat_NetQuantize8_Hash());
	}
	return Singleton;
}
template<> NETWORKUTILITIES_API UScriptStruct* StaticStruct<FFloat_NetQuantize8>()
{
	return FFloat_NetQuantize8::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFloat_NetQuantize8(FFloat_NetQuantize8::StaticStruct, TEXT("/Script/NetworkUtilities"), TEXT("Float_NetQuantize8"), false, nullptr, nullptr);
static struct FScriptStruct_NetworkUtilities_StaticRegisterNativesFFloat_NetQuantize8
{
	FScriptStruct_NetworkUtilities_StaticRegisterNativesFFloat_NetQuantize8()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("Float_NetQuantize8")),new UScriptStruct::TCppStructOps<FFloat_NetQuantize8>);
	}
} ScriptStruct_NetworkUtilities_StaticRegisterNativesFFloat_NetQuantize8;
	struct Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Float_NetQuantize8.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFloat_NetQuantize8>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::NewProp__value_MetaData[] = {
		{ "ModuleRelativePath", "Public/Float_NetQuantize8.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFloat_NetQuantize8, _value), METADATA_PARAMS(Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::NewProp__value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::NewProp__value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::NewProp__value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
		nullptr,
		&NewStructOps,
		"Float_NetQuantize8",
		sizeof(FFloat_NetQuantize8),
		alignof(FFloat_NetQuantize8),
		Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFloat_NetQuantize8()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFloat_NetQuantize8_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("Float_NetQuantize8"), sizeof(FFloat_NetQuantize8), Get_Z_Construct_UScriptStruct_FFloat_NetQuantize8_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFloat_NetQuantize8_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFloat_NetQuantize8_Hash() { return 1834875609U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
