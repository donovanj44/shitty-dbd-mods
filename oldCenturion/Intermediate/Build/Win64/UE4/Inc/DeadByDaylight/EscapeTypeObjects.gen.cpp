// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EscapeTypeObjects.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeTypeObjects() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEscapeTypeObjects();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EscapeStrategyType();
// End Cross Module References
class UScriptStruct* FEscapeTypeObjects::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEscapeTypeObjects_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEscapeTypeObjects, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EscapeTypeObjects"), sizeof(FEscapeTypeObjects), Get_Z_Construct_UScriptStruct_FEscapeTypeObjects_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEscapeTypeObjects>()
{
	return FEscapeTypeObjects::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEscapeTypeObjects(FEscapeTypeObjects::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EscapeTypeObjects"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEscapeTypeObjects
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEscapeTypeObjects()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EscapeTypeObjects")),new UScriptStruct::TCppStructOps<FEscapeTypeObjects>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEscapeTypeObjects;
	struct Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EscapeObjects_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_EscapeObjects;
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp_EscapeObjects_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EscapeTypeObjects.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEscapeTypeObjects>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_EscapeObjects_MetaData[] = {
		{ "Category", "EscapeTypeObjects" },
		{ "ModuleRelativePath", "Public/EscapeTypeObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_EscapeObjects = { "EscapeObjects", nullptr, (EPropertyFlags)0x0014000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEscapeTypeObjects, EscapeObjects), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_EscapeObjects_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_EscapeObjects_MetaData)) };
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_EscapeObjects_Inner = { "EscapeObjects", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "EscapeTypeObjects" },
		{ "ModuleRelativePath", "Public/EscapeTypeObjects.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEscapeTypeObjects, Type), Z_Construct_UEnum_DeadByDaylight_EscapeStrategyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_EscapeObjects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_EscapeObjects_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EscapeTypeObjects",
		sizeof(FEscapeTypeObjects),
		alignof(FEscapeTypeObjects),
		Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEscapeTypeObjects()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEscapeTypeObjects_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EscapeTypeObjects"), sizeof(FEscapeTypeObjects), Get_Z_Construct_UScriptStruct_FEscapeTypeObjects_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEscapeTypeObjects_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEscapeTypeObjects_Hash() { return 4132088635U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
