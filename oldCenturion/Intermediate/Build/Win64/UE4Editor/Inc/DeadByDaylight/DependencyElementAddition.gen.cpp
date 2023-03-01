// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DependencyElementAddition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDependencyElementAddition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDependencyElementAddition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
class UScriptStruct* FDependencyElementAddition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDependencyElementAddition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDependencyElementAddition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DependencyElementAddition"), sizeof(FDependencyElementAddition), Get_Z_Construct_UScriptStruct_FDependencyElementAddition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDependencyElementAddition>()
{
	return FDependencyElementAddition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDependencyElementAddition(FDependencyElementAddition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DependencyElementAddition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDependencyElementAddition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDependencyElementAddition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DependencyElementAddition")),new UScriptStruct::TCppStructOps<FDependencyElementAddition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDependencyElementAddition;
	struct Z_Construct_UScriptStruct_FDependencyElementAddition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numberToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numberToAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__type_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__object_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftClassPropertyParams NewProp__object;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DependencyElementAddition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDependencyElementAddition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__numberToAdd_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DependencyElementAddition" },
		{ "ModuleRelativePath", "Public/DependencyElementAddition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__numberToAdd = { "_numberToAdd", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDependencyElementAddition, _numberToAdd), METADATA_PARAMS(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__numberToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__numberToAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__type_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DependencyElementAddition" },
		{ "ModuleRelativePath", "Public/DependencyElementAddition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__type = { "_type", nullptr, (EPropertyFlags)0x0040000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDependencyElementAddition, _type), Z_Construct_UEnum_DeadByDaylight_ETileSpawnPointType, METADATA_PARAMS(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__object_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "DependencyElementAddition" },
		{ "ModuleRelativePath", "Public/DependencyElementAddition.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftClassPropertyParams Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__object = { "_object", nullptr, (EPropertyFlags)0x0044000000000015, UE4CodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDependencyElementAddition, _object), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__object_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__object_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__numberToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__type_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::NewProp__object,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DependencyElementAddition",
		sizeof(FDependencyElementAddition),
		alignof(FDependencyElementAddition),
		Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDependencyElementAddition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDependencyElementAddition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DependencyElementAddition"), sizeof(FDependencyElementAddition), Get_Z_Construct_UScriptStruct_FDependencyElementAddition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDependencyElementAddition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDependencyElementAddition_Hash() { return 2179304823U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
