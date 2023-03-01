// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/AllHexTotemsAreActive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAllHexTotemsAreActive() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAllHexTotemsAreActive_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAllHexTotemsAreActive();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UAllHexTotemsAreActive::StaticRegisterNativesUAllHexTotemsAreActive()
	{
	}
	UClass* Z_Construct_UClass_UAllHexTotemsAreActive_NoRegister()
	{
		return UAllHexTotemsAreActive::StaticClass();
	}
	struct Z_Construct_UClass_UAllHexTotemsAreActive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAllHexTotemsAreActive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAllHexTotemsAreActive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AllHexTotemsAreActive.h" },
		{ "ModuleRelativePath", "Public/AllHexTotemsAreActive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAllHexTotemsAreActive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAllHexTotemsAreActive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAllHexTotemsAreActive_Statics::ClassParams = {
		&UAllHexTotemsAreActive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAllHexTotemsAreActive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAllHexTotemsAreActive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAllHexTotemsAreActive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAllHexTotemsAreActive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAllHexTotemsAreActive, 2422239435);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UAllHexTotemsAreActive>()
	{
		return UAllHexTotemsAreActive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAllHexTotemsAreActive(Z_Construct_UClass_UAllHexTotemsAreActive, &UAllHexTotemsAreActive::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UAllHexTotemsAreActive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAllHexTotemsAreActive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
