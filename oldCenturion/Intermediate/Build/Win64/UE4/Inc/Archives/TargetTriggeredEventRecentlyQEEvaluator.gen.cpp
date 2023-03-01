// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/TargetTriggeredEventRecentlyQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetTriggeredEventRecentlyQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UTargetTriggeredEventRecentlyQEEvaluator::StaticRegisterNativesUTargetTriggeredEventRecentlyQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_NoRegister()
	{
		return UTargetTriggeredEventRecentlyQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__gameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__gameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TargetTriggeredEventRecentlyQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/TargetTriggeredEventRecentlyQEEvaluator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::NewProp__gameEvent_MetaData[] = {
		{ "Category", "TargetTriggeredEventRecentlyQEEvaluator" },
		{ "ModuleRelativePath", "Public/TargetTriggeredEventRecentlyQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::NewProp__gameEvent = { "_gameEvent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetTriggeredEventRecentlyQEEvaluator, _gameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::NewProp__gameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::NewProp__gameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::NewProp__gameEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetTriggeredEventRecentlyQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::ClassParams = {
		&UTargetTriggeredEventRecentlyQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTargetTriggeredEventRecentlyQEEvaluator, 737598725);
	template<> ARCHIVES_API UClass* StaticClass<UTargetTriggeredEventRecentlyQEEvaluator>()
	{
		return UTargetTriggeredEventRecentlyQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetTriggeredEventRecentlyQEEvaluator(Z_Construct_UClass_UTargetTriggeredEventRecentlyQEEvaluator, &UTargetTriggeredEventRecentlyQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UTargetTriggeredEventRecentlyQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetTriggeredEventRecentlyQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
