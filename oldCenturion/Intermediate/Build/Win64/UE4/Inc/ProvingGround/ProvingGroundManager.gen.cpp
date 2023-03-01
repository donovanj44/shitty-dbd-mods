// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ProvingGround/Public/ProvingGroundManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProvingGroundManager() {}
// Cross Module References
	PROVINGGROUND_API UClass* Z_Construct_UClass_UProvingGroundManager_NoRegister();
	PROVINGGROUND_API UClass* Z_Construct_UClass_UProvingGroundManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_ProvingGround();
// End Cross Module References
	void UProvingGroundManager::StaticRegisterNativesUProvingGroundManager()
	{
	}
	UClass* Z_Construct_UClass_UProvingGroundManager_NoRegister()
	{
		return UProvingGroundManager::StaticClass();
	}
	struct Z_Construct_UClass_UProvingGroundManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UProvingGroundManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_ProvingGround,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UProvingGroundManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ProvingGroundManager.h" },
		{ "ModuleRelativePath", "Public/ProvingGroundManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UProvingGroundManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UProvingGroundManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UProvingGroundManager_Statics::ClassParams = {
		&UProvingGroundManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UProvingGroundManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UProvingGroundManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UProvingGroundManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UProvingGroundManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UProvingGroundManager, 31827248);
	template<> PROVINGGROUND_API UClass* StaticClass<UProvingGroundManager>()
	{
		return UProvingGroundManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UProvingGroundManager(Z_Construct_UClass_UProvingGroundManager, &UProvingGroundManager::StaticClass, TEXT("/Script/ProvingGround"), TEXT("UProvingGroundManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UProvingGroundManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
