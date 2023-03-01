// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDJoinParams.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDJoinParams() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDBDJoinParams();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EGameType();
// End Cross Module References
class UScriptStruct* FDBDJoinParams::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDBDJoinParams_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDJoinParams, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DBDJoinParams"), sizeof(FDBDJoinParams), Get_Z_Construct_UScriptStruct_FDBDJoinParams_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDBDJoinParams>()
{
	return FDBDJoinParams::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDJoinParams(FDBDJoinParams::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DBDJoinParams"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDJoinParams
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDJoinParams()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDJoinParams")),new UScriptStruct::TCppStructOps<FDBDJoinParams>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDBDJoinParams;
	struct Z_Construct_UScriptStruct_FDBDJoinParams_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GameType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GameType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDJoinParams_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DBDJoinParams.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDJoinParams_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDJoinParams>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDJoinParams_Statics::NewProp_GameType_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDJoinParams.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDBDJoinParams_Statics::NewProp_GameType = { "GameType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDJoinParams, GameType), Z_Construct_UEnum_DeadByDaylight_EGameType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDJoinParams_Statics::NewProp_GameType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDJoinParams_Statics::NewProp_GameType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDBDJoinParams_Statics::NewProp_GameType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDJoinParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDJoinParams_Statics::NewProp_GameType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDJoinParams_Statics::NewProp_GameType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDJoinParams_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DBDJoinParams",
		sizeof(FDBDJoinParams),
		alignof(FDBDJoinParams),
		Z_Construct_UScriptStruct_FDBDJoinParams_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDJoinParams_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDJoinParams_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDJoinParams_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDJoinParams()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDJoinParams_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDJoinParams"), sizeof(FDBDJoinParams), Get_Z_Construct_UScriptStruct_FDBDJoinParams_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDJoinParams_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDJoinParams_Hash() { return 4145853306U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
