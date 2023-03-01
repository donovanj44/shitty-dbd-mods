// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OnlinePrivilegeManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlinePrivilegeManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOnlinePrivilegeManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOnlinePrivilegeManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UOnlinePrivilegeManager::StaticRegisterNativesUOnlinePrivilegeManager()
	{
	}
	UClass* Z_Construct_UClass_UOnlinePrivilegeManager_NoRegister()
	{
		return UOnlinePrivilegeManager::StaticClass();
	}
	struct Z_Construct_UClass_UOnlinePrivilegeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlinePrivilegeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlinePrivilegeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlinePrivilegeManager.h" },
		{ "ModuleRelativePath", "Public/OnlinePrivilegeManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlinePrivilegeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlinePrivilegeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlinePrivilegeManager_Statics::ClassParams = {
		&UOnlinePrivilegeManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UOnlinePrivilegeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlinePrivilegeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlinePrivilegeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlinePrivilegeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlinePrivilegeManager, 4000296667);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOnlinePrivilegeManager>()
	{
		return UOnlinePrivilegeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlinePrivilegeManager(Z_Construct_UClass_UOnlinePrivilegeManager, &UOnlinePrivilegeManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOnlinePrivilegeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlinePrivilegeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
