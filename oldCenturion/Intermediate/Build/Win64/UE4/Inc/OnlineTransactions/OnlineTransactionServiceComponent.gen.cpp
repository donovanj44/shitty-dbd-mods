// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineTransactions/Public/OnlineTransactionServiceComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineTransactionServiceComponent() {}
// Cross Module References
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UOnlineTransactionServiceComponent_NoRegister();
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UOnlineTransactionServiceComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_OnlineTransactions();
// End Cross Module References
	void UOnlineTransactionServiceComponent::StaticRegisterNativesUOnlineTransactionServiceComponent()
	{
	}
	UClass* Z_Construct_UClass_UOnlineTransactionServiceComponent_NoRegister()
	{
		return UOnlineTransactionServiceComponent::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineTransactionServiceComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineTransactionServiceComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineTransactions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTransactionServiceComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OnlineTransactionServiceComponent.h" },
		{ "ModuleRelativePath", "Public/OnlineTransactionServiceComponent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineTransactionServiceComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOnlineTransactionServiceComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineTransactionServiceComponent_Statics::ClassParams = {
		&UOnlineTransactionServiceComponent::StaticClass,
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
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineTransactionServiceComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTransactionServiceComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineTransactionServiceComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineTransactionServiceComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineTransactionServiceComponent, 641060416);
	template<> ONLINETRANSACTIONS_API UClass* StaticClass<UOnlineTransactionServiceComponent>()
	{
		return UOnlineTransactionServiceComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineTransactionServiceComponent(Z_Construct_UClass_UOnlineTransactionServiceComponent, &UOnlineTransactionServiceComponent::StaticClass, TEXT("/Script/OnlineTransactions"), TEXT("UOnlineTransactionServiceComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineTransactionServiceComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
