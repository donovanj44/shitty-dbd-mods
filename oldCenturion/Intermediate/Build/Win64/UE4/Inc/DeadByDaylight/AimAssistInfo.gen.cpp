// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AimAssistInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAimAssistInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAimAssistInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FAimAssistInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FAimAssistInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAimAssistInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("AimAssistInfo"), sizeof(FAimAssistInfo), Get_Z_Construct_UScriptStruct_FAimAssistInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FAimAssistInfo>()
{
	return FAimAssistInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAimAssistInfo(FAimAssistInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("AimAssistInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFAimAssistInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFAimAssistInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AimAssistInfo")),new UScriptStruct::TCppStructOps<FAimAssistInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFAimAssistInfo;
	struct Z_Construct_UScriptStruct_FAimAssistInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAimAssistInfo_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AimAssistInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAimAssistInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAimAssistInfo>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAimAssistInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"AimAssistInfo",
		sizeof(FAimAssistInfo),
		alignof(FAimAssistInfo),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAimAssistInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAimAssistInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAimAssistInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAimAssistInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AimAssistInfo"), sizeof(FAimAssistInfo), Get_Z_Construct_UScriptStruct_FAimAssistInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAimAssistInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAimAssistInfo_Hash() { return 644752752U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
