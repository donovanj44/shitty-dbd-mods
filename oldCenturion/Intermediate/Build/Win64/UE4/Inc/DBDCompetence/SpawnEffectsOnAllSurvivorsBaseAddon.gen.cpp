// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDCompetence/Public/SpawnEffectsOnAllSurvivorsBaseAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnEffectsOnAllSurvivorsBaseAddon() {}
// Cross Module References
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_NoRegister();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UItemAddon();
	UPackage* Z_Construct_UPackage__Script_DBDCompetence();
// End Cross Module References
	void USpawnEffectsOnAllSurvivorsBaseAddon::StaticRegisterNativesUSpawnEffectsOnAllSurvivorsBaseAddon()
	{
	}
	UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_NoRegister()
	{
		return USpawnEffectsOnAllSurvivorsBaseAddon::StaticClass();
	}
	struct Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__canCreateMultipleInstances_MetaData[];
#endif
		static void NewProp__canCreateMultipleInstances_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__canCreateMultipleInstances;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDCompetence,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnEffectsOnAllSurvivorsBaseAddon.h" },
		{ "ModuleRelativePath", "Public/SpawnEffectsOnAllSurvivorsBaseAddon.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::NewProp__canCreateMultipleInstances_MetaData[] = {
		{ "Category", "SpawnEffectsOnAllSurvivorsBaseAddon" },
		{ "ModuleRelativePath", "Public/SpawnEffectsOnAllSurvivorsBaseAddon.h" },
	};
#endif
	void Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::NewProp__canCreateMultipleInstances_SetBit(void* Obj)
	{
		((USpawnEffectsOnAllSurvivorsBaseAddon*)Obj)->_canCreateMultipleInstances = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::NewProp__canCreateMultipleInstances = { "_canCreateMultipleInstances", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(USpawnEffectsOnAllSurvivorsBaseAddon), &Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::NewProp__canCreateMultipleInstances_SetBit, METADATA_PARAMS(Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::NewProp__canCreateMultipleInstances_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::NewProp__canCreateMultipleInstances_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::NewProp__canCreateMultipleInstances,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnEffectsOnAllSurvivorsBaseAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::ClassParams = {
		&USpawnEffectsOnAllSurvivorsBaseAddon::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpawnEffectsOnAllSurvivorsBaseAddon, 722857187);
	template<> DBDCOMPETENCE_API UClass* StaticClass<USpawnEffectsOnAllSurvivorsBaseAddon>()
	{
		return USpawnEffectsOnAllSurvivorsBaseAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpawnEffectsOnAllSurvivorsBaseAddon(Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon, &USpawnEffectsOnAllSurvivorsBaseAddon::StaticClass, TEXT("/Script/DBDCompetence"), TEXT("USpawnEffectsOnAllSurvivorsBaseAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnEffectsOnAllSurvivorsBaseAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
