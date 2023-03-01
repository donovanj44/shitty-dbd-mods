// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheSpirit/Public/Autodidact.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAutodidact() {}
// Cross Module References
	THESPIRIT_API UClass* Z_Construct_UClass_UAutodidact_NoRegister();
	THESPIRIT_API UClass* Z_Construct_UClass_UAutodidact();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheSpirit();
// End Cross Module References
	void UAutodidact::StaticRegisterNativesUAutodidact()
	{
	}
	UClass* Z_Construct_UClass_UAutodidact_NoRegister()
	{
		return UAutodidact::StaticClass();
	}
	struct Z_Construct_UClass_UAutodidact_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__initialSkillCheckProgressionPenalty_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__initialSkillCheckProgressionPenalty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__progressionBonusPerToken_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__progressionBonusPerToken;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTokenCountPerLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__maxTokenCountPerLevel;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAutodidact_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheSpirit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutodidact_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Autodidact.h" },
		{ "ModuleRelativePath", "Public/Autodidact.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutodidact_Statics::NewProp__initialSkillCheckProgressionPenalty_MetaData[] = {
		{ "Category", "Autodidact" },
		{ "ModuleRelativePath", "Public/Autodidact.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutodidact_Statics::NewProp__initialSkillCheckProgressionPenalty = { "_initialSkillCheckProgressionPenalty", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutodidact, _initialSkillCheckProgressionPenalty), METADATA_PARAMS(Z_Construct_UClass_UAutodidact_Statics::NewProp__initialSkillCheckProgressionPenalty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutodidact_Statics::NewProp__initialSkillCheckProgressionPenalty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutodidact_Statics::NewProp__progressionBonusPerToken_MetaData[] = {
		{ "Category", "Autodidact" },
		{ "ModuleRelativePath", "Public/Autodidact.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAutodidact_Statics::NewProp__progressionBonusPerToken = { "_progressionBonusPerToken", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAutodidact, _progressionBonusPerToken), METADATA_PARAMS(Z_Construct_UClass_UAutodidact_Statics::NewProp__progressionBonusPerToken_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutodidact_Statics::NewProp__progressionBonusPerToken_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAutodidact_Statics::NewProp__maxTokenCountPerLevel_MetaData[] = {
		{ "Category", "Autodidact" },
		{ "ModuleRelativePath", "Public/Autodidact.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UAutodidact_Statics::NewProp__maxTokenCountPerLevel = { "_maxTokenCountPerLevel", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_maxTokenCountPerLevel, UAutodidact), STRUCT_OFFSET(UAutodidact, _maxTokenCountPerLevel), METADATA_PARAMS(Z_Construct_UClass_UAutodidact_Statics::NewProp__maxTokenCountPerLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAutodidact_Statics::NewProp__maxTokenCountPerLevel_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAutodidact_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutodidact_Statics::NewProp__initialSkillCheckProgressionPenalty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutodidact_Statics::NewProp__progressionBonusPerToken,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAutodidact_Statics::NewProp__maxTokenCountPerLevel,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAutodidact_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAutodidact>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAutodidact_Statics::ClassParams = {
		&UAutodidact::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAutodidact_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAutodidact_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAutodidact_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAutodidact_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAutodidact()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAutodidact_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAutodidact, 3576163595);
	template<> THESPIRIT_API UClass* StaticClass<UAutodidact>()
	{
		return UAutodidact::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAutodidact(Z_Construct_UClass_UAutodidact, &UAutodidact::StaticClass, TEXT("/Script/TheSpirit"), TEXT("UAutodidact"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAutodidact);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
