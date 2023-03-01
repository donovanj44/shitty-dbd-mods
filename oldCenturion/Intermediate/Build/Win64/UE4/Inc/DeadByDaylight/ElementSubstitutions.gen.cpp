// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ElementSubstitutions.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeElementSubstitutions() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FElementSubstitutions();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FElementSubstitutions::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FElementSubstitutions_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FElementSubstitutions, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ElementSubstitutions"), sizeof(FElementSubstitutions), Get_Z_Construct_UScriptStruct_FElementSubstitutions_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FElementSubstitutions>()
{
	return FElementSubstitutions::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FElementSubstitutions(FElementSubstitutions::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ElementSubstitutions"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFElementSubstitutions
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFElementSubstitutions()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ElementSubstitutions")),new UScriptStruct::TCppStructOps<FElementSubstitutions>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFElementSubstitutions;
	struct Z_Construct_UScriptStruct_FElementSubstitutions_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FElementSubstitutions_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ElementSubstitutions.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FElementSubstitutions_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FElementSubstitutions>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FElementSubstitutions_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ElementSubstitutions",
		sizeof(FElementSubstitutions),
		alignof(FElementSubstitutions),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FElementSubstitutions_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FElementSubstitutions_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FElementSubstitutions()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FElementSubstitutions_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ElementSubstitutions"), sizeof(FElementSubstitutions), Get_Z_Construct_UScriptStruct_FElementSubstitutions_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FElementSubstitutions_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FElementSubstitutions_Hash() { return 79524945U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
