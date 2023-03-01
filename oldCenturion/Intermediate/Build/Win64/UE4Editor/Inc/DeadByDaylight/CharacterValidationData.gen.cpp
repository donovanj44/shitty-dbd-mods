// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterValidationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterValidationData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterValidationData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FCharacterValidationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterValidationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterValidationData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterValidationData"), sizeof(FCharacterValidationData), Get_Z_Construct_UScriptStruct_FCharacterValidationData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterValidationData>()
{
	return FCharacterValidationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterValidationData(FCharacterValidationData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterValidationData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterValidationData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterValidationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterValidationData")),new UScriptStruct::TCppStructOps<FCharacterValidationData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterValidationData;
	struct Z_Construct_UScriptStruct_FCharacterValidationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodWebLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_BloodWebLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrestigeLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PrestigeLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterValidationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterValidationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterValidationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_BloodWebLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_BloodWebLevel = { "BloodWebLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterValidationData, BloodWebLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_BloodWebLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_BloodWebLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_PrestigeLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_PrestigeLevel = { "PrestigeLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterValidationData, PrestigeLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_PrestigeLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_PrestigeLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterValidationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_BloodWebLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterValidationData_Statics::NewProp_PrestigeLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterValidationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterValidationData",
		sizeof(FCharacterValidationData),
		alignof(FCharacterValidationData),
		Z_Construct_UScriptStruct_FCharacterValidationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterValidationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterValidationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterValidationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterValidationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterValidationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterValidationData"), sizeof(FCharacterValidationData), Get_Z_Construct_UScriptStruct_FCharacterValidationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterValidationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterValidationData_Hash() { return 1104921622U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
