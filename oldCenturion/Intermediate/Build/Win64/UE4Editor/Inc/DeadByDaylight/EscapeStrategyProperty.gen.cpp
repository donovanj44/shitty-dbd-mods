// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EscapeStrategyProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeStrategyProperty() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEscapeStrategyProperty();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EscapeStrategyType();
// End Cross Module References
class UScriptStruct* FEscapeStrategyProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEscapeStrategyProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEscapeStrategyProperty, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EscapeStrategyProperty"), sizeof(FEscapeStrategyProperty), Get_Z_Construct_UScriptStruct_FEscapeStrategyProperty_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEscapeStrategyProperty>()
{
	return FEscapeStrategyProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEscapeStrategyProperty(FEscapeStrategyProperty::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EscapeStrategyProperty"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEscapeStrategyProperty
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEscapeStrategyProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EscapeStrategyProperty")),new UScriptStruct::TCppStructOps<FEscapeStrategyProperty>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEscapeStrategyProperty;
	struct Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Population_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Population;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Type;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Type_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EscapeStrategyProperty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEscapeStrategyProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "EscapeStrategyProperty" },
		{ "ModuleRelativePath", "Public/EscapeStrategyProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEscapeStrategyProperty, Weight), METADATA_PARAMS(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Population_MetaData[] = {
		{ "Category", "EscapeStrategyProperty" },
		{ "ModuleRelativePath", "Public/EscapeStrategyProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Population = { "Population", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEscapeStrategyProperty, Population), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Population_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Population_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Type_MetaData[] = {
		{ "Category", "EscapeStrategyProperty" },
		{ "ModuleRelativePath", "Public/EscapeStrategyProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEscapeStrategyProperty, Type), Z_Construct_UEnum_DeadByDaylight_EscapeStrategyType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Type_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Population,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::NewProp_Type_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EscapeStrategyProperty",
		sizeof(FEscapeStrategyProperty),
		alignof(FEscapeStrategyProperty),
		Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEscapeStrategyProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEscapeStrategyProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EscapeStrategyProperty"), sizeof(FEscapeStrategyProperty), Get_Z_Construct_UScriptStruct_FEscapeStrategyProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEscapeStrategyProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEscapeStrategyProperty_Hash() { return 907257176U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
