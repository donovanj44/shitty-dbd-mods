// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SoundIndicatorUtilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSoundIndicatorUtilities() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USoundIndicatorUtilities_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USoundIndicatorUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USoundIndicatorUtilities::StaticRegisterNativesUSoundIndicatorUtilities()
	{
	}
	UClass* Z_Construct_UClass_USoundIndicatorUtilities_NoRegister()
	{
		return USoundIndicatorUtilities::StaticClass();
	}
	struct Z_Construct_UClass_USoundIndicatorUtilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USoundIndicatorUtilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USoundIndicatorUtilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SoundIndicatorUtilities.h" },
		{ "ModuleRelativePath", "Public/SoundIndicatorUtilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USoundIndicatorUtilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USoundIndicatorUtilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USoundIndicatorUtilities_Statics::ClassParams = {
		&USoundIndicatorUtilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USoundIndicatorUtilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USoundIndicatorUtilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USoundIndicatorUtilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USoundIndicatorUtilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USoundIndicatorUtilities, 4072944695);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USoundIndicatorUtilities>()
	{
		return USoundIndicatorUtilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USoundIndicatorUtilities(Z_Construct_UClass_USoundIndicatorUtilities, &USoundIndicatorUtilities::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USoundIndicatorUtilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USoundIndicatorUtilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
