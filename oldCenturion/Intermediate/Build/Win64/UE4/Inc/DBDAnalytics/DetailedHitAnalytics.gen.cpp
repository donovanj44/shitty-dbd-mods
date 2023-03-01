// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDAnalytics/Public/DetailedHitAnalytics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDetailedHitAnalytics() {}
// Cross Module References
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FDetailedHitAnalytics();
	UPackage* Z_Construct_UPackage__Script_DBDAnalytics();
	DBDANALYTICS_API UScriptStruct* Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic();
// End Cross Module References
class UScriptStruct* FDetailedHitAnalytics::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DBDANALYTICS_API uint32 Get_Z_Construct_UScriptStruct_FDetailedHitAnalytics_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDetailedHitAnalytics, Z_Construct_UPackage__Script_DBDAnalytics(), TEXT("DetailedHitAnalytics"), sizeof(FDetailedHitAnalytics), Get_Z_Construct_UScriptStruct_FDetailedHitAnalytics_Hash());
	}
	return Singleton;
}
template<> DBDANALYTICS_API UScriptStruct* StaticStruct<FDetailedHitAnalytics>()
{
	return FDetailedHitAnalytics::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDetailedHitAnalytics(FDetailedHitAnalytics::StaticStruct, TEXT("/Script/DBDAnalytics"), TEXT("DetailedHitAnalytics"), false, nullptr, nullptr);
static struct FScriptStruct_DBDAnalytics_StaticRegisterNativesFDetailedHitAnalytics
{
	FScriptStruct_DBDAnalytics_StaticRegisterNativesFDetailedHitAnalytics()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DetailedHitAnalytics")),new UScriptStruct::TCppStructOps<FDetailedHitAnalytics>);
	}
} ScriptStruct_DBDAnalytics_StaticRegisterNativesFDetailedHitAnalytics;
	struct Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Distance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Distance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoordinateZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCoordinateZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoordinateY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCoordinateY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetCoordinateX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetCoordinateX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocationInstigatorTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetLocationInstigatorTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorRotationZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorRotationZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorRotationY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorRotationY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorRotationX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorRotationX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorCoordinateZ_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorCoordinateZ;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorCoordinateY_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorCoordinateY;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorCoordinateX_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InstigatorCoordinateX;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitPrimitiveName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_HitPrimitiveName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstigatorName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleInflation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CapsuleInflation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RecorderCacheTimespan_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RecorderCacheTimespan;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsValidCollision_MetaData[];
#endif
		static void NewProp_IsValidCollision_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsValidCollision;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitTimestamp_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HitTimestamp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Ping_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Ping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_TargetMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InstigatorMirrorsId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_InstigatorMirrorsId;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MatchId_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MatchId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDetailedHitAnalytics>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Distance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Distance = { "Distance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, Distance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Distance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Distance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateZ = { "TargetCoordinateZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, TargetCoordinateZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateY_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateY = { "TargetCoordinateY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, TargetCoordinateY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateX_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateX = { "TargetCoordinateX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, TargetCoordinateX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetLocationInstigatorTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetLocationInstigatorTimestamp = { "TargetLocationInstigatorTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, TargetLocationInstigatorTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetLocationInstigatorTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetLocationInstigatorTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationZ = { "InstigatorRotationZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, InstigatorRotationZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationY_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationY = { "InstigatorRotationY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, InstigatorRotationY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationX_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationX = { "InstigatorRotationX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, InstigatorRotationX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateZ_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateZ = { "InstigatorCoordinateZ", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, InstigatorCoordinateZ), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateZ_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateZ_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateY_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateY = { "InstigatorCoordinateY", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, InstigatorCoordinateY), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateY_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateY_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateX_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateX = { "InstigatorCoordinateX", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, InstigatorCoordinateX), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateX_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateX_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitPrimitiveName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitPrimitiveName = { "HitPrimitiveName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, HitPrimitiveName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitPrimitiveName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitPrimitiveName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorName_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorName = { "InstigatorName", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, InstigatorName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_CapsuleInflation_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_CapsuleInflation = { "CapsuleInflation", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, CapsuleInflation), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_CapsuleInflation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_CapsuleInflation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MaximumDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MaximumDistance = { "MaximumDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, MaximumDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MaximumDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MaximumDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_RecorderCacheTimespan_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_RecorderCacheTimespan = { "RecorderCacheTimespan", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, RecorderCacheTimespan), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_RecorderCacheTimespan_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_RecorderCacheTimespan_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidCollision_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidCollision_SetBit(void* Obj)
	{
		((FDetailedHitAnalytics*)Obj)->IsValidCollision = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidCollision = { "IsValidCollision", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDetailedHitAnalytics), &Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidCollision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidCollision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidCollision_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidDistance_SetBit(void* Obj)
	{
		((FDetailedHitAnalytics*)Obj)->IsValidDistance = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidDistance = { "IsValidDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDetailedHitAnalytics), &Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidDistance_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidHit_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidHit_SetBit(void* Obj)
	{
		((FDetailedHitAnalytics*)Obj)->IsValidHit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidHit = { "IsValidHit", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FDetailedHitAnalytics), &Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidHit_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitTimestamp_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitTimestamp = { "HitTimestamp", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, HitTimestamp), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitTimestamp_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitTimestamp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Ping_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Ping = { "Ping", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, Ping), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Ping_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Ping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetMirrorsId = { "TargetMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, TargetMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorMirrorsId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorMirrorsId = { "InstigatorMirrorsId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, InstigatorMirrorsId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorMirrorsId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorMirrorsId_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MatchId_MetaData[] = {
		{ "ModuleRelativePath", "Public/DetailedHitAnalytics.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MatchId = { "MatchId", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDetailedHitAnalytics, MatchId), METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MatchId_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MatchId_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Distance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetCoordinateX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetLocationInstigatorTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorRotationX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateZ,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateY,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorCoordinateX,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitPrimitiveName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_CapsuleInflation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MaximumDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_RecorderCacheTimespan,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidCollision,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_IsValidHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_HitTimestamp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_Ping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_TargetMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_InstigatorMirrorsId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::NewProp_MatchId,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DBDAnalytics,
		Z_Construct_UScriptStruct_FUniquelyIdentifiedAnalytic,
		&NewStructOps,
		"DetailedHitAnalytics",
		sizeof(FDetailedHitAnalytics),
		alignof(FDetailedHitAnalytics),
		Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDetailedHitAnalytics()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDetailedHitAnalytics_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DBDAnalytics();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DetailedHitAnalytics"), sizeof(FDetailedHitAnalytics), Get_Z_Construct_UScriptStruct_FDetailedHitAnalytics_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDetailedHitAnalytics_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDetailedHitAnalytics_Hash() { return 1625137867U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
