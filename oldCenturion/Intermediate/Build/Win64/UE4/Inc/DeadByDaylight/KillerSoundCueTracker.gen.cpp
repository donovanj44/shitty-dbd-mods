// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerSoundCueTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerSoundCueTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FKillerSoundCueTracker();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FKillerSoundCueTracker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FKillerSoundCueTracker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKillerSoundCueTracker, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("KillerSoundCueTracker"), sizeof(FKillerSoundCueTracker), Get_Z_Construct_UScriptStruct_FKillerSoundCueTracker_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FKillerSoundCueTracker>()
{
	return FKillerSoundCueTracker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKillerSoundCueTracker(FKillerSoundCueTracker::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("KillerSoundCueTracker"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerSoundCueTracker
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerSoundCueTracker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KillerSoundCueTracker")),new UScriptStruct::TCppStructOps<FKillerSoundCueTracker>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerSoundCueTracker;
	struct Z_Construct_UScriptStruct_FKillerSoundCueTracker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerSoundCueTracker_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerSoundCueTracker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKillerSoundCueTracker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKillerSoundCueTracker>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKillerSoundCueTracker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"KillerSoundCueTracker",
		sizeof(FKillerSoundCueTracker),
		alignof(FKillerSoundCueTracker),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerSoundCueTracker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerSoundCueTracker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKillerSoundCueTracker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKillerSoundCueTracker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KillerSoundCueTracker"), sizeof(FKillerSoundCueTracker), Get_Z_Construct_UScriptStruct_FKillerSoundCueTracker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKillerSoundCueTracker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKillerSoundCueTracker_Hash() { return 2567448581U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
