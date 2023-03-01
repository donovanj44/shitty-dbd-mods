// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/OutlineReveal.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeOutlineReveal() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineReveal_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UOutlineReveal();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_ADBDPlayer_NoRegister();
// End Cross Module References
	void UOutlineReveal::StaticRegisterNativesUOutlineReveal()
	{
	}
	UClass* Z_Construct_UClass_UOutlineReveal_NoRegister()
	{
		return UOutlineReveal::StaticClass();
	}
	struct Z_Construct_UClass_UOutlineReveal_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__affectedCharacters_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__affectedCharacters;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__affectedCharacters_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UOutlineReveal_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineReveal_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "OutlineReveal.h" },
		{ "ModuleRelativePath", "Public/OutlineReveal.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UOutlineReveal_Statics::NewProp__affectedCharacters_MetaData[] = {
		{ "ModuleRelativePath", "Public/OutlineReveal.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UOutlineReveal_Statics::NewProp__affectedCharacters = { "_affectedCharacters", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UOutlineReveal, _affectedCharacters), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UOutlineReveal_Statics::NewProp__affectedCharacters_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineReveal_Statics::NewProp__affectedCharacters_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UOutlineReveal_Statics::NewProp__affectedCharacters_Inner = { "_affectedCharacters", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ADBDPlayer_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UOutlineReveal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineReveal_Statics::NewProp__affectedCharacters,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UOutlineReveal_Statics::NewProp__affectedCharacters_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UOutlineReveal_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UOutlineReveal>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UOutlineReveal_Statics::ClassParams = {
		&UOutlineReveal::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UOutlineReveal_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineReveal_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UOutlineReveal_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UOutlineReveal_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UOutlineReveal()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UOutlineReveal_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UOutlineReveal, 1033176345);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UOutlineReveal>()
	{
		return UOutlineReveal::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UOutlineReveal(Z_Construct_UClass_UOutlineReveal, &UOutlineReveal::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UOutlineReveal"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UOutlineReveal);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
