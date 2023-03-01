// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PS4GRDKBaseProfileDAL.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePS4GRDKBaseProfileDAL() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPS4GRDKBaseProfileDAL_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPS4GRDKBaseProfileDAL();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPlayerProfileDAL();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPS4GRDKBaseProfileDAL::StaticRegisterNativesUPS4GRDKBaseProfileDAL()
	{
	}
	UClass* Z_Construct_UClass_UPS4GRDKBaseProfileDAL_NoRegister()
	{
		return UPS4GRDKBaseProfileDAL::StaticClass();
	}
	struct Z_Construct_UClass_UPS4GRDKBaseProfileDAL_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPS4GRDKBaseProfileDAL_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerProfileDAL,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPS4GRDKBaseProfileDAL_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PS4GRDKBaseProfileDAL.h" },
		{ "ModuleRelativePath", "Public/PS4GRDKBaseProfileDAL.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPS4GRDKBaseProfileDAL_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPS4GRDKBaseProfileDAL>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPS4GRDKBaseProfileDAL_Statics::ClassParams = {
		&UPS4GRDKBaseProfileDAL::StaticClass,
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
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UPS4GRDKBaseProfileDAL_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPS4GRDKBaseProfileDAL_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPS4GRDKBaseProfileDAL()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPS4GRDKBaseProfileDAL_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPS4GRDKBaseProfileDAL, 3291712006);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPS4GRDKBaseProfileDAL>()
	{
		return UPS4GRDKBaseProfileDAL::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPS4GRDKBaseProfileDAL(Z_Construct_UClass_UPS4GRDKBaseProfileDAL, &UPS4GRDKBaseProfileDAL::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPS4GRDKBaseProfileDAL"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPS4GRDKBaseProfileDAL);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
