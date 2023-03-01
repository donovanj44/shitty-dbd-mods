// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/HitValidationReport.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHitValidationReport() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FHitValidationReport();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FFloatRange();
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FHitValidatorTargetParams();
	GAMEPLAYUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FHitValidatorInstigatorParams();
// End Cross Module References
class UScriptStruct* FHitValidationReport::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern GAMEPLAYUTILITIES_API uint32 Get_Z_Construct_UScriptStruct_FHitValidationReport_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FHitValidationReport, Z_Construct_UPackage__Script_GameplayUtilities(), TEXT("HitValidationReport"), sizeof(FHitValidationReport), Get_Z_Construct_UScriptStruct_FHitValidationReport_Hash());
	}
	return Singleton;
}
template<> GAMEPLAYUTILITIES_API UScriptStruct* StaticStruct<FHitValidationReport>()
{
	return FHitValidationReport::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FHitValidationReport(FHitValidationReport::StaticStruct, TEXT("/Script/GameplayUtilities"), TEXT("HitValidationReport"), false, nullptr, nullptr);
static struct FScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidationReport
{
	FScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidationReport()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("HitValidationReport")),new UScriptStruct::TCppStructOps<FHitValidationReport>);
	}
} ScriptStruct_GameplayUtilities_StaticRegisterNativesFHitValidationReport;
	struct Z_Construct_UScriptStruct_FHitValidationReport_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HittablePrimitiveTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HittablePrimitiveTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitPrimitiveTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_HitPrimitiveTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValidCollision_MetaData[];
#endif
		static void NewProp_IsValidCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValidCollision;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HasPerformCollisionCheck_MetaData[];
#endif
		static void NewProp_HasPerformCollisionCheck_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_HasPerformCollisionCheck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SquareDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SquareDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewindedTargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_RewindedTargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorTransform_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorTransform;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValidNotStunned_MetaData[];
#endif
		static void NewProp_IsValidNotStunned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValidNotStunned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValidDistance_MetaData[];
#endif
		static void NewProp_IsValidDistance_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValidDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValidHit_MetaData[];
#endif
		static void NewProp_IsValidHit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValidHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleInflation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleInflation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorOwningCharacter_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatorOwningCharacter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetRecorderTimeRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetRecorderTimeRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ValidationTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ValidationTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InstigatorParams;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FHitValidationReport>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HittablePrimitiveTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HittablePrimitiveTransform = { "HittablePrimitiveTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, HittablePrimitiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HittablePrimitiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HittablePrimitiveTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HitPrimitiveTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HitPrimitiveTransform = { "HitPrimitiveTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, HitPrimitiveTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HitPrimitiveTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HitPrimitiveTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidCollision_SetBit(void* Obj)
	{
		((FHitValidationReport*)Obj)->IsValidCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidCollision = { "IsValidCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHitValidationReport), &Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HasPerformCollisionCheck_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HasPerformCollisionCheck_SetBit(void* Obj)
	{
		((FHitValidationReport*)Obj)->HasPerformCollisionCheck = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HasPerformCollisionCheck = { "HasPerformCollisionCheck", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHitValidationReport), &Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HasPerformCollisionCheck_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HasPerformCollisionCheck_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HasPerformCollisionCheck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_SquareDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_SquareDistance = { "SquareDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, SquareDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_SquareDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_SquareDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_RewindedTargetLocation_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_RewindedTargetLocation = { "RewindedTargetLocation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, RewindedTargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_RewindedTargetLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_RewindedTargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorTransform_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorTransform = { "InstigatorTransform", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, InstigatorTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorTransform_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidNotStunned_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidNotStunned_SetBit(void* Obj)
	{
		((FHitValidationReport*)Obj)->IsValidNotStunned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidNotStunned = { "IsValidNotStunned", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHitValidationReport), &Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidNotStunned_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidNotStunned_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidNotStunned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidDistance_SetBit(void* Obj)
	{
		((FHitValidationReport*)Obj)->IsValidDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidDistance = { "IsValidDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHitValidationReport), &Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidHit_SetBit(void* Obj)
	{
		((FHitValidationReport*)Obj)->IsValidHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidHit = { "IsValidHit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FHitValidationReport), &Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_CapsuleInflation_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_CapsuleInflation = { "CapsuleInflation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, CapsuleInflation), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_CapsuleInflation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_CapsuleInflation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_MaximumDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, MaximumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_MaximumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_MaximumDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorOwningCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorOwningCharacter = { "InstigatorOwningCharacter", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, InstigatorOwningCharacter), Z_Construct_UClass_ACharacter_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorOwningCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorOwningCharacter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetRecorderTimeRange_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetRecorderTimeRange = { "TargetRecorderTimeRange", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, TargetRecorderTimeRange), Z_Construct_UScriptStruct_FFloatRange, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetRecorderTimeRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetRecorderTimeRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_ValidationTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_ValidationTimestamp = { "ValidationTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, ValidationTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_ValidationTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_ValidationTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetParams = { "TargetParams", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, TargetParams), Z_Construct_UScriptStruct_FHitValidatorTargetParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorParams_MetaData[] = {
		{ "ModuleRelativePath", "Public/HitValidationReport.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorParams = { "InstigatorParams", nullptr, (EPropertyFlags)0x0010008000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FHitValidationReport, InstigatorParams), Z_Construct_UScriptStruct_FHitValidatorInstigatorParams, METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorParams_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FHitValidationReport_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HittablePrimitiveTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HitPrimitiveTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_HasPerformCollisionCheck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_SquareDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_RewindedTargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorTransform,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidNotStunned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_IsValidHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_CapsuleInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_MaximumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorOwningCharacter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetRecorderTimeRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_ValidationTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_TargetParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FHitValidationReport_Statics::NewProp_InstigatorParams,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FHitValidationReport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
		nullptr,
		&NewStructOps,
		"HitValidationReport",
		sizeof(FHitValidationReport),
		alignof(FHitValidationReport),
		Z_Construct_UScriptStruct_FHitValidationReport_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000205),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FHitValidationReport_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FHitValidationReport_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FHitValidationReport()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FHitValidationReport_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_GameplayUtilities();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("HitValidationReport"), sizeof(FHitValidationReport), Get_Z_Construct_UScriptStruct_FHitValidationReport_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FHitValidationReport_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FHitValidationReport_Hash() { return 2090829684U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
