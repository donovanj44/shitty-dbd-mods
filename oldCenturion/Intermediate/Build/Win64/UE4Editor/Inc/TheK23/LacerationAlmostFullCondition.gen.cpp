// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/LacerationAlmostFullCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLacerationAlmostFullCondition() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_ULacerationAlmostFullCondition_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_ULacerationAlmostFullCondition();
	THEK23_API UClass* Z_Construct_UClass_UBaseLacerationLevelCondition();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	void ULacerationAlmostFullCondition::StaticRegisterNativesULacerationAlmostFullCondition()
	{
	}
	UClass* Z_Construct_UClass_ULacerationAlmostFullCondition_NoRegister()
	{
		return ULacerationAlmostFullCondition::StaticClass();
	}
	struct Z_Construct_UClass_ULacerationAlmostFullCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__missingLacerationThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__missingLacerationThreshold;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLacerationLevelCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LacerationAlmostFullCondition.h" },
		{ "ModuleRelativePath", "Public/LacerationAlmostFullCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::NewProp__missingLacerationThreshold_MetaData[] = {
		{ "Category", "LacerationAlmostFullCondition" },
		{ "ModuleRelativePath", "Public/LacerationAlmostFullCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::NewProp__missingLacerationThreshold = { "_missingLacerationThreshold", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationAlmostFullCondition, _missingLacerationThreshold), METADATA_PARAMS(Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::NewProp__missingLacerationThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::NewProp__missingLacerationThreshold_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::NewProp__missingLacerationThreshold,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULacerationAlmostFullCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::ClassParams = {
		&ULacerationAlmostFullCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULacerationAlmostFullCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULacerationAlmostFullCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULacerationAlmostFullCondition, 4153026761);
	template<> THEK23_API UClass* StaticClass<ULacerationAlmostFullCondition>()
	{
		return ULacerationAlmostFullCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULacerationAlmostFullCondition(Z_Construct_UClass_ULacerationAlmostFullCondition, &ULacerationAlmostFullCondition::StaticClass, TEXT("/Script/TheK23"), TEXT("ULacerationAlmostFullCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULacerationAlmostFullCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
