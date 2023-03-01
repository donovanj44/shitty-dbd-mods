// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/MenuCharacterUIData.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMenuCharacterUIData() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FMenuCharacterUIData();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FMenuCharacterUIData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FMenuCharacterUIData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMenuCharacterUIData, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("MenuCharacterUIData"), sizeof(FMenuCharacterUIData), Get_Z_Construct_UScriptStruct_FMenuCharacterUIData_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FMenuCharacterUIData>()
{
	return FMenuCharacterUIData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMenuCharacterUIData(FMenuCharacterUIData::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("MenuCharacterUIData"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFMenuCharacterUIData
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFMenuCharacterUIData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MenuCharacterUIData")),new UScriptStruct::TCppStructOps<FMenuCharacterUIData>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFMenuCharacterUIData;
	struct Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offsetMainMenuBackwardPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_offsetMainMenuBackwardPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_offsetMainMenuForwardPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_offsetMainMenuForwardPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/MenuCharacterUIData.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMenuCharacterUIData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuBackwardPosition_MetaData[] = {
		{ "Category", "MenuCharacterUIData" },
		{ "ModuleRelativePath", "Public/MenuCharacterUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuBackwardPosition = { "offsetMainMenuBackwardPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuCharacterUIData, offsetMainMenuBackwardPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuBackwardPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuBackwardPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuForwardPosition_MetaData[] = {
		{ "Category", "MenuCharacterUIData" },
		{ "ModuleRelativePath", "Public/MenuCharacterUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuForwardPosition = { "offsetMainMenuForwardPosition", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuCharacterUIData, offsetMainMenuForwardPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuForwardPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuForwardPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_CharacterIndex_MetaData[] = {
		{ "Category", "MenuCharacterUIData" },
		{ "ModuleRelativePath", "Public/MenuCharacterUIData.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_CharacterIndex = { "CharacterIndex", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMenuCharacterUIData, CharacterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_CharacterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_CharacterIndex_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuBackwardPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_offsetMainMenuForwardPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::NewProp_CharacterIndex,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"MenuCharacterUIData",
		sizeof(FMenuCharacterUIData),
		alignof(FMenuCharacterUIData),
		Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMenuCharacterUIData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMenuCharacterUIData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MenuCharacterUIData"), sizeof(FMenuCharacterUIData), Get_Z_Construct_UScriptStruct_FMenuCharacterUIData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMenuCharacterUIData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMenuCharacterUIData_Hash() { return 3936523476U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
