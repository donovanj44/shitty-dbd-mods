// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/ZanshinTactics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZanshinTactics() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UZanshinTactics_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UZanshinTactics();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UZanshinTactics::StaticRegisterNativesUZanshinTactics()
	{
	}
	UClass* Z_Construct_UClass_UZanshinTactics_NoRegister()
	{
		return UZanshinTactics::StaticClass();
	}
	struct Z_Construct_UClass_UZanshinTactics_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__coolDownDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__coolDownDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UZanshinTactics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZanshinTactics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ZanshinTactics.h" },
		{ "ModuleRelativePath", "Public/ZanshinTactics.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UZanshinTactics_Statics::NewProp__coolDownDuration_MetaData[] = {
		{ "Category", "ZanshinTactics" },
		{ "ModuleRelativePath", "Public/ZanshinTactics.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UZanshinTactics_Statics::NewProp__coolDownDuration = { "_coolDownDuration", nullptr, (EPropertyFlags)0x0040000000010041, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_coolDownDuration, UZanshinTactics), STRUCT_OFFSET(UZanshinTactics, _coolDownDuration), METADATA_PARAMS(Z_Construct_UClass_UZanshinTactics_Statics::NewProp__coolDownDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UZanshinTactics_Statics::NewProp__coolDownDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UZanshinTactics_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UZanshinTactics_Statics::NewProp__coolDownDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UZanshinTactics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UZanshinTactics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UZanshinTactics_Statics::ClassParams = {
		&UZanshinTactics::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UZanshinTactics_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UZanshinTactics_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UZanshinTactics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UZanshinTactics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UZanshinTactics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UZanshinTactics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UZanshinTactics, 723010723);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UZanshinTactics>()
	{
		return UZanshinTactics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UZanshinTactics(Z_Construct_UClass_UZanshinTactics, &UZanshinTactics::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UZanshinTactics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UZanshinTactics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
