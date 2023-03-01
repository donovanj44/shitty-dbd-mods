// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_ExtTimeLimit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ExtTimeLimit() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtTimeLimit_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtTimeLimit();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_TimeLimit();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UEnum* Z_Construct_UEnum_AIModule_EBasicKeyOperation();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
	DBDBOTS_API UClass* Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister();
// End Cross Module References
	void UBTDecorator_ExtTimeLimit::StaticRegisterNativesUBTDecorator_ExtTimeLimit()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ExtTimeLimit_NoRegister()
	{
		return UBTDecorator_ExtTimeLimit::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FilterOperation_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FilterOperation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBFilterKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBFilterKey;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxTimeLimit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxTimeLimit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TimeLimit,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BTDecorator_ExtTimeLimit.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtTimeLimit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_FilterOperation_MetaData[] = {
		{ "Category", "BTDecorator_ExtTimeLimit" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtTimeLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_FilterOperation = { "FilterOperation", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtTimeLimit, FilterOperation), Z_Construct_UEnum_AIModule_EBasicKeyOperation, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_FilterOperation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_FilterOperation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_BBFilterKey_MetaData[] = {
		{ "Category", "BTDecorator_ExtTimeLimit" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtTimeLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_BBFilterKey = { "BBFilterKey", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtTimeLimit, BBFilterKey), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_BBFilterKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_BBFilterKey_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_MaxTimeLimit_MetaData[] = {
		{ "Category", "BTDecorator_ExtTimeLimit" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtTimeLimit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_MaxTimeLimit = { "MaxTimeLimit", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtTimeLimit, MaxTimeLimit), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_MaxTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_MaxTimeLimit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_FilterOperation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_BBFilterKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::NewProp_MaxTimeLimit,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAIDisplayDebugInterface_NoRegister, (int32)VTABLE_OFFSET(UBTDecorator_ExtTimeLimit, IAIDisplayDebugInterface), false },
		};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ExtTimeLimit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::ClassParams = {
		&UBTDecorator_ExtTimeLimit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::PropPointers,
		InterfaceParams,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::PropPointers),
		UE_ARRAY_COUNT(InterfaceParams),
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ExtTimeLimit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_ExtTimeLimit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_ExtTimeLimit, 2556942855);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_ExtTimeLimit>()
	{
		return UBTDecorator_ExtTimeLimit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ExtTimeLimit(Z_Construct_UClass_UBTDecorator_ExtTimeLimit, &UBTDecorator_ExtTimeLimit::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_ExtTimeLimit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ExtTimeLimit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
