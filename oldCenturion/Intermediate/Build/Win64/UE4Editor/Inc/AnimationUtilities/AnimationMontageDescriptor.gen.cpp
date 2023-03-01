// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AnimationUtilities/Public/AnimationMontageDescriptor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationMontageDescriptor() {}
// Cross Module References
	ANIMATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor();
	UPackage* Z_Construct_UPackage__Script_AnimationUtilities();
// End Cross Module References
class UScriptStruct* FAnimationMontageDescriptor::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ANIMATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationMontageDescriptor, Z_Construct_UPackage__Script_AnimationUtilities(), TEXT("AnimationMontageDescriptor"), sizeof(FAnimationMontageDescriptor), Get_Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Hash());
	}
	return Singleton;
}
template<> ANIMATIONUTILITIES_API UScriptStruct* StaticStruct<FAnimationMontageDescriptor>()
{
	return FAnimationMontageDescriptor::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationMontageDescriptor(FAnimationMontageDescriptor::StaticStruct, TEXT("/Script/AnimationUtilities"), TEXT("AnimationMontageDescriptor"), false, nullptr, nullptr);
static struct FScriptStruct_AnimationUtilities_StaticRegisterNativesFAnimationMontageDescriptor
{
	FScriptStruct_AnimationUtilities_StaticRegisterNativesFAnimationMontageDescriptor()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationMontageDescriptor")),new UScriptStruct::TCppStructOps<FAnimationMontageDescriptor>);
	}
} ScriptStruct_AnimationUtilities_StaticRegisterNativesFAnimationMontageDescriptor;
	struct Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageID_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MontageID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationMontageDescriptor.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationMontageDescriptor>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "AnimationMontageDescriptor" },
		{ "ModuleRelativePath", "Public/AnimationMontageDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationMontageDescriptor, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_MontageID_MetaData[] = {
		{ "Category", "AnimationMontageDescriptor" },
		{ "ModuleRelativePath", "Public/AnimationMontageDescriptor.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_MontageID = { "MontageID", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationMontageDescriptor, MontageID), METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_MontageID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_MontageID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::NewProp_MontageID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AnimationUtilities,
		nullptr,
		&NewStructOps,
		"AnimationMontageDescriptor",
		sizeof(FAnimationMontageDescriptor),
		alignof(FAnimationMontageDescriptor),
		Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationMontageDescriptor()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AnimationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationMontageDescriptor"), sizeof(FAnimationMontageDescriptor), Get_Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationMontageDescriptor_Hash() { return 1386403065U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
