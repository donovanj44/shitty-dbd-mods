// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/TypeFoliageToAutomateDensity.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTypeFoliageToAutomateDensity() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EDetailMode();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECanBeCharacterBase();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
// End Cross Module References
class UScriptStruct* FTypeFoliageToAutomateDensity::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("TypeFoliageToAutomateDensity"), sizeof(FTypeFoliageToAutomateDensity), Get_Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FTypeFoliageToAutomateDensity>()
{
	return FTypeFoliageToAutomateDensity::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTypeFoliageToAutomateDensity(FTypeFoliageToAutomateDensity::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("TypeFoliageToAutomateDensity"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFTypeFoliageToAutomateDensity
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFTypeFoliageToAutomateDensity()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TypeFoliageToAutomateDensity")),new UScriptStruct::TCppStructOps<FTypeFoliageToAutomateDensity>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFTypeFoliageToAutomateDensity;
	struct Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumFoliageRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumFoliageRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DetailMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DetailMode;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCanCharacterStepOn_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_bCanCharacterStepOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReceiveDecals_MetaData[];
#endif
		static void NewProp_bReceiveDecals_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReceiveDecals;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bGenerateOverlaps_MetaData[];
#endif
		static void NewProp_bGenerateOverlaps_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bGenerateOverlaps;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReplacementMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_ReplacementMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SourceMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SourceMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TypeFoliageToAutomateDensity.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTypeFoliageToAutomateDensity>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_MinimumFoliageRadius_MetaData[] = {
		{ "Category", "TypeFoliageToAutomateDensity" },
		{ "ModuleRelativePath", "Public/TypeFoliageToAutomateDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_MinimumFoliageRadius = { "MinimumFoliageRadius", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTypeFoliageToAutomateDensity, MinimumFoliageRadius), METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_MinimumFoliageRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_MinimumFoliageRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_DetailMode_MetaData[] = {
		{ "Category", "TypeFoliageToAutomateDensity" },
		{ "ModuleRelativePath", "Public/TypeFoliageToAutomateDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_DetailMode = { "DetailMode", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTypeFoliageToAutomateDensity, DetailMode), Z_Construct_UEnum_Engine_EDetailMode, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_DetailMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_DetailMode_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bCanCharacterStepOn_MetaData[] = {
		{ "Category", "TypeFoliageToAutomateDensity" },
		{ "ModuleRelativePath", "Public/TypeFoliageToAutomateDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bCanCharacterStepOn = { "bCanCharacterStepOn", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTypeFoliageToAutomateDensity, bCanCharacterStepOn), Z_Construct_UEnum_Engine_ECanBeCharacterBase, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bCanCharacterStepOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bCanCharacterStepOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bReceiveDecals_MetaData[] = {
		{ "Category", "TypeFoliageToAutomateDensity" },
		{ "ModuleRelativePath", "Public/TypeFoliageToAutomateDensity.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bReceiveDecals_SetBit(void* Obj)
	{
		((FTypeFoliageToAutomateDensity*)Obj)->bReceiveDecals = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bReceiveDecals = { "bReceiveDecals", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTypeFoliageToAutomateDensity), &Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bReceiveDecals_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bReceiveDecals_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bReceiveDecals_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bGenerateOverlaps_MetaData[] = {
		{ "Category", "TypeFoliageToAutomateDensity" },
		{ "ModuleRelativePath", "Public/TypeFoliageToAutomateDensity.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bGenerateOverlaps_SetBit(void* Obj)
	{
		((FTypeFoliageToAutomateDensity*)Obj)->bGenerateOverlaps = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bGenerateOverlaps = { "bGenerateOverlaps", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTypeFoliageToAutomateDensity), &Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bGenerateOverlaps_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bGenerateOverlaps_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bGenerateOverlaps_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_ReplacementMesh_MetaData[] = {
		{ "Category", "TypeFoliageToAutomateDensity" },
		{ "ModuleRelativePath", "Public/TypeFoliageToAutomateDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_ReplacementMesh = { "ReplacementMesh", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTypeFoliageToAutomateDensity, ReplacementMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_ReplacementMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_ReplacementMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_SourceMesh_MetaData[] = {
		{ "Category", "TypeFoliageToAutomateDensity" },
		{ "ModuleRelativePath", "Public/TypeFoliageToAutomateDensity.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_SourceMesh = { "SourceMesh", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FTypeFoliageToAutomateDensity, SourceMesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_SourceMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_SourceMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_MinimumFoliageRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_DetailMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bCanCharacterStepOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bReceiveDecals,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_bGenerateOverlaps,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_ReplacementMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::NewProp_SourceMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"TypeFoliageToAutomateDensity",
		sizeof(FTypeFoliageToAutomateDensity),
		alignof(FTypeFoliageToAutomateDensity),
		Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TypeFoliageToAutomateDensity"), sizeof(FTypeFoliageToAutomateDensity), Get_Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTypeFoliageToAutomateDensity_Hash() { return 1058037951U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
