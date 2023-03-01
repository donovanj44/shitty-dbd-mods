// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK26/Public/Overcome.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOvercome() {}
// Cross Module References
	THEK26_API UClass* Z_Construct_UClass_UOvercome_NoRegister();
	THEK26_API UClass* Z_Construct_UClass_UOvercome();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK26();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister();
// End Cross Module References
	void UOvercome::StaticRegisterNativesUOvercome()
	{
	}
	UClass* Z_Construct_UClass_UOvercome_NoRegister()
	{
		return UOvercome::StaticClass();
	}
	struct Z_Construct_UClass_UOvercome_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustedEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__exhaustedEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exhaustionDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exhaustionDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOvercome_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK26,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOvercome_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Overcome.h" },
		{ "ModuleRelativePath", "Public/Overcome.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustedEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Overcome.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustedEffect = { "_exhaustedEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOvercome, _exhaustedEffect), Z_Construct_UClass_UActivatableExhaustedEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustedEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustedEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustionDuration_MetaData[] = {
		{ "Category", "Overcome" },
		{ "ModuleRelativePath", "Public/Overcome.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustionDuration = { "_exhaustionDuration", nullptr, (EPropertyFlags)0x0020080000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exhaustionDuration, UOvercome), STRUCT_OFFSET(UOvercome, _exhaustionDuration), METADATA_PARAMS(Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustionDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustionDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOvercome_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustedEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOvercome_Statics::NewProp__exhaustionDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOvercome_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOvercome>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOvercome_Statics::ClassParams = {
		&UOvercome::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOvercome_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOvercome_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOvercome_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOvercome_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOvercome()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOvercome_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOvercome, 868565401);
	template<> THEK26_API UClass* StaticClass<UOvercome>()
	{
		return UOvercome::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOvercome(Z_Construct_UClass_UOvercome, &UOvercome::StaticClass, TEXT("/Script/TheK26"), TEXT("UOvercome"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOvercome);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
