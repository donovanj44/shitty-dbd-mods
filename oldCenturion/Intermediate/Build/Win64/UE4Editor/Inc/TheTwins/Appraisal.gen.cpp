// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/Appraisal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAppraisal() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UAppraisal_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UAppraisal();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UAppraisal::StaticRegisterNativesUAppraisal()
	{
	}
	UClass* Z_Construct_UClass_UAppraisal_NoRegister()
	{
		return UAppraisal::StaticClass();
	}
	struct Z_Construct_UClass_UAppraisal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chestSearchSpeedMultiplier_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__chestSearchSpeedMultiplier;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAppraisal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppraisal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Appraisal.h" },
		{ "ModuleRelativePath", "Public/Appraisal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAppraisal_Statics::NewProp__chestSearchSpeedMultiplier_MetaData[] = {
		{ "Category", "Appraisal" },
		{ "ModuleRelativePath", "Public/Appraisal.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAppraisal_Statics::NewProp__chestSearchSpeedMultiplier = { "_chestSearchSpeedMultiplier", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_chestSearchSpeedMultiplier, UAppraisal), STRUCT_OFFSET(UAppraisal, _chestSearchSpeedMultiplier), METADATA_PARAMS(Z_Construct_UClass_UAppraisal_Statics::NewProp__chestSearchSpeedMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAppraisal_Statics::NewProp__chestSearchSpeedMultiplier_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAppraisal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAppraisal_Statics::NewProp__chestSearchSpeedMultiplier,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAppraisal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAppraisal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAppraisal_Statics::ClassParams = {
		&UAppraisal::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAppraisal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAppraisal_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAppraisal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAppraisal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAppraisal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAppraisal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAppraisal, 2258123470);
	template<> THETWINS_API UClass* StaticClass<UAppraisal>()
	{
		return UAppraisal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAppraisal(Z_Construct_UClass_UAppraisal, &UAppraisal::StaticClass, TEXT("/Script/TheTwins"), TEXT("UAppraisal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAppraisal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
