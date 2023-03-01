// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/FriendManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFriendManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFriendManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UFriendManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UFriendManager::StaticRegisterNativesUFriendManager()
	{
	}
	UClass* Z_Construct_UClass_UFriendManager_NoRegister()
	{
		return UFriendManager::StaticClass();
	}
	struct Z_Construct_UClass_UFriendManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFriendManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFriendManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FriendManager.h" },
		{ "ModuleRelativePath", "Public/FriendManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFriendManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFriendManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFriendManager_Statics::ClassParams = {
		&UFriendManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UFriendManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UFriendManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFriendManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFriendManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFriendManager, 372466924);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UFriendManager>()
	{
		return UFriendManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFriendManager(Z_Construct_UClass_UFriendManager, &UFriendManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UFriendManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFriendManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
