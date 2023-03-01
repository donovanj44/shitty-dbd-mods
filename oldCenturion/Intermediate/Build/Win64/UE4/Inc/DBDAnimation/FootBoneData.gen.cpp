// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnimation/Public/FootBoneData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFootBoneData() {}
// Cross Module References
	DBDANIMATION_API UScriptStruct* Z_Construct_UScriptStruct_FFootBoneData();
	UPackage* Z_Construct_UPackage__Script_DBDAnimation();
	ENGINE_API UClass* Z_Construct_UClass_UCurveVector_NoRegister();
// End Cross Module References
class UScriptStruct* FFootBoneData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANIMATION_API uint32 Get_Z_Construct_UScriptStruct_FFootBoneData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFootBoneData, Z_Construct_UPackage__Script_DBDAnimation(), TEXT("FootBoneData"), sizeof(FFootBoneData), Get_Z_Construct_UScriptStruct_FFootBoneData_Hash());
	}
	return Singleton;
}
template<> DBDANIMATION_API UScriptStruct* StaticStruct<FFootBoneData>()
{
	return FFootBoneData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFootBoneData(FFootBoneData::StaticStruct, TEXT("/Script/DBDAnimation"), TEXT("FootBoneData"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnimation_StaticRegisterNativesFFootBoneData
{
	FScriptStruct_DBDAnimation_StaticRegisterNativesFFootBoneData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FootBoneData")),new UScriptStruct::TCppStructOps<FFootBoneData>);
	}
} ScriptStruct_DBDAnimation_StaticRegisterNativesFFootBoneData;
	struct Z_Construct_UScriptStruct_FFootBoneData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeftFootCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_LeftFootCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightFootCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RightFootCurve;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootBoneData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FootBoneData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFootBoneData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFootBoneData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_LeftFootCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/FootBoneData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_LeftFootCurve = { "LeftFootCurve", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootBoneData, LeftFootCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_LeftFootCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_LeftFootCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_RightFootCurve_MetaData[] = {
		{ "ModuleRelativePath", "Public/FootBoneData.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_RightFootCurve = { "RightFootCurve", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FFootBoneData, RightFootCurve), Z_Construct_UClass_UCurveVector_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_RightFootCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_RightFootCurve_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FFootBoneData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_LeftFootCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FFootBoneData_Statics::NewProp_RightFootCurve,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFootBoneData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnimation,
		nullptr,
		&NewStructOps,
		"FootBoneData",
		sizeof(FFootBoneData),
		alignof(FFootBoneData),
		Z_Construct_UScriptStruct_FFootBoneData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootBoneData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFootBoneData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFootBoneData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFootBoneData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFootBoneData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnimation();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FootBoneData"), sizeof(FFootBoneData), Get_Z_Construct_UScriptStruct_FFootBoneData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFootBoneData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFootBoneData_Hash() { return 4165618038U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
