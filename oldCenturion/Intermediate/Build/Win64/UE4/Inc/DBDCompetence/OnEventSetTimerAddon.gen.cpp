// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/OnEventSetTimerAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnEventSetTimerAddon() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventSetTimerAddon_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventSetTimerAddon();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UOnEventSetTimerAddon::StaticRegisterNativesUOnEventSetTimerAddon()
	{
	}
	UClass* Z_Construct_UClass_UOnEventSetTimerAddon_NoRegister()
	{
		return UOnEventSetTimerAddon::StaticClass();
	}
	struct Z_Construct_UClass_UOnEventSetTimerAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__addonEffectTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__addonEffectTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnEventSetTimerAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnEventSetTimerAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnEventSetTimerAddon.h" },
		{ "ModuleRelativePath", "Public/OnEventSetTimerAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnEventSetTimerAddon_Statics::NewProp__addonEffectTime_MetaData[] = {
		{ "Category", "OnEventSetTimerAddon" },
		{ "ModuleRelativePath", "Public/OnEventSetTimerAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UOnEventSetTimerAddon_Statics::NewProp__addonEffectTime = { "_addonEffectTime", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOnEventSetTimerAddon, _addonEffectTime), METADATA_PARAMS(Z_Construct_UClass_UOnEventSetTimerAddon_Statics::NewProp__addonEffectTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOnEventSetTimerAddon_Statics::NewProp__addonEffectTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOnEventSetTimerAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOnEventSetTimerAddon_Statics::NewProp__addonEffectTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnEventSetTimerAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnEventSetTimerAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnEventSetTimerAddon_Statics::ClassParams = {
		&UOnEventSetTimerAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOnEventSetTimerAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOnEventSetTimerAddon_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnEventSetTimerAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnEventSetTimerAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnEventSetTimerAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnEventSetTimerAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnEventSetTimerAddon, 3079607546);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UOnEventSetTimerAddon>()
	{
		return UOnEventSetTimerAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnEventSetTimerAddon(Z_Construct_UClass_UOnEventSetTimerAddon, &UOnEventSetTimerAddon::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UOnEventSetTimerAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnEventSetTimerAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
