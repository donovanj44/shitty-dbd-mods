// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/DiscernibleCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiscernibleCharacter() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDiscernibleCharacter();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
// End Cross Module References
class UScriptStruct* FDiscernibleCharacter::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FDiscernibleCharacter_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDiscernibleCharacter, Z_Construct_UPackage__Script_GameplayUtilities(), TEXT("DiscernibleCharacter"), sizeof(FDiscernibleCharacter), Get_Z_Construct_UScriptStruct_FDiscernibleCharacter_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYUTILITIES_API UScriptStruct* StaticStruct<FDiscernibleCharacter>()
{
	return FDiscernibleCharacter::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDiscernibleCharacter(FDiscernibleCharacter::StaticStruct, TEXT("/Script/GameplayUtilities"), TEXT("DiscernibleCharacter"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayUtilities_StaticRegisterNativesFDiscernibleCharacter
{
	FScriptStruct_GameplayUtilities_StaticRegisterNativesFDiscernibleCharacter()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DiscernibleCharacter")),new UScriptStruct::TCppStructOps<FDiscernibleCharacter>);
	}
} ScriptStruct_GameplayUtilities_StaticRegisterNativesFDiscernibleCharacter;
	struct Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__character_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__character;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/DiscernibleCharacter.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDiscernibleCharacter>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::NewProp__character_MetaData[] = {
		{ "ModuleRelativePath", "Public/DiscernibleCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::NewProp__character = { "_character", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDiscernibleCharacter, _character), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::NewProp__character_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::NewProp__character_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::NewProp__character,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
		nullptr,
		&NewStructOps,
		"DiscernibleCharacter",
		sizeof(FDiscernibleCharacter),
		alignof(FDiscernibleCharacter),
		Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDiscernibleCharacter()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDiscernibleCharacter_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DiscernibleCharacter"), sizeof(FDiscernibleCharacter), Get_Z_Construct_UScriptStruct_FDiscernibleCharacter_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDiscernibleCharacter_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDiscernibleCharacter_Hash() { return 3464445146U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
