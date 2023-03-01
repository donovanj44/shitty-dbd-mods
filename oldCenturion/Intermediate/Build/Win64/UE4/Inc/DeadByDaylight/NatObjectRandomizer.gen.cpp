// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NatObjectRandomizer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNatObjectRandomizer() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNatObjectRandomizer_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNatObjectRandomizer();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UObjectRandomizer();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool();
// End Cross Module References
	void UNatObjectRandomizer::StaticRegisterNativesUNatObjectRandomizer()
	{
	}
	UClass* Z_Construct_UClass_UNatObjectRandomizer_NoRegister()
	{
		return UNatObjectRandomizer::StaticClass();
	}
	struct Z_Construct_UClass_UNatObjectRandomizer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PotentialRandomizableSpawnerPools_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PotentialRandomizableSpawnerPools;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PotentialRandomizableSpawnerPools_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNatObjectRandomizer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObjectRandomizer,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNatObjectRandomizer_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "NatObjectRandomizer.h" },
		{ "ModuleRelativePath", "Public/NatObjectRandomizer.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNatObjectRandomizer_Statics::NewProp_PotentialRandomizableSpawnerPools_MetaData[] = {
		{ "Category", "NatObjectRandomizer" },
		{ "ModuleRelativePath", "Public/NatObjectRandomizer.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UNatObjectRandomizer_Statics::NewProp_PotentialRandomizableSpawnerPools = { "PotentialRandomizableSpawnerPools", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNatObjectRandomizer, PotentialRandomizableSpawnerPools), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UNatObjectRandomizer_Statics::NewProp_PotentialRandomizableSpawnerPools_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNatObjectRandomizer_Statics::NewProp_PotentialRandomizableSpawnerPools_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNatObjectRandomizer_Statics::NewProp_PotentialRandomizableSpawnerPools_Inner = { "PotentialRandomizableSpawnerPools", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPotentialRandomizableSpawnerPool, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNatObjectRandomizer_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNatObjectRandomizer_Statics::NewProp_PotentialRandomizableSpawnerPools,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNatObjectRandomizer_Statics::NewProp_PotentialRandomizableSpawnerPools_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNatObjectRandomizer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNatObjectRandomizer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNatObjectRandomizer_Statics::ClassParams = {
		&UNatObjectRandomizer::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNatObjectRandomizer_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNatObjectRandomizer_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNatObjectRandomizer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNatObjectRandomizer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNatObjectRandomizer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNatObjectRandomizer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNatObjectRandomizer, 736965154);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNatObjectRandomizer>()
	{
		return UNatObjectRandomizer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNatObjectRandomizer(Z_Construct_UClass_UNatObjectRandomizer, &UNatObjectRandomizer::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNatObjectRandomizer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNatObjectRandomizer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
