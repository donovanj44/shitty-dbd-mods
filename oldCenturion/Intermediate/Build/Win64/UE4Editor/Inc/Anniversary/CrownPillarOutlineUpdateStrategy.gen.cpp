// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Anniversary/Public/CrownPillarOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCrownPillarOutlineUpdateStrategy() {}
// Cross Module References
	ANNIVERSARY_API UClass* Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_NoRegister();
	ANNIVERSARY_API UClass* Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_Anniversary();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UCrownPillarOutlineUpdateStrategy::StaticRegisterNativesUCrownPillarOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_NoRegister()
	{
		return UCrownPillarOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__offeringEnabledAuraColor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__offeringEnabledAuraColor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_Anniversary,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CrownPillarOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/CrownPillarOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::NewProp__offeringEnabledAuraColor_MetaData[] = {
		{ "Category", "CrownPillarOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/CrownPillarOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::NewProp__offeringEnabledAuraColor = { "_offeringEnabledAuraColor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UCrownPillarOutlineUpdateStrategy, _offeringEnabledAuraColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::NewProp__offeringEnabledAuraColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::NewProp__offeringEnabledAuraColor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::NewProp__offeringEnabledAuraColor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCrownPillarOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::ClassParams = {
		&UCrownPillarOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCrownPillarOutlineUpdateStrategy, 3071263507);
	template<> ANNIVERSARY_API UClass* StaticClass<UCrownPillarOutlineUpdateStrategy>()
	{
		return UCrownPillarOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCrownPillarOutlineUpdateStrategy(Z_Construct_UClass_UCrownPillarOutlineUpdateStrategy, &UCrownPillarOutlineUpdateStrategy::StaticClass, TEXT("/Script/Anniversary"), TEXT("UCrownPillarOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCrownPillarOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
