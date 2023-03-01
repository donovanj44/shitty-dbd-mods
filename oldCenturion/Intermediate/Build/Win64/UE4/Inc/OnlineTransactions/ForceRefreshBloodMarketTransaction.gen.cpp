// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineTransactions/Public/ForceRefreshBloodMarketTransaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceRefreshBloodMarketTransaction() {}
// Cross Module References
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UForceRefreshBloodMarketTransaction_NoRegister();
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UForceRefreshBloodMarketTransaction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineTransactions();
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UOnlineTransaction_NoRegister();
// End Cross Module References
	void UForceRefreshBloodMarketTransaction::StaticRegisterNativesUForceRefreshBloodMarketTransaction()
	{
	}
	UClass* Z_Construct_UClass_UForceRefreshBloodMarketTransaction_NoRegister()
	{
		return UForceRefreshBloodMarketTransaction::StaticClass();
	}
	struct Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineTransactions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ForceRefreshBloodMarketTransaction.h" },
		{ "ModuleRelativePath", "Public/ForceRefreshBloodMarketTransaction.h" },
	};
#endif
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UOnlineTransaction_NoRegister, (int32)VTABLE_OFFSET(UForceRefreshBloodMarketTransaction, IOnlineTransaction), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceRefreshBloodMarketTransaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics::ClassParams = {
		&UForceRefreshBloodMarketTransaction::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UForceRefreshBloodMarketTransaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UForceRefreshBloodMarketTransaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UForceRefreshBloodMarketTransaction, 4053491993);
	template<> ONLINETRANSACTIONS_API UClass* StaticClass<UForceRefreshBloodMarketTransaction>()
	{
		return UForceRefreshBloodMarketTransaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UForceRefreshBloodMarketTransaction(Z_Construct_UClass_UForceRefreshBloodMarketTransaction, &UForceRefreshBloodMarketTransaction::StaticClass, TEXT("/Script/OnlineTransactions"), TEXT("UForceRefreshBloodMarketTransaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UForceRefreshBloodMarketTransaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
