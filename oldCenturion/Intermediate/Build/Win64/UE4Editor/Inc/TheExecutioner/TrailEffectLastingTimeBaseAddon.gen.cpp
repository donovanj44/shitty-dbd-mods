// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TrailEffectLastingTimeBaseAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrailEffectLastingTimeBaseAddon() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	void UTrailEffectLastingTimeBaseAddon::StaticRegisterNativesUTrailEffectLastingTimeBaseAddon()
	{
	}
	UClass* Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_NoRegister()
	{
		return UTrailEffectLastingTimeBaseAddon::StaticClass();
	}
	struct Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__trailEffectLastingTimeModifierValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__trailEffectLastingTimeModifierValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrailEffectLastingTimeBaseAddon.h" },
		{ "ModuleRelativePath", "Public/TrailEffectLastingTimeBaseAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::NewProp__trailEffectLastingTimeModifierValue_MetaData[] = {
		{ "Category", "TrailEffectLastingTimeBaseAddon" },
		{ "ModuleRelativePath", "Public/TrailEffectLastingTimeBaseAddon.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::NewProp__trailEffectLastingTimeModifierValue = { "_trailEffectLastingTimeModifierValue", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrailEffectLastingTimeBaseAddon, _trailEffectLastingTimeModifierValue), METADATA_PARAMS(Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::NewProp__trailEffectLastingTimeModifierValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::NewProp__trailEffectLastingTimeModifierValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::NewProp__trailEffectLastingTimeModifierValue,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrailEffectLastingTimeBaseAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::ClassParams = {
		&UTrailEffectLastingTimeBaseAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrailEffectLastingTimeBaseAddon, 553807818);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTrailEffectLastingTimeBaseAddon>()
	{
		return UTrailEffectLastingTimeBaseAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrailEffectLastingTimeBaseAddon(Z_Construct_UClass_UTrailEffectLastingTimeBaseAddon, &UTrailEffectLastingTimeBaseAddon::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTrailEffectLastingTimeBaseAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrailEffectLastingTimeBaseAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
