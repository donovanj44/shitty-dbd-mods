// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/KeyDisplayInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKeyDisplayInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FKeyDisplayInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
// End Cross Module References
class UScriptStruct* FKeyDisplayInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FKeyDisplayInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyDisplayInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("KeyDisplayInfo"), sizeof(FKeyDisplayInfo), Get_Z_Construct_UScriptStruct_FKeyDisplayInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FKeyDisplayInfo>()
{
	return FKeyDisplayInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FKeyDisplayInfo(FKeyDisplayInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("KeyDisplayInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFKeyDisplayInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFKeyDisplayInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("KeyDisplayInfo")),new UScriptStruct::TCppStructOps<FKeyDisplayInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFKeyDisplayInfo;
	struct Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PromptType_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PromptType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyDisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_KeyDisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/KeyDisplayInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyDisplayInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_PromptType_MetaData[] = {
		{ "ModuleRelativePath", "Public/KeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_PromptType = { "PromptType", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyDisplayInfo, PromptType), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_PromptType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_PromptType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_KeyDisplayName_MetaData[] = {
		{ "ModuleRelativePath", "Public/KeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_KeyDisplayName = { "KeyDisplayName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyDisplayInfo, KeyDisplayName), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_KeyDisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_KeyDisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_Key_MetaData[] = {
		{ "ModuleRelativePath", "Public/KeyDisplayInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FKeyDisplayInfo, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_Key_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_PromptType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_KeyDisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::NewProp_Key,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"KeyDisplayInfo",
		sizeof(FKeyDisplayInfo),
		alignof(FKeyDisplayInfo),
		Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyDisplayInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FKeyDisplayInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("KeyDisplayInfo"), sizeof(FKeyDisplayInfo), Get_Z_Construct_UScriptStruct_FKeyDisplayInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FKeyDisplayInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FKeyDisplayInfo_Hash() { return 3039926793U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
