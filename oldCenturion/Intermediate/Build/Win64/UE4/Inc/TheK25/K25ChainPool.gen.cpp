// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK25/Public/K25ChainPool.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK25ChainPool() {}
// Cross Module References
	THEK25_API UClass* Z_Construct_UClass_UK25ChainPool_NoRegister();
	THEK25_API UClass* Z_Construct_UClass_UK25ChainPool();
	GAMEPLAYUTILITIES_API UClass* Z_Construct_UClass_UAuthoritativeActorPoolComponent();
	UPackage* Z_Construct_UPackage__Script_TheK25();
// End Cross Module References
	void UK25ChainPool::StaticRegisterNativesUK25ChainPool()
	{
	}
	UClass* Z_Construct_UClass_UK25ChainPool_NoRegister()
	{
		return UK25ChainPool::StaticClass();
	}
	struct Z_Construct_UClass_UK25ChainPool_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UK25ChainPool_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAuthoritativeActorPoolComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK25,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UK25ChainPool_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "K25ChainPool.h" },
		{ "ModuleRelativePath", "Public/K25ChainPool.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UK25ChainPool_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK25ChainPool>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UK25ChainPool_Statics::ClassParams = {
		&UK25ChainPool::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UK25ChainPool_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UK25ChainPool_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UK25ChainPool()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UK25ChainPool_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UK25ChainPool, 4110108281);
	template<> THEK25_API UClass* StaticClass<UK25ChainPool>()
	{
		return UK25ChainPool::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UK25ChainPool(Z_Construct_UClass_UK25ChainPool, &UK25ChainPool::StaticClass, TEXT("/Script/TheK25"), TEXT("UK25ChainPool"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UK25ChainPool);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
