// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/TheK24Utilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTheK24Utilities() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UTheK24Utilities_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UTheK24Utilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UTheK24Utilities::StaticRegisterNativesUTheK24Utilities()
	{
	}
	UClass* Z_Construct_UClass_UTheK24Utilities_NoRegister()
	{
		return UTheK24Utilities::StaticClass();
	}
	struct Z_Construct_UClass_UTheK24Utilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTheK24Utilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTheK24Utilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TheK24Utilities.h" },
		{ "ModuleRelativePath", "Public/TheK24Utilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTheK24Utilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTheK24Utilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTheK24Utilities_Statics::ClassParams = {
		&UTheK24Utilities::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UTheK24Utilities_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTheK24Utilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTheK24Utilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTheK24Utilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTheK24Utilities, 3602868351);
	template<> THEK24_API UClass* StaticClass<UTheK24Utilities>()
	{
		return UTheK24Utilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTheK24Utilities(Z_Construct_UClass_UTheK24Utilities, &UTheK24Utilities::StaticClass, TEXT("/Script/TheK24"), TEXT("UTheK24Utilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTheK24Utilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
