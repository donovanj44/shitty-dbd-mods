// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/RestrictedPlacementAreaDefaultStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRestrictedPlacementAreaDefaultStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_URestrictedPlacementAreaStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
// End Cross Module References
	void URestrictedPlacementAreaDefaultStrategy::StaticRegisterNativesURestrictedPlacementAreaDefaultStrategy()
	{
	}
	UClass* Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_NoRegister()
	{
		return URestrictedPlacementAreaDefaultStrategy::StaticClass();
	}
	struct Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RestrictedActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_RestrictedActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_URestrictedPlacementAreaStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "RestrictedPlacementAreaDefaultStrategy.h" },
		{ "ModuleRelativePath", "Public/RestrictedPlacementAreaDefaultStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::NewProp_RestrictedActor_MetaData[] = {
		{ "Category", "RestrictedPlacementAreaDefaultStrategy" },
		{ "ModuleRelativePath", "Public/RestrictedPlacementAreaDefaultStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::NewProp_RestrictedActor = { "RestrictedActor", nullptr, (EPropertyFlags)0x0024080000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(URestrictedPlacementAreaDefaultStrategy, RestrictedActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::NewProp_RestrictedActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::NewProp_RestrictedActor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::NewProp_RestrictedActor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URestrictedPlacementAreaDefaultStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::ClassParams = {
		&URestrictedPlacementAreaDefaultStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::PropPointers),
		0,
		0x000010A0u,
		METADATA_PARAMS(Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(URestrictedPlacementAreaDefaultStrategy, 1215710473);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<URestrictedPlacementAreaDefaultStrategy>()
	{
		return URestrictedPlacementAreaDefaultStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_URestrictedPlacementAreaDefaultStrategy(Z_Construct_UClass_URestrictedPlacementAreaDefaultStrategy, &URestrictedPlacementAreaDefaultStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("URestrictedPlacementAreaDefaultStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(URestrictedPlacementAreaDefaultStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
