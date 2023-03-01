// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SpiesFromTheShadows.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpiesFromTheShadows() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpiesFromTheShadows_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpiesFromTheShadows();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void USpiesFromTheShadows::StaticRegisterNativesUSpiesFromTheShadows()
	{
	}
	UClass* Z_Construct_UClass_USpiesFromTheShadows_NoRegister()
	{
		return USpiesFromTheShadows::StaticClass();
	}
	struct Z_Construct_UClass_USpiesFromTheShadows_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__cooldownDurationSecs_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__cooldownDurationSecs;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpiesFromTheShadows_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiesFromTheShadows_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpiesFromTheShadows.h" },
		{ "ModuleRelativePath", "Public/SpiesFromTheShadows.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpiesFromTheShadows_Statics::NewProp__cooldownDurationSecs_MetaData[] = {
		{ "Category", "SpiesFromTheShadows" },
		{ "ModuleRelativePath", "Public/SpiesFromTheShadows.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USpiesFromTheShadows_Statics::NewProp__cooldownDurationSecs = { "_cooldownDurationSecs", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USpiesFromTheShadows, _cooldownDurationSecs), METADATA_PARAMS(Z_Construct_UClass_USpiesFromTheShadows_Statics::NewProp__cooldownDurationSecs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpiesFromTheShadows_Statics::NewProp__cooldownDurationSecs_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpiesFromTheShadows_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpiesFromTheShadows_Statics::NewProp__cooldownDurationSecs,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpiesFromTheShadows_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpiesFromTheShadows>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpiesFromTheShadows_Statics::ClassParams = {
		&USpiesFromTheShadows::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpiesFromTheShadows_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpiesFromTheShadows_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpiesFromTheShadows_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpiesFromTheShadows_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpiesFromTheShadows()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpiesFromTheShadows_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpiesFromTheShadows, 4186930565);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USpiesFromTheShadows>()
	{
		return USpiesFromTheShadows::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpiesFromTheShadows(Z_Construct_UClass_USpiesFromTheShadows, &USpiesFromTheShadows::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USpiesFromTheShadows"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpiesFromTheShadows);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
