// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SaveValidationData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveValidationData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSaveValidationData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterValidationData();
// End Cross Module References
class UScriptStruct* FSaveValidationData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSaveValidationData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSaveValidationData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SaveValidationData"), sizeof(FSaveValidationData), Get_Z_Construct_UScriptStruct_FSaveValidationData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSaveValidationData>()
{
	return FSaveValidationData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSaveValidationData(FSaveValidationData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SaveValidationData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSaveValidationData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSaveValidationData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SaveValidationData")),new UScriptStruct::TCppStructOps<FSaveValidationData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSaveValidationData;
	struct Z_Construct_UScriptStruct_FSaveValidationData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_CharacterData;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterData_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CharacterData_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveValidationData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveValidationData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSaveValidationData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData = { "CharacterData", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveValidationData, CharacterData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData_Key_KeyProp = { "CharacterData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData_ValueProp = { "CharacterData", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FCharacterValidationData, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_PlayerUID_MetaData[] = {
		{ "ModuleRelativePath", "Public/SaveValidationData.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_PlayerUID = { "PlayerUID", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSaveValidationData, PlayerUID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_PlayerUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_PlayerUID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSaveValidationData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_CharacterData_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSaveValidationData_Statics::NewProp_PlayerUID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSaveValidationData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SaveValidationData",
		sizeof(FSaveValidationData),
		alignof(FSaveValidationData),
		Z_Construct_UScriptStruct_FSaveValidationData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveValidationData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSaveValidationData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSaveValidationData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSaveValidationData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSaveValidationData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SaveValidationData"), sizeof(FSaveValidationData), Get_Z_Construct_UScriptStruct_FSaveValidationData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSaveValidationData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSaveValidationData_Hash() { return 3673379560U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
