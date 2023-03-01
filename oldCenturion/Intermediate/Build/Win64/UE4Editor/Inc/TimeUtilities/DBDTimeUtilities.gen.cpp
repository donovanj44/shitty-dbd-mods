// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeUtilities/Public/DBDTimeUtilities.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTimeUtilities() {}
// Cross Module References
	TIMEUTILITIES_API UClass* Z_Construct_UClass_UDBDTimeUtilities_NoRegister();
	TIMEUTILITIES_API UClass* Z_Construct_UClass_UDBDTimeUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_TimeUtilities();
// End Cross Module References
	void UDBDTimeUtilities::StaticRegisterNativesUDBDTimeUtilities()
	{
	}
	UClass* Z_Construct_UClass_UDBDTimeUtilities_NoRegister()
	{
		return UDBDTimeUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTimeUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTimeUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_TimeUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTimeUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDTimeUtilities.h" },
		{ "ModuleRelativePath", "Public/DBDTimeUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTimeUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTimeUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTimeUtilities_Statics::ClassParams = {
		&UDBDTimeUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDTimeUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTimeUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTimeUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTimeUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTimeUtilities, 1243664489);
	template<> TIMEUTILITIES_API UClass* StaticClass<UDBDTimeUtilities>()
	{
		return UDBDTimeUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTimeUtilities(Z_Construct_UClass_UDBDTimeUtilities, &UDBDTimeUtilities::StaticClass, TEXT("/Script/TimeUtilities"), TEXT("UDBDTimeUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTimeUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
