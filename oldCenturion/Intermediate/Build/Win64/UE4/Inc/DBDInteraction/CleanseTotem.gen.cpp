// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/CleanseTotem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCleanseTotem() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UCleanseTotem_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UCleanseTotem();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
// End Cross Module References
	void UCleanseTotem::StaticRegisterNativesUCleanseTotem()
	{
	}
	UClass* Z_Construct_UClass_UCleanseTotem_NoRegister()
	{
		return UCleanseTotem::StaticClass();
	}
	struct Z_Construct_UClass_UCleanseTotem_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCleanseTotem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCleanseTotem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "CleanseTotem.h" },
		{ "ModuleRelativePath", "Public/CleanseTotem.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCleanseTotem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCleanseTotem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCleanseTotem_Statics::ClassParams = {
		&UCleanseTotem::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UCleanseTotem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCleanseTotem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCleanseTotem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCleanseTotem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCleanseTotem, 3041520590);
	template<> DBDINTERACTION_API UClass* StaticClass<UCleanseTotem>()
	{
		return UCleanseTotem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCleanseTotem(Z_Construct_UClass_UCleanseTotem, &UCleanseTotem::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UCleanseTotem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCleanseTotem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
