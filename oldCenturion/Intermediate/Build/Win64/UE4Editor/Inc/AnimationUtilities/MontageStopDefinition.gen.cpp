// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/MontageStopDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMontageStopDefinition() {}
// Cross Module References
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMontageStopDefinition();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
// End Cross Module References
class UScriptStruct* FMontageStopDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FMontageStopDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontageStopDefinition, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("MontageStopDefinition"), sizeof(FMontageStopDefinition), Get_Z_Construct_UScriptStruct_FMontageStopDefinition_Hash());
	}
	return Singleton;
}
template<> ANIMATIONUTILITIES_API UScriptStruct* StaticStruct<FMontageStopDefinition>()
{
	return FMontageStopDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMontageStopDefinition(FMontageStopDefinition::StaticStruct, TEXT("/Script/AnimationUtilities"), TEXT("MontageStopDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationUtilities_StaticRegisterNativesFMontageStopDefinition
{
	FScriptStruct_AnimationUtilities_StaticRegisterNativesFMontageStopDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MontageStopDefinition")),new UScriptStruct::TCppStructOps<FMontageStopDefinition>);
	}
} ScriptStruct_AnimationUtilities_StaticRegisterNativesFMontageStopDefinition;
	struct Z_Construct_UScriptStruct_FMontageStopDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BlendOutTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BlendOutTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Descriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MontageStopDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontageStopDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_BlendOutTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontageStopDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_BlendOutTime = { "BlendOutTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontageStopDefinition, BlendOutTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_BlendOutTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_BlendOutTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_Descriptor_MetaData[] = {
		{ "ModuleRelativePath", "Public/MontageStopDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontageStopDefinition, Descriptor), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_Descriptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_BlendOutTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::NewProp_Descriptor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
		nullptr,
		&NewStructOps,
		"MontageStopDefinition",
		sizeof(FMontageStopDefinition),
		alignof(FMontageStopDefinition),
		Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMontageStopDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMontageStopDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MontageStopDefinition"), sizeof(FMontageStopDefinition), Get_Z_Construct_UScriptStruct_FMontageStopDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMontageStopDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMontageStopDefinition_Hash() { return 1319643529U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
