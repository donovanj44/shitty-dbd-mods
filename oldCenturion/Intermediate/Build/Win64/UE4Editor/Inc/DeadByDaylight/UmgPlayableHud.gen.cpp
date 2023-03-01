// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/UmgPlayableHud.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUmgPlayableHud() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgPlayableHud_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgPlayableHud();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UUmgPlayerHud();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UUmgPlayableHud::StaticRegisterNativesUUmgPlayableHud()
	{
	}
	UClass* Z_Construct_UClass_UUmgPlayableHud_NoRegister()
	{
		return UUmgPlayableHud::StaticClass();
	}
	struct Z_Construct_UClass_UUmgPlayableHud_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUmgPlayableHud_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUmgPlayerHud,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUmgPlayableHud_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UmgPlayableHud.h" },
		{ "ModuleRelativePath", "Public/UmgPlayableHud.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUmgPlayableHud_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUmgPlayableHud>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUmgPlayableHud_Statics::ClassParams = {
		&UUmgPlayableHud::StaticClass,
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
		0x00A010A1u,
		METADATA_PARAMS(Z_Construct_UClass_UUmgPlayableHud_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUmgPlayableHud_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUmgPlayableHud()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUmgPlayableHud_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUmgPlayableHud, 1821557323);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UUmgPlayableHud>()
	{
		return UUmgPlayableHud::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUmgPlayableHud(Z_Construct_UClass_UUmgPlayableHud, &UUmgPlayableHud::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UUmgPlayableHud"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUmgPlayableHud);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
