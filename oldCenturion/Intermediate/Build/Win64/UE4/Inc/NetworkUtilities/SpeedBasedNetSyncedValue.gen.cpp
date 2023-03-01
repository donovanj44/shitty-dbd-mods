// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NetworkUtilities/Public/SpeedBasedNetSyncedValue.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpeedBasedNetSyncedValue() {}
// Cross Module References
	NETWORKUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue();
	UPackage* Z_Construct_UPackage__Script_NetworkUtilities();
// End Cross Module References
class UScriptStruct* FSpeedBasedNetSyncedValue::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern NETWORKUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue, Z_Construct_UPackage__Script_NetworkUtilities(), TEXT("SpeedBasedNetSyncedValue"), sizeof(FSpeedBasedNetSyncedValue), Get_Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Hash());
	}
	return Singleton;
}
template<> NETWORKUTILITIES_API UScriptStruct* StaticStruct<FSpeedBasedNetSyncedValue>()
{
	return FSpeedBasedNetSyncedValue::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpeedBasedNetSyncedValue(FSpeedBasedNetSyncedValue::StaticStruct, TEXT("/Script/NetworkUtilities"), TEXT("SpeedBasedNetSyncedValue"), false, nullptr, nullptr);
static struct FScriptStruct_NetworkUtilities_StaticRegisterNativesFSpeedBasedNetSyncedValue
{
	FScriptStruct_NetworkUtilities_StaticRegisterNativesFSpeedBasedNetSyncedValue()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpeedBasedNetSyncedValue")),new UScriptStruct::TCppStructOps<FSpeedBasedNetSyncedValue>);
	}
} ScriptStruct_NetworkUtilities_StaticRegisterNativesFSpeedBasedNetSyncedValue;
	struct Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicatedLastUpdateTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__replicatedLastUpdateTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicatedSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__replicatedSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__replicatedValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__replicatedValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpeedBasedNetSyncedValue.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpeedBasedNetSyncedValue>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedLastUpdateTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeedBasedNetSyncedValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedLastUpdateTimestamp = { "_replicatedLastUpdateTimestamp", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeedBasedNetSyncedValue, _replicatedLastUpdateTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedLastUpdateTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedLastUpdateTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedSpeed_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeedBasedNetSyncedValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedSpeed = { "_replicatedSpeed", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeedBasedNetSyncedValue, _replicatedSpeed), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpeedBasedNetSyncedValue.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedValue = { "_replicatedValue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpeedBasedNetSyncedValue, _replicatedValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedLastUpdateTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::NewProp__replicatedValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_NetworkUtilities,
		nullptr,
		&NewStructOps,
		"SpeedBasedNetSyncedValue",
		sizeof(FSpeedBasedNetSyncedValue),
		alignof(FSpeedBasedNetSyncedValue),
		Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_NetworkUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpeedBasedNetSyncedValue"), sizeof(FSpeedBasedNetSyncedValue), Get_Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpeedBasedNetSyncedValue_Hash() { return 2237788590U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
