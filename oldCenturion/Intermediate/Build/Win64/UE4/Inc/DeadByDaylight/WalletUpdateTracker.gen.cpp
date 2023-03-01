// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/WalletUpdateTracker.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalletUpdateTracker() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FWalletUpdateTracker();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FWalletUpdateTracker::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FWalletUpdateTracker_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FWalletUpdateTracker, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("WalletUpdateTracker"), sizeof(FWalletUpdateTracker), Get_Z_Construct_UScriptStruct_FWalletUpdateTracker_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FWalletUpdateTracker>()
{
	return FWalletUpdateTracker::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FWalletUpdateTracker(FWalletUpdateTracker::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("WalletUpdateTracker"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFWalletUpdateTracker
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFWalletUpdateTracker()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("WalletUpdateTracker")),new UScriptStruct::TCppStructOps<FWalletUpdateTracker>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFWalletUpdateTracker;
	struct Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__walletChangeMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__walletChangeMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp__walletChangeMap_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__walletChangeMap_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WalletUpdateTracker.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWalletUpdateTracker>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap_MetaData[] = {
		{ "ModuleRelativePath", "Public/WalletUpdateTracker.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap = { "_walletChangeMap", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FWalletUpdateTracker, _walletChangeMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap_Key_KeyProp = { "_walletChangeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap_ValueProp = { "_walletChangeMap", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::NewProp__walletChangeMap_ValueProp,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"WalletUpdateTracker",
		sizeof(FWalletUpdateTracker),
		alignof(FWalletUpdateTracker),
		Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FWalletUpdateTracker()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FWalletUpdateTracker_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("WalletUpdateTracker"), sizeof(FWalletUpdateTracker), Get_Z_Construct_UScriptStruct_FWalletUpdateTracker_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FWalletUpdateTracker_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FWalletUpdateTracker_Hash() { return 3268329380U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
