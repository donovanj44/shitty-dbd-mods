// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInteraction/Public/EscapeMapInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEscapeMapInteraction() {}
// Cross Module References
	DBDINTERACTION_API UClass* Z_Construct_UClass_UEscapeMapInteraction_NoRegister();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UEscapeMapInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_DBDInteraction();
// End Cross Module References
	void UEscapeMapInteraction::StaticRegisterNativesUEscapeMapInteraction()
	{
	}
	UClass* Z_Construct_UClass_UEscapeMapInteraction_NoRegister()
	{
		return UEscapeMapInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UEscapeMapInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEscapeMapInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInteraction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEscapeMapInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "EscapeMapInteraction.h" },
		{ "ModuleRelativePath", "Public/EscapeMapInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEscapeMapInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEscapeMapInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEscapeMapInteraction_Statics::ClassParams = {
		&UEscapeMapInteraction::StaticClass,
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
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UEscapeMapInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEscapeMapInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEscapeMapInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEscapeMapInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEscapeMapInteraction, 3833053949);
	template<> DBDINTERACTION_API UClass* StaticClass<UEscapeMapInteraction>()
	{
		return UEscapeMapInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEscapeMapInteraction(Z_Construct_UClass_UEscapeMapInteraction, &UEscapeMapInteraction::StaticClass, TEXT("/Script/DBDInteraction"), TEXT("UEscapeMapInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEscapeMapInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
