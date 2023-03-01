// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDTimeTravelManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDTimeTravelManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTimeTravelManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDTimeTravelManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDTimeTravelManager::StaticRegisterNativesUDBDTimeTravelManager()
	{
	}
	UClass* Z_Construct_UClass_UDBDTimeTravelManager_NoRegister()
	{
		return UDBDTimeTravelManager::StaticClass();
	}
	struct Z_Construct_UClass_UDBDTimeTravelManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDTimeTravelManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDTimeTravelManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDTimeTravelManager.h" },
		{ "ModuleRelativePath", "Public/DBDTimeTravelManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDTimeTravelManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDTimeTravelManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDTimeTravelManager_Statics::ClassParams = {
		&UDBDTimeTravelManager::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDBDTimeTravelManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDTimeTravelManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDTimeTravelManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDTimeTravelManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDTimeTravelManager, 668737296);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDTimeTravelManager>()
	{
		return UDBDTimeTravelManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDTimeTravelManager(Z_Construct_UClass_UDBDTimeTravelManager, &UDBDTimeTravelManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDTimeTravelManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDTimeTravelManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
