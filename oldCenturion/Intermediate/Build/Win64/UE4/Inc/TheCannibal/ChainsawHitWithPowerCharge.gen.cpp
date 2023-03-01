// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/ChainsawHitWithPowerCharge.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainsawHitWithPowerCharge() {}
// Cross Module References
	THECANNIBAL_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
	THEHILLBILLY_API UScriptStruct* Z_Construct_UScriptStruct_FChainsawEvent();
// End Cross Module References
class UScriptStruct* FChainsawHitWithPowerCharge::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THECANNIBAL_API uint32 Get_Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge, Z_Construct_UPackage__Script_TheCannibal(), TEXT("ChainsawHitWithPowerCharge"), sizeof(FChainsawHitWithPowerCharge), Get_Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Hash());
	}
	return Singleton;
}
template<> THECANNIBAL_API UScriptStruct* StaticStruct<FChainsawHitWithPowerCharge>()
{
	return FChainsawHitWithPowerCharge::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChainsawHitWithPowerCharge(FChainsawHitWithPowerCharge::StaticStruct, TEXT("/Script/TheCannibal"), TEXT("ChainsawHitWithPowerCharge"), false, nullptr, nullptr);
static struct FScriptStruct_TheCannibal_StaticRegisterNativesFChainsawHitWithPowerCharge
{
	FScriptStruct_TheCannibal_StaticRegisterNativesFChainsawHitWithPowerCharge()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChainsawHitWithPowerCharge")),new UScriptStruct::TCppStructOps<FChainsawHitWithPowerCharge>);
	}
} ScriptStruct_TheCannibal_StaticRegisterNativesFChainsawHitWithPowerCharge;
	struct Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NumPowerCharges_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_NumPowerCharges;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChainsawHitWithPowerCharge.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChainsawHitWithPowerCharge>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::NewProp_NumPowerCharges_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainsawHitWithPowerCharge.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::NewProp_NumPowerCharges = { "NumPowerCharges", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChainsawHitWithPowerCharge, NumPowerCharges), METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::NewProp_NumPowerCharges_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::NewProp_NumPowerCharges_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::NewProp_NumPowerCharges,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
		Z_Construct_UScriptStruct_FChainsawEvent,
		&NewStructOps,
		"ChainsawHitWithPowerCharge",
		sizeof(FChainsawHitWithPowerCharge),
		alignof(FChainsawHitWithPowerCharge),
		Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheCannibal();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChainsawHitWithPowerCharge"), sizeof(FChainsawHitWithPowerCharge), Get_Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChainsawHitWithPowerCharge_Hash() { return 3351147879U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
