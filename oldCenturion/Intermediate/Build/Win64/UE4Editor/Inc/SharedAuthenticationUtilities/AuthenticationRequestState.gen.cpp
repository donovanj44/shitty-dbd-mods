// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SharedAuthenticationUtilities/Public/AuthenticationRequestState.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthenticationRequestState() {}
// Cross Module References
	SHAREDAUTHENTICATIONUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationRequestState();
	UPackage* Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
// End Cross Module References
class UScriptStruct* FAuthenticationRequestState::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SHAREDAUTHENTICATIONUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAuthenticationRequestState_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthenticationRequestState, Z_Construct_UPackage__Script_SharedAuthenticationUtilities(), TEXT("AuthenticationRequestState"), sizeof(FAuthenticationRequestState), Get_Z_Construct_UScriptStruct_FAuthenticationRequestState_Hash());
	}
	return Singleton;
}
template<> SHAREDAUTHENTICATIONUTILITIES_API UScriptStruct* StaticStruct<FAuthenticationRequestState>()
{
	return FAuthenticationRequestState::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthenticationRequestState(FAuthenticationRequestState::StaticStruct, TEXT("/Script/SharedAuthenticationUtilities"), TEXT("AuthenticationRequestState"), false, nullptr, nullptr);
static struct FScriptStruct_SharedAuthenticationUtilities_StaticRegisterNativesFAuthenticationRequestState
{
	FScriptStruct_SharedAuthenticationUtilities_StaticRegisterNativesFAuthenticationRequestState()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AuthenticationRequestState")),new UScriptStruct::TCppStructOps<FAuthenticationRequestState>);
	}
} ScriptStruct_SharedAuthenticationUtilities_StaticRegisterNativesFAuthenticationRequestState;
	struct Z_Construct_UScriptStruct_FAuthenticationRequestState_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthenticationRequestState_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AuthenticationRequestState.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthenticationRequestState_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthenticationRequestState>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthenticationRequestState_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SharedAuthenticationUtilities,
		nullptr,
		&NewStructOps,
		"AuthenticationRequestState",
		sizeof(FAuthenticationRequestState),
		alignof(FAuthenticationRequestState),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthenticationRequestState_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthenticationRequestState_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthenticationRequestState()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthenticationRequestState_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SharedAuthenticationUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthenticationRequestState"), sizeof(FAuthenticationRequestState), Get_Z_Construct_UScriptStruct_FAuthenticationRequestState_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthenticationRequestState_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthenticationRequestState_Hash() { return 2240355775U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
