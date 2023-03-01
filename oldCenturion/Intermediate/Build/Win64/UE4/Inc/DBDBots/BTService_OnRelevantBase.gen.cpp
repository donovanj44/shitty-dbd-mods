// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_OnRelevantBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_OnRelevantBase() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_OnRelevantBase_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_OnRelevantBase();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EAINodeRelevancyOptions();
// End Cross Module References
	void UBTService_OnRelevantBase::StaticRegisterNativesUBTService_OnRelevantBase()
	{
	}
	UClass* Z_Construct_UClass_UBTService_OnRelevantBase_NoRegister()
	{
		return UBTService_OnRelevantBase::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_OnRelevantBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_When_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_When;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_When_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_OnRelevantBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_OnRelevantBase_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_OnRelevantBase.h" },
		{ "ModuleRelativePath", "Public/BTService_OnRelevantBase.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_OnRelevantBase_Statics::NewProp_When_MetaData[] = {
		{ "Category", "BTService_OnRelevantBase" },
		{ "ModuleRelativePath", "Public/BTService_OnRelevantBase.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTService_OnRelevantBase_Statics::NewProp_When = { "When", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_OnRelevantBase, When), Z_Construct_UEnum_DBDBots_EAINodeRelevancyOptions, METADATA_PARAMS(Z_Construct_UClass_UBTService_OnRelevantBase_Statics::NewProp_When_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OnRelevantBase_Statics::NewProp_When_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTService_OnRelevantBase_Statics::NewProp_When_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_OnRelevantBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_OnRelevantBase_Statics::NewProp_When,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_OnRelevantBase_Statics::NewProp_When_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_OnRelevantBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_OnRelevantBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_OnRelevantBase_Statics::ClassParams = {
		&UBTService_OnRelevantBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_OnRelevantBase_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OnRelevantBase_Statics::PropPointers),
		0,
		0x001000A1u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_OnRelevantBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_OnRelevantBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_OnRelevantBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_OnRelevantBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_OnRelevantBase, 3759461953);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_OnRelevantBase>()
	{
		return UBTService_OnRelevantBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_OnRelevantBase(Z_Construct_UClass_UBTService_OnRelevantBase, &UBTService_OnRelevantBase::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_OnRelevantBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_OnRelevantBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
