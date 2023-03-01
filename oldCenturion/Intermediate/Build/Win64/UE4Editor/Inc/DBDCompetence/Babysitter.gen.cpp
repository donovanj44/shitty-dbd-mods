// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Babysitter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBabysitter() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBabysitter_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UBabysitter();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UBabysitter::StaticRegisterNativesUBabysitter()
	{
	}
	UClass* Z_Construct_UClass_UBabysitter_NoRegister()
	{
		return UBabysitter::StaticClass();
	}
	struct Z_Construct_UClass_UBabysitter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__showAuraTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__showAuraTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hasteEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__hasteEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__scratchMarkHidingTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__scratchMarkHidingTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBabysitter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBabysitter_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Babysitter.h" },
		{ "ModuleRelativePath", "Public/Babysitter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBabysitter_Statics::NewProp__cooldownTime_MetaData[] = {
		{ "Category", "Babysitter" },
		{ "ModuleRelativePath", "Public/Babysitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBabysitter_Statics::NewProp__cooldownTime = { "_cooldownTime", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_cooldownTime, UBabysitter), STRUCT_OFFSET(UBabysitter, _cooldownTime), METADATA_PARAMS(Z_Construct_UClass_UBabysitter_Statics::NewProp__cooldownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBabysitter_Statics::NewProp__cooldownTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBabysitter_Statics::NewProp__showAuraTime_MetaData[] = {
		{ "Category", "Babysitter" },
		{ "ModuleRelativePath", "Public/Babysitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBabysitter_Statics::NewProp__showAuraTime = { "_showAuraTime", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_showAuraTime, UBabysitter), STRUCT_OFFSET(UBabysitter, _showAuraTime), METADATA_PARAMS(Z_Construct_UClass_UBabysitter_Statics::NewProp__showAuraTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBabysitter_Statics::NewProp__showAuraTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBabysitter_Statics::NewProp__hasteEffect_MetaData[] = {
		{ "Category", "Babysitter" },
		{ "ModuleRelativePath", "Public/Babysitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBabysitter_Statics::NewProp__hasteEffect = { "_hasteEffect", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_hasteEffect, UBabysitter), STRUCT_OFFSET(UBabysitter, _hasteEffect), METADATA_PARAMS(Z_Construct_UClass_UBabysitter_Statics::NewProp__hasteEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBabysitter_Statics::NewProp__hasteEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBabysitter_Statics::NewProp__scratchMarkHidingTime_MetaData[] = {
		{ "Category", "Babysitter" },
		{ "ModuleRelativePath", "Public/Babysitter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBabysitter_Statics::NewProp__scratchMarkHidingTime = { "_scratchMarkHidingTime", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_scratchMarkHidingTime, UBabysitter), STRUCT_OFFSET(UBabysitter, _scratchMarkHidingTime), METADATA_PARAMS(Z_Construct_UClass_UBabysitter_Statics::NewProp__scratchMarkHidingTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBabysitter_Statics::NewProp__scratchMarkHidingTime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBabysitter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBabysitter_Statics::NewProp__cooldownTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBabysitter_Statics::NewProp__showAuraTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBabysitter_Statics::NewProp__hasteEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBabysitter_Statics::NewProp__scratchMarkHidingTime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBabysitter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBabysitter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBabysitter_Statics::ClassParams = {
		&UBabysitter::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBabysitter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBabysitter_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBabysitter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBabysitter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBabysitter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBabysitter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBabysitter, 191920372);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UBabysitter>()
	{
		return UBabysitter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBabysitter(Z_Construct_UClass_UBabysitter, &UBabysitter::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UBabysitter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBabysitter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
