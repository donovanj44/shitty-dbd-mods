// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KillerClosetActorsTypes.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKillerClosetActorsTypes() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FKillerClosetActorsTypes();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FKillerClosetActorsTypes::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKillerClosetActorsTypes, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("KillerClosetActorsTypes"), sizeof(FKillerClosetActorsTypes), Get_Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FKillerClosetActorsTypes>()
{
	return FKillerClosetActorsTypes::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKillerClosetActorsTypes(FKillerClosetActorsTypes::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("KillerClosetActorsTypes"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerClosetActorsTypes
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerClosetActorsTypes()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KillerClosetActorsTypes")),new UScriptStruct::TCppStructOps<FKillerClosetActorsTypes>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFKillerClosetActorsTypes;
	struct Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ClosetActorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_ClosetActorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/KillerClosetActorsTypes.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKillerClosetActorsTypes>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::NewProp_ClosetActorClass_MetaData[] = {
		{ "Category", "KillerClosetActorsTypes" },
		{ "ModuleRelativePath", "Public/KillerClosetActorsTypes.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::NewProp_ClosetActorClass = { "ClosetActorClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKillerClosetActorsTypes, ClosetActorClass), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::NewProp_ClosetActorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::NewProp_ClosetActorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::NewProp_ClosetActorClass,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"KillerClosetActorsTypes",
		sizeof(FKillerClosetActorsTypes),
		alignof(FKillerClosetActorsTypes),
		Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKillerClosetActorsTypes()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KillerClosetActorsTypes"), sizeof(FKillerClosetActorsTypes), Get_Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKillerClosetActorsTypes_Hash() { return 1928050382U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
