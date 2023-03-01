// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheBlight/Public/BlightDashAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBlightDashAttack() {}
// Cross Module References
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttack_NoRegister();
	THEBLIGHT_API UClass* Z_Construct_UClass_UBlightDashAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheBlight();
// End Cross Module References
	void UBlightDashAttack::StaticRegisterNativesUBlightDashAttack()
	{
	}
	UClass* Z_Construct_UClass_UBlightDashAttack_NoRegister()
	{
		return UBlightDashAttack::StaticClass();
	}
	struct Z_Construct_UClass_UBlightDashAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBlightDashAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheBlight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBlightDashAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BlightDashAttack.h" },
		{ "ModuleRelativePath", "Public/BlightDashAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBlightDashAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBlightDashAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBlightDashAttack_Statics::ClassParams = {
		&UBlightDashAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBlightDashAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBlightDashAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBlightDashAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBlightDashAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBlightDashAttack, 3700653015);
	template<> THEBLIGHT_API UClass* StaticClass<UBlightDashAttack>()
	{
		return UBlightDashAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBlightDashAttack(Z_Construct_UClass_UBlightDashAttack, &UBlightDashAttack::StaticClass, TEXT("/Script/TheBlight"), TEXT("UBlightDashAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBlightDashAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
