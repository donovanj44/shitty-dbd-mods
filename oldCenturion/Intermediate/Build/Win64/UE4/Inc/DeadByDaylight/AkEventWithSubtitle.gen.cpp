// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AkEventWithSubtitle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkEventWithSubtitle() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAkEventWithSubtitle();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkEventWithSubtitle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAkEventWithSubtitle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkEventWithSubtitle, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AkEventWithSubtitle"), sizeof(FAkEventWithSubtitle), Get_Z_Construct_UScriptStruct_FAkEventWithSubtitle_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAkEventWithSubtitle>()
{
	return FAkEventWithSubtitle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkEventWithSubtitle(FAkEventWithSubtitle::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AkEventWithSubtitle"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAkEventWithSubtitle
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAkEventWithSubtitle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkEventWithSubtitle")),new UScriptStruct::TCppStructOps<FAkEventWithSubtitle>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAkEventWithSubtitle;
	struct Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasSubtitles_MetaData[];
#endif
		static void NewProp_HasSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Weight_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Weight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkEventWithSubtitle.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkEventWithSubtitle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_HasSubtitles_MetaData[] = {
		{ "Category", "AkEventWithSubtitle" },
		{ "ModuleRelativePath", "Public/AkEventWithSubtitle.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_HasSubtitles_SetBit(void* Obj)
	{
		((FAkEventWithSubtitle*)Obj)->HasSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_HasSubtitles = { "HasSubtitles", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkEventWithSubtitle), &Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_HasSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_HasSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_HasSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_Weight_MetaData[] = {
		{ "Category", "AkEventWithSubtitle" },
		{ "ModuleRelativePath", "Public/AkEventWithSubtitle.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_Weight = { "Weight", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkEventWithSubtitle, Weight), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_Weight_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_Weight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_AudioEvent_MetaData[] = {
		{ "Category", "AkEventWithSubtitle" },
		{ "ModuleRelativePath", "Public/AkEventWithSubtitle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_AudioEvent = { "AudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkEventWithSubtitle, AudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_AudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_AudioEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_HasSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_Weight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::NewProp_AudioEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AkEventWithSubtitle",
		sizeof(FAkEventWithSubtitle),
		alignof(FAkEventWithSubtitle),
		Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkEventWithSubtitle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkEventWithSubtitle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkEventWithSubtitle"), sizeof(FAkEventWithSubtitle), Get_Z_Construct_UScriptStruct_FAkEventWithSubtitle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkEventWithSubtitle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkEventWithSubtitle_Hash() { return 1374869112U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
