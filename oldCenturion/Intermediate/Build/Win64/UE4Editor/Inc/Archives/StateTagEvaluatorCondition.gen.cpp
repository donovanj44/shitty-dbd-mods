// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/StateTagEvaluatorCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStateTagEvaluatorCondition() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UStateTagEvaluatorCondition_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UStateTagEvaluatorCondition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_Archives();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UStateTagEvaluatorCondition::StaticRegisterNativesUStateTagEvaluatorCondition()
	{
	}
	UClass* Z_Construct_UClass_UStateTagEvaluatorCondition_NoRegister()
	{
		return UStateTagEvaluatorCondition::StaticClass();
	}
	struct Z_Construct_UClass_UStateTagEvaluatorCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameplayTag_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gameplayTag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "StateTagEvaluatorCondition.h" },
		{ "ModuleRelativePath", "Public/StateTagEvaluatorCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::NewProp__gameplayTag_MetaData[] = {
		{ "Category", "StateTagEvaluatorCondition" },
		{ "ModuleRelativePath", "Public/StateTagEvaluatorCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::NewProp__gameplayTag = { "_gameplayTag", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStateTagEvaluatorCondition, _gameplayTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::NewProp__gameplayTag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::NewProp__gameplayTag_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::NewProp__gameplayTag,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStateTagEvaluatorCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::ClassParams = {
		&UStateTagEvaluatorCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStateTagEvaluatorCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStateTagEvaluatorCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStateTagEvaluatorCondition, 2731296691);
	template<> ARCHIVES_API UClass* StaticClass<UStateTagEvaluatorCondition>()
	{
		return UStateTagEvaluatorCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStateTagEvaluatorCondition(Z_Construct_UClass_UStateTagEvaluatorCondition, &UStateTagEvaluatorCondition::StaticClass, TEXT("/Script/Archives"), TEXT("UStateTagEvaluatorCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStateTagEvaluatorCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
