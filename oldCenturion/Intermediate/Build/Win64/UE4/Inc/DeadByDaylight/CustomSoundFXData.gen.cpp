// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CustomSoundFXData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomSoundFXData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCustomSoundFXData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAudioCustomizationCategory();
// End Cross Module References
class UScriptStruct* FCustomSoundFXData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCustomSoundFXData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomSoundFXData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CustomSoundFXData"), sizeof(FCustomSoundFXData), Get_Z_Construct_UScriptStruct_FCustomSoundFXData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCustomSoundFXData>()
{
	return FCustomSoundFXData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomSoundFXData(FCustomSoundFXData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CustomSoundFXData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomSoundFXData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomSoundFXData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomSoundFXData")),new UScriptStruct::TCppStructOps<FCustomSoundFXData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCustomSoundFXData;
	struct Z_Construct_UScriptStruct_FCustomSoundFXData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchState_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_AudioCategory;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_AudioCategory_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomSoundFXData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomSoundFXData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_SwitchState_MetaData[] = {
		{ "Category", "CustomSoundFXData" },
		{ "ModuleRelativePath", "Public/CustomSoundFXData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomSoundFXData, SwitchState), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_SwitchState_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_SwitchState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_AudioCategory_MetaData[] = {
		{ "Category", "CustomSoundFXData" },
		{ "ModuleRelativePath", "Public/CustomSoundFXData.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_AudioCategory = { "AudioCategory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomSoundFXData, AudioCategory), Z_Construct_UEnum_DeadByDaylight_EAudioCustomizationCategory, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_AudioCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_AudioCategory_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_AudioCategory_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_SwitchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_AudioCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::NewProp_AudioCategory_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CustomSoundFXData",
		sizeof(FCustomSoundFXData),
		alignof(FCustomSoundFXData),
		Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomSoundFXData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomSoundFXData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomSoundFXData"), sizeof(FCustomSoundFXData), Get_Z_Construct_UScriptStruct_FCustomSoundFXData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomSoundFXData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomSoundFXData_Hash() { return 1503621620U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
