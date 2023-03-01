// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/DeceptionEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeceptionEffect() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDeceptionEffect_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UDeceptionEffect();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UStatusEffect();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void UDeceptionEffect::StaticRegisterNativesUDeceptionEffect()
	{
	}
	UClass* Z_Construct_UClass_UDeceptionEffect_NoRegister()
	{
		return UDeceptionEffect::StaticClass();
	}
	struct Z_Construct_UClass_UDeceptionEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__hideBloodTrailsWhenCamperFakeEnterLocker_MetaData[];
#endif
		static void NewProp__hideBloodTrailsWhenCamperFakeEnterLocker_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__hideBloodTrailsWhenCamperFakeEnterLocker;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeceptionEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UStatusEffect,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeceptionEffect_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DeceptionEffect.h" },
		{ "ModuleRelativePath", "Public/DeceptionEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeceptionEffect_Statics::NewProp__hideBloodTrailsWhenCamperFakeEnterLocker_MetaData[] = {
		{ "Category", "DeceptionEffect" },
		{ "ModuleRelativePath", "Public/DeceptionEffect.h" },
	};
#endif
	void Z_Construct_UClass_UDeceptionEffect_Statics::NewProp__hideBloodTrailsWhenCamperFakeEnterLocker_SetBit(void* Obj)
	{
		((UDeceptionEffect*)Obj)->_hideBloodTrailsWhenCamperFakeEnterLocker = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UDeceptionEffect_Statics::NewProp__hideBloodTrailsWhenCamperFakeEnterLocker = { "_hideBloodTrailsWhenCamperFakeEnterLocker", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UDeceptionEffect), &Z_Construct_UClass_UDeceptionEffect_Statics::NewProp__hideBloodTrailsWhenCamperFakeEnterLocker_SetBit, METADATA_PARAMS(Z_Construct_UClass_UDeceptionEffect_Statics::NewProp__hideBloodTrailsWhenCamperFakeEnterLocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDeceptionEffect_Statics::NewProp__hideBloodTrailsWhenCamperFakeEnterLocker_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDeceptionEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDeceptionEffect_Statics::NewProp__hideBloodTrailsWhenCamperFakeEnterLocker,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeceptionEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeceptionEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeceptionEffect_Statics::ClassParams = {
		&UDeceptionEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDeceptionEffect_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDeceptionEffect_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UDeceptionEffect_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeceptionEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeceptionEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeceptionEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeceptionEffect, 3846464913);
	template<> DBDCOMPETENCE_API UClass* StaticClass<UDeceptionEffect>()
	{
		return UDeceptionEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeceptionEffect(Z_Construct_UClass_UDeceptionEffect, &UDeceptionEffect::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("UDeceptionEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeceptionEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
