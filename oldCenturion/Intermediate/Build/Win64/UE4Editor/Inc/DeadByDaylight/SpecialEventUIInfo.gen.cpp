// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpecialEventUIInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpecialEventUIInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventUIInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSpecialEventUIInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSpecialEventUIInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSpecialEventUIInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SpecialEventUIInfo"), sizeof(FSpecialEventUIInfo), Get_Z_Construct_UScriptStruct_FSpecialEventUIInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSpecialEventUIInfo>()
{
	return FSpecialEventUIInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSpecialEventUIInfo(FSpecialEventUIInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SpecialEventUIInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventUIInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventUIInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SpecialEventUIInfo")),new UScriptStruct::TCppStructOps<FSpecialEventUIInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSpecialEventUIInfo;
	struct Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BloodwebCollectSoundEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BloodwebCollectSoundEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPastEvent_MetaData[];
#endif
		static void NewProp_IsPastEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPastEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventBannerFrameLabel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventBannerFrameLabel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SpecialEventUIInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSpecialEventUIInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_BloodwebCollectSoundEvent_MetaData[] = {
		{ "Category", "SpecialEventUIInfo" },
		{ "ModuleRelativePath", "Public/SpecialEventUIInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_BloodwebCollectSoundEvent = { "BloodwebCollectSoundEvent", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventUIInfo, BloodwebCollectSoundEvent), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_BloodwebCollectSoundEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_BloodwebCollectSoundEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_IsPastEvent_MetaData[] = {
		{ "Category", "SpecialEventUIInfo" },
		{ "ModuleRelativePath", "Public/SpecialEventUIInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_IsPastEvent_SetBit(void* Obj)
	{
		((FSpecialEventUIInfo*)Obj)->IsPastEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_IsPastEvent = { "IsPastEvent", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSpecialEventUIInfo), &Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_IsPastEvent_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_IsPastEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_IsPastEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "SpecialEventUIInfo" },
		{ "ModuleRelativePath", "Public/SpecialEventUIInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventUIInfo, EventName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventBannerFrameLabel_MetaData[] = {
		{ "Category", "SpecialEventUIInfo" },
		{ "ModuleRelativePath", "Public/SpecialEventUIInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventBannerFrameLabel = { "EventBannerFrameLabel", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventUIInfo, EventBannerFrameLabel), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventBannerFrameLabel_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventBannerFrameLabel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventId_MetaData[] = {
		{ "Category", "SpecialEventUIInfo" },
		{ "ModuleRelativePath", "Public/SpecialEventUIInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventId = { "EventId", nullptr, (EPropertyFlags)0x0010000000002014, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSpecialEventUIInfo, EventId), METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_BloodwebCollectSoundEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_IsPastEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventBannerFrameLabel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::NewProp_EventId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SpecialEventUIInfo",
		sizeof(FSpecialEventUIInfo),
		alignof(FSpecialEventUIInfo),
		Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSpecialEventUIInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSpecialEventUIInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SpecialEventUIInfo"), sizeof(FSpecialEventUIInfo), Get_Z_Construct_UScriptStruct_FSpecialEventUIInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSpecialEventUIInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSpecialEventUIInfo_Hash() { return 64421532U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
