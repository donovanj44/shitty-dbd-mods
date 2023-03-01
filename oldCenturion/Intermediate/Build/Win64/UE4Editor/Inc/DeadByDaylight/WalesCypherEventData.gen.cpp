// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/WalesCypherEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalesCypherEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FWalesCypherEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FWalesCypherEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FWalesCypherEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWalesCypherEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("WalesCypherEventData"), sizeof(FWalesCypherEventData), Get_Z_Construct_UScriptStruct_FWalesCypherEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FWalesCypherEventData>()
{
	return FWalesCypherEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWalesCypherEventData(FWalesCypherEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("WalesCypherEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFWalesCypherEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFWalesCypherEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WalesCypherEventData")),new UScriptStruct::TCppStructOps<FWalesCypherEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFWalesCypherEventData;
	struct Z_Construct_UScriptStruct_FWalesCypherEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidCharacterSelcted_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ValidCharacterSelcted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharmGranted_MetaData[];
#endif
		static void NewProp_CharmGranted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_CharmGranted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timeout_MetaData[];
#endif
		static void NewProp_Timeout_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Timeout;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Success_MetaData[];
#endif
		static void NewProp_Success_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Success;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TimeoutThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TimeoutThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExpectedSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ExpectedSequence;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnteredSequence_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EnteredSequence;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalesCypherEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWalesCypherEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ValidCharacterSelcted_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ValidCharacterSelcted = { "ValidCharacterSelcted", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalesCypherEventData, ValidCharacterSelcted), METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ValidCharacterSelcted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ValidCharacterSelcted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_CharmGranted_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_CharmGranted_SetBit(void* Obj)
	{
		((FWalesCypherEventData*)Obj)->CharmGranted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_CharmGranted = { "CharmGranted", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWalesCypherEventData), &Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_CharmGranted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_CharmGranted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_CharmGranted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Timeout_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Timeout_SetBit(void* Obj)
	{
		((FWalesCypherEventData*)Obj)->Timeout = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Timeout = { "Timeout", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWalesCypherEventData), &Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Timeout_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Timeout_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Timeout_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Success_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((FWalesCypherEventData*)Obj)->Success = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FWalesCypherEventData), &Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Success_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Success_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Success_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_TimeoutThreshold_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_TimeoutThreshold = { "TimeoutThreshold", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalesCypherEventData, TimeoutThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_TimeoutThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_TimeoutThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ExpectedSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ExpectedSequence = { "ExpectedSequence", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalesCypherEventData, ExpectedSequence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ExpectedSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ExpectedSequence_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_EnteredSequence_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalesCypherEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_EnteredSequence = { "EnteredSequence", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalesCypherEventData, EnteredSequence), METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_EnteredSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_EnteredSequence_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ValidCharacterSelcted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_CharmGranted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Timeout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_Success,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_TimeoutThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_ExpectedSequence,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::NewProp_EnteredSequence,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"WalesCypherEventData",
		sizeof(FWalesCypherEventData),
		alignof(FWalesCypherEventData),
		Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWalesCypherEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWalesCypherEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WalesCypherEventData"), sizeof(FWalesCypherEventData), Get_Z_Construct_UScriptStruct_FWalesCypherEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWalesCypherEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWalesCypherEventData_Hash() { return 3138335649U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
