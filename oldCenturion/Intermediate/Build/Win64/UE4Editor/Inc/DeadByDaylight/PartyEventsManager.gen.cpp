// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/PartyEventsManager.h"
#include "Engine/Classes/Engine/GameInstance.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePartyEventsManager() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPartyEventsManager_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UPartyEventsManager();
	ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UPartyEventsManager::StaticRegisterNativesUPartyEventsManager()
	{
	}
	UClass* Z_Construct_UClass_UPartyEventsManager_NoRegister()
	{
		return UPartyEventsManager::StaticClass();
	}
	struct Z_Construct_UClass_UPartyEventsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPartyEventsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPartyEventsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PartyEventsManager.h" },
		{ "ModuleRelativePath", "Public/PartyEventsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPartyEventsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPartyEventsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPartyEventsManager_Statics::ClassParams = {
		&UPartyEventsManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UPartyEventsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPartyEventsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPartyEventsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPartyEventsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPartyEventsManager, 675102410);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UPartyEventsManager>()
	{
		return UPartyEventsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPartyEventsManager(Z_Construct_UClass_UPartyEventsManager, &UPartyEventsManager::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UPartyEventsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPartyEventsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
