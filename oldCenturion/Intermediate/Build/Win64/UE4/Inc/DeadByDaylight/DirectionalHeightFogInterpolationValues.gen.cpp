// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DirectionalHeightFogInterpolationValues.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDirectionalHeightFogInterpolationValues() {}
// Cross Module References
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
class UScriptStruct* FDirectionalHeightFogInterpolationValues::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DEADBYDAYLIGHT_API uint32 Get_Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues, Z_Construct_UPackage__Script_DeadByDaylight(), TEXT("DirectionalHeightFogInterpolationValues"), sizeof(FDirectionalHeightFogInterpolationValues), Get_Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Hash());
	}
	return Singleton;
}
template<> DEADBYDAYLIGHT_API UScriptStruct* StaticStruct<FDirectionalHeightFogInterpolationValues>()
{
	return FDirectionalHeightFogInterpolationValues::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDirectionalHeightFogInterpolationValues(FDirectionalHeightFogInterpolationValues::StaticStruct, TEXT("/Script/DeadByDaylight"), TEXT("DirectionalHeightFogInterpolationValues"), false, nullptr, nullptr);
static struct FScriptStruct_DeadByDaylight_StaticRegisterNativesFDirectionalHeightFogInterpolationValues
{
	FScriptStruct_DeadByDaylight_StaticRegisterNativesFDirectionalHeightFogInterpolationValues()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DirectionalHeightFogInterpolationValues")),new UScriptStruct::TCppStructOps<FDirectionalHeightFogInterpolationValues>);
	}
} ScriptStruct_DeadByDaylight_StaticRegisterNativesFDirectionalHeightFogInterpolationValues;
	struct Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceUntilNoFog_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceUntilNoFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceUntilFlatFog_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceUntilFlatFog;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_StartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogMaxOpacity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogMaxOpacity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogHeightFalloff_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogHeightFalloff;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DirectionalInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringStartDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringStartDistance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DirectionalInscatteringExponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DirectionalInscatteringExponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogInscatteringColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_FogInscatteringColor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FogDensity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_FogDensity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDirectionalHeightFogInterpolationValues>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilNoFog_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilNoFog = { "DistanceUntilNoFog", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, DistanceUntilNoFog), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilNoFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilNoFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilFlatFog_MetaData[] = {
		{ "Comment", "//UPROPERTY()\n//TArray<FHeightFogGradientEntry> FogGradient;\n" },
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
		{ "ToolTip", "UPROPERTY()\nTArray<FHeightFogGradientEntry> FogGradient;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilFlatFog = { "DistanceUntilFlatFog", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, DistanceUntilFlatFog), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilFlatFog_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilFlatFog_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_StartDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_StartDistance = { "StartDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, StartDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_StartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_StartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogMaxOpacity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogMaxOpacity = { "FogMaxOpacity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, FogMaxOpacity), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogMaxOpacity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogMaxOpacity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogHeightFalloff_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogHeightFalloff = { "FogHeightFalloff", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, FogHeightFalloff), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogHeightFalloff_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogHeightFalloff_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringColor = { "DirectionalInscatteringColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, DirectionalInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringStartDistance = { "DirectionalInscatteringStartDistance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, DirectionalInscatteringStartDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringStartDistance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringExponent_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringExponent = { "DirectionalInscatteringExponent", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, DirectionalInscatteringExponent), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringExponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringExponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogInscatteringColor_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogInscatteringColor = { "FogInscatteringColor", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, FogInscatteringColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogInscatteringColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogInscatteringColor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogDensity_MetaData[] = {
		{ "ModuleRelativePath", "Public/DirectionalHeightFogInterpolationValues.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogDensity = { "FogDensity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDirectionalHeightFogInterpolationValues, FogDensity), METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogDensity_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogDensity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilNoFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DistanceUntilFlatFog,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_StartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogMaxOpacity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogHeightFalloff,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringStartDistance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_DirectionalInscatteringExponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogInscatteringColor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::NewProp_FogDensity,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
		nullptr,
		&NewStructOps,
		"DirectionalHeightFogInterpolationValues",
		sizeof(FDirectionalHeightFogInterpolationValues),
		alignof(FDirectionalHeightFogInterpolationValues),
		Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DeadByDaylight();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DirectionalHeightFogInterpolationValues"), sizeof(FDirectionalHeightFogInterpolationValues), Get_Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDirectionalHeightFogInterpolationValues_Hash() { return 1574333913U; }
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
