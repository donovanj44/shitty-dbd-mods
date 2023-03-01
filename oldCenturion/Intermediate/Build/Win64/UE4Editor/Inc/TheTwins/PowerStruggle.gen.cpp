// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/PowerStruggle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePowerStruggle() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UPowerStruggle_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UPowerStruggle();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UPowerStruggle::StaticRegisterNativesUPowerStruggle()
	{
	}
	UClass* Z_Construct_UClass_UPowerStruggle_NoRegister()
	{
		return UPowerStruggle::StaticClass();
	}
	struct Z_Construct_UClass_UPowerStruggle_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__wigglePercentToActivatePerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__wigglePercentToActivatePerk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPowerStruggle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerStruggle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PowerStruggle.h" },
		{ "ModuleRelativePath", "Public/PowerStruggle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPowerStruggle_Statics::NewProp__wigglePercentToActivatePerk_MetaData[] = {
		{ "Category", "PowerStruggle" },
		{ "ModuleRelativePath", "Public/PowerStruggle.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPowerStruggle_Statics::NewProp__wigglePercentToActivatePerk = { "_wigglePercentToActivatePerk", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_wigglePercentToActivatePerk, UPowerStruggle), STRUCT_OFFSET(UPowerStruggle, _wigglePercentToActivatePerk), METADATA_PARAMS(Z_Construct_UClass_UPowerStruggle_Statics::NewProp__wigglePercentToActivatePerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerStruggle_Statics::NewProp__wigglePercentToActivatePerk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPowerStruggle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPowerStruggle_Statics::NewProp__wigglePercentToActivatePerk,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPowerStruggle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPowerStruggle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPowerStruggle_Statics::ClassParams = {
		&UPowerStruggle::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPowerStruggle_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPowerStruggle_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPowerStruggle_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPowerStruggle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPowerStruggle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPowerStruggle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPowerStruggle, 1879338914);
	template<> THETWINS_API UClass* StaticClass<UPowerStruggle>()
	{
		return UPowerStruggle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPowerStruggle(Z_Construct_UClass_UPowerStruggle, &UPowerStruggle::StaticClass, TEXT("/Script/TheTwins"), TEXT("UPowerStruggle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPowerStruggle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
