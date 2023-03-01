// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/EscapeTile.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeTile() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeTile_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AEscapeTile();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ATile();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void AEscapeTile::StaticRegisterNativesAEscapeTile()
	{
	}
	UClass* Z_Construct_UClass_AEscapeTile_NoRegister()
	{
		return AEscapeTile::StaticClass();
	}
	struct Z_Construct_UClass_AEscapeTile_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AEscapeTile_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ATile,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AEscapeTile_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "EscapeTile.h" },
		{ "ModuleRelativePath", "Public/EscapeTile.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AEscapeTile_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AEscapeTile>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AEscapeTile_Statics::ClassParams = {
		&AEscapeTile::StaticClass,
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
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AEscapeTile_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AEscapeTile_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AEscapeTile()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AEscapeTile_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEscapeTile, 4151804858);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AEscapeTile>()
	{
		return AEscapeTile::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEscapeTile(Z_Construct_UClass_AEscapeTile, &AEscapeTile::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AEscapeTile"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEscapeTile);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
