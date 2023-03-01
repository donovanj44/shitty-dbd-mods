// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheOni/Public/OniBasicAttack.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOniBasicAttack() {}
// Cross Module References
	THEONI_API UClass* Z_Construct_UClass_UOniBasicAttack_NoRegister();
	THEONI_API UClass* Z_Construct_UClass_UOniBasicAttack();
	DBDATTACK_API UClass* Z_Construct_UClass_UPounceAttack();
	UPackage* Z_Construct_UPackage__Script_TheOni();
// End Cross Module References
	void UOniBasicAttack::StaticRegisterNativesUOniBasicAttack()
	{
	}
	UClass* Z_Construct_UClass_UOniBasicAttack_NoRegister()
	{
		return UOniBasicAttack::StaticClass();
	}
	struct Z_Construct_UClass_UOniBasicAttack_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOniBasicAttack_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPounceAttack,
		(UObject* (*)())Z_Construct_UPackage__Script_TheOni,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOniBasicAttack_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OniBasicAttack.h" },
		{ "ModuleRelativePath", "Public/OniBasicAttack.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOniBasicAttack_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOniBasicAttack>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOniBasicAttack_Statics::ClassParams = {
		&UOniBasicAttack::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOniBasicAttack_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOniBasicAttack_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOniBasicAttack()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOniBasicAttack_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOniBasicAttack, 2344737179);
	template<> THEONI_API UClass* StaticClass<UOniBasicAttack>()
	{
		return UOniBasicAttack::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOniBasicAttack(Z_Construct_UClass_UOniBasicAttack, &UOniBasicAttack::StaticClass, TEXT("/Script/TheOni"), TEXT("UOniBasicAttack"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOniBasicAttack);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
