// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheExecutioner/Public/TrailPointOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTrailPointOutlineUpdateStrategy() {}
// Cross Module References
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_NoRegister();
	THEEXECUTIONER_API UClass* Z_Construct_UClass_UTrailPointOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_TheExecutioner();
	DATATABLEUTILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FDBDTunableRowHandle();
// End Cross Module References
	void UTrailPointOutlineUpdateStrategy::StaticRegisterNativesUTrailPointOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_NoRegister()
	{
		return UTrailPointOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__tormentTrailRevealDistance_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__tormentTrailRevealDistance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheExecutioner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TrailPointOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/TrailPointOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::NewProp__tormentTrailRevealDistance_MetaData[] = {
		{ "Category", "TrailPointOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/TrailPointOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::NewProp__tormentTrailRevealDistance = { "_tormentTrailRevealDistance", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTrailPointOutlineUpdateStrategy, _tormentTrailRevealDistance), Z_Construct_UScriptStruct_FDBDTunableRowHandle, METADATA_PARAMS(Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::NewProp__tormentTrailRevealDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::NewProp__tormentTrailRevealDistance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::NewProp__tormentTrailRevealDistance,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTrailPointOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::ClassParams = {
		&UTrailPointOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00A010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTrailPointOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTrailPointOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTrailPointOutlineUpdateStrategy, 4102828255);
	template<> THEEXECUTIONER_API UClass* StaticClass<UTrailPointOutlineUpdateStrategy>()
	{
		return UTrailPointOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTrailPointOutlineUpdateStrategy(Z_Construct_UClass_UTrailPointOutlineUpdateStrategy, &UTrailPointOutlineUpdateStrategy::StaticClass, TEXT("/Script/TheExecutioner"), TEXT("UTrailPointOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTrailPointOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
