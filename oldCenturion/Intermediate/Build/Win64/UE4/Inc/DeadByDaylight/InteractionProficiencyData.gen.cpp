// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InteractionProficiencyData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionProficiencyData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionProficiencyData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDSHAREDTYPES_API UEnum* Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType();
// End Cross Module References
class UScriptStruct* FInteractionProficiencyData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FInteractionProficiencyData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FInteractionProficiencyData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("InteractionProficiencyData"), sizeof(FInteractionProficiencyData), Get_Z_Construct_UScriptStruct_FInteractionProficiencyData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FInteractionProficiencyData>()
{
	return FInteractionProficiencyData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FInteractionProficiencyData(FInteractionProficiencyData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("InteractionProficiencyData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionProficiencyData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionProficiencyData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("InteractionProficiencyData")),new UScriptStruct::TCppStructOps<FInteractionProficiencyData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFInteractionProficiencyData;
	struct Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProficiencyType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ProficiencyType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ProficiencyType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActive_MetaData[];
#endif
		static void NewProp_IsActive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActive;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInteractionProficiencyData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Value_MetaData[] = {
		{ "Category", "InteractionProficiencyData" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyData.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProficiencyData, Value), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Value_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Value_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_ProficiencyType_MetaData[] = {
		{ "Category", "InteractionProficiencyData" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_ProficiencyType = { "ProficiencyType", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProficiencyData, ProficiencyType), Z_Construct_UEnum_DBDSharedTypes_EStatusEffectType, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_ProficiencyType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_ProficiencyType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_ProficiencyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "InteractionProficiencyData" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FInteractionProficiencyData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Level_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_IsActive_MetaData[] = {
		{ "Category", "InteractionProficiencyData" },
		{ "ModuleRelativePath", "Public/InteractionProficiencyData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_IsActive_SetBit(void* Obj)
	{
		((FInteractionProficiencyData*)Obj)->IsActive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_IsActive = { "IsActive", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FInteractionProficiencyData), &Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_IsActive_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_IsActive_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_IsActive_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_ProficiencyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_ProficiencyType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_Level,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::NewProp_IsActive,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"InteractionProficiencyData",
		sizeof(FInteractionProficiencyData),
		alignof(FInteractionProficiencyData),
		Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInteractionProficiencyData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FInteractionProficiencyData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("InteractionProficiencyData"), sizeof(FInteractionProficiencyData), Get_Z_Construct_UScriptStruct_FInteractionProficiencyData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FInteractionProficiencyData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FInteractionProficiencyData_Hash() { return 3539084637U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
