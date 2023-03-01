// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Nemesis.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNemesis() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UNemesis_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UNemesis();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UNemesis::StaticRegisterNativesUNemesis()
	{
	}
	UClass* Z_Construct_UClass_UNemesis_NoRegister()
	{
		return UNemesis::StaticClass();
	}
	struct Z_Construct_UClass_UNemesis_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__obliviousTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__obliviousTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealToKillerTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealToKillerTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNemesis_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNemesis_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Nemesis.h" },
		{ "ModuleRelativePath", "Public/Nemesis.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNemesis_Statics::NewProp__obliviousTime_MetaData[] = {
		{ "Category", "Nemesis" },
		{ "ModuleRelativePath", "Public/Nemesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNemesis_Statics::NewProp__obliviousTime = { "_obliviousTime", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_obliviousTime, UNemesis), STRUCT_OFFSET(UNemesis, _obliviousTime), METADATA_PARAMS(Z_Construct_UClass_UNemesis_Statics::NewProp__obliviousTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNemesis_Statics::NewProp__obliviousTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNemesis_Statics::NewProp__revealToKillerTime_MetaData[] = {
		{ "Category", "Nemesis" },
		{ "ModuleRelativePath", "Public/Nemesis.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UNemesis_Statics::NewProp__revealToKillerTime = { "_revealToKillerTime", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_revealToKillerTime, UNemesis), STRUCT_OFFSET(UNemesis, _revealToKillerTime), METADATA_PARAMS(Z_Construct_UClass_UNemesis_Statics::NewProp__revealToKillerTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNemesis_Statics::NewProp__revealToKillerTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNemesis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNemesis_Statics::NewProp__obliviousTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNemesis_Statics::NewProp__revealToKillerTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNemesis_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNemesis>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNemesis_Statics::ClassParams = {
		&UNemesis::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNemesis_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNemesis_Statics::PropPointers),
		0,
		0x00A000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UNemesis_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNemesis_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNemesis()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNemesis_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNemesis, 3075779357);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UNemesis>()
	{
		return UNemesis::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNemesis(Z_Construct_UClass_UNemesis, &UNemesis::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UNemesis"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNemesis);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
