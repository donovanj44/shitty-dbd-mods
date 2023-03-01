// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/K26SurvivorStatus.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK26SurvivorStatus() {}
// Cross Module References
	THEK26_API UScriptStruct* Z_Construct_UScriptStruct_FK26SurvivorStatus();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UK26KillerInstinctStatusEffect_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_AK26AttachedCrow_NoRegister();
// End Cross Module References
class UScriptStruct* FK26SurvivorStatus::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern THEK26_API uint32 Get_Z_Construct_UScriptStruct_FK26SurvivorStatus_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FK26SurvivorStatus, Z_Construct_UPackage__Script_TheK26(), TEXT("K26SurvivorStatus"), sizeof(FK26SurvivorStatus), Get_Z_Construct_UScriptStruct_FK26SurvivorStatus_Hash());
	}
	return Singleton;
}
template<> THEK26_API UScriptStruct* StaticStruct<FK26SurvivorStatus>()
{
	return FK26SurvivorStatus::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FK26SurvivorStatus(FK26SurvivorStatus::StaticStruct, TEXT("/Script/TheK26"), TEXT("K26SurvivorStatus"), false, nullptr, nullptr);
static struct FScriptStruct_TheK26_StaticRegisterNativesFK26SurvivorStatus
{
	FScriptStruct_TheK26_StaticRegisterNativesFK26SurvivorStatus()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("K26SurvivorStatus")),new UScriptStruct::TCppStructOps<FK26SurvivorStatus>);
	}
} ScriptStruct_TheK26_StaticRegisterNativesFK26SurvivorStatus;
	struct Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerInstinctTimeHandler_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_KillerInstinctTimeHandler;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IdleCrowsBeingTouched_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_IdleCrowsBeingTouched;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_IdleCrowsBeingTouched_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_K26KillerInstinctStatusEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_K26KillerInstinctStatusEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningSurvivor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StatusIndicator_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StatusIndicator;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastHitTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastHitTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemovalStopped_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRemovalStopped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastRemovalStarted_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastRemovalStarted;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastDetachmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastDetachmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LastAttachmentTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LastAttachmentTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsAttachementAuraOn_MetaData[];
#endif
		static void NewProp_IsAttachementAuraOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsAttachementAuraOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPowerAttached_MetaData[];
#endif
		static void NewProp_IsPowerAttached_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPowerAttached;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FK26SurvivorStatus>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_KillerInstinctTimeHandler_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_KillerInstinctTimeHandler = { "KillerInstinctTimeHandler", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, KillerInstinctTimeHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_KillerInstinctTimeHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_KillerInstinctTimeHandler_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IdleCrowsBeingTouched_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IdleCrowsBeingTouched = { "IdleCrowsBeingTouched", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, IdleCrowsBeingTouched), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IdleCrowsBeingTouched_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IdleCrowsBeingTouched_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IdleCrowsBeingTouched_Inner = { "IdleCrowsBeingTouched", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_K26KillerInstinctStatusEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_K26KillerInstinctStatusEffect = { "K26KillerInstinctStatusEffect", nullptr, (EPropertyFlags)0x0010000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, K26KillerInstinctStatusEffect), Z_Construct_UClass_UK26KillerInstinctStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_K26KillerInstinctStatusEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_K26KillerInstinctStatusEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_OwningSurvivor_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_OwningSurvivor = { "OwningSurvivor", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, OwningSurvivor), Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_OwningSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_OwningSurvivor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_StatusIndicator_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_StatusIndicator = { "StatusIndicator", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, StatusIndicator), Z_Construct_UClass_AK26AttachedCrow_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_StatusIndicator_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_StatusIndicator_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastHitTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastHitTime = { "LastHitTime", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, LastHitTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastHitTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastHitTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStopped_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStopped = { "LastRemovalStopped", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, LastRemovalStopped), METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStopped_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStopped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStarted_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStarted = { "LastRemovalStarted", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, LastRemovalStarted), METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStarted_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastDetachmentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastDetachmentTime = { "LastDetachmentTime", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, LastDetachmentTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastDetachmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastDetachmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastAttachmentTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastAttachmentTime = { "LastAttachmentTime", nullptr, (EPropertyFlags)0x0010000080002000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FK26SurvivorStatus, LastAttachmentTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastAttachmentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastAttachmentTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsAttachementAuraOn_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsAttachementAuraOn_SetBit(void* Obj)
	{
		((FK26SurvivorStatus*)Obj)->IsAttachementAuraOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsAttachementAuraOn = { "IsAttachementAuraOn", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK26SurvivorStatus), &Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsAttachementAuraOn_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsAttachementAuraOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsAttachementAuraOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsPowerAttached_MetaData[] = {
		{ "ModuleRelativePath", "Public/K26SurvivorStatus.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsPowerAttached_SetBit(void* Obj)
	{
		((FK26SurvivorStatus*)Obj)->IsPowerAttached = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsPowerAttached = { "IsPowerAttached", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FK26SurvivorStatus), &Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsPowerAttached_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsPowerAttached_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsPowerAttached_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_KillerInstinctTimeHandler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IdleCrowsBeingTouched,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IdleCrowsBeingTouched_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_K26KillerInstinctStatusEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_OwningSurvivor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_StatusIndicator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastHitTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStopped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastRemovalStarted,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastDetachmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_LastAttachmentTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsAttachementAuraOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::NewProp_IsPowerAttached,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
		nullptr,
		&NewStructOps,
		"K26SurvivorStatus",
		sizeof(FK26SurvivorStatus),
		alignof(FK26SurvivorStatus),
		Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000005),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FK26SurvivorStatus()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FK26SurvivorStatus_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_TheK26();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("K26SurvivorStatus"), sizeof(FK26SurvivorStatus), Get_Z_Construct_UScriptStruct_FK26SurvivorStatus_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FK26SurvivorStatus_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FK26SurvivorStatus_Hash() { return 3805486339U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
