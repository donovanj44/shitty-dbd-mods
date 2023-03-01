// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkillPerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkillPerk() {}
// Cross Module References
	DBDBOTS_API UScriptStruct* Z_Construct_UScriptStruct_FAISkillPerk();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_NoRegister();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableDropdown();
// End Cross Module References
class UScriptStruct* FAISkillPerk::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDBOTS_API uint32 Get_Z_Construct_UScriptStruct_FAISkillPerk_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAISkillPerk, Z_Construct_UPackage__Script_DBDBots(), TEXT("AISkillPerk"), sizeof(FAISkillPerk), Get_Z_Construct_UScriptStruct_FAISkillPerk_Hash());
	}
	return Singleton;
}
template<> DBDBOTS_API UScriptStruct* StaticStruct<FAISkillPerk>()
{
	return FAISkillPerk::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAISkillPerk(FAISkillPerk::StaticStruct, TEXT("/Script/DBDBots"), TEXT("AISkillPerk"), false, nullptr, nullptr);
static struct FScriptStruct_DBDBots_StaticRegisterNativesFAISkillPerk
{
	FScriptStruct_DBDBots_StaticRegisterNativesFAISkillPerk()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AISkillPerk")),new UScriptStruct::TCppStructOps<FAISkillPerk>);
	}
} ScriptStruct_DBDBots_StaticRegisterNativesFAISkillPerk;
	struct Z_Construct_UScriptStruct_FAISkillPerk_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Skill_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Skill;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PerkID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PerkID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISkillPerk_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/AISkillPerk.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAISkillPerk>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_Skill_MetaData[] = {
		{ "Category", "AISkillPerk" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AISkillPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_Skill = { "Skill", nullptr, (EPropertyFlags)0x0012000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISkillPerk, Skill), Z_Construct_UClass_UAISkill_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_Skill_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_Skill_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_PerkID_MetaData[] = {
		{ "Category", "AISkillPerk" },
		{ "ModuleRelativePath", "Public/AISkillPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_PerkID = { "PerkID", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAISkillPerk, PerkID), Z_Construct_UScriptStruct_FDataTableDropdown, METADATA_PARAMS(Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_PerkID_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_PerkID_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAISkillPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_Skill,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAISkillPerk_Statics::NewProp_PerkID,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAISkillPerk_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
		nullptr,
		&NewStructOps,
		"AISkillPerk",
		sizeof(FAISkillPerk),
		alignof(FAISkillPerk),
		Z_Construct_UScriptStruct_FAISkillPerk_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISkillPerk_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAISkillPerk_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAISkillPerk_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAISkillPerk()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAISkillPerk_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDBots();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AISkillPerk"), sizeof(FAISkillPerk), Get_Z_Construct_UScriptStruct_FAISkillPerk_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAISkillPerk_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAISkillPerk_Hash() { return 402930160U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
