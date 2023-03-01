// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AkObservedPlayerSoundLoop.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkObservedPlayerSoundLoop() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DBDAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkSoundLoop();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerPerspectiveComponent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkObservedPlayerSoundLoop::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AkObservedPlayerSoundLoop"), sizeof(FAkObservedPlayerSoundLoop), Get_Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAkObservedPlayerSoundLoop>()
{
	return FAkObservedPlayerSoundLoop::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkObservedPlayerSoundLoop(FAkObservedPlayerSoundLoop::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AkObservedPlayerSoundLoop"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAkObservedPlayerSoundLoop
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAkObservedPlayerSoundLoop()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkObservedPlayerSoundLoop")),new UScriptStruct::TCppStructOps<FAkObservedPlayerSoundLoop>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAkObservedPlayerSoundLoop;
	struct Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perspectiveComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__perspectiveComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AkObservedPlayerSoundLoop.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkObservedPlayerSoundLoop>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::NewProp__perspectiveComponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/AkObservedPlayerSoundLoop.h" },
	};
#endif
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::NewProp__perspectiveComponent = { "_perspectiveComponent", nullptr, (EPropertyFlags)0x0044000000082008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkObservedPlayerSoundLoop, _perspectiveComponent), Z_Construct_UClass_UPlayerPerspectiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::NewProp__perspectiveComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::NewProp__perspectiveComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::NewProp__perspectiveComponent,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FAkSoundLoop,
		&NewStructOps,
		"AkObservedPlayerSoundLoop",
		sizeof(FAkObservedPlayerSoundLoop),
		alignof(FAkObservedPlayerSoundLoop),
		Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkObservedPlayerSoundLoop"), sizeof(FAkObservedPlayerSoundLoop), Get_Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkObservedPlayerSoundLoop_Hash() { return 3328001420U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
