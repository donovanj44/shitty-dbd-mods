// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheK23/Public/LacerationLevelCondition.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeLacerationLevelCondition() {}
// Cross Module References
	THEK23_API UClass* Z_Construct_UClass_ULacerationLevelCondition_NoRegister();
	THEK23_API UClass* Z_Construct_UClass_ULacerationLevelCondition();
	THEK23_API UClass* Z_Construct_UClass_UBaseLacerationLevelCondition();
	UPackage* Z_Construct_UPackage__Script_TheK23();
// End Cross Module References
	void ULacerationLevelCondition::StaticRegisterNativesULacerationLevelCondition()
	{
	}
	UClass* Z_Construct_UClass_ULacerationLevelCondition_NoRegister()
	{
		return ULacerationLevelCondition::StaticClass();
	}
	struct Z_Construct_UClass_ULacerationLevelCondition_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__lacerationLevelRequired_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__lacerationLevelRequired;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ULacerationLevelCondition_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBaseLacerationLevelCondition,
		(UObject* (*)())Z_Construct_UPackage__Script_TheK23,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationLevelCondition_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "LacerationLevelCondition.h" },
		{ "ModuleRelativePath", "Public/LacerationLevelCondition.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ULacerationLevelCondition_Statics::NewProp__lacerationLevelRequired_MetaData[] = {
		{ "Category", "LacerationLevelCondition" },
		{ "ModuleRelativePath", "Public/LacerationLevelCondition.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ULacerationLevelCondition_Statics::NewProp__lacerationLevelRequired = { "_lacerationLevelRequired", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ULacerationLevelCondition, _lacerationLevelRequired), METADATA_PARAMS(Z_Construct_UClass_ULacerationLevelCondition_Statics::NewProp__lacerationLevelRequired_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationLevelCondition_Statics::NewProp__lacerationLevelRequired_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ULacerationLevelCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ULacerationLevelCondition_Statics::NewProp__lacerationLevelRequired,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ULacerationLevelCondition_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ULacerationLevelCondition>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ULacerationLevelCondition_Statics::ClassParams = {
		&ULacerationLevelCondition::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ULacerationLevelCondition_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationLevelCondition_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_ULacerationLevelCondition_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ULacerationLevelCondition_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ULacerationLevelCondition()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ULacerationLevelCondition_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ULacerationLevelCondition, 2578462838);
	template<> THEK23_API UClass* StaticClass<ULacerationLevelCondition>()
	{
		return ULacerationLevelCondition::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ULacerationLevelCondition(Z_Construct_UClass_ULacerationLevelCondition, &ULacerationLevelCondition::StaticClass, TEXT("/Script/TheK23"), TEXT("ULacerationLevelCondition"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ULacerationLevelCondition);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
