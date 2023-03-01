// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CamperDamageResult.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCamperDamageResult() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCamperDamageResult();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierContainer_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FCamperDamageResult::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCamperDamageResult_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCamperDamageResult, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CamperDamageResult"), sizeof(FCamperDamageResult), Get_Z_Construct_UScriptStruct_FCamperDamageResult_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCamperDamageResult>()
{
	return FCamperDamageResult::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCamperDamageResult(FCamperDamageResult::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CamperDamageResult"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperDamageResult
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperDamageResult()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CamperDamageResult")),new UScriptStruct::TCppStructOps<FCamperDamageResult>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCamperDamageResult;
	struct Z_Construct_UScriptStruct_FCamperDamageResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KOPreventedSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KOPreventedSource;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageSource_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageSource;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperDamageResult_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CamperDamageResult.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCamperDamageResult>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_KOPreventedSource_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CamperDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_KOPreventedSource = { "KOPreventedSource", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperDamageResult, KOPreventedSource), Z_Construct_UClass_UGameplayModifierContainer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_KOPreventedSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_KOPreventedSource_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_DamageSource_MetaData[] = {
		{ "ModuleRelativePath", "Public/CamperDamageResult.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_DamageSource = { "DamageSource", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCamperDamageResult, DamageSource), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_DamageSource_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_DamageSource_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCamperDamageResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_KOPreventedSource,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCamperDamageResult_Statics::NewProp_DamageSource,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCamperDamageResult_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CamperDamageResult",
		sizeof(FCamperDamageResult),
		alignof(FCamperDamageResult),
		Z_Construct_UScriptStruct_FCamperDamageResult_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperDamageResult_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCamperDamageResult_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCamperDamageResult_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCamperDamageResult()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCamperDamageResult_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CamperDamageResult"), sizeof(FCamperDamageResult), Get_Z_Construct_UScriptStruct_FCamperDamageResult_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCamperDamageResult_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCamperDamageResult_Hash() { return 83487875U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
