// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EvaluatorCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEvaluatorCondition() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvaluatorCondition_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EConditionSubject();
// End Cross Module References
	void UEvaluatorCondition::StaticRegisterNativesUEvaluatorCondition()
	{
	}
	UClass* Z_Construct_UClass_UEvaluatorCondition_NoRegister()
	{
		return UEvaluatorCondition::StaticClass();
	}
	struct Z_Construct_UClass_UEvaluatorCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__conditionSubject_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__conditionSubject;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__conditionSubject_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEvaluatorCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EvaluatorCondition.h" },
		{ "ModuleRelativePath", "Public/EvaluatorCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEvaluatorCondition_Statics::NewProp__conditionSubject_MetaData[] = {
		{ "Category", "EvaluatorCondition" },
		{ "ModuleRelativePath", "Public/EvaluatorCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UEvaluatorCondition_Statics::NewProp__conditionSubject = { "_conditionSubject", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UEvaluatorCondition, _conditionSubject), Z_Construct_UEnum_DeadByDaylight_EConditionSubject, METADATA_PARAMS(Z_Construct_UClass_UEvaluatorCondition_Statics::NewProp__conditionSubject_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorCondition_Statics::NewProp__conditionSubject_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UEvaluatorCondition_Statics::NewProp__conditionSubject_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEvaluatorCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorCondition_Statics::NewProp__conditionSubject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEvaluatorCondition_Statics::NewProp__conditionSubject_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEvaluatorCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEvaluatorCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEvaluatorCondition_Statics::ClassParams = {
		&UEvaluatorCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UEvaluatorCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorCondition_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UEvaluatorCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEvaluatorCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEvaluatorCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEvaluatorCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEvaluatorCondition, 16561060);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEvaluatorCondition>()
	{
		return UEvaluatorCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEvaluatorCondition(Z_Construct_UClass_UEvaluatorCondition, &UEvaluatorCondition::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEvaluatorCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEvaluatorCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
