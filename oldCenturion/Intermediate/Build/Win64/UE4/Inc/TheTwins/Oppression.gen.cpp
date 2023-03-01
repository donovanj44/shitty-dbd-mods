// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/Oppression.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOppression() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UOppression_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UOppression();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
// End Cross Module References
	void UOppression::StaticRegisterNativesUOppression()
	{
	}
	UClass* Z_Construct_UClass_UOppression_NoRegister()
	{
		return UOppression::StaticClass();
	}
	struct Z_Construct_UClass_UOppression_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__perkCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__perkCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__nbGeneratorsAffectedByPerk_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__nbGeneratorsAffectedByPerk;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOppression_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOppression_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Oppression.h" },
		{ "ModuleRelativePath", "Public/Oppression.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOppression_Statics::NewProp__perkCooldown_MetaData[] = {
		{ "Category", "Oppression" },
		{ "ModuleRelativePath", "Public/Oppression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOppression_Statics::NewProp__perkCooldown = { "_perkCooldown", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_perkCooldown, UOppression), STRUCT_OFFSET(UOppression, _perkCooldown), METADATA_PARAMS(Z_Construct_UClass_UOppression_Statics::NewProp__perkCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOppression_Statics::NewProp__perkCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOppression_Statics::NewProp__nbGeneratorsAffectedByPerk_MetaData[] = {
		{ "Category", "Oppression" },
		{ "ModuleRelativePath", "Public/Oppression.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UOppression_Statics::NewProp__nbGeneratorsAffectedByPerk = { "_nbGeneratorsAffectedByPerk", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_nbGeneratorsAffectedByPerk, UOppression), STRUCT_OFFSET(UOppression, _nbGeneratorsAffectedByPerk), METADATA_PARAMS(Z_Construct_UClass_UOppression_Statics::NewProp__nbGeneratorsAffectedByPerk_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOppression_Statics::NewProp__nbGeneratorsAffectedByPerk_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOppression_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOppression_Statics::NewProp__perkCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOppression_Statics::NewProp__nbGeneratorsAffectedByPerk,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOppression_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOppression>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOppression_Statics::ClassParams = {
		&UOppression::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOppression_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOppression_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOppression_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOppression_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOppression()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOppression_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOppression, 3986867005);
	template<> THETWINS_API UClass* StaticClass<UOppression>()
	{
		return UOppression::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOppression(Z_Construct_UClass_UOppression, &UOppression::StaticClass, TEXT("/Script/TheTwins"), TEXT("UOppression"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOppression);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
