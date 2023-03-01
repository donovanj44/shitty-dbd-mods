// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_IsObjectFocused.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsObjectFocused() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsObjectFocused_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsObjectFocused();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DBDBOTS_API UEnum* Z_Construct_UEnum_DBDBots_EDecoratorIsObjFocusedFilter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_IsObjectFocused::StaticRegisterNativesUBTDecorator_IsObjectFocused()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsObjectFocused_NoRegister()
	{
		return UBTDecorator_IsObjectFocused::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filter_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_Filter;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_Filter_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_IsObjectFocused.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsObjectFocused.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_Filter_MetaData[] = {
		{ "Category", "BTDecorator_IsObjectFocused" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsObjectFocused.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_Filter = { "Filter", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsObjectFocused, Filter), Z_Construct_UEnum_DBDBots_EDecoratorIsObjFocusedFilter, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_Filter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_Filter_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_Filter_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_BBObj_MetaData[] = {
		{ "Category", "BTDecorator_IsObjectFocused" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsObjectFocused.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_BBObj = { "BBObj", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsObjectFocused, BBObj), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_BBObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_BBObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_Filter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_Filter_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::NewProp_BBObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsObjectFocused>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::ClassParams = {
		&UBTDecorator_IsObjectFocused::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsObjectFocused()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsObjectFocused_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsObjectFocused, 1445251697);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_IsObjectFocused>()
	{
		return UBTDecorator_IsObjectFocused::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsObjectFocused(Z_Construct_UClass_UBTDecorator_IsObjectFocused, &UBTDecorator_IsObjectFocused::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_IsObjectFocused"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsObjectFocused);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
