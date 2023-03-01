// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Onboarding/Public/OnboardingBotMatchDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnboardingBotMatchDefinition() {}
// Cross Module References
	ONBOARDING_API UScriptStruct* Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition();
	UPackage* Z_Construct_UPackage__Script_Onboarding();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTableRowBaseWithId();
// End Cross Module References
class UScriptStruct* FOnboardingBotMatchDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern ONBOARDING_API uint32 Get_Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition, Z_Construct_UPackage__Script_Onboarding(), TEXT("OnboardingBotMatchDefinition"), sizeof(FOnboardingBotMatchDefinition), Get_Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Hash());
	}
	return Singleton;
}
template<> ONBOARDING_API UScriptStruct* StaticStruct<FOnboardingBotMatchDefinition>()
{
	return FOnboardingBotMatchDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FOnboardingBotMatchDefinition(FOnboardingBotMatchDefinition::StaticStruct, TEXT("/Script/Onboarding"), TEXT("OnboardingBotMatchDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_Onboarding_StaticRegisterNativesFOnboardingBotMatchDefinition
{
	FScriptStruct_Onboarding_StaticRegisterNativesFOnboardingBotMatchDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("OnboardingBotMatchDefinition")),new UScriptStruct::TCppStructOps<FOnboardingBotMatchDefinition>);
	}
} ScriptStruct_Onboarding_StaticRegisterNativesFOnboardingBotMatchDefinition;
	struct Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultBotsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_DefaultBotsId;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultBotsId_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultKillerId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultKillerId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultSurvivorId_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_DefaultSurvivorId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultMapId_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_DefaultMapId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_Description;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/OnboardingBotMatchDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FOnboardingBotMatchDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultBotsId_MetaData[] = {
		{ "Category", "OnboardingBotMatchDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingBotMatchDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultBotsId = { "DefaultBotsId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingBotMatchDefinition, DefaultBotsId), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultBotsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultBotsId_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultBotsId_Inner = { "DefaultBotsId", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultKillerId_MetaData[] = {
		{ "Category", "OnboardingBotMatchDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingBotMatchDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultKillerId = { "DefaultKillerId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingBotMatchDefinition, DefaultKillerId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultKillerId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultKillerId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultSurvivorId_MetaData[] = {
		{ "Category", "OnboardingBotMatchDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingBotMatchDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultSurvivorId = { "DefaultSurvivorId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingBotMatchDefinition, DefaultSurvivorId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultSurvivorId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultSurvivorId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultMapId_MetaData[] = {
		{ "Category", "OnboardingBotMatchDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingBotMatchDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultMapId = { "DefaultMapId", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingBotMatchDefinition, DefaultMapId), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultMapId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultMapId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_Description_MetaData[] = {
		{ "Category", "OnboardingBotMatchDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingBotMatchDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingBotMatchDefinition, Description), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_Description_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_Description_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "OnboardingBotMatchDefinition" },
		{ "ModuleRelativePath", "Public/OnboardingBotMatchDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FOnboardingBotMatchDefinition, DisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DisplayName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultBotsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultBotsId_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultKillerId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultSurvivorId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DefaultMapId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_Description,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::NewProp_DisplayName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Onboarding,
		Z_Construct_UScriptStruct_FDBDTableRowBaseWithId,
		&NewStructOps,
		"OnboardingBotMatchDefinition",
		sizeof(FOnboardingBotMatchDefinition),
		alignof(FOnboardingBotMatchDefinition),
		Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Onboarding();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("OnboardingBotMatchDefinition"), sizeof(FOnboardingBotMatchDefinition), Get_Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FOnboardingBotMatchDefinition_Hash() { return 1781312874U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
