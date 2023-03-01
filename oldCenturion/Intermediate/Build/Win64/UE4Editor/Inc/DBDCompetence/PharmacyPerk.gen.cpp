// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/PharmacyPerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePharmacyPerk() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UPharmacyPerk_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UPharmacyPerk();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UPharmacyPerk::StaticRegisterNativesUPharmacyPerk()
	{
	}
	UClass* Z_Construct_UClass_UPharmacyPerk_NoRegister()
	{
		return UPharmacyPerk::StaticClass();
	}
	struct Z_Construct_UClass_UPharmacyPerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__searchSpeeds_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__searchSpeeds;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__searchSpeeds_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPharmacyPerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPharmacyPerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PharmacyPerk.h" },
		{ "ModuleRelativePath", "Public/PharmacyPerk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPharmacyPerk_Statics::NewProp__searchSpeeds_MetaData[] = {
		{ "Category", "PharmacyPerk" },
		{ "ModuleRelativePath", "Public/PharmacyPerk.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UPharmacyPerk_Statics::NewProp__searchSpeeds = { "_searchSpeeds", nullptr, (EPropertyFlags)0x0020080000010015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPharmacyPerk, _searchSpeeds), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UPharmacyPerk_Statics::NewProp__searchSpeeds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPharmacyPerk_Statics::NewProp__searchSpeeds_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPharmacyPerk_Statics::NewProp__searchSpeeds_Inner = { "_searchSpeeds", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPharmacyPerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPharmacyPerk_Statics::NewProp__searchSpeeds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPharmacyPerk_Statics::NewProp__searchSpeeds_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPharmacyPerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPharmacyPerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPharmacyPerk_Statics::ClassParams = {
		&UPharmacyPerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPharmacyPerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPharmacyPerk_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPharmacyPerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPharmacyPerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPharmacyPerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPharmacyPerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPharmacyPerk, 2685710358);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UPharmacyPerk>()
	{
		return UPharmacyPerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPharmacyPerk(Z_Construct_UClass_UPharmacyPerk, &UPharmacyPerk::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UPharmacyPerk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPharmacyPerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
