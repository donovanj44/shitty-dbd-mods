// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/DefaultOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDefaultOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UDefaultOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
// End Cross Module References
	void UDefaultOutlineUpdateStrategy::StaticRegisterNativesUDefaultOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_UDefaultOutlineUpdateStrategy_NoRegister()
	{
		return UDefaultOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedColorToKiller_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__revealedColorToKiller;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__revealedColorToSurvivor_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__revealedColorToSurvivor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DefaultOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/DefaultOutlineUpdateStrategy.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller_MetaData[] = {
		{ "Category", "DefaultOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/DefaultOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller = { "_revealedColorToKiller", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultOutlineUpdateStrategy, _revealedColorToKiller), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor_MetaData[] = {
		{ "Category", "DefaultOutlineUpdateStrategy" },
		{ "ModuleRelativePath", "Public/DefaultOutlineUpdateStrategy.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor = { "_revealedColorToSurvivor", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDefaultOutlineUpdateStrategy, _revealedColorToSurvivor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToKiller,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::NewProp__revealedColorToSurvivor,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDefaultOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::ClassParams = {
		&UDefaultOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDefaultOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDefaultOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDefaultOutlineUpdateStrategy, 2349004384);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UDefaultOutlineUpdateStrategy>()
	{
		return UDefaultOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDefaultOutlineUpdateStrategy(Z_Construct_UClass_UDefaultOutlineUpdateStrategy, &UDefaultOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UDefaultOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDefaultOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
