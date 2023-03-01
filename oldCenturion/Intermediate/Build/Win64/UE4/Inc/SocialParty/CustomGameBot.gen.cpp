// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SocialParty/Public/CustomGameBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCustomGameBot() {}
// Cross Module References
	SOCIALPARTY_API UScriptStruct* Z_Construct_UScriptStruct_FCustomGameBot();
	UPackage* Z_Construct_UPackage__Script_SocialParty();
// End Cross Module References
class UScriptStruct* FCustomGameBot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern SOCIALPARTY_API uint32 Get_Z_Construct_UScriptStruct_FCustomGameBot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCustomGameBot, Z_Construct_UPackage__Script_SocialParty(), TEXT("CustomGameBot"), sizeof(FCustomGameBot), Get_Z_Construct_UScriptStruct_FCustomGameBot_Hash());
	}
	return Singleton;
}
template<> SOCIALPARTY_API UScriptStruct* StaticStruct<FCustomGameBot>()
{
	return FCustomGameBot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCustomGameBot(FCustomGameBot::StaticStruct, TEXT("/Script/SocialParty"), TEXT("CustomGameBot"), false, nullptr, nullptr);
static struct FScriptStruct_SocialParty_StaticRegisterNativesFCustomGameBot
{
	FScriptStruct_SocialParty_StaticRegisterNativesFCustomGameBot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CustomGameBot")),new UScriptStruct::TCppStructOps<FCustomGameBot>);
	}
} ScriptStruct_SocialParty_StaticRegisterNativesFCustomGameBot;
	struct Z_Construct_UScriptStruct_FCustomGameBot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__characterIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__characterIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__difficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__difficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__role_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__role;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGameBot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/CustomGameBot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCustomGameBot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__characterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGameBot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__characterIndex = { "_characterIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomGameBot, _characterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__characterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__characterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__difficulty_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGameBot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__difficulty = { "_difficulty", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomGameBot, _difficulty), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__difficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__role_MetaData[] = {
		{ "ModuleRelativePath", "Public/CustomGameBot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__role = { "_role", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCustomGameBot, _role), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__role_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCustomGameBot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__characterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCustomGameBot_Statics::NewProp__role,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCustomGameBot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_SocialParty,
		nullptr,
		&NewStructOps,
		"CustomGameBot",
		sizeof(FCustomGameBot),
		alignof(FCustomGameBot),
		Z_Construct_UScriptStruct_FCustomGameBot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGameBot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCustomGameBot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCustomGameBot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCustomGameBot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCustomGameBot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_SocialParty();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CustomGameBot"), sizeof(FCustomGameBot), Get_Z_Construct_UScriptStruct_FCustomGameBot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCustomGameBot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCustomGameBot_Hash() { return 474924199U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
