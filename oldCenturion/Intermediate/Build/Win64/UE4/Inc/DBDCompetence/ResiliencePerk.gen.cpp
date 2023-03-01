// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ResiliencePerk.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeResiliencePerk() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UResiliencePerk_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UResiliencePerk();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UResiliencePerk::StaticRegisterNativesUResiliencePerk()
	{
	}
	UClass* Z_Construct_UClass_UResiliencePerk_NoRegister()
	{
		return UResiliencePerk::StaticClass();
	}
	struct Z_Construct_UClass_UResiliencePerk_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actionSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__actionSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UResiliencePerk_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResiliencePerk_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ResiliencePerk.h" },
		{ "ModuleRelativePath", "Public/ResiliencePerk.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UResiliencePerk_Statics::NewProp__actionSpeed_MetaData[] = {
		{ "Category", "ResiliencePerk" },
		{ "ModuleRelativePath", "Public/ResiliencePerk.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UResiliencePerk_Statics::NewProp__actionSpeed = { "_actionSpeed", nullptr, (EPropertyFlags)0x0020080000000041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_actionSpeed, UResiliencePerk), STRUCT_OFFSET(UResiliencePerk, _actionSpeed), METADATA_PARAMS(Z_Construct_UClass_UResiliencePerk_Statics::NewProp__actionSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UResiliencePerk_Statics::NewProp__actionSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UResiliencePerk_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UResiliencePerk_Statics::NewProp__actionSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UResiliencePerk_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UResiliencePerk>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UResiliencePerk_Statics::ClassParams = {
		&UResiliencePerk::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UResiliencePerk_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UResiliencePerk_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UResiliencePerk_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UResiliencePerk_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UResiliencePerk()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UResiliencePerk_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UResiliencePerk, 1400678038);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UResiliencePerk>()
	{
		return UResiliencePerk::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UResiliencePerk(Z_Construct_UClass_UResiliencePerk, &UResiliencePerk::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UResiliencePerk"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UResiliencePerk);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
