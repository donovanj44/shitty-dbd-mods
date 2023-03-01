// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/InClosetFlashbangItemCraftInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInClosetFlashbangItemCraftInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UItemCraftInteraction();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
// End Cross Module References
	void UInClosetFlashbangItemCraftInteraction::StaticRegisterNativesUInClosetFlashbangItemCraftInteraction()
	{
	}
	UClass* Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_NoRegister()
	{
		return UInClosetFlashbangItemCraftInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UItemCraftInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "InClosetFlashbangItemCraftInteraction.h" },
		{ "ModuleRelativePath", "Public/InClosetFlashbangItemCraftInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInClosetFlashbangItemCraftInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_Statics::ClassParams = {
		&UInClosetFlashbangItemCraftInteraction::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInClosetFlashbangItemCraftInteraction, 1602119688);
	template<> DBDINTERACTION_API UClass* StaticClass<UInClosetFlashbangItemCraftInteraction>()
	{
		return UInClosetFlashbangItemCraftInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInClosetFlashbangItemCraftInteraction(Z_Construct_UClass_UInClosetFlashbangItemCraftInteraction, &UInClosetFlashbangItemCraftInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UInClosetFlashbangItemCraftInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInClosetFlashbangItemCraftInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
