// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/Ethereal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEthereal() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEthereal_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UEthereal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UEthereal::StaticRegisterNativesUEthereal()
	{
	}
	UClass* Z_Construct_UClass_UEthereal_NoRegister()
	{
		return UEthereal::StaticClass();
	}
	struct Z_Construct_UClass_UEthereal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEthereal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UInterface,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEthereal_Statics::Class_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Ethereal.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEthereal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IEthereal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEthereal_Statics::ClassParams = {
		&UEthereal::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UEthereal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UEthereal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEthereal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEthereal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEthereal, 3221320359);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UEthereal>()
	{
		return UEthereal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEthereal(Z_Construct_UClass_UEthereal, &UEthereal::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UEthereal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEthereal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
