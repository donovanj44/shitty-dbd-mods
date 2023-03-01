// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/NoAccumulationSpawnerStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNoAccumulationSpawnerStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoAccumulationSpawnerStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UNoAccumulationSpawnerStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnerStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UNoAccumulationSpawnerStrategy::StaticRegisterNativesUNoAccumulationSpawnerStrategy()
	{
	}
	UClass* Z_Construct_UClass_UNoAccumulationSpawnerStrategy_NoRegister()
	{
		return UNoAccumulationSpawnerStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UNoAccumulationSpawnerStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNoAccumulationSpawnerStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USpawnerStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNoAccumulationSpawnerStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "NoAccumulationSpawnerStrategy.h" },
		{ "ModuleRelativePath", "Public/NoAccumulationSpawnerStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNoAccumulationSpawnerStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNoAccumulationSpawnerStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNoAccumulationSpawnerStrategy_Statics::ClassParams = {
		&UNoAccumulationSpawnerStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UNoAccumulationSpawnerStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNoAccumulationSpawnerStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNoAccumulationSpawnerStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNoAccumulationSpawnerStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNoAccumulationSpawnerStrategy, 4089353967);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UNoAccumulationSpawnerStrategy>()
	{
		return UNoAccumulationSpawnerStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNoAccumulationSpawnerStrategy(Z_Construct_UClass_UNoAccumulationSpawnerStrategy, &UNoAccumulationSpawnerStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UNoAccumulationSpawnerStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNoAccumulationSpawnerStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
