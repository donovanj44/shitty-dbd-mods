// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/AISkill_ThroughTorment.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAISkill_ThroughTorment() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_ThroughTorment_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill_ThroughTorment();
	DBDBOTS_API UClass* Z_Construct_UClass_UAISkill();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UEnum* Z_Construct_UEnum_DeadByDaylight_EAITerrorLevel();
// End Cross Module References
	void UAISkill_ThroughTorment::StaticRegisterNativesUAISkill_ThroughTorment()
	{
	}
	UClass* Z_Construct_UClass_UAISkill_ThroughTorment_NoRegister()
	{
		return UAISkill_ThroughTorment::StaticClass();
	}
	struct Z_Construct_UClass_UAISkill_ThroughTorment_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToleratedTerrorPressure_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ToleratedTerrorPressure;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ToleratedTerrorPressure_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAISkill_ThroughTorment_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAISkill,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_ThroughTorment_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AISkill_ThroughTorment.h" },
		{ "ModuleRelativePath", "Public/AISkill_ThroughTorment.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAISkill_ThroughTorment_Statics::NewProp_ToleratedTerrorPressure_MetaData[] = {
		{ "Category", "AISkill_ThroughTorment" },
		{ "ModuleRelativePath", "Public/AISkill_ThroughTorment.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAISkill_ThroughTorment_Statics::NewProp_ToleratedTerrorPressure = { "ToleratedTerrorPressure", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAISkill_ThroughTorment, ToleratedTerrorPressure), Z_Construct_UEnum_DeadByDaylight_EAITerrorLevel, METADATA_PARAMS(Z_Construct_UClass_UAISkill_ThroughTorment_Statics::NewProp_ToleratedTerrorPressure_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_ThroughTorment_Statics::NewProp_ToleratedTerrorPressure_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAISkill_ThroughTorment_Statics::NewProp_ToleratedTerrorPressure_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAISkill_ThroughTorment_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_ThroughTorment_Statics::NewProp_ToleratedTerrorPressure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAISkill_ThroughTorment_Statics::NewProp_ToleratedTerrorPressure_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAISkill_ThroughTorment_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAISkill_ThroughTorment>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAISkill_ThroughTorment_Statics::ClassParams = {
		&UAISkill_ThroughTorment::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAISkill_ThroughTorment_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_ThroughTorment_Statics::PropPointers),
		0,
		0x001010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAISkill_ThroughTorment_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAISkill_ThroughTorment_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAISkill_ThroughTorment()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAISkill_ThroughTorment_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAISkill_ThroughTorment, 2868141010);
	template<> DBDBOTS_API UClass* StaticClass<UAISkill_ThroughTorment>()
	{
		return UAISkill_ThroughTorment::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAISkill_ThroughTorment(Z_Construct_UClass_UAISkill_ThroughTorment, &UAISkill_ThroughTorment::StaticClass, TEXT("/Script/DBDBots"), TEXT("UAISkill_ThroughTorment"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAISkill_ThroughTorment);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
