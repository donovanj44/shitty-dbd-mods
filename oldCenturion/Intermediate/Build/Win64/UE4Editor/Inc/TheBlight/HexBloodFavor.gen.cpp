// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/HexBloodFavor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHexBloodFavor() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UHexBloodFavor_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UHexBloodFavor();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UHexPerk();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UHexBloodFavor::StaticRegisterNativesUHexBloodFavor()
	{
	}
	UClass* Z_Construct_UClass_UHexBloodFavor_NoRegister()
	{
		return UHexBloodFavor::StaticClass();
	}
	struct Z_Construct_UClass_UHexBloodFavor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__palletPulldownBlockTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__palletPulldownBlockTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__palletInRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__palletInRange;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UHexBloodFavor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UHexPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexBloodFavor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "HexBloodFavor.h" },
		{ "ModuleRelativePath", "Public/HexBloodFavor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletPulldownBlockTime_MetaData[] = {
		{ "Category", "HexBloodFavor" },
		{ "ModuleRelativePath", "Public/HexBloodFavor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletPulldownBlockTime = { "_palletPulldownBlockTime", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_palletPulldownBlockTime, UHexBloodFavor), STRUCT_OFFSET(UHexBloodFavor, _palletPulldownBlockTime), METADATA_PARAMS(Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletPulldownBlockTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletPulldownBlockTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletInRange_MetaData[] = {
		{ "Category", "HexBloodFavor" },
		{ "ModuleRelativePath", "Public/HexBloodFavor.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletInRange = { "_palletInRange", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_palletInRange, UHexBloodFavor), STRUCT_OFFSET(UHexBloodFavor, _palletInRange), METADATA_PARAMS(Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletInRange_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletInRange_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UHexBloodFavor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletPulldownBlockTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UHexBloodFavor_Statics::NewProp__palletInRange,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UHexBloodFavor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UHexBloodFavor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UHexBloodFavor_Statics::ClassParams = {
		&UHexBloodFavor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UHexBloodFavor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UHexBloodFavor_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UHexBloodFavor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UHexBloodFavor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UHexBloodFavor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UHexBloodFavor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UHexBloodFavor, 84187255);
	template<> THEBLIGHT_API UClass* StaticClass<UHexBloodFavor>()
	{
		return UHexBloodFavor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UHexBloodFavor(Z_Construct_UClass_UHexBloodFavor, &UHexBloodFavor::StaticClass, TEXT("/Script/TheBlight"), TEXT("UHexBloodFavor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UHexBloodFavor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
