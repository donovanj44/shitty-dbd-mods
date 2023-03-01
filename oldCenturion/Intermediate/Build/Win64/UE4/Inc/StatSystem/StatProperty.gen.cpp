// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "StatSystem/Public/StatProperty.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatProperty() {}
// Cross Module References
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FStatProperty();
	UPackage* Z_Construct_UPackage__Script_StatSystem();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FBaseStat();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
class UScriptStruct* FStatProperty::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern STATSYSTEM_API uint32 Get_Z_Construct_UScriptStruct_FStatProperty_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FStatProperty, Z_Construct_UPackage__Script_StatSystem(), TEXT("StatProperty"), sizeof(FStatProperty), Get_Z_Construct_UScriptStruct_FStatProperty_Hash());
	}
	return Singleton;
}
template<> STATSYSTEM_API UScriptStruct* StaticStruct<FStatProperty>()
{
	return FStatProperty::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FStatProperty(FStatProperty::StaticStruct, TEXT("/Script/StatSystem"), TEXT("StatProperty"), false, nullptr, nullptr);
static struct FScriptStruct_StatSystem_StaticRegisterNativesFStatProperty
{
	FScriptStruct_StatSystem_StaticRegisterNativesFStatProperty()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("StatProperty")),new UScriptStruct::TCppStructOps<FStatProperty>);
	}
} ScriptStruct_StatSystem_StaticRegisterNativesFStatProperty;
	struct Z_Construct_UScriptStruct_FStatProperty_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tunableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tunableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nonTunableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__nonTunableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__useTunable_MetaData[];
#endif
		static void NewProp__useTunable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useTunable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatProperty_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/StatProperty.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FStatProperty_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FStatProperty>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__tunableValue_MetaData[] = {
		{ "Category", "StatProperty" },
		{ "ModuleRelativePath", "Public/StatProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__tunableValue = { "_tunableValue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatProperty, _tunableValue), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__tunableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__tunableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__nonTunableValue_MetaData[] = {
		{ "Category", "StatProperty" },
		{ "ModuleRelativePath", "Public/StatProperty.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__nonTunableValue = { "_nonTunableValue", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FStatProperty, _nonTunableValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__nonTunableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__nonTunableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__useTunable_MetaData[] = {
		{ "Category", "StatProperty" },
		{ "ModuleRelativePath", "Public/StatProperty.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__useTunable_SetBit(void* Obj)
	{
		((FStatProperty*)Obj)->_useTunable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__useTunable = { "_useTunable", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FStatProperty), &Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__useTunable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__useTunable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__useTunable_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FStatProperty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__tunableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__nonTunableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FStatProperty_Statics::NewProp__useTunable,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FStatProperty_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_StatSystem,
		Z_Construct_UScriptStruct_FBaseStat,
		&NewStructOps,
		"StatProperty",
		sizeof(FStatProperty),
		alignof(FStatProperty),
		Z_Construct_UScriptStruct_FStatProperty_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatProperty_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FStatProperty_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FStatProperty_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FStatProperty()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FStatProperty_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_StatSystem();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("StatProperty"), sizeof(FStatProperty), Get_Z_Construct_UScriptStruct_FStatProperty_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FStatProperty_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FStatProperty_Hash() { return 3846368930U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
