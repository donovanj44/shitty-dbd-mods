// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/MontagePlaybackDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMontagePlaybackDefinition() {}
// Cross Module References
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FMontagePlaybackDefinition();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
// End Cross Module References
class UScriptStruct* FMontagePlaybackDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMontagePlaybackDefinition, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("MontagePlaybackDefinition"), sizeof(FMontagePlaybackDefinition), Get_Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Hash());
	}
	return Singleton;
}
template<> ANIMATIONUTILITIES_API UScriptStruct* StaticStruct<FMontagePlaybackDefinition>()
{
	return FMontagePlaybackDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMontagePlaybackDefinition(FMontagePlaybackDefinition::StaticStruct, TEXT("/Script/AnimationUtilities"), TEXT("MontagePlaybackDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationUtilities_StaticRegisterNativesFMontagePlaybackDefinition
{
	FScriptStruct_AnimationUtilities_StaticRegisterNativesFMontagePlaybackDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MontagePlaybackDefinition")),new UScriptStruct::TCppStructOps<FMontagePlaybackDefinition>);
	}
} ScriptStruct_AnimationUtilities_StaticRegisterNativesFMontagePlaybackDefinition;
	struct Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Follower_MetaData[];
#endif
		static void NewProp_Follower_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Follower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Descriptor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Descriptor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MontagePlaybackDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMontagePlaybackDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Follower_MetaData[] = {
		{ "Category", "MontagePlaybackDefinition" },
		{ "ModuleRelativePath", "Public/MontagePlaybackDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Follower_SetBit(void* Obj)
	{
		((FMontagePlaybackDefinition*)Obj)->Follower = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Follower = { "Follower", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMontagePlaybackDefinition), &Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Follower_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Follower_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Follower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "MontagePlaybackDefinition" },
		{ "ModuleRelativePath", "Public/MontagePlaybackDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontagePlaybackDefinition, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Descriptor_MetaData[] = {
		{ "Category", "MontagePlaybackDefinition" },
		{ "ModuleRelativePath", "Public/MontagePlaybackDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Descriptor = { "Descriptor", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMontagePlaybackDefinition, Descriptor), Z_Construct_UScriptStruct_FAnimationMontageDescriptor, METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Descriptor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Descriptor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Follower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_PlayRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::NewProp_Descriptor,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
		nullptr,
		&NewStructOps,
		"MontagePlaybackDefinition",
		sizeof(FMontagePlaybackDefinition),
		alignof(FMontagePlaybackDefinition),
		Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMontagePlaybackDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MontagePlaybackDefinition"), sizeof(FMontagePlaybackDefinition), Get_Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMontagePlaybackDefinition_Hash() { return 1709619614U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
