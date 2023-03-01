// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DeadByDaylight/Public/CharacterHelper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCharacterHelper() {}
// Cross Module References
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterHelper_NoRegister();
	DEADBYDAYLIGHT_API UClass* Z_Construct_UClass_UCharacterHelper();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_DeadByDaylight();
// End Cross Module References
	void UCharacterHelper::StaticRegisterNativesUCharacterHelper()
	{
	}
	UClass* Z_Construct_UClass_UCharacterHelper_NoRegister()
	{
		return UCharacterHelper::StaticClass();
	}
	struct Z_Construct_UClass_UCharacterHelper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UCharacterHelper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_DeadByDaylight,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UCharacterHelper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "CharacterHelper.h" },
		{ "ModuleRelativePath", "Public/CharacterHelper.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UCharacterHelper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UCharacterHelper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UCharacterHelper_Statics::ClassParams = {
		&UCharacterHelper::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UCharacterHelper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UCharacterHelper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UCharacterHelper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UCharacterHelper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UCharacterHelper, 3814383952);
	template<> DEADBYDAYLIGHT_API UClass* StaticClass<UCharacterHelper>()
	{
		return UCharacterHelper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UCharacterHelper(Z_Construct_UClass_UCharacterHelper, &UCharacterHelper::StaticClass, TEXT("/Script/DeadByDaylight"), TEXT("UCharacterHelper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UCharacterHelper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
