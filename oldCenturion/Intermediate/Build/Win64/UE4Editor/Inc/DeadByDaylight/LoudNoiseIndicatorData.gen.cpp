// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/LoudNoiseIndicatorData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLoudNoiseIndicatorData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FLoudNoiseIndicatorData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FLoudNoiseIndicatorData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("LoudNoiseIndicatorData"), sizeof(FLoudNoiseIndicatorData), Get_Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FLoudNoiseIndicatorData>()
{
	return FLoudNoiseIndicatorData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FLoudNoiseIndicatorData(FLoudNoiseIndicatorData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("LoudNoiseIndicatorData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFLoudNoiseIndicatorData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFLoudNoiseIndicatorData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("LoudNoiseIndicatorData")),new UScriptStruct::TCppStructOps<FLoudNoiseIndicatorData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFLoudNoiseIndicatorData;
	struct Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RemainingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RemainingTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistortionMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DistortionMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/LoudNoiseIndicatorData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FLoudNoiseIndicatorData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_RemainingTime_MetaData[] = {
		{ "Category", "LoudNoiseIndicatorData" },
		{ "ModuleRelativePath", "Public/LoudNoiseIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_RemainingTime = { "RemainingTime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoudNoiseIndicatorData, RemainingTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_RemainingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_RemainingTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_Location_MetaData[] = {
		{ "Category", "LoudNoiseIndicatorData" },
		{ "ModuleRelativePath", "Public/LoudNoiseIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoudNoiseIndicatorData, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_Location_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_Location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_DistortionMesh_MetaData[] = {
		{ "Category", "LoudNoiseIndicatorData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoudNoiseIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_DistortionMesh = { "DistortionMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoudNoiseIndicatorData, DistortionMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_DistortionMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_DistortionMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_MeshMask_MetaData[] = {
		{ "Category", "LoudNoiseIndicatorData" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/LoudNoiseIndicatorData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_MeshMask = { "MeshMask", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FLoudNoiseIndicatorData, MeshMask), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_MeshMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_MeshMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_RemainingTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_DistortionMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::NewProp_MeshMask,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"LoudNoiseIndicatorData",
		sizeof(FLoudNoiseIndicatorData),
		alignof(FLoudNoiseIndicatorData),
		Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FLoudNoiseIndicatorData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("LoudNoiseIndicatorData"), sizeof(FLoudNoiseIndicatorData), Get_Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FLoudNoiseIndicatorData_Hash() { return 1306959453U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
