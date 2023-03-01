// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WwiseUtilities/Public/WwiseUtilities.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWwiseUtilities() {}
// Cross Module References
	WWISEUTILITIES_API UClass* Z_Construct_UClass_UWwiseUtilities_NoRegister();
	WWISEUTILITIES_API UClass* Z_Construct_UClass_UWwiseUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_WwiseUtilities();
// End Cross Module References
	void UWwiseUtilities::StaticRegisterNativesUWwiseUtilities()
	{
	}
	UClass* Z_Construct_UClass_UWwiseUtilities_NoRegister()
	{
		return UWwiseUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UWwiseUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWwiseUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_WwiseUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWwiseUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WwiseUtilities.h" },
		{ "ModuleRelativePath", "Public/WwiseUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWwiseUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWwiseUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWwiseUtilities_Statics::ClassParams = {
		&UWwiseUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWwiseUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWwiseUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWwiseUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWwiseUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWwiseUtilities, 4214691637);
	template<> WWISEUTILITIES_API UClass* StaticClass<UWwiseUtilities>()
	{
		return UWwiseUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWwiseUtilities(Z_Construct_UClass_UWwiseUtilities, &UWwiseUtilities::StaticClass, TEXT("/Script/WwiseUtilities"), TEXT("UWwiseUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWwiseUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
