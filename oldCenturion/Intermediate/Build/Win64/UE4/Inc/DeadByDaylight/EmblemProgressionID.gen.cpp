// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EmblemProgressionID.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEmblemProgressionID() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionID();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EEmblemProgressionType();
// End Cross Module References
class UScriptStruct* FEmblemProgressionID::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionID_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEmblemProgressionID, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("EmblemProgressionID"), sizeof(FEmblemProgressionID), Get_Z_Construct_UScriptStruct_FEmblemProgressionID_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FEmblemProgressionID>()
{
	return FEmblemProgressionID::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEmblemProgressionID(FEmblemProgressionID::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("EmblemProgressionID"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionID
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionID()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EmblemProgressionID")),new UScriptStruct::TCppStructOps<FEmblemProgressionID>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFEmblemProgressionID;
	struct Z_Construct_UScriptStruct_FEmblemProgressionID_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DescriptionsByQuality_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DescriptionsByQuality;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DescriptionsByQuality_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultDescription_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DefaultDescription;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EmblemProgressionType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_EmblemProgressionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_EmblemProgressionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/EmblemProgressionID.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEmblemProgressionID>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DescriptionsByQuality_MetaData[] = {
		{ "Category", "EmblemProgressionID" },
		{ "ModuleRelativePath", "Public/EmblemProgressionID.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DescriptionsByQuality = { "DescriptionsByQuality", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionID, DescriptionsByQuality), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DescriptionsByQuality_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DescriptionsByQuality_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DescriptionsByQuality_Inner = { "DescriptionsByQuality", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FEmblemProgressionDescriptionByQuality, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DefaultDescription_MetaData[] = {
		{ "Category", "EmblemProgressionID" },
		{ "ModuleRelativePath", "Public/EmblemProgressionID.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DefaultDescription = { "DefaultDescription", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionID, DefaultDescription), METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DefaultDescription_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DefaultDescription_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_EmblemProgressionType_MetaData[] = {
		{ "Category", "EmblemProgressionID" },
		{ "ModuleRelativePath", "Public/EmblemProgressionID.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_EmblemProgressionType = { "EmblemProgressionType", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FEmblemProgressionID, EmblemProgressionType), Z_Construct_UEnum_DeadByDaylight_EEmblemProgressionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_EmblemProgressionType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_EmblemProgressionType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_EmblemProgressionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DescriptionsByQuality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DescriptionsByQuality_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_DefaultDescription,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_EmblemProgressionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::NewProp_EmblemProgressionType_Underlying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"EmblemProgressionID",
		sizeof(FEmblemProgressionID),
		alignof(FEmblemProgressionID),
		Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEmblemProgressionID()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionID_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EmblemProgressionID"), sizeof(FEmblemProgressionID), Get_Z_Construct_UScriptStruct_FEmblemProgressionID_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEmblemProgressionID_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEmblemProgressionID_Hash() { return 2248903756U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
