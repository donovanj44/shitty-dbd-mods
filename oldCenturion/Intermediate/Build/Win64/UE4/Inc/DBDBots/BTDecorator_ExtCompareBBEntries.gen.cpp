// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_ExtCompareBBEntries.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ExtCompareBBEntries() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_CompareBBEntries();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UBTDecorator_ExtCompareBBEntries::StaticRegisterNativesUBTDecorator_ExtCompareBBEntries()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_NoRegister()
	{
		return UBTDecorator_ExtCompareBBEntries::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Tolerance_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Tolerance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_CompareBBEntries,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BTDecorator_ExtCompareBBEntries.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtCompareBBEntries.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::NewProp_Tolerance_MetaData[] = {
		{ "Category", "BTDecorator_ExtCompareBBEntries" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtCompareBBEntries.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::NewProp_Tolerance = { "Tolerance", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtCompareBBEntries, Tolerance), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::NewProp_Tolerance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::NewProp_Tolerance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::NewProp_Tolerance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ExtCompareBBEntries>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::ClassParams = {
		&UBTDecorator_ExtCompareBBEntries::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_ExtCompareBBEntries, 1046700977);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_ExtCompareBBEntries>()
	{
		return UBTDecorator_ExtCompareBBEntries::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ExtCompareBBEntries(Z_Construct_UClass_UBTDecorator_ExtCompareBBEntries, &UBTDecorator_ExtCompareBBEntries::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_ExtCompareBBEntries"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ExtCompareBBEntries);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
