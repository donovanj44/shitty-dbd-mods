// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDGameplay/Public/PositionLagCompensationComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePositionLagCompensationComponent() {}
// Cross Module References
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPositionLagCompensationComponent_NoRegister();
	DBDGAMEPLAY_API UClass* Z_Construct_UClass_UPositionLagCompensationComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_DBDGameplay();
// End Cross Module References
	void UPositionLagCompensationComponent::StaticRegisterNativesUPositionLagCompensationComponent()
	{
	}
	UClass* Z_Construct_UClass_UPositionLagCompensationComponent_NoRegister()
	{
		return UPositionLagCompensationComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPositionLagCompensationComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxInterpolationToServerMoveInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxInterpolationToServerMoveInSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxExtrapolationDurationInSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxExtrapolationDurationInSeconds;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPositionLagCompensationComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDGameplay,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionLagCompensationComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PositionLagCompensationComponent.h" },
		{ "ModuleRelativePath", "Public/PositionLagCompensationComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxInterpolationToServerMoveInSeconds_MetaData[] = {
		{ "Category", "PositionLagCompensationComponent" },
		{ "ModuleRelativePath", "Public/PositionLagCompensationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxInterpolationToServerMoveInSeconds = { "_maxInterpolationToServerMoveInSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPositionLagCompensationComponent, _maxInterpolationToServerMoveInSeconds), METADATA_PARAMS(Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxInterpolationToServerMoveInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxInterpolationToServerMoveInSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxExtrapolationDurationInSeconds_MetaData[] = {
		{ "Category", "PositionLagCompensationComponent" },
		{ "ModuleRelativePath", "Public/PositionLagCompensationComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxExtrapolationDurationInSeconds = { "_maxExtrapolationDurationInSeconds", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPositionLagCompensationComponent, _maxExtrapolationDurationInSeconds), METADATA_PARAMS(Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxExtrapolationDurationInSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxExtrapolationDurationInSeconds_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPositionLagCompensationComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxInterpolationToServerMoveInSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPositionLagCompensationComponent_Statics::NewProp__maxExtrapolationDurationInSeconds,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPositionLagCompensationComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPositionLagCompensationComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPositionLagCompensationComponent_Statics::ClassParams = {
		&UPositionLagCompensationComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPositionLagCompensationComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UPositionLagCompensationComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPositionLagCompensationComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPositionLagCompensationComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPositionLagCompensationComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPositionLagCompensationComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPositionLagCompensationComponent, 2114991864);
	template<> DBDGAMEPLAY_API UClass* StaticClass<UPositionLagCompensationComponent>()
	{
		return UPositionLagCompensationComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPositionLagCompensationComponent(Z_Construct_UClass_UPositionLagCompensationComponent, &UPositionLagCompensationComponent::StaticClass, TEXT("/Script/DBDGameplay"), TEXT("UPositionLagCompensationComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPositionLagCompensationComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
