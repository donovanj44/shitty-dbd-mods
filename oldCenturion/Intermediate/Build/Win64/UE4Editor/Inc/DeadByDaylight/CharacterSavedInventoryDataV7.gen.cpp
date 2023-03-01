// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterSavedInventoryDataV7.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterSavedInventoryDataV7() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FCharacterSavedInventoryDataV7::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterSavedInventoryDataV7"), sizeof(FCharacterSavedInventoryDataV7), Get_Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterSavedInventoryDataV7>()
{
	return FCharacterSavedInventoryDataV7::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterSavedInventoryDataV7(FCharacterSavedInventoryDataV7::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterSavedInventoryDataV7"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedInventoryDataV7
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedInventoryDataV7()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterSavedInventoryDataV7")),new UScriptStruct::TCppStructOps<FCharacterSavedInventoryDataV7>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterSavedInventoryDataV7;
	struct Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_I_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_I;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Num_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Num;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CharacterSavedInventoryDataV7.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterSavedInventoryDataV7>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_I_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedInventoryDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_I = { "I", nullptr, (EPropertyFlags)0x0010000001000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedInventoryDataV7, I), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_I_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_I_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Num_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedInventoryDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Num = { "Num", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedInventoryDataV7, Num), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Num_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Num_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Id_MetaData[] = {
		{ "ModuleRelativePath", "Public/CharacterSavedInventoryDataV7.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterSavedInventoryDataV7, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_I,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Num,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"CharacterSavedInventoryDataV7",
		sizeof(FCharacterSavedInventoryDataV7),
		alignof(FCharacterSavedInventoryDataV7),
		Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterSavedInventoryDataV7"), sizeof(FCharacterSavedInventoryDataV7), Get_Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterSavedInventoryDataV7_Hash() { return 2416094573U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
