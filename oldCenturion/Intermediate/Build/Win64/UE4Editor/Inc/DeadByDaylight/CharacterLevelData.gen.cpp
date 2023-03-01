// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterLevelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterLevelData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterLevelData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAssignedPerkProperties();
// End Cross Module References
class UScriptStruct* FCharacterLevelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterLevelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterLevelData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterLevelData"), sizeof(FCharacterLevelData), Get_Z_Construct_UScriptStruct_FCharacterLevelData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterLevelData>()
{
	return FCharacterLevelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterLevelData(FCharacterLevelData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterLevelData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterLevelData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterLevelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterLevelData")),new UScriptStruct::TCppStructOps<FCharacterLevelData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterLevelData;
	struct Z_Construct_UScriptStruct_FCharacterLevelData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkSelection_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkSelection;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerkSelection_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasPerksBeenSelected_MetaData[];
#endif
		static void NewProp_HasPerksBeenSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasPerksBeenSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsComplete_MetaData[];
#endif
		static void NewProp_IsComplete_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsComplete;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExperienceToNextLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ExperienceToNextLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterLevelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterLevelData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterLevelData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_PerkSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_PerkSelection = { "PerkSelection", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterLevelData, PerkSelection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_PerkSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_PerkSelection_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_PerkSelection_Inner = { "PerkSelection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssignedPerkProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_MetaData[] = {
		{ "Category", "CharacterLevelData" },
		{ "ModuleRelativePath", "Public/CharacterLevelData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_SetBit(void* Obj)
	{
		((FCharacterLevelData*)Obj)->HasPerksBeenSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_HasPerksBeenSelected = { "HasPerksBeenSelected", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterLevelData), &Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_IsComplete_MetaData[] = {
		{ "Category", "CharacterLevelData" },
		{ "ModuleRelativePath", "Public/CharacterLevelData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_IsComplete_SetBit(void* Obj)
	{
		((FCharacterLevelData*)Obj)->IsComplete = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_IsComplete = { "IsComplete", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCharacterLevelData), &Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_IsComplete_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_IsComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_IsComplete_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_ExperienceToNextLevel_MetaData[] = {
		{ "Category", "CharacterLevelData" },
		{ "ModuleRelativePath", "Public/CharacterLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_ExperienceToNextLevel = { "ExperienceToNextLevel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterLevelData, ExperienceToNextLevel), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_ExperienceToNextLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_ExperienceToNextLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_Level_MetaData[] = {
		{ "Category", "CharacterLevelData" },
		{ "ModuleRelativePath", "Public/CharacterLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterLevelData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterLevelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_PerkSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_PerkSelection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_HasPerksBeenSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_IsComplete,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_ExperienceToNextLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterLevelData_Statics::NewProp_Level,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterLevelData",
		sizeof(FCharacterLevelData),
		alignof(FCharacterLevelData),
		Z_Construct_UScriptStruct_FCharacterLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterLevelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterLevelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterLevelData"), sizeof(FCharacterLevelData), Get_Z_Construct_UScriptStruct_FCharacterLevelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterLevelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterLevelData_Hash() { return 2339806839U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
