// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/IsChainHuntActive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeIsChainHuntActive() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UIsChainHuntActive_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UIsChainHuntActive();
	COMPETENCE_API UClass* Z_Construct_UClass_UEventDrivenModifierCondition();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UIsChainHuntActive::StaticRegisterNativesUIsChainHuntActive()
	{
	}
	UClass* Z_Construct_UClass_UIsChainHuntActive_NoRegister()
	{
		return UIsChainHuntActive::StaticClass();
	}
	struct Z_Construct_UClass_UIsChainHuntActive_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UIsChainHuntActive_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UEventDrivenModifierCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UIsChainHuntActive_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "IsChainHuntActive.h" },
		{ "ModuleRelativePath", "Public/IsChainHuntActive.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UIsChainHuntActive_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UIsChainHuntActive>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UIsChainHuntActive_Statics::ClassParams = {
		&UIsChainHuntActive::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UIsChainHuntActive_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UIsChainHuntActive_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UIsChainHuntActive()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UIsChainHuntActive_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UIsChainHuntActive, 1940779623);
	template<> THEK25_API UClass* StaticClass<UIsChainHuntActive>()
	{
		return UIsChainHuntActive::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UIsChainHuntActive(Z_Construct_UClass_UIsChainHuntActive, &UIsChainHuntActive::StaticClass, TEXT("/Script/TheK25"), TEXT("UIsChainHuntActive"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UIsChainHuntActive);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
