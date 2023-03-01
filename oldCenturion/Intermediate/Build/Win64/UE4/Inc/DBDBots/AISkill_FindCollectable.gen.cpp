// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_FindCollectable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_FindCollectable() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindCollectable_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindCollectable();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_FindInteractable();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAISkill_FindCollectable::StaticRegisterNativesUAISkill_FindCollectable()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_FindCollectable_NoRegister()
	{
		return UAISkill_FindCollectable::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_FindCollectable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectOverItemChargeRatio_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CollectOverItemChargeRatio;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollectUnderItemCount_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CollectUnderItemCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_FindCollectable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill_FindInteractable,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_FindCollectable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_FindCollectable.h" },
		{ "ModuleRelativePath", "Public/AISkill_FindCollectable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectOverItemChargeRatio_MetaData[] = {
		{ "Category", "AISkill_FindCollectable" },
		{ "ModuleRelativePath", "Public/AISkill_FindCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectOverItemChargeRatio = { "CollectOverItemChargeRatio", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_FindCollectable, CollectOverItemChargeRatio), METADATA_PARAMS(Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectOverItemChargeRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectOverItemChargeRatio_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectUnderItemCount_MetaData[] = {
		{ "Category", "AISkill_FindCollectable" },
		{ "ModuleRelativePath", "Public/AISkill_FindCollectable.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectUnderItemCount = { "CollectUnderItemCount", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_FindCollectable, CollectUnderItemCount), METADATA_PARAMS(Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectUnderItemCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectUnderItemCount_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_FindCollectable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectOverItemChargeRatio,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_FindCollectable_Statics::NewProp_CollectUnderItemCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_FindCollectable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_FindCollectable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_FindCollectable_Statics::ClassParams = {
		&UAISkill_FindCollectable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_FindCollectable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindCollectable_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_FindCollectable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_FindCollectable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_FindCollectable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_FindCollectable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_FindCollectable, 796035254);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_FindCollectable>()
	{
		return UAISkill_FindCollectable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_FindCollectable(Z_Construct_UClass_UAISkill_FindCollectable, &UAISkill_FindCollectable::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_FindCollectable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_FindCollectable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
