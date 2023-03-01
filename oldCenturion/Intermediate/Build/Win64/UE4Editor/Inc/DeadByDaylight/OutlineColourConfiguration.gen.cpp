// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OutlineColourConfiguration.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutlineColourConfiguration() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FOutlineColourConfiguration();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FOutlineColourConfiguration::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FOutlineColourConfiguration_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOutlineColourConfiguration, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("OutlineColourConfiguration"), sizeof(FOutlineColourConfiguration), Get_Z_Construct_UScriptStruct_FOutlineColourConfiguration_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FOutlineColourConfiguration>()
{
	return FOutlineColourConfiguration::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOutlineColourConfiguration(FOutlineColourConfiguration::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("OutlineColourConfiguration"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutlineColourConfiguration
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFOutlineColourConfiguration()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OutlineColourConfiguration")),new UScriptStruct::TCppStructOps<FOutlineColourConfiguration>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFOutlineColourConfiguration;
	struct Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ColourValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ColourValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OutlineColourConfiguration.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOutlineColourConfiguration>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::NewProp_ColourValue_MetaData[] = {
		{ "Category", "OutlineColourConfiguration" },
		{ "ModuleRelativePath", "Public/OutlineColourConfiguration.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::NewProp_ColourValue = { "ColourValue", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOutlineColourConfiguration, ColourValue), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::NewProp_ColourValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::NewProp_ColourValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::NewProp_ColourValue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"OutlineColourConfiguration",
		sizeof(FOutlineColourConfiguration),
		alignof(FOutlineColourConfiguration),
		Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOutlineColourConfiguration()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOutlineColourConfiguration_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OutlineColourConfiguration"), sizeof(FOutlineColourConfiguration), Get_Z_Construct_UScriptStruct_FOutlineColourConfiguration_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOutlineColourConfiguration_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOutlineColourConfiguration_Hash() { return 3240236018U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
