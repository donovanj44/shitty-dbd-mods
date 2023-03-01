// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/InventoryHandler.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryHandler() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInventoryHandler_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UInventoryHandler();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UInventoryHandler::StaticRegisterNativesUInventoryHandler()
	{
	}
	UClass* Z_Construct_UClass_UInventoryHandler_NoRegister()
	{
		return UInventoryHandler::StaticClass();
	}
	struct Z_Construct_UClass_UInventoryHandler_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInventoryHandler_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInventoryHandler_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InventoryHandler.h" },
		{ "ModuleRelativePath", "Public/InventoryHandler.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInventoryHandler_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryHandler>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInventoryHandler_Statics::ClassParams = {
		&UInventoryHandler::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UInventoryHandler_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryHandler_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInventoryHandler()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInventoryHandler_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInventoryHandler, 1405923071);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UInventoryHandler>()
	{
		return UInventoryHandler::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInventoryHandler(Z_Construct_UClass_UInventoryHandler, &UInventoryHandler::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UInventoryHandler"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryHandler);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
