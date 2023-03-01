// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/RecentlyActiveStateTagEvaluatorCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRecentlyActiveStateTagEvaluatorCondition() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_Archives();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void URecentlyActiveStateTagEvaluatorCondition::StaticRegisterNativesURecentlyActiveStateTagEvaluatorCondition()
	{
	}
	UClass* Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_NoRegister()
	{
		return URecentlyActiveStateTagEvaluatorCondition::StaticClass();
	}
	struct Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__stateTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__stateTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RecentlyActiveStateTagEvaluatorCondition.h" },
		{ "ModuleRelativePath", "Public/RecentlyActiveStateTagEvaluatorCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::NewProp__stateTag_MetaData[] = {
		{ "Category", "RecentlyActiveStateTagEvaluatorCondition" },
		{ "ModuleRelativePath", "Public/RecentlyActiveStateTagEvaluatorCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::NewProp__stateTag = { "_stateTag", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URecentlyActiveStateTagEvaluatorCondition, _stateTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::NewProp__stateTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::NewProp__stateTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::NewProp__stateTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URecentlyActiveStateTagEvaluatorCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::ClassParams = {
		&URecentlyActiveStateTagEvaluatorCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URecentlyActiveStateTagEvaluatorCondition, 2934340944);
	template<> ARCHIVES_API UClass* StaticClass<URecentlyActiveStateTagEvaluatorCondition>()
	{
		return URecentlyActiveStateTagEvaluatorCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URecentlyActiveStateTagEvaluatorCondition(Z_Construct_UClass_URecentlyActiveStateTagEvaluatorCondition, &URecentlyActiveStateTagEvaluatorCondition::StaticClass, TEXT("/Script/Archives"), TEXT("URecentlyActiveStateTagEvaluatorCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URecentlyActiveStateTagEvaluatorCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
