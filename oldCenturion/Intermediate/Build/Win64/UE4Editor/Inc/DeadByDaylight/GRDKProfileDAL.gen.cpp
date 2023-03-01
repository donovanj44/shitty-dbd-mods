// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/GRDKProfileDAL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGRDKProfileDAL() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGRDKProfileDAL_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGRDKProfileDAL();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPS4GRDKBaseProfileDAL();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UGRDKProfileDAL::StaticRegisterNativesUGRDKProfileDAL()
	{
	}
	UClass* Z_Construct_UClass_UGRDKProfileDAL_NoRegister()
	{
		return UGRDKProfileDAL::StaticClass();
	}
	struct Z_Construct_UClass_UGRDKProfileDAL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGRDKProfileDAL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPS4GRDKBaseProfileDAL,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGRDKProfileDAL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GRDKProfileDAL.h" },
		{ "ModuleRelativePath", "Public/GRDKProfileDAL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGRDKProfileDAL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGRDKProfileDAL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGRDKProfileDAL_Statics::ClassParams = {
		&UGRDKProfileDAL::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGRDKProfileDAL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGRDKProfileDAL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGRDKProfileDAL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGRDKProfileDAL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGRDKProfileDAL, 1753357220);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UGRDKProfileDAL>()
	{
		return UGRDKProfileDAL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGRDKProfileDAL(Z_Construct_UClass_UGRDKProfileDAL, &UGRDKProfileDAL::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UGRDKProfileDAL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGRDKProfileDAL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
