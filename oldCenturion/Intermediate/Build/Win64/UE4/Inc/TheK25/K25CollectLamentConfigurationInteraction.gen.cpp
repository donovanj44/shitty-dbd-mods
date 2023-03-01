// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25CollectLamentConfigurationInteraction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25CollectLamentConfigurationInteraction() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25CollectLamentConfigurationInteraction();
	DBDINTERACTION_API UClass* Z_Construct_UClass_UCollectItemInteraction();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UK25CollectLamentConfigurationInteraction::StaticRegisterNativesUK25CollectLamentConfigurationInteraction()
	{
	}
	UClass* Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_NoRegister()
	{
		return UK25CollectLamentConfigurationInteraction::StaticClass();
	}
	struct Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCollectItemInteraction,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Trigger PhysicsVolume" },
		{ "IncludePath", "K25CollectLamentConfigurationInteraction.h" },
		{ "ModuleRelativePath", "Public/K25CollectLamentConfigurationInteraction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25CollectLamentConfigurationInteraction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_Statics::ClassParams = {
		&UK25CollectLamentConfigurationInteraction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25CollectLamentConfigurationInteraction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25CollectLamentConfigurationInteraction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25CollectLamentConfigurationInteraction, 3722801440);
	template<> THEK25_API UClass* StaticClass<UK25CollectLamentConfigurationInteraction>()
	{
		return UK25CollectLamentConfigurationInteraction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25CollectLamentConfigurationInteraction(Z_Construct_UClass_UK25CollectLamentConfigurationInteraction, &UK25CollectLamentConfigurationInteraction::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25CollectLamentConfigurationInteraction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25CollectLamentConfigurationInteraction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
