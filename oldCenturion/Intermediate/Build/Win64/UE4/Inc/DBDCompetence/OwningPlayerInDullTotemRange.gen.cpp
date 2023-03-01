// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/OwningPlayerInDullTotemRange.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwningPlayerInDullTotemRange() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningPlayerInDullTotemRange_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningPlayerInDullTotemRange();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningPlayerInTotemRange();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UOwningPlayerInDullTotemRange::StaticRegisterNativesUOwningPlayerInDullTotemRange()
	{
	}
	UClass* Z_Construct_UClass_UOwningPlayerInDullTotemRange_NoRegister()
	{
		return UOwningPlayerInDullTotemRange::StaticClass();
	}
	struct Z_Construct_UClass_UOwningPlayerInDullTotemRange_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOwningPlayerInDullTotemRange_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOwningPlayerInTotemRange,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwningPlayerInDullTotemRange_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OwningPlayerInDullTotemRange.h" },
		{ "ModuleRelativePath", "Public/OwningPlayerInDullTotemRange.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOwningPlayerInDullTotemRange_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOwningPlayerInDullTotemRange>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOwningPlayerInDullTotemRange_Statics::ClassParams = {
		&UOwningPlayerInDullTotemRange::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOwningPlayerInDullTotemRange_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOwningPlayerInDullTotemRange_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOwningPlayerInDullTotemRange()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOwningPlayerInDullTotemRange_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOwningPlayerInDullTotemRange, 263967009);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UOwningPlayerInDullTotemRange>()
	{
		return UOwningPlayerInDullTotemRange::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOwningPlayerInDullTotemRange(Z_Construct_UClass_UOwningPlayerInDullTotemRange, &UOwningPlayerInDullTotemRange::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UOwningPlayerInDullTotemRange"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOwningPlayerInDullTotemRange);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
