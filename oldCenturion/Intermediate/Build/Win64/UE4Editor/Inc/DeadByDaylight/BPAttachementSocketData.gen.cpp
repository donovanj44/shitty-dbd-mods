// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BPAttachementSocketData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPAttachementSocketData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FBPAttachementSocketData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalMaterialReplacer();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMaterialReplacerData();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AItemBlueprint_NoRegister();
// End Cross Module References
class UScriptStruct* FBPAttachementSocketData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FBPAttachementSocketData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBPAttachementSocketData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("BPAttachementSocketData"), sizeof(FBPAttachementSocketData), Get_Z_Construct_UScriptStruct_FBPAttachementSocketData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FBPAttachementSocketData>()
{
	return FBPAttachementSocketData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBPAttachementSocketData(FBPAttachementSocketData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("BPAttachementSocketData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFBPAttachementSocketData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFBPAttachementSocketData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BPAttachementSocketData")),new UScriptStruct::TCppStructOps<FBPAttachementSocketData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFBPAttachementSocketData;
	struct Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConditionalMaterialReplacer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConditionalMaterialReplacer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaterialsMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_MaterialsMap;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaterialsMap_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SocketName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SocketName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SkeletalMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_SkeletalMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachementBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_AttachementBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BPAttachementSocketData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBPAttachementSocketData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_ConditionalMaterialReplacer_MetaData[] = {
		{ "Category", "BPAttachementSocketData" },
		{ "ModuleRelativePath", "Public/BPAttachementSocketData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_ConditionalMaterialReplacer = { "ConditionalMaterialReplacer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAttachementSocketData, ConditionalMaterialReplacer), Z_Construct_UScriptStruct_FConditionalMaterialReplacer, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_ConditionalMaterialReplacer_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_ConditionalMaterialReplacer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_MaterialsMap_MetaData[] = {
		{ "Category", "BPAttachementSocketData" },
		{ "ModuleRelativePath", "Public/BPAttachementSocketData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_MaterialsMap = { "MaterialsMap", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAttachementSocketData, MaterialsMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_MaterialsMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_MaterialsMap_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_MaterialsMap_Inner = { "MaterialsMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FMaterialReplacerData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SocketName_MetaData[] = {
		{ "Category", "BPAttachementSocketData" },
		{ "ModuleRelativePath", "Public/BPAttachementSocketData.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SocketName = { "SocketName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAttachementSocketData, SocketName), METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SocketName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SocketName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SkeletalMesh_MetaData[] = {
		{ "Category", "BPAttachementSocketData" },
		{ "ModuleRelativePath", "Public/BPAttachementSocketData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SkeletalMesh = { "SkeletalMesh", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAttachementSocketData, SkeletalMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SkeletalMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SkeletalMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_AttachementBlueprint_MetaData[] = {
		{ "Category", "BPAttachementSocketData" },
		{ "ModuleRelativePath", "Public/BPAttachementSocketData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_AttachementBlueprint = { "AttachementBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBPAttachementSocketData, AttachementBlueprint), Z_Construct_UClass_AItemBlueprint_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_AttachementBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_AttachementBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_ConditionalMaterialReplacer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_MaterialsMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_MaterialsMap_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SocketName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_SkeletalMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::NewProp_AttachementBlueprint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"BPAttachementSocketData",
		sizeof(FBPAttachementSocketData),
		alignof(FBPAttachementSocketData),
		Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBPAttachementSocketData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBPAttachementSocketData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BPAttachementSocketData"), sizeof(FBPAttachementSocketData), Get_Z_Construct_UScriptStruct_FBPAttachementSocketData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBPAttachementSocketData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBPAttachementSocketData_Hash() { return 1032649580U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
