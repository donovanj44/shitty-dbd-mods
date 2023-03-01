// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Public/AkAudioEventTrackKey.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioEventTrackKey() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkAudioEventTrackKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAudioEventTrackKey, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAudioEventTrackKey"), sizeof(FAkAudioEventTrackKey), Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAudioEventTrackKey>()
{
	return FAkAudioEventTrackKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAudioEventTrackKey(FAkAudioEventTrackKey::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAudioEventTrackKey"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAudioEventTrackKey")),new UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAudioEventTrackKey;
	struct Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Time_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Time;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkAudioEventTrackKey.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAudioEventTrackKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "AkAudioEventTrackKey" },
		{ "ModuleRelativePath", "Public/AkAudioEventTrackKey.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioEventTrackKey, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "Category", "AkAudioEventTrackKey" },
		{ "ModuleRelativePath", "Public/AkAudioEventTrackKey.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioEventTrackKey, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time_MetaData[] = {
		{ "ModuleRelativePath", "Public/AkAudioEventTrackKey.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time = { "Time", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAudioEventTrackKey, Time), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_AkAudioEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::NewProp_Time,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAudioEventTrackKey",
		sizeof(FAkAudioEventTrackKey),
		alignof(FAkAudioEventTrackKey),
		Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAudioEventTrackKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAudioEventTrackKey"), sizeof(FAkAudioEventTrackKey), Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAudioEventTrackKey_Hash() { return 3683644045U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
