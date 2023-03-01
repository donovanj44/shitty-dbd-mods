// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTDecorator_ExtConeCheck.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTDecorator_ExtConeCheck() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtConeCheck_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_ExtConeCheck();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTDecorator_TickableBase();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	DEADBYDAYLIGHT_API UScriptStruct* Z_Construct_UScriptStruct_FAITunableParameter();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTDecorator_ExtConeCheck::StaticRegisterNativesUBTDecorator_ExtConeCheck()
	{
	}
	UClass* Z_Construct_UClass_UBTDecorator_ExtConeCheck_NoRegister()
	{
		return UBTDecorator_ExtConeCheck::StaticClass();
	}
	struct Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ConeHalfAngle_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ConeHalfAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBWith_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBWith;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBConeDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBConeDirection;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBConeOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBConeOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTDecorator_TickableBase,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTDecorator_ExtConeCheck.h" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtConeCheck.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_ConeHalfAngle_MetaData[] = {
		{ "Category", "BTDecorator_ExtConeCheck" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtConeCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_ConeHalfAngle = { "ConeHalfAngle", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtConeCheck, ConeHalfAngle), Z_Construct_UScriptStruct_FAITunableParameter, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_ConeHalfAngle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_ConeHalfAngle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBWith_MetaData[] = {
		{ "Category", "BTDecorator_ExtConeCheck" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtConeCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBWith = { "BBWith", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtConeCheck, BBWith), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBWith_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBWith_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeDirection_MetaData[] = {
		{ "Category", "BTDecorator_ExtConeCheck" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtConeCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeDirection = { "BBConeDirection", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtConeCheck, BBConeDirection), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeDirection_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeOrigin_MetaData[] = {
		{ "Category", "BTDecorator_ExtConeCheck" },
		{ "ModuleRelativePath", "Public/BTDecorator_ExtConeCheck.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeOrigin = { "BBConeOrigin", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTDecorator_ExtConeCheck, BBConeOrigin), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_ConeHalfAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBWith,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeDirection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::NewProp_BBConeOrigin,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTDecorator_ExtConeCheck>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::ClassParams = {
		&UBTDecorator_ExtConeCheck::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTDecorator_ExtConeCheck()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTDecorator_ExtConeCheck_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTDecorator_ExtConeCheck, 2285757753);
	template<> DBDBOTS_API UClass* StaticClass<UBTDecorator_ExtConeCheck>()
	{
		return UBTDecorator_ExtConeCheck::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTDecorator_ExtConeCheck(Z_Construct_UClass_UBTDecorator_ExtConeCheck, &UBTDecorator_ExtConeCheck::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTDecorator_ExtConeCheck"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTDecorator_ExtConeCheck);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
