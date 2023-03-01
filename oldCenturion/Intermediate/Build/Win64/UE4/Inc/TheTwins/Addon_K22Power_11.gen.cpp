// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/Addon_K22Power_11.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_K22Power_11() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UAddon_K22Power_11_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UAddon_K22Power_11();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UAddon_K22Power_11::StaticRegisterNativesUAddon_K22Power_11()
	{
	}
	UClass* Z_Construct_UClass_UAddon_K22Power_11_NoRegister()
	{
		return UAddon_K22Power_11::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_K22Power_11_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__increaseRemoveTwinTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__increaseRemoveTwinTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_K22Power_11_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K22Power_11_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_K22Power_11.h" },
		{ "ModuleRelativePath", "Public/Addon_K22Power_11.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K22Power_11_Statics::NewProp__increaseRemoveTwinTime_MetaData[] = {
		{ "Category", "Addon_K22Power_11" },
		{ "ModuleRelativePath", "Public/Addon_K22Power_11.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_K22Power_11_Statics::NewProp__increaseRemoveTwinTime = { "_increaseRemoveTwinTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_K22Power_11, _increaseRemoveTwinTime), METADATA_PARAMS(Z_Construct_UClass_UAddon_K22Power_11_Statics::NewProp__increaseRemoveTwinTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_11_Statics::NewProp__increaseRemoveTwinTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_K22Power_11_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_K22Power_11_Statics::NewProp__increaseRemoveTwinTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_K22Power_11_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_K22Power_11>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_K22Power_11_Statics::ClassParams = {
		&UAddon_K22Power_11::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_K22Power_11_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_11_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_K22Power_11_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K22Power_11_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_K22Power_11()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_K22Power_11_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_K22Power_11, 2137835608);
	template<> THETWINS_API UClass* StaticClass<UAddon_K22Power_11>()
	{
		return UAddon_K22Power_11::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_K22Power_11(Z_Construct_UClass_UAddon_K22Power_11, &UAddon_K22Power_11::StaticClass, TEXT("/Script/TheTwins"), TEXT("UAddon_K22Power_11"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_K22Power_11);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
