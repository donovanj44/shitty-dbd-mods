// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TheTwins/Public/TwinOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTwinOutlineUpdateStrategy() {}
// Cross Module References
	THETWINS_API UClass* Z_Construct_UClass_UTwinOutlineUpdateStrategy_NoRegister();
	THETWINS_API UClass* Z_Construct_UClass_UTwinOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_TheTwins();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UTwinOutlineUpdateStrategy::StaticRegisterNativesUTwinOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_UTwinOutlineUpdateStrategy_NoRegister()
	{
		return UTwinOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__visibleColorForKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__visibleColorForKiller;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_TheTwins,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "TwinOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/TwinOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::NewProp__visibleColorForKiller_MetaData[] = {
		{ "Category", "TwinOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/TwinOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::NewProp__visibleColorForKiller = { "_visibleColorForKiller", nullptr, (EPropertyFlags)0x0040000000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UTwinOutlineUpdateStrategy, _visibleColorForKiller), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::NewProp__visibleColorForKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::NewProp__visibleColorForKiller_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::NewProp__visibleColorForKiller,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTwinOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::ClassParams = {
		&UTwinOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00A000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UTwinOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UTwinOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UTwinOutlineUpdateStrategy, 2561178385);
	template<> THETWINS_API UClass* StaticClass<UTwinOutlineUpdateStrategy>()
	{
		return UTwinOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UTwinOutlineUpdateStrategy(Z_Construct_UClass_UTwinOutlineUpdateStrategy, &UTwinOutlineUpdateStrategy::StaticClass, TEXT("/Script/TheTwins"), TEXT("UTwinOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UTwinOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
