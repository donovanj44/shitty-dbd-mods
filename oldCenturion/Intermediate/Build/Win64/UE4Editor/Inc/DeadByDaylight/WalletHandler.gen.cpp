// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/WalletHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWalletHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWalletHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UWalletHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UWalletHandler::StaticRegisterNativesUWalletHandler()
	{
	}
	UClass* Z_Construct_UClass_UWalletHandler_NoRegister()
	{
		return UWalletHandler::StaticClass();
	}
	struct Z_Construct_UClass_UWalletHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UWalletHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UWalletHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "WalletHandler.h" },
		{ "ModuleRelativePath", "Public/WalletHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UWalletHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWalletHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UWalletHandler_Statics::ClassParams = {
		&UWalletHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UWalletHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UWalletHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UWalletHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UWalletHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UWalletHandler, 2220722167);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UWalletHandler>()
	{
		return UWalletHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UWalletHandler(Z_Construct_UClass_UWalletHandler, &UWalletHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UWalletHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UWalletHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
