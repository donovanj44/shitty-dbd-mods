// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHillbilly/Public/ChainsawEventWhileCamping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawEventWhileCamping() {}
// Cross Module References
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawEventWhileCamping();
	UPackage* Z_Construct_UPackage__Script_TheHillbilly();
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawEvent();
// End Cross Module References
class UScriptStruct* FChainsawEventWhileCamping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEHILLBILLY_API uint32 Get_Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChainsawEventWhileCamping, Z_Construct_UPackage__Script_TheHillbilly(), TEXT("ChainsawEventWhileCamping"), sizeof(FChainsawEventWhileCamping), Get_Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Hash());
	}
	return Singleton;
}
template<> THEHILLBILLY_API UScriptStruct* StaticStruct<FChainsawEventWhileCamping>()
{
	return FChainsawEventWhileCamping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChainsawEventWhileCamping(FChainsawEventWhileCamping::StaticStruct, TEXT("/Script/TheHillbilly"), TEXT("ChainsawEventWhileCamping"), false, nullptr, nullptr);
static struct FScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawEventWhileCamping
{
	FScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawEventWhileCamping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChainsawEventWhileCamping")),new UScriptStruct::TCppStructOps<FChainsawEventWhileCamping>);
	}
} ScriptStruct_TheHillbilly_StaticRegisterNativesFChainsawEventWhileCamping;
	struct Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceFromClosestHook_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceFromClosestHook;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChainsawEventWhileCamping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChainsawEventWhileCamping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::NewProp_DistanceFromClosestHook_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainsawEventWhileCamping.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::NewProp_DistanceFromClosestHook = { "DistanceFromClosestHook", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChainsawEventWhileCamping, DistanceFromClosestHook), METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::NewProp_DistanceFromClosestHook_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::NewProp_DistanceFromClosestHook_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::NewProp_DistanceFromClosestHook,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheHillbilly,
		Z_Construct_UScriptStruct_FChainsawEvent,
		&NewStructOps,
		"ChainsawEventWhileCamping",
		sizeof(FChainsawEventWhileCamping),
		alignof(FChainsawEventWhileCamping),
		Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChainsawEventWhileCamping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheHillbilly();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChainsawEventWhileCamping"), sizeof(FChainsawEventWhileCamping), Get_Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChainsawEventWhileCamping_Hash() { return 2713888379U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
