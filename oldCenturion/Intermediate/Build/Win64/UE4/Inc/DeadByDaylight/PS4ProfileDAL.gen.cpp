// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PS4ProfileDAL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS4ProfileDAL() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPS4ProfileDAL_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPS4ProfileDAL();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPS4GRDKBaseProfileDAL();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPS4ProfileDAL::StaticRegisterNativesUPS4ProfileDAL()
	{
	}
	UClass* Z_Construct_UClass_UPS4ProfileDAL_NoRegister()
	{
		return UPS4ProfileDAL::StaticClass();
	}
	struct Z_Construct_UClass_UPS4ProfileDAL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPS4ProfileDAL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPS4GRDKBaseProfileDAL,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPS4ProfileDAL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PS4ProfileDAL.h" },
		{ "ModuleRelativePath", "Public/PS4ProfileDAL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPS4ProfileDAL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPS4ProfileDAL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPS4ProfileDAL_Statics::ClassParams = {
		&UPS4ProfileDAL::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPS4ProfileDAL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPS4ProfileDAL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPS4ProfileDAL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPS4ProfileDAL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPS4ProfileDAL, 3378110644);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPS4ProfileDAL>()
	{
		return UPS4ProfileDAL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPS4ProfileDAL(Z_Construct_UClass_UPS4ProfileDAL, &UPS4ProfileDAL::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPS4ProfileDAL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPS4ProfileDAL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
