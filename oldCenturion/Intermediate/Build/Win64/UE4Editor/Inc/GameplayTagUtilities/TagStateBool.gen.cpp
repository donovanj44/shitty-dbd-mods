// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayTagUtilities/Public/TagStateBool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTagStateBool() {}
// Cross Module References
	GAMEPLAYTAGUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool();
	UPackage* Z_Construct_UPackage__Script_GameplayTagUtilities();
// End Cross Module References
class UScriptStruct* FTagStateBool::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYTAGUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FTagStateBool_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FTagStateBool, Z_Construct_UPackage__Script_GameplayTagUtilities(), TEXT("TagStateBool"), sizeof(FTagStateBool), Get_Z_Construct_UScriptStruct_FTagStateBool_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYTAGUTILITIES_API UScriptStruct* StaticStruct<FTagStateBool>()
{
	return FTagStateBool::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FTagStateBool(FTagStateBool::StaticStruct, TEXT("/Script/GameplayTagUtilities"), TEXT("TagStateBool"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayTagUtilities_StaticRegisterNativesFTagStateBool
{
	FScriptStruct_GameplayTagUtilities_StaticRegisterNativesFTagStateBool()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("TagStateBool")),new UScriptStruct::TCppStructOps<FTagStateBool>);
	}
} ScriptStruct_GameplayTagUtilities_StaticRegisterNativesFTagStateBool;
	struct Z_Construct_UScriptStruct_FTagStateBool_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__isTrue_MetaData[];
#endif
		static void NewProp__isTrue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isTrue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagStateBool_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/TagStateBool.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTagStateBool_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTagStateBool>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTagStateBool_Statics::NewProp__isTrue_MetaData[] = {
		{ "ModuleRelativePath", "Public/TagStateBool.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FTagStateBool_Statics::NewProp__isTrue_SetBit(void* Obj)
	{
		((FTagStateBool*)Obj)->_isTrue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FTagStateBool_Statics::NewProp__isTrue = { "_isTrue", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FTagStateBool), &Z_Construct_UScriptStruct_FTagStateBool_Statics::NewProp__isTrue_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FTagStateBool_Statics::NewProp__isTrue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagStateBool_Statics::NewProp__isTrue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTagStateBool_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTagStateBool_Statics::NewProp__isTrue,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTagStateBool_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayTagUtilities,
		nullptr,
		&NewStructOps,
		"TagStateBool",
		sizeof(FTagStateBool),
		alignof(FTagStateBool),
		Z_Construct_UScriptStruct_FTagStateBool_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagStateBool_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTagStateBool_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTagStateBool_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTagStateBool()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FTagStateBool_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayTagUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("TagStateBool"), sizeof(FTagStateBool), Get_Z_Construct_UScriptStruct_FTagStateBool_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FTagStateBool_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FTagStateBool_Hash() { return 2673364030U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
