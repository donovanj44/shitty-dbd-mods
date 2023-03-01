// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_ExtIsBBEntryOfClass.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ExtIsBBEntryOfClass() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass();
	AIMODULE_API UClass* Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
// End Cross Module References
	void UBTDecorator_ExtIsBBEntryOfClass::StaticRegisterNativesUBTDecorator_ExtIsBBEntryOfClass()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_NoRegister()
	{
		return UBTDecorator_ExtIsBBEntryOfClass::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvertConditition_MetaData[];
#endif
		static void NewProp_InvertConditition_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_InvertConditition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_IsBBEntryOfClass,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Condition" },
		{ "IncludePath", "BTDecorator_ExtIsBBEntryOfClass.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtIsBBEntryOfClass.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::NewProp_InvertConditition_MetaData[] = {
		{ "Category", "BTDecorator_ExtIsBBEntryOfClass" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtIsBBEntryOfClass.h" },
	};
#endif
	void Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::NewProp_InvertConditition_SetBit(void* Obj)
	{
		((UBTDecorator_ExtIsBBEntryOfClass*)Obj)->InvertConditition = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::NewProp_InvertConditition = { "InvertConditition", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UBTDecorator_ExtIsBBEntryOfClass), &Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::NewProp_InvertConditition_SetBit, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::NewProp_InvertConditition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::NewProp_InvertConditition_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::NewProp_InvertConditition,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ExtIsBBEntryOfClass>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::ClassParams = {
		&UBTDecorator_ExtIsBBEntryOfClass::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_ExtIsBBEntryOfClass, 538853398);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_ExtIsBBEntryOfClass>()
	{
		return UBTDecorator_ExtIsBBEntryOfClass::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ExtIsBBEntryOfClass(Z_Construct_UClass_UBTDecorator_ExtIsBBEntryOfClass, &UBTDecorator_ExtIsBBEntryOfClass::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_ExtIsBBEntryOfClass"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ExtIsBBEntryOfClass);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
