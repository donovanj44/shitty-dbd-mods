// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterAnimationDropdown.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterAnimationDropdown() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FCharacterAnimationDropdown();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FRoleItemCategoryDropdown();
	ENGINE_API UClass* Z_Construct_UClass_UAnimationAsset_NoRegister();
// End Cross Module References
class UScriptStruct* FCharacterAnimationDropdown::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCharacterAnimationDropdown, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("CharacterAnimationDropdown"), sizeof(FCharacterAnimationDropdown), Get_Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FCharacterAnimationDropdown>()
{
	return FCharacterAnimationDropdown::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCharacterAnimationDropdown(FCharacterAnimationDropdown::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("CharacterAnimationDropdown"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterAnimationDropdown
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterAnimationDropdown()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CharacterAnimationDropdown")),new UScriptStruct::TCppStructOps<FCharacterAnimationDropdown>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFCharacterAnimationDropdown;
	struct Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AnimationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AnimationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Animation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Animation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CharacterAnimationDropdown.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCharacterAnimationDropdown>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_AnimationPath_MetaData[] = {
		{ "Category", "CharacterAnimationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterAnimationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_AnimationPath = { "AnimationPath", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAnimationDropdown, AnimationPath), METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_AnimationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_AnimationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_Animation_MetaData[] = {
		{ "Category", "CharacterAnimationDropdown" },
		{ "ModuleRelativePath", "Public/CharacterAnimationDropdown.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_Animation = { "Animation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCharacterAnimationDropdown, Animation), Z_Construct_UClass_UAnimationAsset_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_Animation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_Animation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_AnimationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::NewProp_Animation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		Z_Construct_UScriptStruct_FRoleItemCategoryDropdown,
		&NewStructOps,
		"CharacterAnimationDropdown",
		sizeof(FCharacterAnimationDropdown),
		alignof(FCharacterAnimationDropdown),
		Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCharacterAnimationDropdown()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CharacterAnimationDropdown"), sizeof(FCharacterAnimationDropdown), Get_Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCharacterAnimationDropdown_Hash() { return 1605824915U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
