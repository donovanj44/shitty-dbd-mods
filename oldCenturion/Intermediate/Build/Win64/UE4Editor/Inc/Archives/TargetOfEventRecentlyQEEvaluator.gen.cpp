// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Archives/Public/TargetOfEventRecentlyQEEvaluator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTargetOfEventRecentlyQEEvaluator() {}
// Cross Module References
	ARCHIVES_API UClass* Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_NoRegister();
	ARCHIVES_API UClass* Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UQuestEventEvaluatorBase();
	UPackage* Z_Construct_UPackage__Script_Archives();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
// End Cross Module References
	void UTargetOfEventRecentlyQEEvaluator::StaticRegisterNativesUTargetOfEventRecentlyQEEvaluator()
	{
	}
	UClass* Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_NoRegister()
	{
		return UTargetOfEventRecentlyQEEvaluator::StaticClass();
	}
	struct Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondEventOnSelf_MetaData[];
#endif
		static void NewProp__secondEventOnSelf_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__secondEventOnSelf;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__firstGameEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__firstGameEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UQuestEventEvaluatorBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Archives,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TargetOfEventRecentlyQEEvaluator.h" },
		{ "ModuleRelativePath", "Public/TargetOfEventRecentlyQEEvaluator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__secondEventOnSelf_MetaData[] = {
		{ "Category", "TargetOfEventRecentlyQEEvaluator" },
		{ "ModuleRelativePath", "Public/TargetOfEventRecentlyQEEvaluator.h" },
	};
#endif
	void Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__secondEventOnSelf_SetBit(void* Obj)
	{
		((UTargetOfEventRecentlyQEEvaluator*)Obj)->_secondEventOnSelf = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__secondEventOnSelf = { "_secondEventOnSelf", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UTargetOfEventRecentlyQEEvaluator), &Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__secondEventOnSelf_SetBit, METADATA_PARAMS(Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__secondEventOnSelf_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__secondEventOnSelf_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__firstGameEvent_MetaData[] = {
		{ "Category", "TargetOfEventRecentlyQEEvaluator" },
		{ "ModuleRelativePath", "Public/TargetOfEventRecentlyQEEvaluator.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__firstGameEvent = { "_firstGameEvent", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTargetOfEventRecentlyQEEvaluator, _firstGameEvent), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__firstGameEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__firstGameEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__secondEventOnSelf,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::NewProp__firstGameEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTargetOfEventRecentlyQEEvaluator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::ClassParams = {
		&UTargetOfEventRecentlyQEEvaluator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTargetOfEventRecentlyQEEvaluator, 2282192478);
	template<> ARCHIVES_API UClass* StaticClass<UTargetOfEventRecentlyQEEvaluator>()
	{
		return UTargetOfEventRecentlyQEEvaluator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTargetOfEventRecentlyQEEvaluator(Z_Construct_UClass_UTargetOfEventRecentlyQEEvaluator, &UTargetOfEventRecentlyQEEvaluator::StaticClass, TEXT("/Script/Archives"), TEXT("UTargetOfEventRecentlyQEEvaluator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTargetOfEventRecentlyQEEvaluator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
