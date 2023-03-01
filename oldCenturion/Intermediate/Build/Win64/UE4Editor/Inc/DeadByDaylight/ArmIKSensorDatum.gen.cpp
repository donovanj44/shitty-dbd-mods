// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ArmIKSensorDatum.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArmIKSensorDatum() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FArmIKSensorDatum();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FArmIKSensorDatum::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FArmIKSensorDatum_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FArmIKSensorDatum, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ArmIKSensorDatum"), sizeof(FArmIKSensorDatum), Get_Z_Construct_UScriptStruct_FArmIKSensorDatum_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FArmIKSensorDatum>()
{
	return FArmIKSensorDatum::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FArmIKSensorDatum(FArmIKSensorDatum::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ArmIKSensorDatum"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFArmIKSensorDatum
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFArmIKSensorDatum()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ArmIKSensorDatum")),new UScriptStruct::TCppStructOps<FArmIKSensorDatum>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFArmIKSensorDatum;
	struct Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShoulderBoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ShoulderBoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ArmIKSensorDatum.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FArmIKSensorDatum>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::NewProp_ShoulderBoneName_MetaData[] = {
		{ "Category", "ArmIKSensorDatum" },
		{ "ModuleRelativePath", "Public/ArmIKSensorDatum.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::NewProp_ShoulderBoneName = { "ShoulderBoneName", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FArmIKSensorDatum, ShoulderBoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::NewProp_ShoulderBoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::NewProp_ShoulderBoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::NewProp_ShoulderBoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ArmIKSensorDatum",
		sizeof(FArmIKSensorDatum),
		alignof(FArmIKSensorDatum),
		Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FArmIKSensorDatum()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FArmIKSensorDatum_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ArmIKSensorDatum"), sizeof(FArmIKSensorDatum), Get_Z_Construct_UScriptStruct_FArmIKSensorDatum_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FArmIKSensorDatum_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FArmIKSensorDatum_Hash() { return 2585687710U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
