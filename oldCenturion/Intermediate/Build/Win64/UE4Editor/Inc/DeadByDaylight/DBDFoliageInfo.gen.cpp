// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDFoliageInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDFoliageInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDFoliageInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDFoliageInstance();
	FOLIAGE_API UClass* Z_Construct_UClass_UFoliageType_NoRegister();
// End Cross Module References
class UScriptStruct* FDBDFoliageInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDFoliageInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDFoliageInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDFoliageInfo"), sizeof(FDBDFoliageInfo), Get_Z_Construct_UScriptStruct_FDBDFoliageInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDFoliageInfo>()
{
	return FDBDFoliageInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDFoliageInfo(FDBDFoliageInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDFoliageInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDFoliageInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDFoliageInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDFoliageInfo")),new UScriptStruct::TCppStructOps<FDBDFoliageInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDFoliageInfo;
	struct Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_instances_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_instances;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_instances_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_foliageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_foliageType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDFoliageInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDFoliageInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_instances_MetaData[] = {
		{ "Category", "DBDFoliageInfo" },
		{ "ModuleRelativePath", "Public/DBDFoliageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_instances = { "instances", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInfo, instances), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_instances_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_instances_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_instances_Inner = { "instances", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDBDFoliageInstance, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_foliageType_MetaData[] = {
		{ "Category", "DBDFoliageInfo" },
		{ "ModuleRelativePath", "Public/DBDFoliageInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_foliageType = { "foliageType", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDFoliageInfo, foliageType), Z_Construct_UClass_UFoliageType_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_foliageType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_foliageType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_instances,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_instances_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::NewProp_foliageType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDFoliageInfo",
		sizeof(FDBDFoliageInfo),
		alignof(FDBDFoliageInfo),
		Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDFoliageInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDFoliageInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDFoliageInfo"), sizeof(FDBDFoliageInfo), Get_Z_Construct_UScriptStruct_FDBDFoliageInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDFoliageInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDFoliageInfo_Hash() { return 175527335U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
