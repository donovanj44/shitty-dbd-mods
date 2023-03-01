// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_IsInteractorAvailable.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_IsInteractorAvailable() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_IsInteractorAvailable();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_IsInteractorAvailable::StaticRegisterNativesUBTDecorator_IsInteractorAvailable()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_NoRegister()
	{
		return UBTDecorator_IsInteractorAvailable::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBInteractorObj_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBInteractorObj;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_IsInteractorAvailable.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsInteractorAvailable.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::NewProp_BBInteractorObj_MetaData[] = {
		{ "Category", "BTDecorator_IsInteractorAvailable" },
		{ "ModuleRelativePath", "Public/BTDecorator_IsInteractorAvailable.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::NewProp_BBInteractorObj = { "BBInteractorObj", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_IsInteractorAvailable, BBInteractorObj), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::NewProp_BBInteractorObj_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::NewProp_BBInteractorObj_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::NewProp_BBInteractorObj,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_IsInteractorAvailable>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::ClassParams = {
		&UBTDecorator_IsInteractorAvailable::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_IsInteractorAvailable()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_IsInteractorAvailable_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_IsInteractorAvailable, 3808966704);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_IsInteractorAvailable>()
	{
		return UBTDecorator_IsInteractorAvailable::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_IsInteractorAvailable(Z_Construct_UClass_UBTDecorator_IsInteractorAvailable, &UBTDecorator_IsInteractorAvailable::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_IsInteractorAvailable"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_IsInteractorAvailable);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
