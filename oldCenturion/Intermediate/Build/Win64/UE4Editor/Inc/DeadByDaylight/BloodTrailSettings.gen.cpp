// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodTrailSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodTrailSettings() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodTrailSettings_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodTrailSettings();
	ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodDecalEffect_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ETraceTypeQuery();
// End Cross Module References
	void UBloodTrailSettings::StaticRegisterNativesUBloodTrailSettings()
	{
	}
	UClass* Z_Construct_UClass_UBloodTrailSettings_NoRegister()
	{
		return UBloodTrailSettings::StaticClass();
	}
	struct Z_Construct_UClass_UBloodTrailSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recycleDistancePercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__recycleDistancePercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recycleThresholdPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__recycleThresholdPercentage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodDecalEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodDecalEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodTraceChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__bloodTraceChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodDropsRandomScatter_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__bloodDropsRandomScatter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__randomlyRotateBloodDrops_MetaData[];
#endif
		static void NewProp__randomlyRotateBloodDrops_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__randomlyRotateBloodDrops;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodDropsInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__bloodDropsInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__numBloodDropsPerBloodPool_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__numBloodDropsPerBloodPool;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__initialDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__initialDelay;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodTrailSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UDataAsset,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodTrailSettings.h" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleDistancePercentage_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleDistancePercentage = { "_recycleDistancePercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailSettings, _recycleDistancePercentage), METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleDistancePercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleDistancePercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleThresholdPercentage_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "Comment", "//UPROPERTY(EditDefaultsOnly)\n//FBHVRPerDetailModeInt _decalPoolSize;\n" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
		{ "ToolTip", "UPROPERTY(EditDefaultsOnly)\nFBHVRPerDetailModeInt _decalPoolSize;" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleThresholdPercentage = { "_recycleThresholdPercentage", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailSettings, _recycleThresholdPercentage), METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleThresholdPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleThresholdPercentage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDecalEffect_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDecalEffect = { "_bloodDecalEffect", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailSettings, _bloodDecalEffect), Z_Construct_UClass_UBloodDecalEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDecalEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDecalEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodTraceChannel_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodTraceChannel = { "_bloodTraceChannel", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailSettings, _bloodTraceChannel), Z_Construct_UEnum_Engine_ETraceTypeQuery, METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodTraceChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodTraceChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsRandomScatter_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsRandomScatter = { "_bloodDropsRandomScatter", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailSettings, _bloodDropsRandomScatter), METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsRandomScatter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsRandomScatter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__randomlyRotateBloodDrops_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
	void Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__randomlyRotateBloodDrops_SetBit(void* Obj)
	{
		((UBloodTrailSettings*)Obj)->_randomlyRotateBloodDrops = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__randomlyRotateBloodDrops = { "_randomlyRotateBloodDrops", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBloodTrailSettings), &Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__randomlyRotateBloodDrops_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__randomlyRotateBloodDrops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__randomlyRotateBloodDrops_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsInterval_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsInterval = { "_bloodDropsInterval", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailSettings, _bloodDropsInterval), METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__numBloodDropsPerBloodPool_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__numBloodDropsPerBloodPool = { "_numBloodDropsPerBloodPool", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailSettings, _numBloodDropsPerBloodPool), METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__numBloodDropsPerBloodPool_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__numBloodDropsPerBloodPool_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__initialDelay_MetaData[] = {
		{ "Category", "BloodTrailSettings" },
		{ "ModuleRelativePath", "Public/BloodTrailSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__initialDelay = { "_initialDelay", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodTrailSettings, _initialDelay), METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__initialDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__initialDelay_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodTrailSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleDistancePercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__recycleThresholdPercentage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDecalEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodTraceChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsRandomScatter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__randomlyRotateBloodDrops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__bloodDropsInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__numBloodDropsPerBloodPool,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodTrailSettings_Statics::NewProp__initialDelay,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodTrailSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodTrailSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodTrailSettings_Statics::ClassParams = {
		&UBloodTrailSettings::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBloodTrailSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodTrailSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodTrailSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodTrailSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodTrailSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodTrailSettings, 2382655701);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodTrailSettings>()
	{
		return UBloodTrailSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodTrailSettings(Z_Construct_UClass_UBloodTrailSettings, &UBloodTrailSettings::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodTrailSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodTrailSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
