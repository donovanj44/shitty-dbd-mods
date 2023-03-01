// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/SpawnerStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawnerStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnerStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USpawnerStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void USpawnerStrategy::StaticRegisterNativesUSpawnerStrategy()
	{
	}
	UClass* Z_Construct_UClass_USpawnerStrategy_NoRegister()
	{
		return USpawnerStrategy::StaticClass();
	}
	struct Z_Construct_UClass_USpawnerStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USpawnerStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USpawnerStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SpawnerStrategy.h" },
		{ "ModuleRelativePath", "Public/SpawnerStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USpawnerStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USpawnerStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USpawnerStrategy_Statics::ClassParams = {
		&USpawnerStrategy::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_USpawnerStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USpawnerStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USpawnerStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USpawnerStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USpawnerStrategy, 888840039);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<USpawnerStrategy>()
	{
		return USpawnerStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USpawnerStrategy(Z_Construct_UClass_USpawnerStrategy, &USpawnerStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("USpawnerStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USpawnerStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
