// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/EventCountComparisonQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEventCountComparisonQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UEventCountComparisonQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UEventCountComparisonQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	ARCHIVES_API UEnum* Z_Construct_UEnum_Archives_EventCountComparisonOperator();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UEventCountComparisonQEEvaluator::StaticRegisterNativesUEventCountComparisonQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UEventCountComparisonQEEvaluator_NoRegister()
	{
		return UEventCountComparisonQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__comparisonOperator_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__comparisonOperator;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__comparisonOperator_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__resetCountEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__resetCountEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__resetCountEvents_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__incrementCountEvents_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__incrementCountEvents;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__incrementCountEvents_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EventCountComparisonQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/EventCountComparisonQEEvaluator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__comparisonOperator_MetaData[] = {
		{ "Category", "EventCountComparisonQEEvaluator" },
		{ "ModuleRelativePath", "Public/EventCountComparisonQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__comparisonOperator = { "_comparisonOperator", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventCountComparisonQEEvaluator, _comparisonOperator), Z_Construct_UEnum_Archives_EventCountComparisonOperator, METADATA_PARAMS(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__comparisonOperator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__comparisonOperator_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__comparisonOperator_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__resetCountEvents_MetaData[] = {
		{ "Category", "EventCountComparisonQEEvaluator" },
		{ "ModuleRelativePath", "Public/EventCountComparisonQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__resetCountEvents = { "_resetCountEvents", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventCountComparisonQEEvaluator, _resetCountEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__resetCountEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__resetCountEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__resetCountEvents_Inner = { "_resetCountEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__incrementCountEvents_MetaData[] = {
		{ "Category", "EventCountComparisonQEEvaluator" },
		{ "ModuleRelativePath", "Public/EventCountComparisonQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__incrementCountEvents = { "_incrementCountEvents", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEventCountComparisonQEEvaluator, _incrementCountEvents), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__incrementCountEvents_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__incrementCountEvents_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__incrementCountEvents_Inner = { "_incrementCountEvents", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__comparisonOperator,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__comparisonOperator_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__resetCountEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__resetCountEvents_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__incrementCountEvents,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::NewProp__incrementCountEvents_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEventCountComparisonQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::ClassParams = {
		&UEventCountComparisonQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEventCountComparisonQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEventCountComparisonQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEventCountComparisonQEEvaluator, 545569401);
	template<> ARCHIVES_API UClass* StaticClass<UEventCountComparisonQEEvaluator>()
	{
		return UEventCountComparisonQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEventCountComparisonQEEvaluator(Z_Construct_UClass_UEventCountComparisonQEEvaluator, &UEventCountComparisonQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UEventCountComparisonQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEventCountComparisonQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
