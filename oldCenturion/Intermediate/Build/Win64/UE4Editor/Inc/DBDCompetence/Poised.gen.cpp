// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Poised.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoised() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UPoised_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UPoised();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UPoised::StaticRegisterNativesUPoised()
	{
	}
	UClass* Z_Construct_UClass_UPoised_NoRegister()
	{
		return UPoised::StaticClass();
	}
	struct Z_Construct_UClass_UPoised_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__activationTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__activationTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoised_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoised_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Poised.h" },
		{ "ModuleRelativePath", "Public/Poised.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoised_Statics::NewProp__activationTime_MetaData[] = {
		{ "Category", "Poised" },
		{ "ModuleRelativePath", "Public/Poised.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPoised_Statics::NewProp__activationTime = { "_activationTime", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_activationTime, UPoised), STRUCT_OFFSET(UPoised, _activationTime), METADATA_PARAMS(Z_Construct_UClass_UPoised_Statics::NewProp__activationTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPoised_Statics::NewProp__activationTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPoised_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPoised_Statics::NewProp__activationTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoised_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPoised>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoised_Statics::ClassParams = {
		&UPoised::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPoised_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPoised_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPoised_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoised_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoised()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoised_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoised, 4150017064);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UPoised>()
	{
		return UPoised::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoised(Z_Construct_UClass_UPoised, &UPoised::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UPoised"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoised);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
