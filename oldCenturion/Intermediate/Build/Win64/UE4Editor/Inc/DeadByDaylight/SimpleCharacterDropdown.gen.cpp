// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SimpleCharacterDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSimpleCharacterDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSimpleCharacterDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSimpleCharacterDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSimpleCharacterDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SimpleCharacterDropdown"), sizeof(FSimpleCharacterDropdown), Get_Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSimpleCharacterDropdown>()
{
	return FSimpleCharacterDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSimpleCharacterDropdown(FSimpleCharacterDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SimpleCharacterDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSimpleCharacterDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSimpleCharacterDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SimpleCharacterDropdown")),new UScriptStruct::TCppStructOps<FSimpleCharacterDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSimpleCharacterDropdown;
	struct Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CharacterID_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CharacterID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SimpleCharacterDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSimpleCharacterDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::NewProp_CharacterID_MetaData[] = {
		{ "Category", "SimpleCharacterDropdown" },
		{ "ModuleRelativePath", "Public/SimpleCharacterDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::NewProp_CharacterID = { "CharacterID", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSimpleCharacterDropdown, CharacterID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::NewProp_CharacterID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::NewProp_CharacterID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::NewProp_CharacterID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SimpleCharacterDropdown",
		sizeof(FSimpleCharacterDropdown),
		alignof(FSimpleCharacterDropdown),
		Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSimpleCharacterDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SimpleCharacterDropdown"), sizeof(FSimpleCharacterDropdown), Get_Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSimpleCharacterDropdown_Hash() { return 508234261U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
