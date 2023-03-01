// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SavedCharacterLevelData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSavedCharacterLevelData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSavedCharacterLevelData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAssignedPerkProperties();
// End Cross Module References
class UScriptStruct* FSavedCharacterLevelData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSavedCharacterLevelData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSavedCharacterLevelData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SavedCharacterLevelData"), sizeof(FSavedCharacterLevelData), Get_Z_Construct_UScriptStruct_FSavedCharacterLevelData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSavedCharacterLevelData>()
{
	return FSavedCharacterLevelData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSavedCharacterLevelData(FSavedCharacterLevelData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SavedCharacterLevelData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedCharacterLevelData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedCharacterLevelData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SavedCharacterLevelData")),new UScriptStruct::TCppStructOps<FSavedCharacterLevelData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSavedCharacterLevelData;
	struct Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasPerkSelectionBeenGenerated_MetaData[];
#endif
		static void NewProp_HasPerkSelectionBeenGenerated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasPerkSelectionBeenGenerated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasPerksBeenSelected_MetaData[];
#endif
		static void NewProp_HasPerksBeenSelected_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasPerksBeenSelected;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Level_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Level;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SavedCharacterLevelData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSavedCharacterLevelData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_PerkSelection_MetaData[] = {
		{ "ModuleRelativePath", "Public/SavedCharacterLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_PerkSelection = { "PerkSelection", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedCharacterLevelData, PerkSelection), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_PerkSelection_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_PerkSelection_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_PerkSelection_Inner = { "PerkSelection", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAssignedPerkProperties, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerkSelectionBeenGenerated_MetaData[] = {
		{ "ModuleRelativePath", "Public/SavedCharacterLevelData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerkSelectionBeenGenerated_SetBit(void* Obj)
	{
		((FSavedCharacterLevelData*)Obj)->HasPerkSelectionBeenGenerated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerkSelectionBeenGenerated = { "HasPerkSelectionBeenGenerated", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSavedCharacterLevelData), &Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerkSelectionBeenGenerated_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerkSelectionBeenGenerated_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerkSelectionBeenGenerated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_MetaData[] = {
		{ "ModuleRelativePath", "Public/SavedCharacterLevelData.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_SetBit(void* Obj)
	{
		((FSavedCharacterLevelData*)Obj)->HasPerksBeenSelected = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerksBeenSelected = { "HasPerksBeenSelected", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSavedCharacterLevelData), &Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerksBeenSelected_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_Level_MetaData[] = {
		{ "ModuleRelativePath", "Public/SavedCharacterLevelData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_Level = { "Level", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSavedCharacterLevelData, Level), METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_Level_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_Level_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_PerkSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_PerkSelection_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerkSelectionBeenGenerated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_HasPerksBeenSelected,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::NewProp_Level,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SavedCharacterLevelData",
		sizeof(FSavedCharacterLevelData),
		alignof(FSavedCharacterLevelData),
		Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSavedCharacterLevelData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSavedCharacterLevelData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SavedCharacterLevelData"), sizeof(FSavedCharacterLevelData), Get_Z_Construct_UScriptStruct_FSavedCharacterLevelData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSavedCharacterLevelData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSavedCharacterLevelData_Hash() { return 848062266U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
