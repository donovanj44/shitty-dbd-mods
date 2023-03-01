// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SkillCheckDefinition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSkillCheckDefinition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckDefinition();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
class UScriptStruct* FSkillCheckDefinition::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FSkillCheckDefinition_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FSkillCheckDefinition, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("SkillCheckDefinition"), sizeof(FSkillCheckDefinition), Get_Z_Construct_UScriptStruct_FSkillCheckDefinition_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FSkillCheckDefinition>()
{
	return FSkillCheckDefinition::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FSkillCheckDefinition(FSkillCheckDefinition::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("SkillCheckDefinition"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFSkillCheckDefinition
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFSkillCheckDefinition()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("SkillCheckDefinition")),new UScriptStruct::TCppStructOps<FSkillCheckDefinition>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFSkillCheckDefinition;
	struct Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInsane_MetaData[];
#endif
		static void NewProp_IsInsane_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInsane;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSuccessZoneMirrorred_MetaData[];
#endif
		static void NewProp_IsSuccessZoneMirrorred_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSuccessZoneMirrorred;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsJittering_MetaData[];
#endif
		static void NewProp_IsJittering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsJittering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAudioMuted_MetaData[];
#endif
		static void NewProp_IsAudioMuted_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAudioMuted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WarningSoundDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WarningSoundDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDeactivatedAfterResponse_MetaData[];
#endif
		static void NewProp_IsDeactivatedAfterResponse_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDeactivatedAfterResponse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartingTickerPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartingTickerPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProgressRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusZoneStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusZoneStart;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BonusZoneLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BonusZoneLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessZoneEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessZoneEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SuccessZoneStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SuccessZoneStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSkillCheckDefinition>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsInsane_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsInsane_SetBit(void* Obj)
	{
		((FSkillCheckDefinition*)Obj)->IsInsane = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsInsane = { "IsInsane", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckDefinition), &Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsInsane_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsInsane_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsInsane_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsSuccessZoneMirrorred_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsSuccessZoneMirrorred_SetBit(void* Obj)
	{
		((FSkillCheckDefinition*)Obj)->IsSuccessZoneMirrorred = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsSuccessZoneMirrorred = { "IsSuccessZoneMirrorred", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckDefinition), &Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsSuccessZoneMirrorred_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsSuccessZoneMirrorred_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsSuccessZoneMirrorred_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsJittering_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsJittering_SetBit(void* Obj)
	{
		((FSkillCheckDefinition*)Obj)->IsJittering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsJittering = { "IsJittering", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckDefinition), &Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsJittering_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsJittering_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsJittering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsAudioMuted_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsAudioMuted_SetBit(void* Obj)
	{
		((FSkillCheckDefinition*)Obj)->IsAudioMuted = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsAudioMuted = { "IsAudioMuted", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckDefinition), &Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsAudioMuted_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsAudioMuted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsAudioMuted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_WarningSoundDelay_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_WarningSoundDelay = { "WarningSoundDelay", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckDefinition, WarningSoundDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_WarningSoundDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_WarningSoundDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsDeactivatedAfterResponse_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsDeactivatedAfterResponse_SetBit(void* Obj)
	{
		((FSkillCheckDefinition*)Obj)->IsDeactivatedAfterResponse = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsDeactivatedAfterResponse = { "IsDeactivatedAfterResponse", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FSkillCheckDefinition), &Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsDeactivatedAfterResponse_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsDeactivatedAfterResponse_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsDeactivatedAfterResponse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_StartingTickerPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_StartingTickerPosition = { "StartingTickerPosition", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckDefinition, StartingTickerPosition), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_StartingTickerPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_StartingTickerPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_ProgressRate_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_ProgressRate = { "ProgressRate", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckDefinition, ProgressRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_ProgressRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_ProgressRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneStart = { "BonusZoneStart", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckDefinition, BonusZoneStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneStart_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneLength_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneLength = { "BonusZoneLength", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckDefinition, BonusZoneLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneEnd_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneEnd = { "SuccessZoneEnd", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckDefinition, SuccessZoneEnd), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneStart_MetaData[] = {
		{ "ModuleRelativePath", "Public/SkillCheckDefinition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneStart = { "SuccessZoneStart", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FSkillCheckDefinition, SuccessZoneStart), METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsInsane,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsSuccessZoneMirrorred,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsJittering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsAudioMuted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_WarningSoundDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_IsDeactivatedAfterResponse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_StartingTickerPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_ProgressRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneStart,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_BonusZoneLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::NewProp_SuccessZoneStart,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"SkillCheckDefinition",
		sizeof(FSkillCheckDefinition),
		alignof(FSkillCheckDefinition),
		Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSkillCheckDefinition()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FSkillCheckDefinition_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("SkillCheckDefinition"), sizeof(FSkillCheckDefinition), Get_Z_Construct_UScriptStruct_FSkillCheckDefinition_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FSkillCheckDefinition_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FSkillCheckDefinition_Hash() { return 2298780363U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
