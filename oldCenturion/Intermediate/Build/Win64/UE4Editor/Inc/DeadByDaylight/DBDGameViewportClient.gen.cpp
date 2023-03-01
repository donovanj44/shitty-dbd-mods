// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DBDGameViewportClient.h"
#include "Engine/Classes/Engine/Engine.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDBDGameViewportClient() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameViewportClient_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDBDGameViewportClient();
	ENGINE_API UClass* Z_Construct_UClass_UGameViewportClient();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UDBDGameViewportClient::StaticRegisterNativesUDBDGameViewportClient()
	{
	}
	UClass* Z_Construct_UClass_UDBDGameViewportClient_NoRegister()
	{
		return UDBDGameViewportClient::StaticClass();
	}
	struct Z_Construct_UClass_UDBDGameViewportClient_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDBDGameViewportClient_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameViewportClient,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDBDGameViewportClient_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DBDGameViewportClient.h" },
		{ "ModuleRelativePath", "Public/DBDGameViewportClient.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDBDGameViewportClient_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDBDGameViewportClient>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDBDGameViewportClient_Statics::ClassParams = {
		&UDBDGameViewportClient::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001000ACu,
		METADATA_PARAMS(Z_Construct_UClass_UDBDGameViewportClient_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDBDGameViewportClient_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDBDGameViewportClient()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDBDGameViewportClient_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDBDGameViewportClient, 2724709826);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDBDGameViewportClient>()
	{
		return UDBDGameViewportClient::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDBDGameViewportClient(Z_Construct_UClass_UDBDGameViewportClient, &UDBDGameViewportClient::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDBDGameViewportClient"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDBDGameViewportClient);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
