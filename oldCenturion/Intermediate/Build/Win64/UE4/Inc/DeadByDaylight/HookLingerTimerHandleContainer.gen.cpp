// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/HookLingerTimerHandleContainer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHookLingerTimerHandleContainer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AMeatHook_NoRegister();
// End Cross Module References
class UScriptStruct* FHookLingerTimerHandleContainer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("HookLingerTimerHandleContainer"), sizeof(FHookLingerTimerHandleContainer), Get_Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FHookLingerTimerHandleContainer>()
{
	return FHookLingerTimerHandleContainer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHookLingerTimerHandleContainer(FHookLingerTimerHandleContainer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("HookLingerTimerHandleContainer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFHookLingerTimerHandleContainer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFHookLingerTimerHandleContainer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HookLingerTimerHandleContainer")),new UScriptStruct::TCppStructOps<FHookLingerTimerHandleContainer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFHookLingerTimerHandleContainer;
	struct Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hook_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Hook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/HookLingerTimerHandleContainer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHookLingerTimerHandleContainer>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::NewProp_Hook_MetaData[] = {
		{ "ModuleRelativePath", "Public/HookLingerTimerHandleContainer.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::NewProp_Hook = { "Hook", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHookLingerTimerHandleContainer, Hook), Z_Construct_UClass_AMeatHook_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::NewProp_Hook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::NewProp_Hook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::NewProp_Hook,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"HookLingerTimerHandleContainer",
		sizeof(FHookLingerTimerHandleContainer),
		alignof(FHookLingerTimerHandleContainer),
		Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HookLingerTimerHandleContainer"), sizeof(FHookLingerTimerHandleContainer), Get_Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHookLingerTimerHandleContainer_Hash() { return 26966921U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
