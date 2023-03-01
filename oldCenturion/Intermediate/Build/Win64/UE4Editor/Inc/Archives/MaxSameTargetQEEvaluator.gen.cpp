// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/MaxSameTargetQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMaxSameTargetQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UMaxSameTargetQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UMaxSameTargetQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void UMaxSameTargetQEEvaluator::StaticRegisterNativesUMaxSameTargetQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UMaxSameTargetQEEvaluator_NoRegister()
	{
		return UMaxSameTargetQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__targetList_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__targetList;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__targetList_Key_KeyProp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetList_ValueProp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MaxSameTargetQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/MaxSameTargetQEEvaluator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList_MetaData[] = {
		{ "ModuleRelativePath", "Public/MaxSameTargetQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList = { "_targetList", nullptr, (EPropertyFlags)0x0010000000002000, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMaxSameTargetQEEvaluator, _targetList), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList_Key_KeyProp = { "_targetList_Key", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList_ValueProp = { "_targetList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::NewProp__targetList_ValueProp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMaxSameTargetQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::ClassParams = {
		&UMaxSameTargetQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMaxSameTargetQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMaxSameTargetQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMaxSameTargetQEEvaluator, 1218819296);
	template<> ARCHIVES_API UClass* StaticClass<UMaxSameTargetQEEvaluator>()
	{
		return UMaxSameTargetQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMaxSameTargetQEEvaluator(Z_Construct_UClass_UMaxSameTargetQEEvaluator, &UMaxSameTargetQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UMaxSameTargetQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMaxSameTargetQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
