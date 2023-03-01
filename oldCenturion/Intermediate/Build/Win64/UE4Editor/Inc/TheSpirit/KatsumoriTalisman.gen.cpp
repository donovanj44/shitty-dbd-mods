// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/KatsumoriTalisman.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeKatsumoriTalisman() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_UKatsumoriTalisman_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_UKatsumoriTalisman();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
// End Cross Module References
	void UKatsumoriTalisman::StaticRegisterNativesUKatsumoriTalisman()
	{
	}
	UClass* Z_Construct_UClass_UKatsumoriTalisman_NoRegister()
	{
		return UKatsumoriTalisman::StaticClass();
	}
	struct Z_Construct_UClass_UKatsumoriTalisman_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__blockDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__blockDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__explosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__explosionRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UKatsumoriTalisman_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKatsumoriTalisman_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "KatsumoriTalisman.h" },
		{ "ModuleRelativePath", "Public/KatsumoriTalisman.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__blockDuration_MetaData[] = {
		{ "Category", "KatsumoriTalisman" },
		{ "ModuleRelativePath", "Public/KatsumoriTalisman.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__blockDuration = { "_blockDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKatsumoriTalisman, _blockDuration), METADATA_PARAMS(Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__blockDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__blockDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__explosionRadius_MetaData[] = {
		{ "Category", "KatsumoriTalisman" },
		{ "ModuleRelativePath", "Public/KatsumoriTalisman.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__explosionRadius = { "_explosionRadius", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UKatsumoriTalisman, _explosionRadius), METADATA_PARAMS(Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__explosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__explosionRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UKatsumoriTalisman_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__blockDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UKatsumoriTalisman_Statics::NewProp__explosionRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UKatsumoriTalisman_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UKatsumoriTalisman>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UKatsumoriTalisman_Statics::ClassParams = {
		&UKatsumoriTalisman::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UKatsumoriTalisman_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UKatsumoriTalisman_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UKatsumoriTalisman_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UKatsumoriTalisman_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UKatsumoriTalisman()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UKatsumoriTalisman_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UKatsumoriTalisman, 1419622315);
	template<> THESPIRIT_API UClass* StaticClass<UKatsumoriTalisman>()
	{
		return UKatsumoriTalisman::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UKatsumoriTalisman(Z_Construct_UClass_UKatsumoriTalisman, &UKatsumoriTalisman::StaticClass, TEXT("/Script/TheSpirit"), TEXT("UKatsumoriTalisman"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UKatsumoriTalisman);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
