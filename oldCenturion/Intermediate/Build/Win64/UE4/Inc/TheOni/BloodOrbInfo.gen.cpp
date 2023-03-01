// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/BloodOrbInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodOrbInfo() {}
// Cross Module References
	THEONI_API UScriptStruct* Z_Construct_UScriptStruct_FBloodOrbInfo();
	UPackage* Z_Construct_UPackage__Script_TheOni();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FBloodOrbInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEONI_API uint32 Get_Z_Construct_UScriptStruct_FBloodOrbInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FBloodOrbInfo, Z_Construct_UPackage__Script_TheOni(), TEXT("BloodOrbInfo"), sizeof(FBloodOrbInfo), Get_Z_Construct_UScriptStruct_FBloodOrbInfo_Hash());
	}
	return Singleton;
}
template<> THEONI_API UScriptStruct* StaticStruct<FBloodOrbInfo>()
{
	return FBloodOrbInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FBloodOrbInfo(FBloodOrbInfo::StaticStruct, TEXT("/Script/TheOni"), TEXT("BloodOrbInfo"), false, nullptr, nullptr);
static struct FScriptStruct_TheOni_StaticRegisterNativesFBloodOrbInfo
{
	FScriptStruct_TheOni_StaticRegisterNativesFBloodOrbInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("BloodOrbInfo")),new UScriptStruct::TCppStructOps<FBloodOrbInfo>);
	}
} ScriptStruct_TheOni_StaticRegisterNativesFBloodOrbInfo;
	struct Z_Construct_UScriptStruct_FBloodOrbInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_clonedStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_clonedStaticMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_originalStaticMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_originalStaticMesh;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/BloodOrbInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FBloodOrbInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_clonedStaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodOrbInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_clonedStaticMesh = { "clonedStaticMesh", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodOrbInfo, clonedStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_clonedStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_clonedStaticMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_originalStaticMesh_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/BloodOrbInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_originalStaticMesh = { "originalStaticMesh", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FBloodOrbInfo, originalStaticMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_originalStaticMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_originalStaticMesh_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_clonedStaticMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::NewProp_originalStaticMesh,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
		nullptr,
		&NewStructOps,
		"BloodOrbInfo",
		sizeof(FBloodOrbInfo),
		alignof(FBloodOrbInfo),
		Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FBloodOrbInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FBloodOrbInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheOni();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("BloodOrbInfo"), sizeof(FBloodOrbInfo), Get_Z_Construct_UScriptStruct_FBloodOrbInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FBloodOrbInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FBloodOrbInfo_Hash() { return 3485025653U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
