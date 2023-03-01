// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EmblemProgressionDescriptionByQuality.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblemProgressionDescriptionByQuality() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemQuality();
// End Cross Module References
class UScriptStruct* FEmblemProgressionDescriptionByQuality::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EmblemProgressionDescriptionByQuality"), sizeof(FEmblemProgressionDescriptionByQuality), Get_Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEmblemProgressionDescriptionByQuality>()
{
	return FEmblemProgressionDescriptionByQuality::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmblemProgressionDescriptionByQuality(FEmblemProgressionDescriptionByQuality::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EmblemProgressionDescriptionByQuality"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionDescriptionByQuality
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionDescriptionByQuality()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmblemProgressionDescriptionByQuality")),new UScriptStruct::TCppStructOps<FEmblemProgressionDescriptionByQuality>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionDescriptionByQuality;
	struct Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmblemQuality;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmblemQuality_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EmblemProgressionDescriptionByQuality.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmblemProgressionDescriptionByQuality>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "EmblemProgressionDescriptionByQuality" },
		{ "ModuleRelativePath", "Public/EmblemProgressionDescriptionByQuality.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionDescriptionByQuality, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_EmblemQuality_MetaData[] = {
		{ "Category", "EmblemProgressionDescriptionByQuality" },
		{ "ModuleRelativePath", "Public/EmblemProgressionDescriptionByQuality.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_EmblemQuality = { "EmblemQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionDescriptionByQuality, EmblemQuality), Z_Construct_UEnum_DeadByDaylight_EEmblemQuality, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_EmblemQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_EmblemQuality_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_EmblemQuality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_EmblemQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::NewProp_EmblemQuality_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EmblemProgressionDescriptionByQuality",
		sizeof(FEmblemProgressionDescriptionByQuality),
		alignof(FEmblemProgressionDescriptionByQuality),
		Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmblemProgressionDescriptionByQuality"), sizeof(FEmblemProgressionDescriptionByQuality), Get_Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality_Hash() { return 2842729002U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
