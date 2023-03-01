// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/AtlantaDisplayStand.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAtlantaDisplayStand() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaDisplayStand_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_AAtlantaDisplayStand();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADisplayStand();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAtlantaDisplayStandPosition();
// End Cross Module References
	void AAtlantaDisplayStand::StaticRegisterNativesAAtlantaDisplayStand()
	{
	}
	UClass* Z_Construct_UClass_AAtlantaDisplayStand_NoRegister()
	{
		return AAtlantaDisplayStand::StaticClass();
	}
	struct Z_Construct_UClass_AAtlantaDisplayStand_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KillerPositionMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_KillerPositionMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SurvivorPositionMarker_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SurvivorPositionMarker;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StandPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_StandPosition;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_StandPosition_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAtlantaDisplayStand_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ADisplayStand,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaDisplayStand_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AtlantaDisplayStand.h" },
		{ "ModuleRelativePath", "Public/AtlantaDisplayStand.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_KillerPositionMarker_MetaData[] = {
		{ "Category", "AtlantaDisplayStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaDisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_KillerPositionMarker = { "KillerPositionMarker", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaDisplayStand, KillerPositionMarker), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_KillerPositionMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_KillerPositionMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_SurvivorPositionMarker_MetaData[] = {
		{ "Category", "AtlantaDisplayStand" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AtlantaDisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_SurvivorPositionMarker = { "SurvivorPositionMarker", nullptr, (EPropertyFlags)0x00200800000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaDisplayStand, SurvivorPositionMarker), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_SurvivorPositionMarker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_SurvivorPositionMarker_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_StandPosition_MetaData[] = {
		{ "Category", "AtlantaDisplayStand" },
		{ "ModuleRelativePath", "Public/AtlantaDisplayStand.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_StandPosition = { "StandPosition", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAtlantaDisplayStand, StandPosition), Z_Construct_UEnum_DeadByDaylight_EAtlantaDisplayStandPosition, METADATA_PARAMS(Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_StandPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_StandPosition_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_StandPosition_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAtlantaDisplayStand_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_KillerPositionMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_SurvivorPositionMarker,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_StandPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAtlantaDisplayStand_Statics::NewProp_StandPosition_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAtlantaDisplayStand_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAtlantaDisplayStand>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAtlantaDisplayStand_Statics::ClassParams = {
		&AAtlantaDisplayStand::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AAtlantaDisplayStand_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaDisplayStand_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAtlantaDisplayStand_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAtlantaDisplayStand_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAtlantaDisplayStand()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAtlantaDisplayStand_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAtlantaDisplayStand, 1735609351);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<AAtlantaDisplayStand>()
	{
		return AAtlantaDisplayStand::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAtlantaDisplayStand(Z_Construct_UClass_AAtlantaDisplayStand, &AAtlantaDisplayStand::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("AAtlantaDisplayStand"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAtlantaDisplayStand);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
