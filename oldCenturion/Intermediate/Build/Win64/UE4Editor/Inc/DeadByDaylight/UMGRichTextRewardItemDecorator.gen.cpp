// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGRichTextRewardItemDecorator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGRichTextRewardItemDecorator() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRichTextRewardItemDecorator_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGRichTextRewardItemDecorator();
	UMG_API UClass* Z_Construct_UClass_URichTextBlockDecorator();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
// End Cross Module References
	void UUMGRichTextRewardItemDecorator::StaticRegisterNativesUUMGRichTextRewardItemDecorator()
	{
	}
	UClass* Z_Construct_UClass_UUMGRichTextRewardItemDecorator_NoRegister()
	{
		return UUMGRichTextRewardItemDecorator::StaticClass();
	}
	struct Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RewardSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RewardSet;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URichTextBlockDecorator,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGRichTextRewardItemDecorator.h" },
		{ "ModuleRelativePath", "Public/UMGRichTextRewardItemDecorator.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::NewProp_RewardSet_MetaData[] = {
		{ "Category", "UMGRichTextRewardItemDecorator" },
		{ "ModuleRelativePath", "Public/UMGRichTextRewardItemDecorator.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::NewProp_RewardSet = { "RewardSet", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUMGRichTextRewardItemDecorator, RewardSet), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::NewProp_RewardSet_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::NewProp_RewardSet_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::NewProp_RewardSet,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGRichTextRewardItemDecorator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::ClassParams = {
		&UUMGRichTextRewardItemDecorator::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGRichTextRewardItemDecorator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGRichTextRewardItemDecorator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGRichTextRewardItemDecorator, 749160112);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGRichTextRewardItemDecorator>()
	{
		return UUMGRichTextRewardItemDecorator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGRichTextRewardItemDecorator(Z_Construct_UClass_UUMGRichTextRewardItemDecorator, &UUMGRichTextRewardItemDecorator::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGRichTextRewardItemDecorator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGRichTextRewardItemDecorator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
