// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RankManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRankManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URankManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URankManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void URankManager::StaticRegisterNativesURankManager()
	{
	}
	UClass* Z_Construct_UClass_URankManager_NoRegister()
	{
		return URankManager::StaticClass();
	}
	struct Z_Construct_UClass_URankManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URankManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URankManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RankManager.h" },
		{ "ModuleRelativePath", "Public/RankManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_URankManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URankManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URankManager_Statics::ClassParams = {
		&URankManager::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_URankManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URankManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URankManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URankManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URankManager, 3214263550);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URankManager>()
	{
		return URankManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URankManager(Z_Construct_UClass_URankManager, &URankManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URankManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URankManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
