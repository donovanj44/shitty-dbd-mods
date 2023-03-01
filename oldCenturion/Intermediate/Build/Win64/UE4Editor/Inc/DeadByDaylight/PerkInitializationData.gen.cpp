// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PerkInitializationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePerkInitializationData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPerkInitializationData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
// End Cross Module References
class UScriptStruct* FPerkInitializationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPerkInitializationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPerkInitializationData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PerkInitializationData"), sizeof(FPerkInitializationData), Get_Z_Construct_UScriptStruct_FPerkInitializationData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPerkInitializationData>()
{
	return FPerkInitializationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPerkInitializationData(FPerkInitializationData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PerkInitializationData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkInitializationData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkInitializationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PerkInitializationData")),new UScriptStruct::TCppStructOps<FPerkInitializationData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPerkInitializationData;
	struct Z_Construct_UScriptStruct_FPerkInitializationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthorityDataSet_MetaData[];
#endif
		static void NewProp_AuthorityDataSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AuthorityDataSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActivatableInteractionInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActivatableInteractionInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActivatableInteractionInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PerkLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkInitializationData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PerkInitializationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPerkInitializationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_AuthorityDataSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerkInitializationData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_AuthorityDataSet_SetBit(void* Obj)
	{
		((FPerkInitializationData*)Obj)->AuthorityDataSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_AuthorityDataSet = { "AuthorityDataSet", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPerkInitializationData), &Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_AuthorityDataSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_AuthorityDataSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_AuthorityDataSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_ActivatableInteractionInputType_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerkInitializationData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_ActivatableInteractionInputType = { "ActivatableInteractionInputType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkInitializationData, ActivatableInteractionInputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_ActivatableInteractionInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_ActivatableInteractionInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_ActivatableInteractionInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_PerkLevel_MetaData[] = {
		{ "ModuleRelativePath", "Public/PerkInitializationData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_PerkLevel = { "PerkLevel", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPerkInitializationData, PerkLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_PerkLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_PerkLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPerkInitializationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_AuthorityDataSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_ActivatableInteractionInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_ActivatableInteractionInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPerkInitializationData_Statics::NewProp_PerkLevel,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPerkInitializationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PerkInitializationData",
		sizeof(FPerkInitializationData),
		alignof(FPerkInitializationData),
		Z_Construct_UScriptStruct_FPerkInitializationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPerkInitializationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPerkInitializationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPerkInitializationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PerkInitializationData"), sizeof(FPerkInitializationData), Get_Z_Construct_UScriptStruct_FPerkInitializationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPerkInitializationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPerkInitializationData_Hash() { return 1491327945U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
