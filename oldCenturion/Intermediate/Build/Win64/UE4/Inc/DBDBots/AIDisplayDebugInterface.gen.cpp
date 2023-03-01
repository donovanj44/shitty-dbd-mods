// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AIDisplayDebugInterface.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIDisplayDebugInterface() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UAIDisplayDebugInterface::StaticRegisterNativesUAIDisplayDebugInterface()
	{
	}
	UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister()
	{
		return UAIDisplayDebugInterface::StaticClass();
	}
	struct Z_Construct_UClass_UAIDisplayDebugInterface_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAIDisplayDebugInterface_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAIDisplayDebugInterface_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AIDisplayDebugInterface.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAIDisplayDebugInterface_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IAIDisplayDebugInterface>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAIDisplayDebugInterface_Statics::ClassParams = {
		&UAIDisplayDebugInterface::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAIDisplayDebugInterface_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAIDisplayDebugInterface_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAIDisplayDebugInterface()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAIDisplayDebugInterface_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAIDisplayDebugInterface, 3581468895);
	template<> DBDBOTS_API UClass* StaticClass<UAIDisplayDebugInterface>()
	{
		return UAIDisplayDebugInterface::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAIDisplayDebugInterface(Z_Construct_UClass_UAIDisplayDebugInterface, &UAIDisplayDebugInterface::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAIDisplayDebugInterface"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAIDisplayDebugInterface);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
