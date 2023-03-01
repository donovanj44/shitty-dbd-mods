// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/HitValidatorTargetParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitValidatorTargetParams() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FHitValidatorTargetParams();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FHitValidatorTargetParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FHitValidatorTargetParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitValidatorTargetParams, Z_Construct_UPackage__Script_GameplayUtilities(), TEXT("HitValidatorTargetParams"), sizeof(FHitValidatorTargetParams), Get_Z_Construct_UScriptStruct_FHitValidatorTargetParams_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYUTILITIES_API UScriptStruct* StaticStruct<FHitValidatorTargetParams>()
{
	return FHitValidatorTargetParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitValidatorTargetParams(FHitValidatorTargetParams::StaticStruct, TEXT("/Script/GameplayUtilities"), TEXT("HitValidatorTargetParams"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidatorTargetParams
{
	FScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidatorTargetParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitValidatorTargetParams")),new UScriptStruct::TCppStructOps<FHitValidatorTargetParams>);
	}
} ScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidatorTargetParams;
	struct Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLocationTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HittableCapsule_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HittableCapsule;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HitValidatorTargetParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitValidatorTargetParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_TargetLocationTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidatorTargetParams.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_TargetLocationTimestamp = { "TargetLocationTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidatorTargetParams, TargetLocationTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_TargetLocationTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_TargetLocationTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_HittableCapsule_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/HitValidatorTargetParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_HittableCapsule = { "HittableCapsule", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidatorTargetParams, HittableCapsule), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_HittableCapsule_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_HittableCapsule_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_Target_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidatorTargetParams.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidatorTargetParams, Target), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_Target_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_Target_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_TargetLocationTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_HittableCapsule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::NewProp_Target,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
		nullptr,
		&NewStructOps,
		"HitValidatorTargetParams",
		sizeof(FHitValidatorTargetParams),
		alignof(FHitValidatorTargetParams),
		Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitValidatorTargetParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitValidatorTargetParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitValidatorTargetParams"), sizeof(FHitValidatorTargetParams), Get_Z_Construct_UScriptStruct_FHitValidatorTargetParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitValidatorTargetParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitValidatorTargetParams_Hash() { return 4139733401U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
