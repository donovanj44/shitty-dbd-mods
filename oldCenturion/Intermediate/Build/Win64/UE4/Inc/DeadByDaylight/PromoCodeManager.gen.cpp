// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PromoCodeManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePromoCodeManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPromoCodeManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPromoCodeManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPromoCodeManager::StaticRegisterNativesUPromoCodeManager()
	{
	}
	UClass* Z_Construct_UClass_UPromoCodeManager_NoRegister()
	{
		return UPromoCodeManager::StaticClass();
	}
	struct Z_Construct_UClass_UPromoCodeManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPromoCodeManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPromoCodeManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PromoCodeManager.h" },
		{ "ModuleRelativePath", "Public/PromoCodeManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPromoCodeManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPromoCodeManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPromoCodeManager_Statics::ClassParams = {
		&UPromoCodeManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPromoCodeManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPromoCodeManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPromoCodeManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPromoCodeManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPromoCodeManager, 247757001);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPromoCodeManager>()
	{
		return UPromoCodeManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPromoCodeManager(Z_Construct_UClass_UPromoCodeManager, &UPromoCodeManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPromoCodeManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPromoCodeManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
