// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/Alert.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAlert() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAlert_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UAlert();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPerk();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect_NoRegister();
// End Cross Module References
	static FName NAME_UAlert_OnPerkActivate_Cosmetic = FName(TEXT("OnPerkActivate_Cosmetic"));
	void UAlert::OnPerkActivate_Cosmetic()
	{
		ProcessEvent(FindFunctionChecked(NAME_UAlert_OnPerkActivate_Cosmetic),NULL);
	}
	void UAlert::StaticRegisterNativesUAlert()
	{
	}
	struct Z_Construct_UFunction_UAlert_OnPerkActivate_Cosmetic_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAlert_OnPerkActivate_Cosmetic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Alert.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAlert_OnPerkActivate_Cosmetic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAlert, nullptr, "OnPerkActivate_Cosmetic", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080808, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAlert_OnPerkActivate_Cosmetic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAlert_OnPerkActivate_Cosmetic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAlert_OnPerkActivate_Cosmetic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAlert_OnPerkActivate_Cosmetic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAlert_NoRegister()
	{
		return UAlert::StaticClass();
	}
	struct Z_Construct_UClass_UAlert_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__alertKillerRevealEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__alertKillerRevealEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__killerAuraRevealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__killerAuraRevealDuration;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAlert_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPerk,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAlert_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAlert_OnPerkActivate_Cosmetic, "OnPerkActivate_Cosmetic" }, // 719617533
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlert_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Alert.h" },
		{ "ModuleRelativePath", "Public/Alert.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlert_Statics::NewProp__alertKillerRevealEffect_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Alert.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAlert_Statics::NewProp__alertKillerRevealEffect = { "_alertKillerRevealEffect", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAlert, _alertKillerRevealEffect), Z_Construct_UClass_UStatusEffect_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAlert_Statics::NewProp__alertKillerRevealEffect_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlert_Statics::NewProp__alertKillerRevealEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAlert_Statics::NewProp__killerAuraRevealDuration_MetaData[] = {
		{ "Category", "Alert" },
		{ "ModuleRelativePath", "Public/Alert.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAlert_Statics::NewProp__killerAuraRevealDuration = { "_killerAuraRevealDuration", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, CPP_ARRAY_DIM(_killerAuraRevealDuration, UAlert), STRUCT_OFFSET(UAlert, _killerAuraRevealDuration), METADATA_PARAMS(Z_Construct_UClass_UAlert_Statics::NewProp__killerAuraRevealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAlert_Statics::NewProp__killerAuraRevealDuration_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAlert_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlert_Statics::NewProp__alertKillerRevealEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAlert_Statics::NewProp__killerAuraRevealDuration,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAlert_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAlert>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAlert_Statics::ClassParams = {
		&UAlert::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAlert_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAlert_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAlert_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAlert_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAlert()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAlert_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAlert, 3263312332);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UAlert>()
	{
		return UAlert::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAlert(Z_Construct_UClass_UAlert, &UAlert::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UAlert"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAlert);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
