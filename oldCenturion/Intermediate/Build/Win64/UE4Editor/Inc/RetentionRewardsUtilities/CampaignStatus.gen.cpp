// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RetentionRewardsUtilities/Public/CampaignStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCampaignStatus() {}
// Cross Module References
	RETENTIONREWARDSUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FCampaignStatus();
	UPackage* Z_Construct_UPackage__Script_RetentionRewardsUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FDateTime();
// End Cross Module References
class UScriptStruct* FCampaignStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern RETENTIONREWARDSUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FCampaignStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FCampaignStatus, Z_Construct_UPackage__Script_RetentionRewardsUtilities(), TEXT("CampaignStatus"), sizeof(FCampaignStatus), Get_Z_Construct_UScriptStruct_FCampaignStatus_Hash());
	}
	return Singleton;
}
template<> RETENTIONREWARDSUTILITIES_API UScriptStruct* StaticStruct<FCampaignStatus>()
{
	return FCampaignStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FCampaignStatus(FCampaignStatus::StaticStruct, TEXT("/Script/RetentionRewardsUtilities"), TEXT("CampaignStatus"), false, nullptr, nullptr);
static struct FScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFCampaignStatus
{
	FScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFCampaignStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("CampaignStatus")),new UScriptStruct::TCppStructOps<FCampaignStatus>);
	}
} ScriptStruct_RetentionRewardsUtilities_StaticRegisterNativesFCampaignStatus;
	struct Z_Construct_UScriptStruct_FCampaignStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EndDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_EndDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartDate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValid_MetaData[];
#endif
		static void NewProp_IsValid_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValid;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignStatus_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CampaignStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FCampaignStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_EndDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CampaignStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_EndDate = { "EndDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignStatus, EndDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_EndDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_EndDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_StartDate_MetaData[] = {
		{ "ModuleRelativePath", "Public/CampaignStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_StartDate = { "StartDate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FCampaignStatus, StartDate), Z_Construct_UScriptStruct_FDateTime, METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_StartDate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_StartDate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_IsValid_MetaData[] = {
		{ "ModuleRelativePath", "Public/CampaignStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_IsValid_SetBit(void* Obj)
	{
		((FCampaignStatus*)Obj)->IsValid = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_IsValid = { "IsValid", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FCampaignStatus), &Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_IsValid_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_IsValid_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_IsValid_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FCampaignStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_EndDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_StartDate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FCampaignStatus_Statics::NewProp_IsValid,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FCampaignStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_RetentionRewardsUtilities,
		nullptr,
		&NewStructOps,
		"CampaignStatus",
		sizeof(FCampaignStatus),
		alignof(FCampaignStatus),
		Z_Construct_UScriptStruct_FCampaignStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FCampaignStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FCampaignStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FCampaignStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FCampaignStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_RetentionRewardsUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("CampaignStatus"), sizeof(FCampaignStatus), Get_Z_Construct_UScriptStruct_FCampaignStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FCampaignStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FCampaignStatus_Hash() { return 258572052U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
