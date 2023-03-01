// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SubtitlesDescription.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSubtitlesDescription() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesDescription();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBase();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FSubtitlesDescription::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSubtitlesDescription_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubtitlesDescription, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SubtitlesDescription"), sizeof(FSubtitlesDescription), Get_Z_Construct_UScriptStruct_FSubtitlesDescription_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSubtitlesDescription>()
{
	return FSubtitlesDescription::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSubtitlesDescription(FSubtitlesDescription::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SubtitlesDescription"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSubtitlesDescription
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSubtitlesDescription()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SubtitlesDescription")),new UScriptStruct::TCppStructOps<FSubtitlesDescription>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSubtitlesDescription;
	struct Z_Construct_UScriptStruct_FSubtitlesDescription_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SubtitlesText_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_SubtitlesText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SubtitlesDescription.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubtitlesDescription>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_AudioEvent_MetaData[] = {
		{ "Category", "SubtitlesDescription" },
		{ "ModuleRelativePath", "Public/SubtitlesDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubtitlesDescription, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_AudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_AudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_SubtitlesText_MetaData[] = {
		{ "Category", "SubtitlesDescription" },
		{ "ModuleRelativePath", "Public/SubtitlesDescription.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_SubtitlesText = { "SubtitlesText", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSubtitlesDescription, SubtitlesText), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_SubtitlesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_SubtitlesText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_AudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::NewProp_SubtitlesText,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FDBDTableRowBase,
		&NewStructOps,
		"SubtitlesDescription",
		sizeof(FSubtitlesDescription),
		alignof(FSubtitlesDescription),
		Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesDescription()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSubtitlesDescription_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SubtitlesDescription"), sizeof(FSubtitlesDescription), Get_Z_Construct_UScriptStruct_FSubtitlesDescription_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSubtitlesDescription_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSubtitlesDescription_Hash() { return 1930487397U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
