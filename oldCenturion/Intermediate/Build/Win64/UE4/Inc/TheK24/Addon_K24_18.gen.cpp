// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/Addon_K24_18.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAddon_K24_18() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UAddon_K24_18_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UAddon_K24_18();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UImposeStatusEffectOnEventAddon();
	UPackage* Z_Construct_UPackage__Script_TheK24();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	THEK24_API UClass* Z_Construct_UClass_AZombieEscapeDoorPointsActor_NoRegister();
// End Cross Module References
	void UAddon_K24_18::StaticRegisterNativesUAddon_K24_18()
	{
	}
	UClass* Z_Construct_UClass_UAddon_K24_18_NoRegister()
	{
		return UAddon_K24_18::StaticClass();
	}
	struct Z_Construct_UClass_UAddon_K24_18_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__zombieEscapeDoorPointsActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__zombieEscapeDoorPointsActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAddon_K24_18_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UImposeStatusEffectOnEventAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K24_18_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Addon_K24_18.h" },
		{ "ModuleRelativePath", "Public/Addon_K24_18.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAddon_K24_18_Statics::NewProp__zombieEscapeDoorPointsActor_MetaData[] = {
		{ "Category", "Addon_K24_18" },
		{ "ModuleRelativePath", "Public/Addon_K24_18.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UAddon_K24_18_Statics::NewProp__zombieEscapeDoorPointsActor = { "_zombieEscapeDoorPointsActor", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAddon_K24_18, _zombieEscapeDoorPointsActor), Z_Construct_UClass_AZombieEscapeDoorPointsActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UAddon_K24_18_Statics::NewProp__zombieEscapeDoorPointsActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K24_18_Statics::NewProp__zombieEscapeDoorPointsActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAddon_K24_18_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAddon_K24_18_Statics::NewProp__zombieEscapeDoorPointsActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAddon_K24_18_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAddon_K24_18>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAddon_K24_18_Statics::ClassParams = {
		&UAddon_K24_18::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAddon_K24_18_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K24_18_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAddon_K24_18_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAddon_K24_18_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAddon_K24_18()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAddon_K24_18_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAddon_K24_18, 926023480);
	template<> THEK24_API UClass* StaticClass<UAddon_K24_18>()
	{
		return UAddon_K24_18::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAddon_K24_18(Z_Construct_UClass_UAddon_K24_18, &UAddon_K24_18::StaticClass, TEXT("/Script/TheK24"), TEXT("UAddon_K24_18"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAddon_K24_18);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
