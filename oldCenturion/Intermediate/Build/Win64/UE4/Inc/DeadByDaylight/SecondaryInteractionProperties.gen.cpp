// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SecondaryInteractionProperties.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondaryInteractionProperties() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSecondaryInteractionProperties();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EInputInteractionType();
// End Cross Module References
class UScriptStruct* FSecondaryInteractionProperties::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSecondaryInteractionProperties, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SecondaryInteractionProperties"), sizeof(FSecondaryInteractionProperties), Get_Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSecondaryInteractionProperties>()
{
	return FSecondaryInteractionProperties::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSecondaryInteractionProperties(FSecondaryInteractionProperties::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SecondaryInteractionProperties"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSecondaryInteractionProperties
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSecondaryInteractionProperties()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SecondaryInteractionProperties")),new UScriptStruct::TCppStructOps<FSecondaryInteractionProperties>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSecondaryInteractionProperties;
	struct Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShouldShow_MetaData[];
#endif
		static void NewProp_ShouldShow_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ShouldShow;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryInteractionDescriptionText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SecondaryInteractionDescriptionText;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryInteractionInputType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryInteractionInputType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryInteractionInputType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryInteractionID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SecondaryInteractionID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SecondaryInteractionProperties.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSecondaryInteractionProperties>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_ShouldShow_MetaData[] = {
		{ "Category", "SecondaryInteractionProperties" },
		{ "ModuleRelativePath", "Public/SecondaryInteractionProperties.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_ShouldShow_SetBit(void* Obj)
	{
		((FSecondaryInteractionProperties*)Obj)->ShouldShow = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_ShouldShow = { "ShouldShow", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSecondaryInteractionProperties), &Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_ShouldShow_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_ShouldShow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_ShouldShow_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionDescriptionText_MetaData[] = {
		{ "Category", "SecondaryInteractionProperties" },
		{ "ModuleRelativePath", "Public/SecondaryInteractionProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionDescriptionText = { "SecondaryInteractionDescriptionText", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecondaryInteractionProperties, SecondaryInteractionDescriptionText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionDescriptionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionDescriptionText_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionInputType_MetaData[] = {
		{ "Category", "SecondaryInteractionProperties" },
		{ "ModuleRelativePath", "Public/SecondaryInteractionProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionInputType = { "SecondaryInteractionInputType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecondaryInteractionProperties, SecondaryInteractionInputType), Z_Construct_UEnum_DeadByDaylight_EInputInteractionType, METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionInputType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionInputType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionInputType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionID_MetaData[] = {
		{ "Category", "SecondaryInteractionProperties" },
		{ "ModuleRelativePath", "Public/SecondaryInteractionProperties.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionID = { "SecondaryInteractionID", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSecondaryInteractionProperties, SecondaryInteractionID), METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_ShouldShow,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionDescriptionText,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionInputType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionInputType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::NewProp_SecondaryInteractionID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SecondaryInteractionProperties",
		sizeof(FSecondaryInteractionProperties),
		alignof(FSecondaryInteractionProperties),
		Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSecondaryInteractionProperties()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SecondaryInteractionProperties"), sizeof(FSecondaryInteractionProperties), Get_Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSecondaryInteractionProperties_Hash() { return 1442976296U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
