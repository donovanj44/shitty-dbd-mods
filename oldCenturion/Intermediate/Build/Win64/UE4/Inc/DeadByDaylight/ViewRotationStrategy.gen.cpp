// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/ViewRotationStrategy.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeViewRotationStrategy() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UViewRotationStrategy_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UViewRotationStrategy();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UViewRotationStrategy::StaticRegisterNativesUViewRotationStrategy()
	{
	}
	UClass* Z_Construct_UClass_UViewRotationStrategy_NoRegister()
	{
		return UViewRotationStrategy::StaticClass();
	}
	struct Z_Construct_UClass_UViewRotationStrategy_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UViewRotationStrategy_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UViewRotationStrategy_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ViewRotationStrategy.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UViewRotationStrategy_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IViewRotationStrategy>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UViewRotationStrategy_Statics::ClassParams = {
		&UViewRotationStrategy::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x001040A1u,
		METADATA_PARAMS(Z_Construct_UClass_UViewRotationStrategy_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UViewRotationStrategy_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UViewRotationStrategy()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UViewRotationStrategy_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UViewRotationStrategy, 3466579518);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UViewRotationStrategy>()
	{
		return UViewRotationStrategy::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UViewRotationStrategy(Z_Construct_UClass_UViewRotationStrategy, &UViewRotationStrategy::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UViewRotationStrategy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UViewRotationStrategy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
