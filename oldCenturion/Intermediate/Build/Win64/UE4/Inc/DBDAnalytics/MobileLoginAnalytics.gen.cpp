// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/MobileLoginAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMobileLoginAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FMobileLoginAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	BHVRANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics();
// End Cross Module References
class UScriptStruct* FMobileLoginAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FMobileLoginAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FMobileLoginAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("MobileLoginAnalytics"), sizeof(FMobileLoginAnalytics), Get_Z_Construct_UScriptStruct_FMobileLoginAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FMobileLoginAnalytics>()
{
	return FMobileLoginAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FMobileLoginAnalytics(FMobileLoginAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("MobileLoginAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileLoginAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileLoginAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("MobileLoginAnalytics")),new UScriptStruct::TCppStructOps<FMobileLoginAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFMobileLoginAnalytics;
	struct Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsMigrationAccount_MetaData[];
#endif
		static void NewProp_IsMigrationAccount_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsMigrationAccount;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthenticationContext_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthenticationContext;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginMethod_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginMethod;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MobileLoginAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMobileLoginAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_IsMigrationAccount_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileLoginAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_IsMigrationAccount_SetBit(void* Obj)
	{
		((FMobileLoginAnalytics*)Obj)->IsMigrationAccount = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_IsMigrationAccount = { "IsMigrationAccount", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FMobileLoginAnalytics), &Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_IsMigrationAccount_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_IsMigrationAccount_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_IsMigrationAccount_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_AuthenticationContext_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_AuthenticationContext = { "AuthenticationContext", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobileLoginAnalytics, AuthenticationContext), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_AuthenticationContext_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_AuthenticationContext_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_LoginMethod_MetaData[] = {
		{ "ModuleRelativePath", "Public/MobileLoginAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_LoginMethod = { "LoginMethod", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FMobileLoginAnalytics, LoginMethod), METADATA_PARAMS(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_LoginMethod_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_LoginMethod_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_IsMigrationAccount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_AuthenticationContext,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::NewProp_LoginMethod,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FBaseSingleStructIndexAnalytics,
		&NewStructOps,
		"MobileLoginAnalytics",
		sizeof(FMobileLoginAnalytics),
		alignof(FMobileLoginAnalytics),
		Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FMobileLoginAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FMobileLoginAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("MobileLoginAnalytics"), sizeof(FMobileLoginAnalytics), Get_Z_Construct_UScriptStruct_FMobileLoginAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FMobileLoginAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FMobileLoginAnalytics_Hash() { return 1277480652U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
