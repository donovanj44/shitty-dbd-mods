// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/RangeToActorsTrackerDefaultStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRangeToActorsTrackerDefaultStrategy() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_URangeToActorsTrackerStrategy();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void URangeToActorsTrackerDefaultStrategy::StaticRegisterNativesURangeToActorsTrackerDefaultStrategy()
	{
	}
	UClass* Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_NoRegister()
	{
		return URangeToActorsTrackerDefaultStrategy::StaticClass();
	}
	struct Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__actorClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp__actorClass;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URangeToActorsTrackerStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RangeToActorsTrackerDefaultStrategy.h" },
		{ "ModuleRelativePath", "Public/RangeToActorsTrackerDefaultStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::NewProp__actorClass_MetaData[] = {
		{ "Category", "RangeToActorsTrackerDefaultStrategy" },
		{ "ModuleRelativePath", "Public/RangeToActorsTrackerDefaultStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::NewProp__actorClass = { "_actorClass", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URangeToActorsTrackerDefaultStrategy, _actorClass), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::NewProp__actorClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::NewProp__actorClass_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::NewProp__actorClass,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URangeToActorsTrackerDefaultStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::ClassParams = {
		&URangeToActorsTrackerDefaultStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URangeToActorsTrackerDefaultStrategy, 366605054);
	template<> DBDGAMEPLAY_API UClass* StaticClass<URangeToActorsTrackerDefaultStrategy>()
	{
		return URangeToActorsTrackerDefaultStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URangeToActorsTrackerDefaultStrategy(Z_Construct_UClass_URangeToActorsTrackerDefaultStrategy, &URangeToActorsTrackerDefaultStrategy::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("URangeToActorsTrackerDefaultStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URangeToActorsTrackerDefaultStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
