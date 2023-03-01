// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineTransactions/Public/OnlineTransaction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOnlineTransaction() {}
// Cross Module References
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UOnlineTransaction_NoRegister();
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UOnlineTransaction();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_OnlineTransactions();
// End Cross Module References
	void UOnlineTransaction::StaticRegisterNativesUOnlineTransaction()
	{
	}
	UClass* Z_Construct_UClass_UOnlineTransaction_NoRegister()
	{
		return UOnlineTransaction::StaticClass();
	}
	struct Z_Construct_UClass_UOnlineTransaction_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOnlineTransaction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineTransactions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOnlineTransaction_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/OnlineTransaction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOnlineTransaction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IOnlineTransaction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOnlineTransaction_Statics::ClassParams = {
		&UOnlineTransaction::StaticClass,
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
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UOnlineTransaction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOnlineTransaction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOnlineTransaction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOnlineTransaction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOnlineTransaction, 3070046955);
	template<> ONLINETRANSACTIONS_API UClass* StaticClass<UOnlineTransaction>()
	{
		return UOnlineTransaction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOnlineTransaction(Z_Construct_UClass_UOnlineTransaction, &UOnlineTransaction::StaticClass, TEXT("/Script/OnlineTransactions"), TEXT("UOnlineTransaction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOnlineTransaction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
