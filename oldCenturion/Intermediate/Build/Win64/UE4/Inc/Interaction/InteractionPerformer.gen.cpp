// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Interaction/Public/InteractionPerformer.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInteractionPerformer() {}
// Cross Module References
	INTERACTION_API UClass* Z_Construct_UClass_UInteractionPerformer_NoRegister();
	INTERACTION_API UClass* Z_Construct_UClass_UInteractionPerformer();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_Interaction();
// End Cross Module References
	void UInteractionPerformer::StaticRegisterNativesUInteractionPerformer()
	{
	}
	UClass* Z_Construct_UClass_UInteractionPerformer_NoRegister()
	{
		return UInteractionPerformer::StaticClass();
	}
	struct Z_Construct_UClass_UInteractionPerformer_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInteractionPerformer_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_Interaction,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInteractionPerformer_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InteractionPerformer.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInteractionPerformer_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IInteractionPerformer>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInteractionPerformer_Statics::ClassParams = {
		&UInteractionPerformer::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UInteractionPerformer_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInteractionPerformer_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInteractionPerformer()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInteractionPerformer_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInteractionPerformer, 1416382206);
	template<> INTERACTION_API UClass* StaticClass<UInteractionPerformer>()
	{
		return UInteractionPerformer::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInteractionPerformer(Z_Construct_UClass_UInteractionPerformer, &UInteractionPerformer::StaticClass, TEXT("/Script/Interaction"), TEXT("UInteractionPerformer"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInteractionPerformer);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
