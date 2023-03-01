// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ProfileLoadEventData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProfileLoadEventData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FProfileLoadEventData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FProfileLoadEventData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FProfileLoadEventData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FProfileLoadEventData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("ProfileLoadEventData"), sizeof(FProfileLoadEventData), Get_Z_Construct_UScriptStruct_FProfileLoadEventData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FProfileLoadEventData>()
{
	return FProfileLoadEventData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FProfileLoadEventData(FProfileLoadEventData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("ProfileLoadEventData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFProfileLoadEventData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFProfileLoadEventData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ProfileLoadEventData")),new UScriptStruct::TCppStructOps<FProfileLoadEventData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFProfileLoadEventData;
	struct Z_Construct_UScriptStruct_FProfileLoadEventData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Timestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Timestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FirstTimePlaying_MetaData[];
#endif
		static void NewProp_FirstTimePlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FirstTimePlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ProfileLoadEventData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FProfileLoadEventData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_Timestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileLoadEventData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_Timestamp = { "Timestamp", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FProfileLoadEventData, Timestamp), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_Timestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_Timestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_FirstTimePlaying_MetaData[] = {
		{ "ModuleRelativePath", "Public/ProfileLoadEventData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_FirstTimePlaying_SetBit(void* Obj)
	{
		((FProfileLoadEventData*)Obj)->FirstTimePlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_FirstTimePlaying = { "FirstTimePlaying", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FProfileLoadEventData), &Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_FirstTimePlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_FirstTimePlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_FirstTimePlaying_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_Timestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::NewProp_FirstTimePlaying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"ProfileLoadEventData",
		sizeof(FProfileLoadEventData),
		alignof(FProfileLoadEventData),
		Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FProfileLoadEventData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FProfileLoadEventData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ProfileLoadEventData"), sizeof(FProfileLoadEventData), Get_Z_Construct_UScriptStruct_FProfileLoadEventData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FProfileLoadEventData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FProfileLoadEventData_Hash() { return 419705653U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
