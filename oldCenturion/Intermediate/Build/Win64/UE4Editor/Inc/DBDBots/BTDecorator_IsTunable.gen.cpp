// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_IsTunable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsTunable() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsTunable_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsTunable();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_ETunableComparison();
// End Cross Module References
	void UBTDecorator_IsTunable::StaticRegisterNativesUBTDecorator_IsTunable()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsTunable_NoRegister()
	{
		return UBTDecorator_IsTunable::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsTunable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompareToValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CompareToValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TunableValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TunableValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Operator_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Operator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsTunable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsTunable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_IsTunable.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsTunable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_CompareToValue_MetaData[] = {
		{ "Category", "BTDecorator_IsTunable" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsTunable.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_CompareToValue = { "CompareToValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsTunable, CompareToValue), METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_CompareToValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_CompareToValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_TunableValue_MetaData[] = {
		{ "Category", "BTDecorator_IsTunable" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsTunable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_TunableValue = { "TunableValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsTunable, TunableValue), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_TunableValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_TunableValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_Operator_MetaData[] = {
		{ "Category", "BTDecorator_IsTunable" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsTunable.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_Operator = { "Operator", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsTunable, Operator), Z_Construct_UEnum_DBDBots_ETunableComparison, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_Operator_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_Operator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsTunable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_CompareToValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_TunableValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsTunable_Statics::NewProp_Operator,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsTunable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsTunable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsTunable_Statics::ClassParams = {
		&UBTDecorator_IsTunable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsTunable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsTunable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsTunable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsTunable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsTunable, 3606843318);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_IsTunable>()
	{
		return UBTDecorator_IsTunable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsTunable(Z_Construct_UClass_UBTDecorator_IsTunable, &UBTDecorator_IsTunable::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_IsTunable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsTunable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
