// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/Addon_K22Power_19.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_K22Power_19() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UAddon_K22Power_19_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UAddon_K22Power_19();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UAddon_K22Power_19::StaticRegisterNativesUAddon_K22Power_19()
	{
	}
	UClass* Z_Construct_UClass_UAddon_K22Power_19_NoRegister()
	{
		return UAddon_K22Power_19::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_K22Power_19_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__undetectableDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__undetectableDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_K22Power_19_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K22Power_19_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_K22Power_19.h" },
		{ "ModuleRelativePath", "Public/Addon_K22Power_19.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K22Power_19_Statics::NewProp__undetectableDuration_MetaData[] = {
		{ "Category", "Addon_K22Power_19" },
		{ "ModuleRelativePath", "Public/Addon_K22Power_19.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_K22Power_19_Statics::NewProp__undetectableDuration = { "_undetectableDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_K22Power_19, _undetectableDuration), METADATA_PARAMS(Z_Construct_UClass_UAddon_K22Power_19_Statics::NewProp__undetectableDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_19_Statics::NewProp__undetectableDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_K22Power_19_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_K22Power_19_Statics::NewProp__undetectableDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_K22Power_19_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_K22Power_19>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_K22Power_19_Statics::ClassParams = {
		&UAddon_K22Power_19::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_K22Power_19_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_19_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_K22Power_19_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_19_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_K22Power_19()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_K22Power_19_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_K22Power_19, 2237286228);
	template<> THETWINS_API UClass* StaticClass<UAddon_K22Power_19>()
	{
		return UAddon_K22Power_19::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_K22Power_19(Z_Construct_UClass_UAddon_K22Power_19, &UAddon_K22Power_19::StaticClass, TEXT("/Script/TheTwins"), TEXT("UAddon_K22Power_19"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_K22Power_19);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
