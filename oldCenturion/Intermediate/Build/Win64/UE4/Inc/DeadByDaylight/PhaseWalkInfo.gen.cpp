// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PhaseWalkInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePhaseWalkInfo() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPhaseWalkInfo();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
class UScriptStruct* FPhaseWalkInfo::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FPhaseWalkInfo_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPhaseWalkInfo, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("PhaseWalkInfo"), sizeof(FPhaseWalkInfo), Get_Z_Construct_UScriptStruct_FPhaseWalkInfo_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FPhaseWalkInfo>()
{
	return FPhaseWalkInfo::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPhaseWalkInfo(FPhaseWalkInfo::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("PhaseWalkInfo"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFPhaseWalkInfo
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFPhaseWalkInfo()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PhaseWalkInfo")),new UScriptStruct::TCppStructOps<FPhaseWalkInfo>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFPhaseWalkInfo;
	struct Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeleportToHusk_MetaData[];
#endif
		static void NewProp_TeleportToHusk_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_TeleportToHusk;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HuskRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HuskRotation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HuskLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HuskLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsInteractionPhaseWalking_MetaData[];
#endif
		static void NewProp_IsInteractionPhaseWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsInteractionPhaseWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsPassivePhaseWalking_MetaData[];
#endif
		static void NewProp_IsPassivePhaseWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsPassivePhaseWalking;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsActivePhaseWalking_MetaData[];
#endif
		static void NewProp_IsActivePhaseWalking_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsActivePhaseWalking;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/PhaseWalkInfo.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPhaseWalkInfo>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_TeleportToHusk_MetaData[] = {
		{ "Category", "PhaseWalkInfo" },
		{ "ModuleRelativePath", "Public/PhaseWalkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_TeleportToHusk_SetBit(void* Obj)
	{
		((FPhaseWalkInfo*)Obj)->TeleportToHusk = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_TeleportToHusk = { "TeleportToHusk", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhaseWalkInfo), &Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_TeleportToHusk_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_TeleportToHusk_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_TeleportToHusk_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskRotation_MetaData[] = {
		{ "Category", "PhaseWalkInfo" },
		{ "ModuleRelativePath", "Public/PhaseWalkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskRotation = { "HuskRotation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhaseWalkInfo, HuskRotation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskRotation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskLocation_MetaData[] = {
		{ "Category", "PhaseWalkInfo" },
		{ "ModuleRelativePath", "Public/PhaseWalkInfo.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskLocation = { "HuskLocation", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPhaseWalkInfo, HuskLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsInteractionPhaseWalking_MetaData[] = {
		{ "Category", "PhaseWalkInfo" },
		{ "ModuleRelativePath", "Public/PhaseWalkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsInteractionPhaseWalking_SetBit(void* Obj)
	{
		((FPhaseWalkInfo*)Obj)->IsInteractionPhaseWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsInteractionPhaseWalking = { "IsInteractionPhaseWalking", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhaseWalkInfo), &Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsInteractionPhaseWalking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsInteractionPhaseWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsInteractionPhaseWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsPassivePhaseWalking_MetaData[] = {
		{ "Category", "PhaseWalkInfo" },
		{ "ModuleRelativePath", "Public/PhaseWalkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsPassivePhaseWalking_SetBit(void* Obj)
	{
		((FPhaseWalkInfo*)Obj)->IsPassivePhaseWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsPassivePhaseWalking = { "IsPassivePhaseWalking", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhaseWalkInfo), &Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsPassivePhaseWalking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsPassivePhaseWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsPassivePhaseWalking_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsActivePhaseWalking_MetaData[] = {
		{ "Category", "PhaseWalkInfo" },
		{ "ModuleRelativePath", "Public/PhaseWalkInfo.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsActivePhaseWalking_SetBit(void* Obj)
	{
		((FPhaseWalkInfo*)Obj)->IsActivePhaseWalking = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsActivePhaseWalking = { "IsActivePhaseWalking", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FPhaseWalkInfo), &Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsActivePhaseWalking_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsActivePhaseWalking_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsActivePhaseWalking_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_TeleportToHusk,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskRotation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_HuskLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsInteractionPhaseWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsPassivePhaseWalking,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::NewProp_IsActivePhaseWalking,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"PhaseWalkInfo",
		sizeof(FPhaseWalkInfo),
		alignof(FPhaseWalkInfo),
		Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPhaseWalkInfo()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPhaseWalkInfo_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PhaseWalkInfo"), sizeof(FPhaseWalkInfo), Get_Z_Construct_UScriptStruct_FPhaseWalkInfo_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPhaseWalkInfo_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPhaseWalkInfo_Hash() { return 2650806565U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
