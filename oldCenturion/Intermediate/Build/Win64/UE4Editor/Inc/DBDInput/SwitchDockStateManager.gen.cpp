// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDInput/Public/SwitchDockStateManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSwitchDockStateManager() {}
// Cross Module References
	DBDINPUT_API UClass* Z_Construct_UClass_USwitchDockStateManager_NoRegister();
	DBDINPUT_API UClass* Z_Construct_UClass_USwitchDockStateManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DBDInput();
// End Cross Module References
	void USwitchDockStateManager::StaticRegisterNativesUSwitchDockStateManager()
	{
	}
	UClass* Z_Construct_UClass_USwitchDockStateManager_NoRegister()
	{
		return USwitchDockStateManager::StaticClass();
	}
	struct Z_Construct_UClass_USwitchDockStateManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USwitchDockStateManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USwitchDockStateManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SwitchDockStateManager.h" },
		{ "ModuleRelativePath", "Public/SwitchDockStateManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USwitchDockStateManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USwitchDockStateManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USwitchDockStateManager_Statics::ClassParams = {
		&USwitchDockStateManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USwitchDockStateManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USwitchDockStateManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USwitchDockStateManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USwitchDockStateManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USwitchDockStateManager, 1003378925);
	template<> DBDINPUT_API UClass* StaticClass<USwitchDockStateManager>()
	{
		return USwitchDockStateManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USwitchDockStateManager(Z_Construct_UClass_USwitchDockStateManager, &USwitchDockStateManager::StaticClass, TEXT("/Script/DBDInput"), TEXT("USwitchDockStateManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USwitchDockStateManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
