// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/DBDPlayerTotemPair.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerTotemPair() {}
// Cross Module References
	THEK25_API UScriptStruct* Z_Construct_UScriptStruct_FDBDPlayerTotemPair();
	UPackage* Z_Construct_UPackage__Script_TheK25();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATotem_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
class UScriptStruct* FDBDPlayerTotemPair::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK25_API uint32 Get_Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDBDPlayerTotemPair, Z_Construct_UPackage__Script_TheK25(), TEXT("DBDPlayerTotemPair"), sizeof(FDBDPlayerTotemPair), Get_Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Hash());
	}
	return Singleton;
}
template<> THEK25_API UScriptStruct* StaticStruct<FDBDPlayerTotemPair>()
{
	return FDBDPlayerTotemPair::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDBDPlayerTotemPair(FDBDPlayerTotemPair::StaticStruct, TEXT("/Script/TheK25"), TEXT("DBDPlayerTotemPair"), false, nullptr, nullptr);
static struct FScriptStruct_TheK25_StaticRegisterNativesFDBDPlayerTotemPair
{
	FScriptStruct_TheK25_StaticRegisterNativesFDBDPlayerTotemPair()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DBDPlayerTotemPair")),new UScriptStruct::TCppStructOps<FDBDPlayerTotemPair>);
	}
} ScriptStruct_TheK25_StaticRegisterNativesFDBDPlayerTotemPair;
	struct Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Totem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Totem;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Player_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Player;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DBDPlayerTotemPair.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDBDPlayerTotemPair>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Totem_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerTotemPair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Totem = { "Totem", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDPlayerTotemPair, Totem), Z_Construct_UClass_ATotem_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Totem_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Totem_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Player_MetaData[] = {
		{ "ModuleRelativePath", "Public/DBDPlayerTotemPair.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Player = { "Player", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDBDPlayerTotemPair, Player), Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Player_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Player_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Totem,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::NewProp_Player,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
		nullptr,
		&NewStructOps,
		"DBDPlayerTotemPair",
		sizeof(FDBDPlayerTotemPair),
		alignof(FDBDPlayerTotemPair),
		Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDBDPlayerTotemPair()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK25();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DBDPlayerTotemPair"), sizeof(FDBDPlayerTotemPair), Get_Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDBDPlayerTotemPair_Hash() { return 2731442982U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
