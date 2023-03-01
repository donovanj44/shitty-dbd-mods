// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Fixated.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFixated() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UFixated_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UFixated();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UFixated::StaticRegisterNativesUFixated()
	{
	}
	UClass* Z_Construct_UClass_UFixated_NoRegister()
	{
		return UFixated::StaticClass();
	}
	struct Z_Construct_UClass_UFixated_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFixated_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFixated_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Fixated.h" },
		{ "ModuleRelativePath", "Public/Fixated.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFixated_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFixated>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFixated_Statics::ClassParams = {
		&UFixated::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UFixated_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFixated_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFixated()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFixated_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFixated, 1256866507);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UFixated>()
	{
		return UFixated::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFixated(Z_Construct_UClass_UFixated, &UFixated::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UFixated"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFixated);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
