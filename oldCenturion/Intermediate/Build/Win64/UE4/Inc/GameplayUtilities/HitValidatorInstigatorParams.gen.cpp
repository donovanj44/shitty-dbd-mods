// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/HitValidatorInstigatorParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitValidatorInstigatorParams() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FHitValidatorInstigatorParams();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FHitValidatorInstigatorParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitValidatorInstigatorParams, Z_Construct_UPackage__Script_GameplayUtilities(), TEXT("HitValidatorInstigatorParams"), sizeof(FHitValidatorInstigatorParams), Get_Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYUTILITIES_API UScriptStruct* StaticStruct<FHitValidatorInstigatorParams>()
{
	return FHitValidatorInstigatorParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitValidatorInstigatorParams(FHitValidatorInstigatorParams::StaticStruct, TEXT("/Script/GameplayUtilities"), TEXT("HitValidatorInstigatorParams"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidatorInstigatorParams
{
	FScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidatorInstigatorParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitValidatorInstigatorParams")),new UScriptStruct::TCppStructOps<FHitValidatorInstigatorParams>);
	}
} ScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidatorInstigatorParams;
	struct Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitPrimitive_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitPrimitive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instigator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instigator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HitValidatorInstigatorParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitValidatorInstigatorParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_HitPrimitive_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitValidatorInstigatorParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_HitPrimitive = { "HitPrimitive", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidatorInstigatorParams, HitPrimitive), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_HitPrimitive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_HitPrimitive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_Instigator_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidatorInstigatorParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_Instigator = { "Instigator", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidatorInstigatorParams, Instigator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_Instigator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_Instigator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_HitPrimitive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::NewProp_Instigator,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
		nullptr,
		&NewStructOps,
		"HitValidatorInstigatorParams",
		sizeof(FHitValidatorInstigatorParams),
		alignof(FHitValidatorInstigatorParams),
		Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitValidatorInstigatorParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitValidatorInstigatorParams"), sizeof(FHitValidatorInstigatorParams), Get_Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitValidatorInstigatorParams_Hash() { return 2768887995U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
