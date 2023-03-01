// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SecondsToRateModifierBaseAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSecondsToRateModifierBaseAddon() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USecondsToRateModifierBaseAddon_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USecondsToRateModifierBaseAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
	STATSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FTunableStat();
// End Cross Module References
	void USecondsToRateModifierBaseAddon::StaticRegisterNativesUSecondsToRateModifierBaseAddon()
	{
	}
	UClass* Z_Construct_UClass_USecondsToRateModifierBaseAddon_NoRegister()
	{
		return USecondsToRateModifierBaseAddon::StaticClass();
	}
	struct Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__rateModifierTagToCompute_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__rateModifierTagToCompute;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__secondsToAdd_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__secondsToAdd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxCharge_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__maxCharge;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__chargeRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__chargeRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SecondsToRateModifierBaseAddon.h" },
		{ "ModuleRelativePath", "Public/SecondsToRateModifierBaseAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__rateModifierTagToCompute_MetaData[] = {
		{ "Category", "SecondsToRateModifierBaseAddon" },
		{ "ModuleRelativePath", "Public/SecondsToRateModifierBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__rateModifierTagToCompute = { "_rateModifierTagToCompute", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USecondsToRateModifierBaseAddon, _rateModifierTagToCompute), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__rateModifierTagToCompute_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__rateModifierTagToCompute_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__secondsToAdd_MetaData[] = {
		{ "Category", "SecondsToRateModifierBaseAddon" },
		{ "ModuleRelativePath", "Public/SecondsToRateModifierBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__secondsToAdd = { "_secondsToAdd", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USecondsToRateModifierBaseAddon, _secondsToAdd), METADATA_PARAMS(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__secondsToAdd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__secondsToAdd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__maxCharge_MetaData[] = {
		{ "Category", "SecondsToRateModifierBaseAddon" },
		{ "ModuleRelativePath", "Public/SecondsToRateModifierBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__maxCharge = { "_maxCharge", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USecondsToRateModifierBaseAddon, _maxCharge), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__maxCharge_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__maxCharge_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__chargeRate_MetaData[] = {
		{ "Category", "SecondsToRateModifierBaseAddon" },
		{ "ModuleRelativePath", "Public/SecondsToRateModifierBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__chargeRate = { "_chargeRate", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USecondsToRateModifierBaseAddon, _chargeRate), Z_Construct_UScriptStruct_FTunableStat, METADATA_PARAMS(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__chargeRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__chargeRate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__rateModifierTagToCompute,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__secondsToAdd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__maxCharge,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::NewProp__chargeRate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USecondsToRateModifierBaseAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::ClassParams = {
		&USecondsToRateModifierBaseAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USecondsToRateModifierBaseAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USecondsToRateModifierBaseAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USecondsToRateModifierBaseAddon, 2932790947);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USecondsToRateModifierBaseAddon>()
	{
		return USecondsToRateModifierBaseAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USecondsToRateModifierBaseAddon(Z_Construct_UClass_USecondsToRateModifierBaseAddon, &USecondsToRateModifierBaseAddon::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USecondsToRateModifierBaseAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USecondsToRateModifierBaseAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
