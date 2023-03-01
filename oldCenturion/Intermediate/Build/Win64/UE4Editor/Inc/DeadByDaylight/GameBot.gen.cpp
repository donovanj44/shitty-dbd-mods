// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GameBot.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGameBot() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FGameBot();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FGameBot::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FGameBot_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FGameBot, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("GameBot"), sizeof(FGameBot), Get_Z_Construct_UScriptStruct_FGameBot_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FGameBot>()
{
	return FGameBot::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FGameBot(FGameBot::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("GameBot"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameBot
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFGameBot()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("GameBot")),new UScriptStruct::TCppStructOps<FGameBot>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFGameBot;
	struct Z_Construct_UScriptStruct_FGameBot_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameBot_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/GameBot.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FGameBot_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FGameBot>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__characterIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameBot.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__characterIndex = { "_characterIndex", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameBot, _characterIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__characterIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__characterIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__difficulty_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameBot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__difficulty = { "_difficulty", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameBot, _difficulty), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__difficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__difficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__role_MetaData[] = {
		{ "ModuleRelativePath", "Public/GameBot.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__role = { "_role", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FGameBot, _role), nullptr, METADATA_PARAMS(Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__role_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__role_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FGameBot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__characterIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FGameBot_Statics::NewProp__role,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FGameBot_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"GameBot",
		sizeof(FGameBot),
		alignof(FGameBot),
		Z_Construct_UScriptStruct_FGameBot_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameBot_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FGameBot_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FGameBot_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FGameBot()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FGameBot_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("GameBot"), sizeof(FGameBot), Get_Z_Construct_UScriptStruct_FGameBot_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FGameBot_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FGameBot_Hash() { return 2623696728U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
