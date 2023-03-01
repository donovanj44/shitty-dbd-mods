// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BloodwebDistribution.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebDistribution() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebDistribution_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebDistribution();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBloodwebTunables_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDDesignTunables_NoRegister();
// End Cross Module References
	void UBloodwebDistribution::StaticRegisterNativesUBloodwebDistribution()
	{
	}
	UClass* Z_Construct_UClass_UBloodwebDistribution_NoRegister()
	{
		return UBloodwebDistribution::StaticClass();
	}
	struct Z_Construct_UClass_UBloodwebDistribution_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__bloodwebTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__bloodwebTunables;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__designTunables_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__designTunables;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodwebDistribution_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebDistribution_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodwebDistribution.h" },
		{ "ModuleRelativePath", "Public/BloodwebDistribution.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__bloodwebTunables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__bloodwebTunables = { "_bloodwebTunables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebDistribution, _bloodwebTunables), Z_Construct_UClass_UBloodwebTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__bloodwebTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__bloodwebTunables_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__designTunables_MetaData[] = {
		{ "ModuleRelativePath", "Public/BloodwebDistribution.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__designTunables = { "_designTunables", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBloodwebDistribution, _designTunables), Z_Construct_UClass_UDBDDesignTunables_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__designTunables_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__designTunables_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBloodwebDistribution_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__bloodwebTunables,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBloodwebDistribution_Statics::NewProp__designTunables,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodwebDistribution_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodwebDistribution>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodwebDistribution_Statics::ClassParams = {
		&UBloodwebDistribution::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBloodwebDistribution_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebDistribution_Statics::PropPointers),
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBloodwebDistribution_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebDistribution_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodwebDistribution()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodwebDistribution_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodwebDistribution, 874533744);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBloodwebDistribution>()
	{
		return UBloodwebDistribution::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodwebDistribution(Z_Construct_UClass_UBloodwebDistribution, &UBloodwebDistribution::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBloodwebDistribution"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodwebDistribution);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
