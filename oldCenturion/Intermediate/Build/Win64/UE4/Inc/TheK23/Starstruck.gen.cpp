// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/Starstruck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStarstruck() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_UStarstruck_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_UStarstruck();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheK23();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ACamperPlayer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	void UStarstruck::StaticRegisterNativesUStarstruck()
	{
	}
	UClass* Z_Construct_UClass_UStarstruck_NoRegister()
	{
		return UStarstruck::StaticClass();
	}
	struct Z_Construct_UClass_UStarstruck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__camperExposedEffects_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp__camperExposedEffects;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__camperExposedEffects_Key_KeyProp;
		static const UE4CodeGen_Private::FWeakObjectPropertyParams NewProp__camperExposedEffects_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkCooldownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__perkCooldownDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__exposedEffectDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__exposedEffectDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UStarstruck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarstruck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Starstruck.h" },
		{ "ModuleRelativePath", "Public/Starstruck.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects_MetaData[] = {
		{ "ModuleRelativePath", "Public/Starstruck.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects = { "_camperExposedEffects", nullptr, (EPropertyFlags)0x0044008000002008, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UStarstruck, _camperExposedEffects), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects_MetaData)) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects_Key_KeyProp = { "_camperExposedEffects_Key", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ACamperPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FWeakObjectPropertyParams Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects_ValueProp = { "_camperExposedEffects", nullptr, (EPropertyFlags)0x0004000000080008, UE4CodeGen_Private::EPropertyGenFlags::WeakObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarstruck_Statics::NewProp__perkCooldownDuration_MetaData[] = {
		{ "Category", "Starstruck" },
		{ "ModuleRelativePath", "Public/Starstruck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStarstruck_Statics::NewProp__perkCooldownDuration = { "_perkCooldownDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_perkCooldownDuration, UStarstruck), STRUCT_OFFSET(UStarstruck, _perkCooldownDuration), METADATA_PARAMS(Z_Construct_UClass_UStarstruck_Statics::NewProp__perkCooldownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStarstruck_Statics::NewProp__perkCooldownDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UStarstruck_Statics::NewProp__exposedEffectDuration_MetaData[] = {
		{ "Category", "Starstruck" },
		{ "ModuleRelativePath", "Public/Starstruck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UStarstruck_Statics::NewProp__exposedEffectDuration = { "_exposedEffectDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_exposedEffectDuration, UStarstruck), STRUCT_OFFSET(UStarstruck, _exposedEffectDuration), METADATA_PARAMS(Z_Construct_UClass_UStarstruck_Statics::NewProp__exposedEffectDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UStarstruck_Statics::NewProp__exposedEffectDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UStarstruck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarstruck_Statics::NewProp__camperExposedEffects_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarstruck_Statics::NewProp__perkCooldownDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UStarstruck_Statics::NewProp__exposedEffectDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UStarstruck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UStarstruck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UStarstruck_Statics::ClassParams = {
		&UStarstruck::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UStarstruck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UStarstruck_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UStarstruck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UStarstruck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UStarstruck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UStarstruck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UStarstruck, 4140693246);
	template<> THEK23_API UClass* StaticClass<UStarstruck>()
	{
		return UStarstruck::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UStarstruck(Z_Construct_UClass_UStarstruck, &UStarstruck::StaticClass, TEXT("/Script/TheK23"), TEXT("UStarstruck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UStarstruck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
