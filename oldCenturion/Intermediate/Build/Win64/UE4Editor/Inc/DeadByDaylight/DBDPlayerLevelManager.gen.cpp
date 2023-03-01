// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDPlayerLevelManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDPlayerLevelManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPlayerLevelManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDPlayerLevelManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDPlayerLevelManager::StaticRegisterNativesUDBDPlayerLevelManager()
	{
	}
	UClass* Z_Construct_UClass_UDBDPlayerLevelManager_NoRegister()
	{
		return UDBDPlayerLevelManager::StaticClass();
	}
	struct Z_Construct_UClass_UDBDPlayerLevelManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDPlayerLevelManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDPlayerLevelManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDPlayerLevelManager.h" },
		{ "ModuleRelativePath", "Public/DBDPlayerLevelManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDPlayerLevelManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDPlayerLevelManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDPlayerLevelManager_Statics::ClassParams = {
		&UDBDPlayerLevelManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UDBDPlayerLevelManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDPlayerLevelManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDPlayerLevelManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDPlayerLevelManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDPlayerLevelManager, 1304952719);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDPlayerLevelManager>()
	{
		return UDBDPlayerLevelManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDPlayerLevelManager(Z_Construct_UClass_UDBDPlayerLevelManager, &UDBDPlayerLevelManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDPlayerLevelManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDPlayerLevelManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
