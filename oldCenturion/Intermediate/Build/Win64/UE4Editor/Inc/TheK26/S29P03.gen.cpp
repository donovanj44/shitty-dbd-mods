// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/S29P03.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeS29P03() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_US29P03_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_US29P03();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBoonPerk();
	UPackage* Z_Construct_UPackage__Script_TheK26();
// End Cross Module References
	void US29P03::StaticRegisterNativesUS29P03()
	{
	}
	UClass* Z_Construct_UClass_US29P03_NoRegister()
	{
		return US29P03::StaticClass();
	}
	struct Z_Construct_UClass_US29P03_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__recoverSpeedPercentage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__recoverSpeedPercentage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_US29P03_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBoonPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US29P03_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "S29P03.h" },
		{ "ModuleRelativePath", "Public/S29P03.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_US29P03_Statics::NewProp__recoverSpeedPercentage_MetaData[] = {
		{ "Category", "S29P03" },
		{ "ModuleRelativePath", "Public/S29P03.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_US29P03_Statics::NewProp__recoverSpeedPercentage = { "_recoverSpeedPercentage", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_recoverSpeedPercentage, US29P03), STRUCT_OFFSET(US29P03, _recoverSpeedPercentage), METADATA_PARAMS(Z_Construct_UClass_US29P03_Statics::NewProp__recoverSpeedPercentage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_US29P03_Statics::NewProp__recoverSpeedPercentage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_US29P03_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_US29P03_Statics::NewProp__recoverSpeedPercentage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_US29P03_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<US29P03>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_US29P03_Statics::ClassParams = {
		&US29P03::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_US29P03_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_US29P03_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_US29P03_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_US29P03_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_US29P03()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_US29P03_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(US29P03, 4203006092);
	template<> THEK26_API UClass* StaticClass<US29P03>()
	{
		return US29P03::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_US29P03(Z_Construct_UClass_US29P03, &US29P03::StaticClass, TEXT("/Script/TheK26"), TEXT("US29P03"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(US29P03);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
