// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/PathBuilder_LastGoal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePathBuilder_LastGoal() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_LastGoal_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder_LastGoal();
	DBDBOTS_API UClass* Z_Construct_UClass_UPathBuilder();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UPathBuilder_LastGoal::StaticRegisterNativesUPathBuilder_LastGoal()
	{
	}
	UClass* Z_Construct_UClass_UPathBuilder_LastGoal_NoRegister()
	{
		return UPathBuilder_LastGoal::StaticClass();
	}
	struct Z_Construct_UClass_UPathBuilder_LastGoal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPathBuilder_LastGoal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPathBuilder,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPathBuilder_LastGoal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PathBuilder_LastGoal.h" },
		{ "ModuleRelativePath", "Public/PathBuilder_LastGoal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPathBuilder_LastGoal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPathBuilder_LastGoal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPathBuilder_LastGoal_Statics::ClassParams = {
		&UPathBuilder_LastGoal::StaticClass,
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
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UPathBuilder_LastGoal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPathBuilder_LastGoal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPathBuilder_LastGoal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPathBuilder_LastGoal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPathBuilder_LastGoal, 1796212937);
	template<> DBDBOTS_API UClass* StaticClass<UPathBuilder_LastGoal>()
	{
		return UPathBuilder_LastGoal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPathBuilder_LastGoal(Z_Construct_UClass_UPathBuilder_LastGoal, &UPathBuilder_LastGoal::StaticClass, TEXT("/Script/DBDBots"), TEXT("UPathBuilder_LastGoal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPathBuilder_LastGoal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
