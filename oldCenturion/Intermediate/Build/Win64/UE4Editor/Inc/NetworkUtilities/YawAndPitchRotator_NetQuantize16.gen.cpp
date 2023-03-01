// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/YawAndPitchRotator_NetQuantize16.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeYawAndPitchRotator_NetQuantize16() {}
// Cross Module References
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
// End Cross Module References
class UScriptStruct* FYawAndPitchRotator_NetQuantize16::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORKUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16, Z_Construct_UPackage__Script_NetworkUtilities(), TEXT("YawAndPitchRotator_NetQuantize16"), sizeof(FYawAndPitchRotator_NetQuantize16), Get_Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Hash());
	}
	return Singleton;
}
template<> NETWORKUTILITIES_API UScriptStruct* StaticStruct<FYawAndPitchRotator_NetQuantize16>()
{
	return FYawAndPitchRotator_NetQuantize16::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FYawAndPitchRotator_NetQuantize16(FYawAndPitchRotator_NetQuantize16::StaticStruct, TEXT("/Script/NetworkUtilities"), TEXT("YawAndPitchRotator_NetQuantize16"), false, nullptr, nullptr);
static struct FScriptStruct_NetworkUtilities_StaticRegisterNativesFYawAndPitchRotator_NetQuantize16
{
	FScriptStruct_NetworkUtilities_StaticRegisterNativesFYawAndPitchRotator_NetQuantize16()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("YawAndPitchRotator_NetQuantize16")),new UScriptStruct::TCppStructOps<FYawAndPitchRotator_NetQuantize16>);
	}
} ScriptStruct_NetworkUtilities_StaticRegisterNativesFYawAndPitchRotator_NetQuantize16;
	struct Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__value_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/YawAndPitchRotator_NetQuantize16.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FYawAndPitchRotator_NetQuantize16>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::NewProp__value_MetaData[] = {
		{ "ModuleRelativePath", "Public/YawAndPitchRotator_NetQuantize16.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FYawAndPitchRotator_NetQuantize16, _value), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::NewProp__value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::NewProp__value_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::NewProp__value,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
		nullptr,
		&NewStructOps,
		"YawAndPitchRotator_NetQuantize16",
		sizeof(FYawAndPitchRotator_NetQuantize16),
		alignof(FYawAndPitchRotator_NetQuantize16),
		Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("YawAndPitchRotator_NetQuantize16"), sizeof(FYawAndPitchRotator_NetQuantize16), Get_Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FYawAndPitchRotator_NetQuantize16_Hash() { return 909136673U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
