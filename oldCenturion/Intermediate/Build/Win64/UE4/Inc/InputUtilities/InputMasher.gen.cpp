// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InputUtilities/Public/InputMasher.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInputMasher() {}
// Cross Module References
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UInputMasher_NoRegister();
	INPUTUTILITIES_API UClass* Z_Construct_UClass_UInputMasher();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_InputUtilities();
	ENGINE_API UClass* Z_Construct_UClass_UInputComponent_NoRegister();
// End Cross Module References
	void UInputMasher::StaticRegisterNativesUInputMasher()
	{
	}
	UClass* Z_Construct_UClass_UInputMasher_NoRegister()
	{
		return UInputMasher::StaticClass();
	}
	struct Z_Construct_UClass_UInputMasher_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp__inputComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__inputComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UInputMasher_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_InputUtilities,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMasher_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "InputMasher.h" },
		{ "ModuleRelativePath", "Public/InputMasher.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UInputMasher_Statics::NewProp__inputComponent_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InputMasher.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UInputMasher_Statics::NewProp__inputComponent = { "_inputComponent", nullptr, (EPropertyFlags)0x0040000000082008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UInputMasher, _inputComponent), Z_Construct_UClass_UInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UInputMasher_Statics::NewProp__inputComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMasher_Statics::NewProp__inputComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInputMasher_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInputMasher_Statics::NewProp__inputComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UInputMasher_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInputMasher>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UInputMasher_Statics::ClassParams = {
		&UInputMasher::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UInputMasher_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UInputMasher_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UInputMasher_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UInputMasher_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UInputMasher()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UInputMasher_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UInputMasher, 2587908953);
	template<> INPUTUTILITIES_API UClass* StaticClass<UInputMasher>()
	{
		return UInputMasher::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UInputMasher(Z_Construct_UClass_UInputMasher, &UInputMasher::StaticClass, TEXT("/Script/InputUtilities"), TEXT("UInputMasher"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UInputMasher);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
