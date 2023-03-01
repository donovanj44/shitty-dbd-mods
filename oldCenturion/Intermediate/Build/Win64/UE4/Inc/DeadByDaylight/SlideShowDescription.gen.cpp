// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SlideShowDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSlideShowDescription() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSlideShowDescription();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EPerkCategory();
// End Cross Module References
class UScriptStruct* FSlideShowDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSlideShowDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSlideShowDescription, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SlideShowDescription"), sizeof(FSlideShowDescription), Get_Z_Construct_UScriptStruct_FSlideShowDescription_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSlideShowDescription>()
{
	return FSlideShowDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSlideShowDescription(FSlideShowDescription::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SlideShowDescription"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSlideShowDescription
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSlideShowDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SlideShowDescription")),new UScriptStruct::TCppStructOps<FSlideShowDescription>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSlideShowDescription;
	struct Z_Construct_UScriptStruct_FSlideShowDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkCategory_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PerkCategory;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PerkCategory_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PerkCategory_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ImageFilePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ImageFilePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Playstyle_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Playstyle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Overview_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Overview;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Id_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Id;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlideShowDescription_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SlideShowDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSlideShowDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory_MetaData[] = {
		{ "Category", "SlideShowDescription" },
		{ "ModuleRelativePath", "Public/SlideShowDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory = { "PerkCategory", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlideShowDescription, PerkCategory), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory_MetaData)) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory_Inner = { "PerkCategory", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_DeadByDaylight_EPerkCategory, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_ImageFilePath_MetaData[] = {
		{ "Category", "SlideShowDescription" },
		{ "ModuleRelativePath", "Public/SlideShowDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_ImageFilePath = { "ImageFilePath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlideShowDescription, ImageFilePath), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_ImageFilePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_ImageFilePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Playstyle_MetaData[] = {
		{ "Category", "SlideShowDescription" },
		{ "ModuleRelativePath", "Public/SlideShowDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Playstyle = { "Playstyle", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlideShowDescription, Playstyle), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Playstyle_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Playstyle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Overview_MetaData[] = {
		{ "Category", "SlideShowDescription" },
		{ "ModuleRelativePath", "Public/SlideShowDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Overview = { "Overview", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlideShowDescription, Overview), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Overview_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Overview_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Id_MetaData[] = {
		{ "Category", "SlideShowDescription" },
		{ "ModuleRelativePath", "Public/SlideShowDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Id = { "Id", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSlideShowDescription, Id), METADATA_PARAMS(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Id_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Id_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSlideShowDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_PerkCategory_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_ImageFilePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Playstyle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Overview,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSlideShowDescription_Statics::NewProp_Id,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSlideShowDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"SlideShowDescription",
		sizeof(FSlideShowDescription),
		alignof(FSlideShowDescription),
		Z_Construct_UScriptStruct_FSlideShowDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSlideShowDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSlideShowDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSlideShowDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SlideShowDescription"), sizeof(FSlideShowDescription), Get_Z_Construct_UScriptStruct_FSlideShowDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSlideShowDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSlideShowDescription_Hash() { return 100553654U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
