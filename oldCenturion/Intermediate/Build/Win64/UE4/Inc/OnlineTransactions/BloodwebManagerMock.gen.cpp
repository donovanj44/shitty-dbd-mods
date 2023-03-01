// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "OnlineTransactions/Public/BloodwebManagerMock.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBloodwebManagerMock() {}
// Cross Module References
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UBloodwebManagerMock_NoRegister();
	ONLINETRANSACTIONS_API UClass* Z_Construct_UClass_UBloodwebManagerMock();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_OnlineTransactions();
// End Cross Module References
	void UBloodwebManagerMock::StaticRegisterNativesUBloodwebManagerMock()
	{
	}
	UClass* Z_Construct_UClass_UBloodwebManagerMock_NoRegister()
	{
		return UBloodwebManagerMock::StaticClass();
	}
	struct Z_Construct_UClass_UBloodwebManagerMock_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBloodwebManagerMock_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_OnlineTransactions,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBloodwebManagerMock_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BloodwebManagerMock.h" },
		{ "ModuleRelativePath", "Public/BloodwebManagerMock.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBloodwebManagerMock_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBloodwebManagerMock>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBloodwebManagerMock_Statics::ClassParams = {
		&UBloodwebManagerMock::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UBloodwebManagerMock_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBloodwebManagerMock_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBloodwebManagerMock()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBloodwebManagerMock_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBloodwebManagerMock, 90846994);
	template<> ONLINETRANSACTIONS_API UClass* StaticClass<UBloodwebManagerMock>()
	{
		return UBloodwebManagerMock::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBloodwebManagerMock(Z_Construct_UClass_UBloodwebManagerMock, &UBloodwebManagerMock::StaticClass, TEXT("/Script/OnlineTransactions"), TEXT("UBloodwebManagerMock"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBloodwebManagerMock);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
