// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AutoQualityAdjuster.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutoQualityAdjuster() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAutoQualityAdjuster_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAutoQualityAdjuster();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void AAutoQualityAdjuster::StaticRegisterNativesAAutoQualityAdjuster()
	{
	}
	UClass* Z_Construct_UClass_AAutoQualityAdjuster_NoRegister()
	{
		return AAutoQualityAdjuster::StaticClass();
	}
	struct Z_Construct_UClass_AAutoQualityAdjuster_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumAllowableScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumAllowableScale;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleDecreaseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleDecreaseRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScaleIncreaseRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScaleIncreaseRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaximumMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaximumMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinimumMS_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinimumMS;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetResolutionScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TargetResolutionScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAutoQualityAdjuster_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoQualityAdjuster_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AutoQualityAdjuster.h" },
		{ "ModuleRelativePath", "Public/AutoQualityAdjuster.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumAllowableScale_MetaData[] = {
		{ "Category", "AutoQualityAdjuster" },
		{ "ModuleRelativePath", "Public/AutoQualityAdjuster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumAllowableScale = { "MinimumAllowableScale", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoQualityAdjuster, MinimumAllowableScale), METADATA_PARAMS(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumAllowableScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumAllowableScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleDecreaseRate_MetaData[] = {
		{ "Category", "AutoQualityAdjuster" },
		{ "ModuleRelativePath", "Public/AutoQualityAdjuster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleDecreaseRate = { "ScaleDecreaseRate", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoQualityAdjuster, ScaleDecreaseRate), METADATA_PARAMS(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleDecreaseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleDecreaseRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleIncreaseRate_MetaData[] = {
		{ "Category", "AutoQualityAdjuster" },
		{ "ModuleRelativePath", "Public/AutoQualityAdjuster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleIncreaseRate = { "ScaleIncreaseRate", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoQualityAdjuster, ScaleIncreaseRate), METADATA_PARAMS(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleIncreaseRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleIncreaseRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MaximumMS_MetaData[] = {
		{ "Category", "AutoQualityAdjuster" },
		{ "ModuleRelativePath", "Public/AutoQualityAdjuster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MaximumMS = { "MaximumMS", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoQualityAdjuster, MaximumMS), METADATA_PARAMS(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MaximumMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MaximumMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumMS_MetaData[] = {
		{ "Category", "AutoQualityAdjuster" },
		{ "ModuleRelativePath", "Public/AutoQualityAdjuster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumMS = { "MinimumMS", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoQualityAdjuster, MinimumMS), METADATA_PARAMS(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumMS_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumMS_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_TargetResolutionScale_MetaData[] = {
		{ "Category", "AutoQualityAdjuster" },
		{ "ModuleRelativePath", "Public/AutoQualityAdjuster.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_TargetResolutionScale = { "TargetResolutionScale", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAutoQualityAdjuster, TargetResolutionScale), METADATA_PARAMS(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_TargetResolutionScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_TargetResolutionScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAutoQualityAdjuster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumAllowableScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleDecreaseRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_ScaleIncreaseRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MaximumMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_MinimumMS,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAutoQualityAdjuster_Statics::NewProp_TargetResolutionScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAutoQualityAdjuster_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAutoQualityAdjuster>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAutoQualityAdjuster_Statics::ClassParams = {
		&AAutoQualityAdjuster::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAutoQualityAdjuster_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAutoQualityAdjuster_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAutoQualityAdjuster_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAutoQualityAdjuster_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAutoQualityAdjuster()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAutoQualityAdjuster_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAutoQualityAdjuster, 1345588907);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AAutoQualityAdjuster>()
	{
		return AAutoQualityAdjuster::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAutoQualityAdjuster(Z_Construct_UClass_AAutoQualityAdjuster, &AAutoQualityAdjuster::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AAutoQualityAdjuster"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAutoQualityAdjuster);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
