// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameplayUtilities/Public/PoolableActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePoolableActor() {}
// Cross Module References
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActor_NoRegister();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UPoolableActor();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_GameplayUtilities();
// End Cross Module References
	void UPoolableActor::StaticRegisterNativesUPoolableActor()
	{
	}
	UClass* Z_Construct_UClass_UPoolableActor_NoRegister()
	{
		return UPoolableActor::StaticClass();
	}
	struct Z_Construct_UClass_UPoolableActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPoolableActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_GameplayUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPoolableActor_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/PoolableActor.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPoolableActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IPoolableActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPoolableActor_Statics::ClassParams = {
		&UPoolableActor::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPoolableActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPoolableActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPoolableActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPoolableActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPoolableActor, 2996162124);
	template<> GAMEPLAYUTILITIES_API UClass* StaticClass<UPoolableActor>()
	{
		return UPoolableActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPoolableActor(Z_Construct_UClass_UPoolableActor, &UPoolableActor::StaticClass, TEXT("/Script/GameplayUtilities"), TEXT("UPoolableActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPoolableActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif