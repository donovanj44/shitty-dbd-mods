// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheCannibal/Public/CannibalChainsawHitEventAddon.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCannibalChainsawHitEventAddon() {}
// Cross Module References
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawHitEventAddon_NoRegister();
	THECANNIBAL_API UClass* Z_Construct_UClass_UCannibalChainsawHitEventAddon();
	DBDCOMPETENCE_API UClass* Z_Construct_UClass_UOnEventBaseAddon();
	UPackage* Z_Construct_UPackage__Script_TheCannibal();
// End Cross Module References
	void UCannibalChainsawHitEventAddon::StaticRegisterNativesUCannibalChainsawHitEventAddon()
	{
	}
	UClass* Z_Construct_UClass_UCannibalChainsawHitEventAddon_NoRegister()
	{
		return UCannibalChainsawHitEventAddon::StaticClass();
	}
	struct Z_Construct_UClass_UCannibalChainsawHitEventAddon_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCannibalChainsawHitEventAddon_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOnEventBaseAddon,
		(UObject* (*)())Z_Construct_UPackage__Script_TheCannibal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCannibalChainsawHitEventAddon_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CannibalChainsawHitEventAddon.h" },
		{ "ModuleRelativePath", "Public/CannibalChainsawHitEventAddon.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCannibalChainsawHitEventAddon_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCannibalChainsawHitEventAddon>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCannibalChainsawHitEventAddon_Statics::ClassParams = {
		&UCannibalChainsawHitEventAddon::StaticClass,
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
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UCannibalChainsawHitEventAddon_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCannibalChainsawHitEventAddon_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCannibalChainsawHitEventAddon()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCannibalChainsawHitEventAddon_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCannibalChainsawHitEventAddon, 14297619);
	template<> THECANNIBAL_API UClass* StaticClass<UCannibalChainsawHitEventAddon>()
	{
		return UCannibalChainsawHitEventAddon::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCannibalChainsawHitEventAddon(Z_Construct_UClass_UCannibalChainsawHitEventAddon, &UCannibalChainsawHitEventAddon::StaticClass, TEXT("/Script/TheCannibal"), TEXT("UCannibalChainsawHitEventAddon"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCannibalChainsawHitEventAddon);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
