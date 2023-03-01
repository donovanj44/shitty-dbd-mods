// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/CustomerSupportClientLoginAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomerSupportClientLoginAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FCustomerSupportClientLoginAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("CustomerSupportClientLoginAnalytics"), sizeof(FCustomerSupportClientLoginAnalytics), Get_Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FCustomerSupportClientLoginAnalytics>()
{
	return FCustomerSupportClientLoginAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomerSupportClientLoginAnalytics(FCustomerSupportClientLoginAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("CustomerSupportClientLoginAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFCustomerSupportClientLoginAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFCustomerSupportClientLoginAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomerSupportClientLoginAnalytics")),new UScriptStruct::TCppStructOps<FCustomerSupportClientLoginAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFCustomerSupportClientLoginAnalytics;
	struct Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Provider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Provider;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CustomerSupportClientLoginAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomerSupportClientLoginAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_Provider_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomerSupportClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_Provider = { "Provider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomerSupportClientLoginAnalytics, Provider), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_Provider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_Provider_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_PlayerName_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomerSupportClientLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_PlayerName = { "PlayerName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomerSupportClientLoginAnalytics, PlayerName), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_PlayerName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_PlayerName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_Provider,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::NewProp_PlayerName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"CustomerSupportClientLoginAnalytics",
		sizeof(FCustomerSupportClientLoginAnalytics),
		alignof(FCustomerSupportClientLoginAnalytics),
		Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomerSupportClientLoginAnalytics"), sizeof(FCustomerSupportClientLoginAnalytics), Get_Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomerSupportClientLoginAnalytics_Hash() { return 129296267U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
