// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK24/Public/BTTask_MoveToAbortIfStuck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTTask_MoveToAbortIfStuck() {}
// Cross Module References
	THEK24_API UClass* Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_NoRegister();
	THEK24_API UClass* Z_Construct_UClass_UBTTask_MoveToAbortIfStuck();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTask_MoveTo();
	UPackage* Z_Construct_UPackage__Script_TheK24();
// End Cross Module References
	void UBTTask_MoveToAbortIfStuck::StaticRegisterNativesUBTTask_MoveToAbortIfStuck()
	{
	}
	UClass* Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_NoRegister()
	{
		return UBTTask_MoveToAbortIfStuck::StaticClass();
	}
	struct Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__maxTimeStuck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__maxTimeStuck;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__deltaConsideredStuck_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__deltaConsideredStuck;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTTask_MoveTo,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK24,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTTask_MoveToAbortIfStuck.h" },
		{ "ModuleRelativePath", "Public/BTTask_MoveToAbortIfStuck.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__maxTimeStuck_MetaData[] = {
		{ "Category", "BTTask_MoveToAbortIfStuck" },
		{ "ModuleRelativePath", "Public/BTTask_MoveToAbortIfStuck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__maxTimeStuck = { "_maxTimeStuck", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_MoveToAbortIfStuck, _maxTimeStuck), METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__maxTimeStuck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__maxTimeStuck_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__deltaConsideredStuck_MetaData[] = {
		{ "Category", "BTTask_MoveToAbortIfStuck" },
		{ "ModuleRelativePath", "Public/BTTask_MoveToAbortIfStuck.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__deltaConsideredStuck = { "_deltaConsideredStuck", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTTask_MoveToAbortIfStuck, _deltaConsideredStuck), METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__deltaConsideredStuck_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__deltaConsideredStuck_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__maxTimeStuck,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::NewProp__deltaConsideredStuck,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTTask_MoveToAbortIfStuck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::ClassParams = {
		&UBTTask_MoveToAbortIfStuck::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::PropPointers),
		0,
		0x000000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTTask_MoveToAbortIfStuck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTTask_MoveToAbortIfStuck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTTask_MoveToAbortIfStuck, 3606779625);
	template<> THEK24_API UClass* StaticClass<UBTTask_MoveToAbortIfStuck>()
	{
		return UBTTask_MoveToAbortIfStuck::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTTask_MoveToAbortIfStuck(Z_Construct_UClass_UBTTask_MoveToAbortIfStuck, &UBTTask_MoveToAbortIfStuck::StaticClass, TEXT("/Script/TheK24"), TEXT("UBTTask_MoveToAbortIfStuck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTTask_MoveToAbortIfStuck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif