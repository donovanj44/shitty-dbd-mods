// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DBDBots/Public/BTService_StateMonitor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTService_StateMonitor() {}
// Cross Module References
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_StateMonitor_NoRegister();
	DBDBOTS_API UClass* Z_Construct_UClass_UBTService_StateMonitor();
	AIMODULE_API UClass* Z_Construct_UClass_UBTService();
	UPackage* Z_Construct_UPackage__Script_DBDBots();
	AIMODULE_API UScriptStruct* Z_Construct_UScriptStruct_FBlackboardKeySelector();
// End Cross Module References
	void UBTService_StateMonitor::StaticRegisterNativesUBTService_StateMonitor()
	{
	}
	UClass* Z_Construct_UClass_UBTService_StateMonitor_NoRegister()
	{
		return UBTService_StateMonitor::StaticClass();
	}
	struct Z_Construct_UClass_UBTService_StateMonitor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBDifficultyLevel_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBDifficultyLevel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BBIsIntroCompleted_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_BBIsIntroCompleted;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBTService_StateMonitor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBTService,
		(UObject* (*)())Z_Construct_UPackage__Script_DBDBots,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_StateMonitor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BTService_StateMonitor.h" },
		{ "ModuleRelativePath", "Public/BTService_StateMonitor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBDifficultyLevel_MetaData[] = {
		{ "Category", "BTService_StateMonitor" },
		{ "ModuleRelativePath", "Public/BTService_StateMonitor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBDifficultyLevel = { "BBDifficultyLevel", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_StateMonitor, BBDifficultyLevel), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBDifficultyLevel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBDifficultyLevel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBIsIntroCompleted_MetaData[] = {
		{ "Category", "BTService_StateMonitor" },
		{ "ModuleRelativePath", "Public/BTService_StateMonitor.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBIsIntroCompleted = { "BBIsIntroCompleted", nullptr, (EPropertyFlags)0x0010000000000801, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UBTService_StateMonitor, BBIsIntroCompleted), Z_Construct_UScriptStruct_FBlackboardKeySelector, METADATA_PARAMS(Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBIsIntroCompleted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBIsIntroCompleted_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UBTService_StateMonitor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBDifficultyLevel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UBTService_StateMonitor_Statics::NewProp_BBIsIntroCompleted,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBTService_StateMonitor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBTService_StateMonitor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBTService_StateMonitor_Statics::ClassParams = {
		&UBTService_StateMonitor::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UBTService_StateMonitor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_StateMonitor_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBTService_StateMonitor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBTService_StateMonitor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBTService_StateMonitor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBTService_StateMonitor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTService_StateMonitor, 2597502645);
	template<> DBDBOTS_API UClass* StaticClass<UBTService_StateMonitor>()
	{
		return UBTService_StateMonitor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTService_StateMonitor(Z_Construct_UClass_UBTService_StateMonitor, &UBTService_StateMonitor::StaticClass, TEXT("/Script/DBDBots"), TEXT("UBTService_StateMonitor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTService_StateMonitor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
