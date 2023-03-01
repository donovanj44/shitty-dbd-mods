// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UMGUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUMGUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUMGUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UUMGUtilities::StaticRegisterNativesUUMGUtilities()
	{
	}
	UClass* Z_Construct_UClass_UUMGUtilities_NoRegister()
	{
		return UUMGUtilities::StaticClass();
	}
	struct Z_Construct_UClass_UUMGUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUMGUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUMGUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UMGUtilities.h" },
		{ "ModuleRelativePath", "Public/UMGUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUMGUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUMGUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUMGUtilities_Statics::ClassParams = {
		&UUMGUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUMGUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUMGUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUMGUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUMGUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUMGUtilities, 3472176607);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUMGUtilities>()
	{
		return UUMGUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUMGUtilities(Z_Construct_UClass_UUMGUtilities, &UUMGUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUMGUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUMGUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
