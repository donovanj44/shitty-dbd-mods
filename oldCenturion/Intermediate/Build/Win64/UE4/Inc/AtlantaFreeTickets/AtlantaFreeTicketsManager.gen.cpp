// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AtlantaFreeTickets/Public/AtlantaFreeTicketsManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaFreeTicketsManager() {}
// Cross Module References
	ATLANTAFREETICKETS_API UClass* Z_Construct_UClass_UAtlantaFreeTicketsManager_NoRegister();
	ATLANTAFREETICKETS_API UClass* Z_Construct_UClass_UAtlantaFreeTicketsManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_AtlantaFreeTickets();
// End Cross Module References
	void UAtlantaFreeTicketsManager::StaticRegisterNativesUAtlantaFreeTicketsManager()
	{
	}
	UClass* Z_Construct_UClass_UAtlantaFreeTicketsManager_NoRegister()
	{
		return UAtlantaFreeTicketsManager::StaticClass();
	}
	struct Z_Construct_UClass_UAtlantaFreeTicketsManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAtlantaFreeTicketsManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AtlantaFreeTickets,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAtlantaFreeTicketsManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaFreeTicketsManager.h" },
		{ "ModuleRelativePath", "Public/AtlantaFreeTicketsManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAtlantaFreeTicketsManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAtlantaFreeTicketsManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAtlantaFreeTicketsManager_Statics::ClassParams = {
		&UAtlantaFreeTicketsManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAtlantaFreeTicketsManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAtlantaFreeTicketsManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAtlantaFreeTicketsManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAtlantaFreeTicketsManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAtlantaFreeTicketsManager, 499861699);
	template<> ATLANTAFREETICKETS_API UClass* StaticClass<UAtlantaFreeTicketsManager>()
	{
		return UAtlantaFreeTicketsManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAtlantaFreeTicketsManager(Z_Construct_UClass_UAtlantaFreeTicketsManager, &UAtlantaFreeTicketsManager::StaticClass, TEXT("/Script/AtlantaFreeTickets"), TEXT("UAtlantaFreeTicketsManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAtlantaFreeTicketsManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
