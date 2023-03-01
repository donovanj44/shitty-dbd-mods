// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_StateMonitor_Slasher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_StateMonitor_Slasher() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_StateMonitor_Slasher_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_StateMonitor_Slasher();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_StateMonitor();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_StateMonitor_Slasher::StaticRegisterNativesUBTService_StateMonitor_Slasher()
	{
	}
	UClass* Z_Construct_UClass_UBTService_StateMonitor_Slasher_NoRegister()
	{
		return UBTService_StateMonitor_Slasher::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBIsCarrying_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBIsCarrying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService_StateMonitor,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_StateMonitor_Slasher.h" },
		{ "ModuleRelativePath", "Public/BTService_StateMonitor_Slasher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::NewProp_BBIsCarrying_MetaData[] = {
		{ "Category", "BTService_StateMonitor_Slasher" },
		{ "ModuleRelativePath", "Public/BTService_StateMonitor_Slasher.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::NewProp_BBIsCarrying = { "BBIsCarrying", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_StateMonitor_Slasher, BBIsCarrying), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::NewProp_BBIsCarrying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::NewProp_BBIsCarrying_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::NewProp_BBIsCarrying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_StateMonitor_Slasher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::ClassParams = {
		&UBTService_StateMonitor_Slasher::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_StateMonitor_Slasher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_StateMonitor_Slasher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_StateMonitor_Slasher, 1118726623);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_StateMonitor_Slasher>()
	{
		return UBTService_StateMonitor_Slasher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_StateMonitor_Slasher(Z_Construct_UClass_UBTService_StateMonitor_Slasher, &UBTService_StateMonitor_Slasher::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_StateMonitor_Slasher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_StateMonitor_Slasher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
