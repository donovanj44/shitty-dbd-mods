// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Halloween2021/Public/PumpkinInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePumpkinInteraction() {}
// Cross Module References
	HALLOWEEN2021_API UClass* Z_Construct_UClass_UPumpkinInteraction_NoRegister();
	HALLOWEEN2021_API UClass* Z_Construct_UClass_UPumpkinInteraction();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UChargeableInteractionDefinition();
	UPackage* Z_Construct_UPackage__Script_Halloween2021();
// End Cross Module References
	void UPumpkinInteraction::StaticRegisterNativesUPumpkinInteraction()
	{
	}
	UClass* Z_Construct_UClass_UPumpkinInteraction_NoRegister()
	{
		return UPumpkinInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UPumpkinInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPumpkinInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UChargeableInteractionDefinition,
		(UObject* (*)())Z_Construct_UPackage__Script_Halloween2021,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPumpkinInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "PumpkinInteraction.h" },
		{ "ModuleRelativePath", "Public/PumpkinInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPumpkinInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPumpkinInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPumpkinInteraction_Statics::ClassParams = {
		&UPumpkinInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPumpkinInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPumpkinInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPumpkinInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPumpkinInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPumpkinInteraction, 2629113274);
	template<> HALLOWEEN2021_API UClass* StaticClass<UPumpkinInteraction>()
	{
		return UPumpkinInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPumpkinInteraction(Z_Construct_UClass_UPumpkinInteraction, &UPumpkinInteraction::StaticClass, TEXT("/Script/Halloween2021"), TEXT("UPumpkinInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPumpkinInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
