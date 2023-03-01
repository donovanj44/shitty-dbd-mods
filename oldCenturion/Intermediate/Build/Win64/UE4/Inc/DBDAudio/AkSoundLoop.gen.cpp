// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAudio/Public/AkSoundLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSoundLoop() {}
// Cross Module References
	DBDAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSoundLoop();
	UPackage* Z_Construct_UPackage__Script_DBDAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkSoundLoop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkSoundLoop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkSoundLoop, Z_Construct_UPackage__Script_DBDAudio(), TEXT("AkSoundLoop"), sizeof(FAkSoundLoop), Get_Z_Construct_UScriptStruct_FAkSoundLoop_Hash());
	}
	return Singleton;
}
template<> DBDAUDIO_API UScriptStruct* StaticStruct<FAkSoundLoop>()
{
	return FAkSoundLoop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkSoundLoop(FAkSoundLoop::StaticStruct, TEXT("/Script/DBDAudio"), TEXT("AkSoundLoop"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAudio_StaticRegisterNativesFAkSoundLoop
{
	FScriptStruct_DBDAudio_StaticRegisterNativesFAkSoundLoop()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkSoundLoop")),new UScriptStruct::TCppStructOps<FAkSoundLoop>);
	}
} ScriptStruct_DBDAudio_StaticRegisterNativesFAkSoundLoop;
	struct Z_Construct_UScriptStruct_FAkSoundLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__endEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__endEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__startEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__startEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSoundLoop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkSoundLoop.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkSoundLoop>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__endEvent_MetaData[] = {
		{ "Category", "AkSoundLoop" },
		{ "ModuleRelativePath", "Public/AkSoundLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__endEvent = { "_endEvent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSoundLoop, _endEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__endEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__endEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__startEvent_MetaData[] = {
		{ "Category", "AkSoundLoop" },
		{ "ModuleRelativePath", "Public/AkSoundLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__startEvent = { "_startEvent", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkSoundLoop, _startEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__startEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__startEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkSoundLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__endEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkSoundLoop_Statics::NewProp__startEvent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkSoundLoop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAudio,
		nullptr,
		&NewStructOps,
		"AkSoundLoop",
		sizeof(FAkSoundLoop),
		alignof(FAkSoundLoop),
		Z_Construct_UScriptStruct_FAkSoundLoop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSoundLoop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkSoundLoop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkSoundLoop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkSoundLoop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkSoundLoop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkSoundLoop"), sizeof(FAkSoundLoop), Get_Z_Construct_UScriptStruct_FAkSoundLoop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkSoundLoop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkSoundLoop_Hash() { return 184334834U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
