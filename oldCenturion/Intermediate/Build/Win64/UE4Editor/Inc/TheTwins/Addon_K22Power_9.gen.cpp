// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/Addon_K22Power_9.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_K22Power_9() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UAddon_K22Power_9_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UAddon_K22Power_9();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UAddon_K22Power_9::StaticRegisterNativesUAddon_K22Power_9()
	{
	}
	UClass* Z_Construct_UClass_UAddon_K22Power_9_NoRegister()
	{
		return UAddon_K22Power_9::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_K22Power_9_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blindnessDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__blindnessDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_K22Power_9_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K22Power_9_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_K22Power_9.h" },
		{ "ModuleRelativePath", "Public/Addon_K22Power_9.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K22Power_9_Statics::NewProp__blindnessDuration_MetaData[] = {
		{ "Category", "Addon_K22Power_9" },
		{ "ModuleRelativePath", "Public/Addon_K22Power_9.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_K22Power_9_Statics::NewProp__blindnessDuration = { "_blindnessDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_K22Power_9, _blindnessDuration), METADATA_PARAMS(Z_Construct_UClass_UAddon_K22Power_9_Statics::NewProp__blindnessDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_9_Statics::NewProp__blindnessDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_K22Power_9_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_K22Power_9_Statics::NewProp__blindnessDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_K22Power_9_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_K22Power_9>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_K22Power_9_Statics::ClassParams = {
		&UAddon_K22Power_9::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_K22Power_9_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_9_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_K22Power_9_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_9_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_K22Power_9()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_K22Power_9_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_K22Power_9, 2598026702);
	template<> THETWINS_API UClass* StaticClass<UAddon_K22Power_9>()
	{
		return UAddon_K22Power_9::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_K22Power_9(Z_Construct_UClass_UAddon_K22Power_9, &UAddon_K22Power_9::StaticClass, TEXT("/Script/TheTwins"), TEXT("UAddon_K22Power_9"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_K22Power_9);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
