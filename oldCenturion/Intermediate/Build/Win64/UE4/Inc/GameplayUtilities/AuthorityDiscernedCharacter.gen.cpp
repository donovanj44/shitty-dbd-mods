// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/AuthorityDiscernedCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAuthorityDiscernedCharacter() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FAuthorityDiscernedCharacter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter, Z_Construct_UPackage__Script_GameplayUtilities(), TEXT("AuthorityDiscernedCharacter"), sizeof(FAuthorityDiscernedCharacter), Get_Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYUTILITIES_API UScriptStruct* StaticStruct<FAuthorityDiscernedCharacter>()
{
	return FAuthorityDiscernedCharacter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAuthorityDiscernedCharacter(FAuthorityDiscernedCharacter::StaticStruct, TEXT("/Script/GameplayUtilities"), TEXT("AuthorityDiscernedCharacter"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayUtilities_StaticRegisterNativesFAuthorityDiscernedCharacter
{
	FScriptStruct_GameplayUtilities_StaticRegisterNativesFAuthorityDiscernedCharacter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AuthorityDiscernedCharacter")),new UScriptStruct::TCppStructOps<FAuthorityDiscernedCharacter>);
	}
} ScriptStruct_GameplayUtilities_StaticRegisterNativesFAuthorityDiscernedCharacter;
	struct Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isSighted_MetaData[];
#endif
		static void NewProp__isSighted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSighted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AuthorityDiscernedCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAuthorityDiscernedCharacter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__isSighted_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuthorityDiscernedCharacter.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__isSighted_SetBit(void* Obj)
	{
		((FAuthorityDiscernedCharacter*)Obj)->_isSighted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__isSighted = { "_isSighted", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAuthorityDiscernedCharacter), &Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__isSighted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__isSighted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__isSighted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__character_MetaData[] = {
		{ "ModuleRelativePath", "Public/AuthorityDiscernedCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__character = { "_character", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAuthorityDiscernedCharacter, _character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__isSighted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::NewProp__character,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
		nullptr,
		&NewStructOps,
		"AuthorityDiscernedCharacter",
		sizeof(FAuthorityDiscernedCharacter),
		alignof(FAuthorityDiscernedCharacter),
		Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AuthorityDiscernedCharacter"), sizeof(FAuthorityDiscernedCharacter), Get_Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAuthorityDiscernedCharacter_Hash() { return 1106950684U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
