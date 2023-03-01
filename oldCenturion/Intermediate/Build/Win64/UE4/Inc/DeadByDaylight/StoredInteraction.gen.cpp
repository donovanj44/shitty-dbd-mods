// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/StoredInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStoredInteraction() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FStoredInteraction();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FInteractionPlayerProperties();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition_NoRegister();
// End Cross Module References
class UScriptStruct* FStoredInteraction::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FStoredInteraction_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStoredInteraction, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("StoredInteraction"), sizeof(FStoredInteraction), Get_Z_Construct_UScriptStruct_FStoredInteraction_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FStoredInteraction>()
{
	return FStoredInteraction::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStoredInteraction(FStoredInteraction::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("StoredInteraction"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoredInteraction
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFStoredInteraction()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StoredInteraction")),new UScriptStruct::TCppStructOps<FStoredInteraction>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFStoredInteraction;
	struct Z_Construct_UScriptStruct_FStoredInteraction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__playerProperties_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__playerProperties;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__inputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__inputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__interaction_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__interaction;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoredInteraction_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StoredInteraction.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStoredInteraction>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__playerProperties_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoredInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__playerProperties = { "_playerProperties", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoredInteraction, _playerProperties), Z_Construct_UScriptStruct_FInteractionPlayerProperties, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__playerProperties_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__playerProperties_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__inputType_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoredInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__inputType = { "_inputType", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoredInteraction, _inputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__inputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__inputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__inputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__interaction_MetaData[] = {
		{ "ModuleRelativePath", "Public/StoredInteraction.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__interaction = { "_interaction", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStoredInteraction, _interaction), Z_Construct_UClass_UInteractionDefinition_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__interaction_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__interaction_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStoredInteraction_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__playerProperties,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__inputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__inputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStoredInteraction_Statics::NewProp__interaction,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStoredInteraction_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"StoredInteraction",
		sizeof(FStoredInteraction),
		alignof(FStoredInteraction),
		Z_Construct_UScriptStruct_FStoredInteraction_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredInteraction_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStoredInteraction_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStoredInteraction_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStoredInteraction()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStoredInteraction_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StoredInteraction"), sizeof(FStoredInteraction), Get_Z_Construct_UScriptStruct_FStoredInteraction_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStoredInteraction_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStoredInteraction_Hash() { return 4087364581U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
