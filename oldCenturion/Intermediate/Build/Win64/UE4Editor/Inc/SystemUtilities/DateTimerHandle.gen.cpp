// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SystemUtilities/Public/DateTimerHandle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDateTimerHandle() {}
// Cross Module References
	SYSTEMUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDateTimerHandle();
	UPackage* Z_Construct_UPackage__Script_SystemUtilities();
// End Cross Module References
class UScriptStruct* FDateTimerHandle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SYSTEMUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDateTimerHandle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDateTimerHandle, Z_Construct_UPackage__Script_SystemUtilities(), TEXT("DateTimerHandle"), sizeof(FDateTimerHandle), Get_Z_Construct_UScriptStruct_FDateTimerHandle_Hash());
	}
	return Singleton;
}
template<> SYSTEMUTILITIES_API UScriptStruct* StaticStruct<FDateTimerHandle>()
{
	return FDateTimerHandle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDateTimerHandle(FDateTimerHandle::StaticStruct, TEXT("/Script/SystemUtilities"), TEXT("DateTimerHandle"), false, nullptr, nullptr);
static struct FScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimerHandle
{
	FScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimerHandle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DateTimerHandle")),new UScriptStruct::TCppStructOps<FDateTimerHandle>);
	}
} ScriptStruct_SystemUtilities_StaticRegisterNativesFDateTimerHandle;
	struct Z_Construct_UScriptStruct_FDateTimerHandle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDateTimerHandle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DateTimerHandle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDateTimerHandle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDateTimerHandle>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDateTimerHandle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SystemUtilities,
		nullptr,
		&NewStructOps,
		"DateTimerHandle",
		sizeof(FDateTimerHandle),
		alignof(FDateTimerHandle),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDateTimerHandle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDateTimerHandle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDateTimerHandle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDateTimerHandle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SystemUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DateTimerHandle"), sizeof(FDateTimerHandle), Get_Z_Construct_UScriptStruct_FDateTimerHandle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDateTimerHandle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDateTimerHandle_Hash() { return 1507150368U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
