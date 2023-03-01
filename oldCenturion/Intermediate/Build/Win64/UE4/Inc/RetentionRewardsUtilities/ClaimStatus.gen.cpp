// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetentionRewardsUtilities/Public/ClaimStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeClaimStatus() {}
// Cross Module References
	RETENTIONREWARDSUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FClaimStatus();
	UPackage* Z_Construct_UPackage__Script_RetentionRewardsUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FClaimStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RETENTIONREWARDSUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FClaimStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FClaimStatus, Z_Construct_UPackage__Script_RetentionRewardsUtilities(), TEXT("ClaimStatus"), sizeof(FClaimStatus), Get_Z_Construct_UScriptStruct_FClaimStatus_Hash());
	}
	return Singleton;
}
template<> RETENTIONREWARDSUTILITIES_API UScriptStruct* StaticStruct<FClaimStatus>()
{
	return FClaimStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FClaimStatus(FClaimStatus::StaticStruct, TEXT("/Script/RetentionRewardsUtilities"), TEXT("ClaimStatus"), false, nullptr, nullptr);
static struct FScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFClaimStatus
{
	FScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFClaimStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("ClaimStatus")),new UScriptStruct::TCppStructOps<FClaimStatus>);
	}
} ScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFClaimStatus;
	struct Z_Construct_UScriptStruct_FClaimStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NextClaimTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NextClaimTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastClaimedIndex_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_LastClaimedIndex;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSet_MetaData[];
#endif
		static void NewProp_isSet_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClaimStatus_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ClaimStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FClaimStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FClaimStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_NextClaimTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClaimStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_NextClaimTime = { "NextClaimTime", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClaimStatus, NextClaimTime), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_NextClaimTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_NextClaimTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_LastClaimedIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClaimStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_LastClaimedIndex = { "LastClaimedIndex", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FClaimStatus, LastClaimedIndex), METADATA_PARAMS(Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_LastClaimedIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_LastClaimedIndex_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_isSet_MetaData[] = {
		{ "ModuleRelativePath", "Public/ClaimStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_isSet_SetBit(void* Obj)
	{
		((FClaimStatus*)Obj)->isSet = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_isSet = { "isSet", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FClaimStatus), &Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_isSet_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_isSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_isSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FClaimStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_NextClaimTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_LastClaimedIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FClaimStatus_Statics::NewProp_isSet,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FClaimStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RetentionRewardsUtilities,
		nullptr,
		&NewStructOps,
		"ClaimStatus",
		sizeof(FClaimStatus),
		alignof(FClaimStatus),
		Z_Construct_UScriptStruct_FClaimStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FClaimStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FClaimStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FClaimStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FClaimStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RetentionRewardsUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("ClaimStatus"), sizeof(FClaimStatus), Get_Z_Construct_UScriptStruct_FClaimStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FClaimStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FClaimStatus_Hash() { return 1759049188U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
