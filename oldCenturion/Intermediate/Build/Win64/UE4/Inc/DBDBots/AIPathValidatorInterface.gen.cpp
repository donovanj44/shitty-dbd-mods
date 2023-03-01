// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AIPathValidatorInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPathValidatorInterface() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAIPathValidatorInterface_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIPathValidatorInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAIPathValidatorInterface::StaticRegisterNativesUAIPathValidatorInterface()
	{
	}
	UClass* Z_Construct_UClass_UAIPathValidatorInterface_NoRegister()
	{
		return UAIPathValidatorInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAIPathValidatorInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIPathValidatorInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIPathValidatorInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIPathValidatorInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIPathValidatorInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIPathValidatorInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIPathValidatorInterface_Statics::ClassParams = {
		&UAIPathValidatorInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAIPathValidatorInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIPathValidatorInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIPathValidatorInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIPathValidatorInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIPathValidatorInterface, 3350444624);
	template<> DBDBOTS_API UClass* StaticClass<UAIPathValidatorInterface>()
	{
		return UAIPathValidatorInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIPathValidatorInterface(Z_Construct_UClass_UAIPathValidatorInterface, &UAIPathValidatorInterface::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAIPathValidatorInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIPathValidatorInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
