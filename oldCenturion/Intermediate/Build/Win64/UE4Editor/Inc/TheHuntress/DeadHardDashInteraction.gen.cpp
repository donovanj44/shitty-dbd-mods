// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheHuntress/Public/DeadHardDashInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeadHardDashInteraction() {}
// Cross Module References
	THEHUNTRESS_API UClass* Z_Construct_UClass_UDeadHardDashInteraction_NoRegister();
	THEHUNTRESS_API UClass* Z_Construct_UClass_UDeadHardDashInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_TheHuntress();
// End Cross Module References
	void UDeadHardDashInteraction::StaticRegisterNativesUDeadHardDashInteraction()
	{
	}
	UClass* Z_Construct_UClass_UDeadHardDashInteraction_NoRegister()
	{
		return UDeadHardDashInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UDeadHardDashInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeadHardDashInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheHuntress,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeadHardDashInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "DeadHardDashInteraction.h" },
		{ "ModuleRelativePath", "Public/DeadHardDashInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeadHardDashInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeadHardDashInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeadHardDashInteraction_Statics::ClassParams = {
		&UDeadHardDashInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDeadHardDashInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeadHardDashInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeadHardDashInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeadHardDashInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeadHardDashInteraction, 3030719867);
	template<> THEHUNTRESS_API UClass* StaticClass<UDeadHardDashInteraction>()
	{
		return UDeadHardDashInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeadHardDashInteraction(Z_Construct_UClass_UDeadHardDashInteraction, &UDeadHardDashInteraction::StaticClass, TEXT("/Script/TheHuntress"), TEXT("UDeadHardDashInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeadHardDashInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
