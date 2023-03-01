// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FXWidgetPlayer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFXWidgetPlayer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FFXWidgetPlayer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FFXWidgetPlayer::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FFXWidgetPlayer_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FFXWidgetPlayer, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("FXWidgetPlayer"), sizeof(FFXWidgetPlayer), Get_Z_Construct_UScriptStruct_FFXWidgetPlayer_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FFXWidgetPlayer>()
{
	return FFXWidgetPlayer::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FFXWidgetPlayer(FFXWidgetPlayer::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("FXWidgetPlayer"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFFXWidgetPlayer
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFFXWidgetPlayer()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("FXWidgetPlayer")),new UScriptStruct::TCppStructOps<FFXWidgetPlayer>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFFXWidgetPlayer;
	struct Z_Construct_UScriptStruct_FFXWidgetPlayer_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FFXWidgetPlayer_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/FXWidgetPlayer.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FFXWidgetPlayer_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FFXWidgetPlayer>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FFXWidgetPlayer_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"FXWidgetPlayer",
		sizeof(FFXWidgetPlayer),
		alignof(FFXWidgetPlayer),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FFXWidgetPlayer_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FFXWidgetPlayer_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FFXWidgetPlayer()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FFXWidgetPlayer_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("FXWidgetPlayer"), sizeof(FFXWidgetPlayer), Get_Z_Construct_UScriptStruct_FFXWidgetPlayer_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FFXWidgetPlayer_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FFXWidgetPlayer_Hash() { return 3048040964U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
