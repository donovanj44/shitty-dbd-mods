// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/OwningSlasherHasBeenStill.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOwningSlasherHasBeenStill() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningSlasherHasBeenStill_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOwningSlasherHasBeenStill();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UGameplayModifierCondition();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UOwningSlasherHasBeenStill::StaticRegisterNativesUOwningSlasherHasBeenStill()
	{
	}
	UClass* Z_Construct_UClass_UOwningSlasherHasBeenStill_NoRegister()
	{
		return UOwningSlasherHasBeenStill::StaticClass();
	}
	struct Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondsOfStillnessRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__secondsOfStillnessRequired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OwningSlasherHasBeenStill.h" },
		{ "ModuleRelativePath", "Public/OwningSlasherHasBeenStill.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::NewProp__secondsOfStillnessRequired_MetaData[] = {
		{ "Category", "OwningSlasherHasBeenStill" },
		{ "ModuleRelativePath", "Public/OwningSlasherHasBeenStill.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::NewProp__secondsOfStillnessRequired = { "_secondsOfStillnessRequired", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOwningSlasherHasBeenStill, _secondsOfStillnessRequired), METADATA_PARAMS(Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::NewProp__secondsOfStillnessRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::NewProp__secondsOfStillnessRequired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::NewProp__secondsOfStillnessRequired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOwningSlasherHasBeenStill>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::ClassParams = {
		&UOwningSlasherHasBeenStill::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOwningSlasherHasBeenStill()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOwningSlasherHasBeenStill_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOwningSlasherHasBeenStill, 1162703267);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UOwningSlasherHasBeenStill>()
	{
		return UOwningSlasherHasBeenStill::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOwningSlasherHasBeenStill(Z_Construct_UClass_UOwningSlasherHasBeenStill, &UOwningSlasherHasBeenStill::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UOwningSlasherHasBeenStill"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOwningSlasherHasBeenStill);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
