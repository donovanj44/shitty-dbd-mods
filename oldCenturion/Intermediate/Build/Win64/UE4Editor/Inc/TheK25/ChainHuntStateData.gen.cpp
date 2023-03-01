// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/ChainHuntStateData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeChainHuntStateData() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FChainHuntStateData();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	THEK25_API UEnum* Z_Construct_UEnum_TheK25_EChainHuntState();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FChainHuntStateData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FChainHuntStateData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FChainHuntStateData, Z_Construct_UPackage__Script_TheK25(), TEXT("ChainHuntStateData"), sizeof(FChainHuntStateData), Get_Z_Construct_UScriptStruct_FChainHuntStateData_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FChainHuntStateData>()
{
	return FChainHuntStateData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FChainHuntStateData(FChainHuntStateData::StaticStruct, TEXT("/Script/TheK25"), TEXT("ChainHuntStateData"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFChainHuntStateData
{
	FScriptStruct_TheK25_StaticRegisterNativesFChainHuntStateData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ChainHuntStateData")),new UScriptStruct::TCppStructOps<FChainHuntStateData>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFChainHuntStateData;
	struct Z_Construct_UScriptStruct_FChainHuntStateData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChainHuntState_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChainHuntState;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChainHuntState_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainHuntStateData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/ChainHuntStateData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FChainHuntStateData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_ChainHuntState_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainHuntStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_ChainHuntState = { "ChainHuntState", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChainHuntStateData, ChainHuntState), Z_Construct_UEnum_TheK25_EChainHuntState, METADATA_PARAMS(Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_ChainHuntState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_ChainHuntState_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_ChainHuntState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_StartTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ChainHuntStateData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FChainHuntStateData, StartTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_StartTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FChainHuntStateData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_ChainHuntState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_ChainHuntState_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FChainHuntStateData_Statics::NewProp_StartTime,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FChainHuntStateData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"ChainHuntStateData",
		sizeof(FChainHuntStateData),
		alignof(FChainHuntStateData),
		Z_Construct_UScriptStruct_FChainHuntStateData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainHuntStateData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FChainHuntStateData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FChainHuntStateData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FChainHuntStateData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FChainHuntStateData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ChainHuntStateData"), sizeof(FChainHuntStateData), Get_Z_Construct_UScriptStruct_FChainHuntStateData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FChainHuntStateData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FChainHuntStateData_Hash() { return 2028265863U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
