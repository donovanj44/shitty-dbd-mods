// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SharedAuthenticationTokenInformation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSharedAuthenticationTokenInformation() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSharedAuthenticationTokenInformation::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SharedAuthenticationTokenInformation"), sizeof(FSharedAuthenticationTokenInformation), Get_Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSharedAuthenticationTokenInformation>()
{
	return FSharedAuthenticationTokenInformation::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSharedAuthenticationTokenInformation(FSharedAuthenticationTokenInformation::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SharedAuthenticationTokenInformation"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSharedAuthenticationTokenInformation
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSharedAuthenticationTokenInformation()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SharedAuthenticationTokenInformation")),new UScriptStruct::TCppStructOps<FSharedAuthenticationTokenInformation>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSharedAuthenticationTokenInformation;
	struct Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TokenType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TokenType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuthToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuthToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LoginProvider_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LoginProvider;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SharedAuthenticationTokenInformation.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSharedAuthenticationTokenInformation>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_TokenType_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedAuthenticationTokenInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_TokenType = { "TokenType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSharedAuthenticationTokenInformation, TokenType), METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_TokenType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_TokenType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_AuthToken_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedAuthenticationTokenInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_AuthToken = { "AuthToken", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSharedAuthenticationTokenInformation, AuthToken), METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_AuthToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_AuthToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_LoginProvider_MetaData[] = {
		{ "ModuleRelativePath", "Public/SharedAuthenticationTokenInformation.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_LoginProvider = { "LoginProvider", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSharedAuthenticationTokenInformation, LoginProvider), METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_LoginProvider_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_LoginProvider_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_TokenType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_AuthToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::NewProp_LoginProvider,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SharedAuthenticationTokenInformation",
		sizeof(FSharedAuthenticationTokenInformation),
		alignof(FSharedAuthenticationTokenInformation),
		Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SharedAuthenticationTokenInformation"), sizeof(FSharedAuthenticationTokenInformation), Get_Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSharedAuthenticationTokenInformation_Hash() { return 3614537768U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
