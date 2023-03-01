// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_IsExitOpened.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsExitOpened() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsExitOpened_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsExitOpened();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_IsExitOpened::StaticRegisterNativesUBTDecorator_IsExitOpened()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsExitOpened_NoRegister()
	{
		return UBTDecorator_IsExitOpened::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBExitObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBExitObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_IsExitOpened.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsExitOpened.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::NewProp_BBExitObj_MetaData[] = {
		{ "Category", "BTDecorator_IsExitOpened" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsExitOpened.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::NewProp_BBExitObj = { "BBExitObj", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsExitOpened, BBExitObj), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::NewProp_BBExitObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::NewProp_BBExitObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::NewProp_BBExitObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsExitOpened>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::ClassParams = {
		&UBTDecorator_IsExitOpened::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsExitOpened()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsExitOpened_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsExitOpened, 2320059285);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_IsExitOpened>()
	{
		return UBTDecorator_IsExitOpened::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsExitOpened(Z_Construct_UClass_UBTDecorator_IsExitOpened, &UBTDecorator_IsExitOpened::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_IsExitOpened"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsExitOpened);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
