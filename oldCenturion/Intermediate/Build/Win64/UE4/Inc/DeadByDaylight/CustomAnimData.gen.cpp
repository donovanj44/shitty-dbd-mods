// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomAnimData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomAnimData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomAnimData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance_NoRegister();
// End Cross Module References
class UScriptStruct* FCustomAnimData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCustomAnimData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomAnimData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CustomAnimData"), sizeof(FCustomAnimData), Get_Z_Construct_UScriptStruct_FCustomAnimData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCustomAnimData>()
{
	return FCustomAnimData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomAnimData(FCustomAnimData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CustomAnimData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomAnimData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomAnimData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomAnimData")),new UScriptStruct::TCppStructOps<FCustomAnimData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomAnimData;
	struct Z_Construct_UScriptStruct_FCustomAnimData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InGameAnimationBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_InGameAnimationBlueprint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MenuAnimationBlueprint_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_MenuAnimationBlueprint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAnimData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomAnimData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomAnimData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_InGameAnimationBlueprint_MetaData[] = {
		{ "Category", "CustomAnimData" },
		{ "ModuleRelativePath", "Public/CustomAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_InGameAnimationBlueprint = { "InGameAnimationBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAnimData, InGameAnimationBlueprint), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_InGameAnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_InGameAnimationBlueprint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_MenuAnimationBlueprint_MetaData[] = {
		{ "Category", "CustomAnimData" },
		{ "ModuleRelativePath", "Public/CustomAnimData.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_MenuAnimationBlueprint = { "MenuAnimationBlueprint", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomAnimData, MenuAnimationBlueprint), Z_Construct_UClass_UAnimInstance_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_MenuAnimationBlueprint_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_MenuAnimationBlueprint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomAnimData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_InGameAnimationBlueprint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomAnimData_Statics::NewProp_MenuAnimationBlueprint,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomAnimData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CustomAnimData",
		sizeof(FCustomAnimData),
		alignof(FCustomAnimData),
		Z_Construct_UScriptStruct_FCustomAnimData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAnimData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomAnimData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomAnimData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomAnimData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomAnimData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomAnimData"), sizeof(FCustomAnimData), Get_Z_Construct_UScriptStruct_FCustomAnimData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomAnimData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomAnimData_Hash() { return 377876721U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
