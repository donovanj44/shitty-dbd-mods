// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AnimationMapping.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAnimationMapping() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAnimationMapping();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_UAnimMontage_NoRegister();
// End Cross Module References
class UScriptStruct* FAnimationMapping::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAnimationMapping_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAnimationMapping, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AnimationMapping"), sizeof(FAnimationMapping), Get_Z_Construct_UScriptStruct_FAnimationMapping_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAnimationMapping>()
{
	return FAnimationMapping::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAnimationMapping(FAnimationMapping::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AnimationMapping"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAnimationMapping
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAnimationMapping()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AnimationMapping")),new UScriptStruct::TCppStructOps<FAnimationMapping>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAnimationMapping;
	struct Z_Construct_UScriptStruct_FAnimationMapping_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__loadAttempted_MetaData[];
#endif
		static void NewProp__loadAttempted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__loadAttempted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__montage_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__montage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Tags;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Tags_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MontageAsset_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_MontageAsset;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMapping_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AnimationMapping.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAnimationMapping>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__loadAttempted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationMapping.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__loadAttempted_SetBit(void* Obj)
	{
		((FAnimationMapping*)Obj)->_loadAttempted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__loadAttempted = { "_loadAttempted", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAnimationMapping), &Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__loadAttempted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__loadAttempted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__loadAttempted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__montage_MetaData[] = {
		{ "ModuleRelativePath", "Public/AnimationMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__montage = { "_montage", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationMapping, _montage), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__montage_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__montage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_Tags_MetaData[] = {
		{ "Category", "AnimationMapping" },
		{ "ModuleRelativePath", "Public/AnimationMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationMapping, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_Tags_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_Tags_MetaData)) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_MontageAsset_MetaData[] = {
		{ "Category", "AnimationMapping" },
		{ "ModuleRelativePath", "Public/AnimationMapping.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_MontageAsset = { "MontageAsset", nullptr, (EPropertyFlags)0x0024080000000005, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAnimationMapping, MontageAsset), Z_Construct_UClass_UAnimMontage_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_MontageAsset_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_MontageAsset_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAnimationMapping_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__loadAttempted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp__montage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_Tags,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_Tags_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAnimationMapping_Statics::NewProp_MontageAsset,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAnimationMapping_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"AnimationMapping",
		sizeof(FAnimationMapping),
		alignof(FAnimationMapping),
		Z_Construct_UScriptStruct_FAnimationMapping_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMapping_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAnimationMapping_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAnimationMapping_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAnimationMapping()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAnimationMapping_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AnimationMapping"), sizeof(FAnimationMapping), Get_Z_Construct_UScriptStruct_FAnimationMapping_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAnimationMapping_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAnimationMapping_Hash() { return 3738858261U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
