// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/HasModifierOfTypeEvaluatorCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHasModifierOfTypeEvaluatorCondition() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEvaluatorCondition();
	UPackage* Z_Construct_UPackage__Script_Archives();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UHasModifierOfTypeEvaluatorCondition::StaticRegisterNativesUHasModifierOfTypeEvaluatorCondition()
	{
	}
	UClass* Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_NoRegister()
	{
		return UHasModifierOfTypeEvaluatorCondition::StaticClass();
	}
	struct Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameplayModifierList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__gameplayModifierList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gameplayModifierList_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEvaluatorCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HasModifierOfTypeEvaluatorCondition.h" },
		{ "ModuleRelativePath", "Public/HasModifierOfTypeEvaluatorCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::NewProp__gameplayModifierList_MetaData[] = {
		{ "Category", "HasModifierOfTypeEvaluatorCondition" },
		{ "ModuleRelativePath", "Public/HasModifierOfTypeEvaluatorCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::NewProp__gameplayModifierList = { "_gameplayModifierList", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UHasModifierOfTypeEvaluatorCondition, _gameplayModifierList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::NewProp__gameplayModifierList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::NewProp__gameplayModifierList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::NewProp__gameplayModifierList_Inner = { "_gameplayModifierList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::NewProp__gameplayModifierList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::NewProp__gameplayModifierList_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHasModifierOfTypeEvaluatorCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::ClassParams = {
		&UHasModifierOfTypeEvaluatorCondition::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHasModifierOfTypeEvaluatorCondition, 2371450955);
	template<> ARCHIVES_API UClass* StaticClass<UHasModifierOfTypeEvaluatorCondition>()
	{
		return UHasModifierOfTypeEvaluatorCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHasModifierOfTypeEvaluatorCondition(Z_Construct_UClass_UHasModifierOfTypeEvaluatorCondition, &UHasModifierOfTypeEvaluatorCondition::StaticClass, TEXT("/Script/Archives"), TEXT("UHasModifierOfTypeEvaluatorCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHasModifierOfTypeEvaluatorCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif