// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineTransactions/Public/WalletHandlerMock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalletHandlerMock() {}
// Cross Module References
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UWalletHandlerMock_NoRegister();
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UWalletHandlerMock();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineTransactions();
// End Cross Module References
	void UWalletHandlerMock::StaticRegisterNativesUWalletHandlerMock()
	{
	}
	UClass* Z_Construct_UClass_UWalletHandlerMock_NoRegister()
	{
		return UWalletHandlerMock::StaticClass();
	}
	struct Z_Construct_UClass_UWalletHandlerMock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWalletHandlerMock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineTransactions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletHandlerMock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WalletHandlerMock.h" },
		{ "ModuleRelativePath", "Public/WalletHandlerMock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWalletHandlerMock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalletHandlerMock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWalletHandlerMock_Statics::ClassParams = {
		&UWalletHandlerMock::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWalletHandlerMock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletHandlerMock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWalletHandlerMock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWalletHandlerMock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWalletHandlerMock, 270703945);
	template<> ONLINETRANSACTIONS_API UClass* StaticClass<UWalletHandlerMock>()
	{
		return UWalletHandlerMock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWalletHandlerMock(Z_Construct_UClass_UWalletHandlerMock, &UWalletHandlerMock::StaticClass, TEXT("/Script/OnlineTransactions"), TEXT("UWalletHandlerMock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWalletHandlerMock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
