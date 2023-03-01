// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventSavedData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventSavedData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventSavedData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSpecialEventSavedData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialEventSavedData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialEventSavedData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialEventSavedData"), sizeof(FSpecialEventSavedData), Get_Z_Construct_UScriptStruct_FSpecialEventSavedData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialEventSavedData>()
{
	return FSpecialEventSavedData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialEventSavedData(FSpecialEventSavedData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialEventSavedData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventSavedData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventSavedData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialEventSavedData")),new UScriptStruct::TCppStructOps<FSpecialEventSavedData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventSavedData;
	struct Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventEntryScreenOpened_MetaData[];
#endif
		static void NewProp_EventEntryScreenOpened_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EventEntryScreenOpened;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SeenCinematics_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SeenCinematics;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_SeenCinematics_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialEventSavedData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialEventSavedData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_EventEntryScreenOpened_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpecialEventSavedData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_EventEntryScreenOpened_SetBit(void* Obj)
	{
		((FSpecialEventSavedData*)Obj)->EventEntryScreenOpened = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_EventEntryScreenOpened = { "EventEntryScreenOpened", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpecialEventSavedData), &Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_EventEntryScreenOpened_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_EventEntryScreenOpened_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_EventEntryScreenOpened_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_SeenCinematics_MetaData[] = {
		{ "ModuleRelativePath", "Public/SpecialEventSavedData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_SeenCinematics = { "SeenCinematics", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventSavedData, SeenCinematics), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_SeenCinematics_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_SeenCinematics_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_SeenCinematics_Inner = { "SeenCinematics", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_EventEntryScreenOpened,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_SeenCinematics,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::NewProp_SeenCinematics_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SpecialEventSavedData",
		sizeof(FSpecialEventSavedData),
		alignof(FSpecialEventSavedData),
		Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventSavedData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialEventSavedData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialEventSavedData"), sizeof(FSpecialEventSavedData), Get_Z_Construct_UScriptStruct_FSpecialEventSavedData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialEventSavedData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialEventSavedData_Hash() { return 3045878605U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
