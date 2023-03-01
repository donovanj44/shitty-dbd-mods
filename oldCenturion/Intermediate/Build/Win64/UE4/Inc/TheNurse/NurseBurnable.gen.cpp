// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheNurse/Public/NurseBurnable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNurseBurnable() {}
// Cross Module References
	THENURSE_API UClass* Z_Construct_UClass_UNurseBurnable_NoRegister();
	THENURSE_API UClass* Z_Construct_UClass_UNurseBurnable();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPlayerLightBurnable();
	UPackage* Z_Construct_UPackage__Script_TheNurse();
// End Cross Module References
	void UNurseBurnable::StaticRegisterNativesUNurseBurnable()
	{
	}
	UClass* Z_Construct_UClass_UNurseBurnable_NoRegister()
	{
		return UNurseBurnable::StaticClass();
	}
	struct Z_Construct_UClass_UNurseBurnable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNurseBurnable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPlayerLightBurnable,
		(UObject* (*)())Z_Construct_UPackage__Script_TheNurse,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNurseBurnable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NurseBurnable.h" },
		{ "ModuleRelativePath", "Public/NurseBurnable.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNurseBurnable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNurseBurnable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNurseBurnable_Statics::ClassParams = {
		&UNurseBurnable::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNurseBurnable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNurseBurnable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNurseBurnable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNurseBurnable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNurseBurnable, 3177343641);
	template<> THENURSE_API UClass* StaticClass<UNurseBurnable>()
	{
		return UNurseBurnable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNurseBurnable(Z_Construct_UClass_UNurseBurnable, &UNurseBurnable::StaticClass, TEXT("/Script/TheNurse"), TEXT("UNurseBurnable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNurseBurnable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
