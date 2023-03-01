// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/BreakableWallOutlineUpdateStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBreakableWallOutlineUpdateStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_USourceBasedOutlineUpdateStrategy();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UBreakableWallOutlineUpdateStrategy::StaticRegisterNativesUBreakableWallOutlineUpdateStrategy()
	{
	}
	UClass* Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_NoRegister()
	{
		return UBreakableWallOutlineUpdateStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USourceBasedOutlineUpdateStrategy,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BreakableWallOutlineUpdateStrategy.h" },
		{ "ModuleRelativePath", "Public/BreakableWallOutlineUpdateStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBreakableWallOutlineUpdateStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_Statics::ClassParams = {
		&UBreakableWallOutlineUpdateStrategy::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x00B010A4u,
		METADATA_PARAMS(Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBreakableWallOutlineUpdateStrategy, 1152488212);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UBreakableWallOutlineUpdateStrategy>()
	{
		return UBreakableWallOutlineUpdateStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBreakableWallOutlineUpdateStrategy(Z_Construct_UClass_UBreakableWallOutlineUpdateStrategy, &UBreakableWallOutlineUpdateStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UBreakableWallOutlineUpdateStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBreakableWallOutlineUpdateStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
