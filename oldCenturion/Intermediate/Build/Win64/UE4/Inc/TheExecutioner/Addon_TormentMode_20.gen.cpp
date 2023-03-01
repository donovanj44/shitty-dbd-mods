// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/Addon_TormentMode_20.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_TormentMode_20() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAddon_TormentMode_20_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UAddon_TormentMode_20();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
// End Cross Module References
	void UAddon_TormentMode_20::StaticRegisterNativesUAddon_TormentMode_20()
	{
	}
	UClass* Z_Construct_UClass_UAddon_TormentMode_20_NoRegister()
	{
		return UAddon_TormentMode_20::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_TormentMode_20_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__revealDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealSurvivorsNotInAgony_MetaData[];
#endif
		static void NewProp__revealSurvivorsNotInAgony_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__revealSurvivorsNotInAgony;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealSurvivorsInAgony_MetaData[];
#endif
		static void NewProp__revealSurvivorsInAgony_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__revealSurvivorsInAgony;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_TormentMode_20_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnEffectsOnAllSurvivorsBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_20_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_TormentMode_20.h" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_20.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealDuration_MetaData[] = {
		{ "Category", "Addon_TormentMode_20" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_20.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealDuration = { "_revealDuration", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TormentMode_20, _revealDuration), METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__range_MetaData[] = {
		{ "Category", "Addon_TormentMode_20" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_20.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__range = { "_range", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_TormentMode_20, _range), METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__range_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsNotInAgony_MetaData[] = {
		{ "Category", "Addon_TormentMode_20" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_20.h" },
	};
#endif
	void Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsNotInAgony_SetBit(void* Obj)
	{
		((UAddon_TormentMode_20*)Obj)->_revealSurvivorsNotInAgony = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsNotInAgony = { "_revealSurvivorsNotInAgony", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAddon_TormentMode_20), &Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsNotInAgony_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsNotInAgony_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsNotInAgony_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsInAgony_MetaData[] = {
		{ "Category", "Addon_TormentMode_20" },
		{ "ModuleRelativePath", "Public/Addon_TormentMode_20.h" },
	};
#endif
	void Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsInAgony_SetBit(void* Obj)
	{
		((UAddon_TormentMode_20*)Obj)->_revealSurvivorsInAgony = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsInAgony = { "_revealSurvivorsInAgony", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAddon_TormentMode_20), &Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsInAgony_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsInAgony_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsInAgony_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_TormentMode_20_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsNotInAgony,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_TormentMode_20_Statics::NewProp__revealSurvivorsInAgony,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_TormentMode_20_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_TormentMode_20>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_TormentMode_20_Statics::ClassParams = {
		&UAddon_TormentMode_20::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_TormentMode_20_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_20_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_TormentMode_20_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_TormentMode_20_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_TormentMode_20()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_TormentMode_20_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_TormentMode_20, 3169216393);
	template<> THEEXECUTIONER_API UClass* StaticClass<UAddon_TormentMode_20>()
	{
		return UAddon_TormentMode_20::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_TormentMode_20(Z_Construct_UClass_UAddon_TormentMode_20, &UAddon_TormentMode_20::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UAddon_TormentMode_20"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_TormentMode_20);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
